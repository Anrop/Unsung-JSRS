class CfgPatches {
    class anrop_unsung_jsrs_weapons_xm177 {
        name = "anrop_unsung_jsrs_weapons_xm177";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class CfgWeapons 
{
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
    	class Single;
    	class FullAuto;
    }; 

    class uns_m16: Uns_Rifle
    {
        class Single: Single
        {
            class StandardSound;
            class SilencedSound;
        };

        class FullAuto: FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };
    
    class uns_xm177e1 : uns_m16 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m4_shot_soundset", "jsrs_m4_shell_soundset", "jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m4_shot_silenced_soundset", "jsrs_m4_shell_soundset", "jsrs_5x56mm_sd_reflector_1"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m4_shot_soundset", "jsrs_m4_shell_soundset", "jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m4_shot_silenced_soundset", "jsrs_m4_shell_soundset", "jsrs_5x56mm_sd_reflector_1"};
            };
        };
    };
};
