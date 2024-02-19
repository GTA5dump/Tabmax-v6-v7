#pragma once
namespace Mod_Hub_Base
{
	extern bool Godmode;
	extern bool Invisible;
	extern bool SuperJump;
	extern bool NeverWanted;
	extern bool InfinityAmmo;
	extern bool VehInvisible;
	extern bool WalkOnWater;
	extern bool FlyCar;
	extern bool SuperRun;
	extern bool RandomOutfit;
	extern bool NoClip;
	extern bool SuperMan;
	extern bool ExplosiveAmmo;
	extern bool MoneyGun;
	extern bool HornBoost;
	extern bool TeleportGun;
	extern bool AirstrikeGun;
	extern bool GravityGun;
	extern bool WaterGun;
	extern bool PedGun;
	extern bool InfiniteAmmo;
	extern bool OffRadar;
	extern bool KickProtec;
	extern bool UnlockAll;
	extern bool CarColor;
	extern bool Shower;
	extern bool AimBot;
	extern bool NoGravity;
	extern bool ClownGun;
	extern bool ExpGun;
	extern bool DriveOnWater;
	extern bool VehicleJump;
	extern bool JumpingVehicles;
	extern bool NoRagdoll;
	extern bool ThermalVision;
	extern bool NightVision;
	extern bool KillPeds;
	extern bool AutoFlip;
	extern bool AutoFix;
	extern bool VehicleGodmode;
	extern bool DriftMode;
	extern bool DestroyGun;
	extern bool PlayerFly;
	extern bool TinyGun;
	extern bool Crash;
	extern bool InfLoad;
	extern bool BlockCayo;
	extern bool Freeze;
	extern bool ExplosionBlock;
	extern bool FireBlock;
	extern bool WeaBlock;
	extern bool WeaponBlock;
	extern bool ReportBlock;
	extern bool apBlock;
	extern bool GlitchVehicle;
	extern bool DriveUnderWater;
	extern bool NinjaJump;
	extern bool FPS;
	extern bool Version;
	extern bool Gamev;
	extern bool SpectatePlayer;
	extern bool Collision;
	extern bool DestroyPhone;
	extern bool MobileRadio;
	extern bool HideHud;
	extern bool ESPBox;
	extern bool ESPLine;
	extern bool SlowMotion;
	inline int g_Alpha{ 255 };
	inline float g_Height{ 1.f };
	inline float g_Width{ 1.f };
	extern bool FootTrails;
	extern bool VehicleTrails;
	extern bool AlwaysWanted;
	extern bool Flash;
	void vehicle_acrobatics(int type);
	inline float handscale{ 0.5f };
	extern bool HandTrails;
	extern bool RapidFire;
	inline float handred{ 255.f };
	inline float handgreen{ 0.f };
	inline float handblue{ 0.f };
	extern bool DesyncProtection;
	extern bool SpectatePlayer2;
	void vehcrash();
	extern bool RapidFire;
	extern bool YoinkGun;
	extern bool RainbowCamo;
	extern bool LaserSight;
	extern bool AlwaysRagdoll;
	extern bool Blackout;
	extern bool DeadEye;
	extern bool Spedometer;
	extern bool PlayerNames;
	extern bool JumpAround;
	extern bool SuperBrakes;
	extern bool ExploAm;
	extern bool AntiAFK;
	extern bool CopsTurn;
	extern bool Snowing;
	extern bool UFOEvent;
	extern bool ScriptEventsProtection;
	extern bool Stoned;

	void Function_update_Loop();



	//=================
	// PED FUNCTIONS
	//=================

	void drawstring(char* text, float X, float Y);
	void setupdraw(bool outline);

	Ped ClonePed(Ped ped);
	Ped CreatePed(char* PedName);

	//Animations
	void LoadAnim(char* dict);
	void playAnimation(Ped ped, bool loop, char* dict, char* anim);

	//SKINS
	bool applyChosenSkin(std::string skinName);

	//CONTROL
	void RequestControlOfEnt(Entity entity);

	//FORCE
	void ApplyForceToEntity(Entity e, float x, float y, float z);

	//CALM PEDS
	void set_all_nearby_peds_to_calm();

	//NEARBY PEDS
	std::set<Ped> getNearbyPeds();
	void update_nearby_peds(Ped playerPed, int count);

	//VEHICLE
	bool get_vehicle_keyboard_result(uint* outModel);

	//little one-line function called '$' to convert $TRING into a hash-key:
	Hash $(std::string str);

	//Converts Radians to Degrees
	float degToRad(float degs);

	//quick function to get-coords-of-entity:
	Vector3 coordsOf(Entity entity);

	//quick function to get distance between 2 points:
	float distanceBetween(Vector3 A, Vector3 B);

	//quick "get random int in range 0-x" function:
	int rndInt(int start, int end);

	//KEYBOARD
	std::string show_keyboard(char* title_id, char* prepopulated_text);

	//VECTOR/FLOAT
	Vector3 rot_to_direction(Vector3* rot);
	Vector3 add(Vector3* vectorA, Vector3* vectorB);
	Vector3 multiply(Vector3* vector, float x);
	float get_distance(Vector3* pointA, Vector3* pointB);
	float get_vector_length(Vector3* vector);

	//NOTIFICATION
	void notifyBottom(char* fmt, ...);
	void notifyBottom(std::string str);
	void notifyMap(char* fmt, ...);
	void notifyMap(std::string str);
	void notifyCenter(char* fmt, ...);
	void notifyCenter(std::string str);
	void update_status_text();
	void notifyleft(char* msg);
	void notify_Custom(char* Head_txt, char* fmt, ...);
	void notify_Original(char* fmt, ...);
	void notify_Red(char* fmt, ...);
	void notify_Green(char* fmt, ...);

	// Header
	extern bool HeaderImage;
	char* Add_Strings(char* string1, char* string2);
	std::string Documents_Patha();

	//DRAWING FUNCTIONS
	void draw_rect(float A_0, float A_1, float A_2, float A_3, int A_4, int A_5, int A_6, int A_7);
	void draw_menu_line(std::string caption, float lineWidth, float lineHeight, float lineTop, float lineLeft, float textLeft, bool active, bool title, bool rescaleText = true);


	void AddTimeNetwork(int, int, int);

	// Vector things
	//Vector3 RotationToDirectionV3(Vector3 rot);
	//Vector3 AddV3(Vector3 vectorA, Vector3 vectorB);
	//Vector3 MultiplyV3(Vector3 vector, float x);
}