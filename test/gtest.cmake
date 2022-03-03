include(FetchContent)

set(GTEST_URL "https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip" CACHE STRING "Googletest URL")
set(GTEST_URL_HASH "MD5=52943a59cefce0ae0491d4d2412c120b" CACHE STRING "Googletest URL HASH")

if (NOT DEFINED GTEST_URL OR GTEST_URL STREQUAL "")
    FetchContent_Declare(gtest
            GIT_REPOSITORY https://github.com/google/googletest.git
            GIT_TAG        release-1.11.0
            #            CONFIGURE_COMMAND ""
            #            BUILD_COMMAND ""
            #            INSTALL_COMMAND ""
            )
else()
    FetchContent_Declare(gtest URL ${GTEST_URL} URL_HASH ${GTEST_URL_HASH})
endif()
FetchContent_MakeAvailable(gtest)