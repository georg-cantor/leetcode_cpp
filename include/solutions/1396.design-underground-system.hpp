//
// Created by 秦栋梁 on 2020/3/29.
//

#ifndef LEETCODE_CPP_INCLUDE_SOLUTIONS_1396_DESIGN_UNDERGROUND_SYSTEM_HPP
#define LEETCODE_CPP_INCLUDE_SOLUTIONS_1396_DESIGN_UNDERGROUND_SYSTEM_HPP

class UndergroundSystem {
public:
  UndergroundSystem() : station_entry{}, time_entry{}, routes{}, times{} {

  }

  void checkIn(int id, std::string stationName, int t) {
      station_entry[id] = stationName;
      time_entry[id] = t;
  }

  void checkOut(int id, std::string stationName, int t) {
      auto search_station = station_entry.find(id);
      auto search_time = time_entry.find(id);
      std::vector<std::string> route{search_station->second, stationName};
      auto search_routes = routes.find(route);
      auto search_times = times.find(route);
      if (search_routes != routes.end()) {
          double d = ((search_routes->second * search_times->second) + (1.0 * (t - search_time->second))) / (search_times->second+1);
          routes[route] = d;
          times[route]++;
      } else {
          routes[route] = (1.0 * (t - search_time->second));
          times[route] = 1;
      }
      /*
      routes.push_back(route);
      times.push_back(1.0 * (t - search_time->second));
      */
      station_entry.erase(search_station);
      time_entry.erase(search_time);
  }

  double getAverageTime(std::string startStation, std::string endStation) {
      /*
      double total = 0;
      int count = 0;
      for (int i = 0; i < routes.size(); ++i) {
          if (startStation == routes[i][0] && endStation == routes[i][1]) {
              total += times[i];
              count++;
          }
      }
      if (count != 0) {
          return total/count;
      } else {
          return 0.0;
      }
      */
      std::vector<std::string> route{startStation, endStation};
      auto search = routes.find(route);
      if (search != routes.end()) {
          return search->second;
      } else {
          return 0.0;
      }
  }
private:
  std::map<const int, std::string> station_entry;
  std::map<const int, int> time_entry;
  std::map<std::vector<std::string>, double> routes;
  std::map<std::vector<std::string>, int> times;
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */

#endif //LEETCODE_CPP_INCLUDE_SOLUTIONS_1396_DESIGN_UNDERGROUND_SYSTEM_HPP
