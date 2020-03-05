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
CMAKE_SOURCE_DIR=$(dirname $(greadlink -f $0))
# update cmake source path
CMAKE_SOURCE_DIR=$(pwd)
cd ${CMAKE_SOURCE_DIR}
CPP_SRC_DIR=${CMAKE_SOURCE_DIR}/include/solutions

if [ ! -n "$1" ]; then
    echo "Please input problem number."
    exit 1
else
    PROBLEM_NUM=$1
    leetcode show ${PROBLEM_NUM} -gx -l cpp -o 
