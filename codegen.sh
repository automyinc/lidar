#!/bin/bash

VNX_INTERFACE_DIR=${VNX_INTERFACE_DIR:-/usr/interface}

cd $(dirname "$0")

vnxcppcodegen --cleanup generated/ automy.lidar interface/ ${VNX_INTERFACE_DIR}/vnx/ ${VNX_INTERFACE_DIR}/automy/math/ ${VNX_INTERFACE_DIR}/automy/basic/ ../vehicle/interface/

