set(target "strong_type_lib")

file(GLOB source *.cc)
file(GLOB header *.h)

add_library("${target}" STATIC ${source} ${header})

set_target_properties("${target}" PROPERTIES FOLDER "${target}")
target_include_directories("${target}" INTERFACE ..)

set_target_properties(${target} PROPERTIES LINKER_LANGUAGE CXX)
