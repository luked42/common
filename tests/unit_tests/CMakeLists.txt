set(target "common_test")

file(GLOB source *.cc)

add_executable(${target} ${source})

add_test(NAME ${target} COMMAND ${target})

target_link_libraries(${target} PUBLIC 
	strong_type_lib
	gmock
	gtest)
