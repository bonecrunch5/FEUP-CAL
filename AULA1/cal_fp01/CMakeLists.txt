cmake_minimum_required(VERSION 3.13)
project(cal_fp01)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(src/cute)

add_executable(cal_fp01
        src/cute/cute.h
        src/cute/cute_base.h
        src/cute/cute_counting_listener.h
        src/cute/cute_data_driven.h
        src/cute/cute_demangle.h
        src/cute/cute_deprecated.h
        src/cute/cute_determine_library.h
        src/cute/cute_determine_traits.h
        src/cute/cute_determine_version.h
        src/cute/cute_diff_values.h
        src/cute/cute_equals.h
        src/cute/cute_integer_sequence.h
        src/cute/cute_listener.h
        src/cute/cute_range.h
        src/cute/cute_relops.h
        src/cute/cute_repeated_test.h
        src/cute/cute_runner.h
        src/cute/cute_suite.h
        src/cute/cute_suite_test.h
        src/cute/cute_test.h
        src/cute/cute_test_incarnate.h
        src/cute/cute_testmember.h
        src/cute/cute_throws.h
        src/cute/cute_to_string.h
        src/cute/cute_version.h
        src/cute/cute_xml_file.h
        src/cute/ide_listener.h
        src/cute/ostream_listener.h
        src/cute/tap_listener.h
        src/cute/xml_listener.h
        src/Change.cpp
        src/Change.h
        src/Defs.h
        src/Factorial.cpp
        src/Factorial.h
        src/Partitioning.cpp
        src/Partitioning.h
        src/Sum.cpp
        src/Sum.h
        src/Test.cpp
        Makefile)
