export PATH=/opt/xilinx/Vivado/2019.2/tps/lnx64/binutils-2.26/bin:/opt/xilinx/Vivado/2019.2/tps/lnx64/gcc-6.2.0/bin:/opt/xilinx/Vivado/2019.2/tps/win64/msys64/usr/bin:/opt/xilinx/Vivado/2019.2/tps/win64/msys64/mingw64/bin:/opt/xilinx/Vivado/2019.2/bin:/opt/xilinx/Vivado/2019.2/lnx64/bin:/opt/xilinx/Vivado/2019.2/lnx64/tools/bin:/opt/xilinx/Vivado/2019.2/gnu/microblaze/lin/bin:/opt/xilinx/Vivado/2019.2/bin:/opt/xilinx/Vivado/2019.2/tps/lnx64/jre9.0.4/bin:/opt/xilinx/Vitis/2019.2/bin:/opt/xilinx/Vivado/2019.2/ids_lite/ISE/bin/lin64:/home/yy2297/.vscode-server/cli/servers/Stable-65edc4939843c90c34d61f4ce11704f09d3e5cb6/server/bin/remote-cli:/classes/ece4750/install/pkgs/riscv-gnu-toolchain-2022/bin:/classes/ece4750/install/venvs/py3.11.9-default/bin:/classes/ece4750/install/pkgs/python-3.11.9/bin:/classes/ece4750/install/pkgs/gtkwave-3.3.120/bin:/classes/ece4750/install/pkgs/verilator-5.026/bin:/classes/ece4750/install/pkgs/iverilog-12.0/bin:/opt/rh/gcc-toolset-13/root/usr/bin:/classes/ece4750/install/pkgs/ece4750-scripts-0.0/bin:/classes/ece4750/install/pkgs/modules-5.4.0/bin:/opt/xilinx/Vivado/2019.2:/home/yy2297/.local/bin:/home/yy2297/bin:/usr/share/Modules/bin:/usr/local/bin:/usr/bin:/usr/local/sbin:/usr/sbin:/classes/setup
export LD_LIBRARY_PATH=/opt/xilinx/Vivado/2019.2/lnx64/tools/gdb_v7_2:/opt/xilinx/Vivado/2019.2/tps/lnx64/dot-2.28/lib:/opt/xilinx/Vivado/2019.2/lnx64/bin:/opt/xilinx/Vivado/2019.2/lib/lnx64.o/Default:/opt/xilinx/Vivado/2019.2/lib/lnx64.o:/opt/xilinx/Vivado/2019.2/tps/lnx64/jre9.0.4/lib/:/opt/xilinx/Vivado/2019.2/tps/lnx64/jre9.0.4/lib//server:/classes/ece4750/install/pkgs/riscv-gnu-toolchain-2022/lib64:/classes/ece4750/install/pkgs/riscv-gnu-toolchain-2022/lib:/opt/rh/gcc-toolset-13/root/usr/lib64:/opt/rh/gcc-toolset-13/root/usr/lib:/opt/xilinx/Vivado/2019.2/bin/../lnx64/tools/dot/lib:/opt/xilinx/Vivado/2019.2/lnx64/tools/fpo_v7_0:/opt/xilinx/Vivado/2019.2/lnx64/tools/fft_v9_1:/opt/xilinx/Vivado/2019.2/lnx64/tools/opencv:/opt/xilinx/Vivado/2019.2/lnx64/tools/fir_v7_0:/opt/xilinx/Vivado/2019.2/lnx64/tools/dds_v6_0:/opt/xilinx/Vivado/2019.2/lnx64/lib/csim:/opt/xilinx/Vivado/2019.2/lnx64/tools/fpo_v7_0:/opt/xilinx/Vivado/2019.2/lnx64/tools/opencv:/opt/xilinx/Vivado/2019.2/lnx64/tools/fft_v9_1:/opt/xilinx/Vivado/2019.2/lnx64/tools/fir_v7_0:/opt/xilinx/Vivado/2019.2/lnx64/tools/dds_v6_0:/opt/xilinx/Vivado/2019.2/lnx64/csim
export HDI_APPROOT=/opt/xilinx/Vivado/2019.2
export XILINX_OPENCL_CLANG=/opt/xilinx/Vivado/2019.2/lnx64/tools/clang
export RDI_PLATFORM=lnx64
bugpoint -mlimit=32000  --load libhls_support.so  --load libhls_bugpoint.so  -hls -strip  -function-uniquify -auto-function-inline -globaldce  -ptrArgReplace -mem2reg -dce  -reset-lda  -loop-simplify -indvars -licm -loop-dep  -loop-bound -licm -loop-simplify -flattenloopnest  -array-flatten -gvn -instcombine -dce  -array-map -dce -func-legal  -gvn -adce -instcombine -cfgopt -simplifycfg -loop-simplify   -array-burst -promote-global-argument -dce  -ptrLegalization -axi4-lower -array-seg-normalize  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa -gvn -gvn  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa -dse -adse -adce -licm  -inst-simplify -dce  -globaldce -instcombine -array-stream -eliminate-keepreads -instcombine  -dce   -deadargelim -doublePtrSimplify  -doublePtrElim -dce -doublePtrSimplify -promote-dbg-pointer  -dce -scalarrepl -mem2reg -disaggr -norm-name -mem2reg  -instcombine  -dse -adse -adce -ptrLegalization -dce -auto-rom-infer -array-flatten -dce -instcombine -check-doubleptr  -loop-rot -constprop -cfgopt -simplifycfg -loop-simplify -indvars -pointer-simplify -dce -loop-bound  -loop-simplify -loop-preproc  -constprop -global-constprop -gvn -mem2reg -instcombine -dce  -loop-bound  -loop-merge -dce  -bitwidthmin  -deadargelim -dce  -canonicalize-dataflow -dce  -scalar-propagation -deadargelim -globaldce -mem2reg  -read-loop-dep  -interface-preproc -directive-preproc -interface-gen  -bram-byte-enable  -deadargelim -inst-simplify -dce  -gvn -mem2reg -instcombine -dce -adse  -loop-bound  -instcombine -cfgopt -simplifycfg -loop-simplify  -clean-region -io-protocol  -find-region -mem2reg  -bitop-raise -complex-op-raise -inst-simplify -inst-rectify -instcombine -adce -deadargelim  -loop-simplify -phi-opt -bitop-raise  -cfgopt -simplifycfg -strip-dead-prototypes  -interface-lower -bitop-lower -intrinsic-lower -auto-function-inline  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa  -inst-simplify -simplifycfg   -loop-simplify  -mergereturn -inst-simplify -inst-rectify  -dce -load-elim -bitop-lower  -loop-rewind -pointer-simplify -dce -cfgopt  -dce -loop-bound -loop-dep -read-loop-dep -dce  -check-stream -norm-name -legalize  -validate-dataflow -inst-clarity -bitwidth -dump-loop-dep-to-ir -check-all-ssdm  /home/yy2297/ece6775/lab4/ecelinux/bnn.prj/solution1/.autopilot/db/a.o.2.bc
llvm-dis bugpoint-reduced-simplified.bc 
