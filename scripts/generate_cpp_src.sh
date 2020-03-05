#!/bin/bash
################################################################################
#
# Copyright (c) 2019 bmi.ac.cn
#
# @author   Georg Cantor
# @date     2020-03-05
# @brief    generate the cpp source code file 
# @version  0.0.1
#
#
################################################################################
set -e

# get scripts directory
SCRIPT_SOURCE_DIR=$(dirname $(greadlink -f $0))
# update cmake source path
CMAKE_SOURCE_DIR=$(pwd)
cd ${CMAKE_SOURCE_DIR}
CPP_SRC_DIR=${CMAKE_SOURCE_DIR}/include/solutions
TEST_SRC_DIR=${CMAKE_SOURCE_DIR}/tests
DOCS_DIR=${CMAKE_SOURCE_DIR}/docs

if [ ! -n "$1" ]; then
    echo "Please input problem number."
    exit 1
else
    PROBLEM_NUM=$1
    leetcode show ${PROBLEM_NUM} -gx -l cpp -o ${CPP_SRC_DIR} > ${DOCS_DIR}/${PROBLEM_NUM}.md
    NEW_CPP_FILE=$(ls ${CMAKE_SOURCE_DIR}/include/solutions | grep ${PROBLEM_NUM})
    PROBLEM_DESC=$(echo ${NEW_CPP_FILE} | sed 's/.cpp//g')
    NEW_HPP_FILE=$(echo ${NEW_CPP_FILE} | sed 's/.cpp/.hpp/g')
    mv ${CPP_SRC_DIR}/${NEW_CPP_FILE} ${CPP_SRC_DIR}/${NEW_HPP_FILE}
fi
NEW_TEST_FILE=test${NEW_CPP_FILE}
cp -f ${CMAKE_SOURCE_DIR}/templates/test_template.cpp ${TEST_SRC_DIR}/${NEW_TEST_FILE}

sed -i "" "s/placeholder/$(expr ${PROBLEM_DESC})/g" \
    ${TEST_SRC_DIR}/${NEW_TEST_FILE}


