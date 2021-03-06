// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "ximageproc.h"

extern XImageproc_Config XImageproc_ConfigTable[];

XImageproc_Config *XImageproc_LookupConfig(u16 DeviceId) {
	XImageproc_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XIMAGEPROC_NUM_INSTANCES; Index++) {
		if (XImageproc_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XImageproc_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XImageproc_Initialize(XImageproc *InstancePtr, u16 DeviceId) {
	XImageproc_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XImageproc_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XImageproc_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

