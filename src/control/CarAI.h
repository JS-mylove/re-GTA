#pragma once

#include "AutoPilot.h"

class CVehicle;

class CCarAI
{
public:
	static float FindSwitchDistanceClose(CVehicle*);
	static float FindSwitchDistanceFar(CVehicle*);
	static void UpdateCarAI(CVehicle*);
	static void CarHasReasonToStop(CVehicle*);
	static float GetCarToGoToCoors(CVehicle*, CVector*);
	static void AddPoliceOccupants(CVehicle*);
	static void AddAmbulanceOccupants(CVehicle*);
	static void AddFiretruckOccupants(CVehicle*);
	static void TellOccupantsToLeaveCar(CVehicle*);
	static void TellCarToRamOtherCar(CVehicle*, CVehicle*);
	static void TellCarToBlockOtherCar(CVehicle*, CVehicle*);
	static eCarMission FindPoliceCarMissionForWantedLevel();
	static int32 FindPoliceCarSpeedForWantedLevel(CVehicle*);
	static void MellowOutChaseSpeed(CVehicle*);
	static void MakeWayForCarWithSiren(CVehicle *veh);
};
