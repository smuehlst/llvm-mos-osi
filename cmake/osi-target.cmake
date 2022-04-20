
# Build a OSI C1P executable in OS65V Loader file format.
function(add_c1p_executable target)
  if(NOT ARGV)
    return()
  endif()

  add_executable(${target} ${ARGN})

  add_custom_command(
    TARGET ${target} POST_BUILD
    COMMAND ${SREC_CAT} "$<TARGET_FILE:${target}>"
        -binary -offset 0x200 -o "$<TARGET_FILE:${target}>.c1p"
        -Ohio_Scientific -execution-start-address=0x200
    VERBATIM)
endfunction()
