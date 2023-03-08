#ifndef Celeritas_h
#define Celeritas_h 1

#include <accel/LocalTransporter.hh>
#include <accel/SetupOptions.hh>
#include <accel/SharedParams.hh>

// Global shared setup options
celeritas::SetupOptions& CelerSetupOptions();
// Shared data and GPU setup
celeritas::SharedParams& CelerSharedParams();
// Thread-local transporter
celeritas::LocalTransporter& CelerLocalTransporter();

#endif