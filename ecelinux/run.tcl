#=============================================================================
# run_base.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the baseline digit recongnition design.

# Project name
set hls_prj bnn.prj

# Open/reset the project
open_project ${hls_prj} -reset

# Top function of the design is "dut"
set_top dut

# Add design and testbench files
add_files bnn.cpp -cflags "-std=c++11"
add_files -tb bnn_test.cpp -cflags "-std=c++11"
add_files -tb data

open_solution "solution1"
# Use Zynq device
set_part {xc7z020clg484-1}

# Target clock period is 10ns
create_clock -period 10

### You can insert your own directives here ###

############################################

# Apply directives to 'pad' function
# set_directive_pipeline -II 1 pad/pad_loop_m



# Apply directives to 'initialize_padded_memory' function
# set_directive_array_partition -type complete -dim 1 initialize_padded_memory input
# set_directive_unroll initialize_padded_memory/init_loop_m
# set_directive_pipeline -II 1 initialize_padded_memory/init_loop_m



# # Apply directives to 'conv' function
set_directive_array_partition -type block -factor 10 -dim 2 conv input
set_directive_array_partition -type block -factor 10 -dim 3 conv input
set_directive_array_partition -type block -factor 8 -dim 2 conv output
# set_directive_array_partition -type block -factor 8 -dim 3 conv output
# set_directive_unroll conv/conv_m_loop
# set_directive_array_partition -type complete  conv threshold
set_directive_pipeline -II 1 conv/conv_y_loop



# # Apply directives to 'max_pool' function
# set_directive_array_partition -type complete -dim 3 max_pool input
# set_directive_unroll max_pool/max_pool_c_loop
# # set_directive_pipeline -II 1 max_pool/max_pool_m_loop



# # Apply directives to 'flatten' function
# set_directive_array_partition -type complete -dim 1 flatten output
# set_directive_pipeline -II 1 flatten/flatten_loop


# # Finish Pipeline II = 1
# # Apply directives to 'dense' function

# Apply directives to 'dense' function

set_directive_inline -region -off dense
set_directive_pipeline -II 1 dense/dense_inner_loop
set_directive_array_partition -type complete -dim 2 dense weight



# Apply directives to 'sign' and 'argmax' function
set_directive_array_partition -type complete sign input
set_directive_array_partition -type complete sign output
set_directive_inline sign
set_directive_unroll sign/sign_loop

set_directive_array_partition -type complete argmax input
set_directive_inline argmax
set_directive_unroll argmax/argmax_loop




# Simulate the C++ design
csim_design -O
# Synthesize the design
csynth_design
# Co-simulate the design
#cosim_design
exit
