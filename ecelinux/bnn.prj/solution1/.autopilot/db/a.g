#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/yy2297/ece6775/lab4/ecelinux/bnn.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
