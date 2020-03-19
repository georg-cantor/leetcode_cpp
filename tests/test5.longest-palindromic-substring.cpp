#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <solutions/5.longest-palindromic-substring.hpp>

TEST_CASE("test 5.longest-palindromic-substring", "[5.longest-palindromic-substring]") {
    Solution s;
    std::string in1 = "amanaplanacanalpanama";
    std::string in2 = "";
    std::string in3 = "babad";
    std::string in4 = "normaisasselflessasiamron";
    std::string in5 = "dertygytred";
    std::string in6 = "xalletsdellacalledstellay";
    std::string in7 = "cbbd";
    std::string in8 = "caba";
    std::string in9 = "abacdfgdcaba";
    std::string in10 = "abb";
    std::string in11 =
        "miycvxmqggnmmcwlmifojwrurwhwygwfykyefxbgveixykdebenzitqnc" \
        "iigfjgrzzbtgeazyrbiirmejhdwcgjzwqolrturjlqpsgunuqerqjevbhebl" \
        "bvgxyedxshswsokbhzapfuojgyfhctlaifrisgzqlczageirnukgnmnbwogkn" \
        "yyuynwsuwbumdmoqwxprykmazghcpmkdcjduepjmjdxrhvixxbfvhybjdpvwjb" \
        "armbqypsylgtzyuiqkexgvirzylydrhrmuwpmfkvqllqvekyojoacvyrzjevau" \
        "pypfrdguhukzuqojolvycgpjaendfetkgtojepelhcltorueawwjpltehbbjrv" \
        "znxhahtuaeuairvuklctuhcyzomwrrznrcqmovanxmiyilefybkbveesrxkmqr" \
        "qkowyrimuejqtikcjfhizsmumajbqglxrvevexnleflocxoqgoyrzgqflwiknn" \
        "dcykuvdcpzlakljidclhkllftxpinpvbngtexngdtntunzgahuvfnqjedcafzouopiixw";
    std::string in12 =
        "flsuqzhtcahnyickkgtfn$lyzwjuiwqiexthpzvcweqzeqpmqwkydhsfipcdrsjkefeh" \
        "hesubkirhalgnevjugfohwnlhbjfewiunlgmomxkafuuokesvfmcnvseixkkzekuinmcbm" \
        "ttzgsqeqbrtlwyqgiquyylaswlgfflrezaxtjobltcnpjsaslyviviosxorjsfncqirsjpk" \
        "gajkfpoxxmvsyynbbovieoothpjgncfwcvpkvjcmrcuoronrfjcppbisqbzkgpnycqljpjl" \
        "geciaqrnqyxzedzkqpqsszovkgtcgxqgkflpmrikksaupukdvkzbltvefitdegnlmzeirotr" \
        "feaueqpzppnsjpspgomyezrlxsqlfcjrkglyvzvqakhtvfmeootbtbwfhqucbnuwznigoyatv" \
        "kocqmbtqghybwrhmyvvuchjpvjckiryvjfxabezchynfxnpqaeampvaapgmvoylyutymdhvhq" \
        "fmrlmzkhuhupizqiujpwzarnszrexpvgdmtoxvjygjpmiadzdcxtggwamkbwrkeplesupagie" \
        "vwsaaletcuxtpsxmbmeztcylsjxvhzrqizdmgjfyftpzpgxateopwvynljzffszkzzqgofdlwy" \
        "knqfruhdkvmvrrjpijcjomnrjjubfccaypkpfokohvkqndptciqqiscvmpozlyyrwobeuazsawt" \
        "imnawquogrohcrnmexiwvjxgwhmtpykqlcfacuadyhaotmmxevqwarppknoxthsmrrknu";
    std::string ans1 = "amanaplanacanalpanama";
    std::string ans2 = "";
    std::string ans31 = "bab";
    std::string ans32 = "aba";
    std::string ans4 = "normaisasselflessasiamron";
    std::string ans5 = "dertygytred";
    std::string ans6 = "alletsdellacalledstella";
    std::string ans7 = "bb";
    std::string ans8 = "aba";
    std::string ans9 = "aba";
    std::string ans10 = "bb";
    std::string ans11 = "vqllqv";
    std::string ans12 = "ljpjl";
    REQUIRE(s.longestPalindrome(in1) == ans1);
    REQUIRE(s.longestPalindrome(in2) == ans2);
    REQUIRE(s.longestPalindrome(in3) == ans32);
    REQUIRE(s.longestPalindrome(in4) == ans4);
    REQUIRE(s.longestPalindrome(in5) == ans5);
    REQUIRE(s.longestPalindrome(in6) == ans6);
    REQUIRE(s.longestPalindrome(in7) == ans7);
    REQUIRE(s.longestPalindrome(in8) == ans8);
    REQUIRE(s.longestPalindrome(in9) == ans9);
    REQUIRE(s.longestPalindrome(in10) == ans10);
    REQUIRE(s.longestPalindrome(in11) == ans11);
    REQUIRE(s.longestPalindrome(in12) == ans12);
}
