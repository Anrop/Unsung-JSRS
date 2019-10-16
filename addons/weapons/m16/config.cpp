class CfgPatches {
    class anrop_unsung_jsrs_weapons_m16 {
        name = "anrop_unsung_jsrs_weapons_m16";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound;
            class SilencedSound;
        };

        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };
    
    class uns_m16 : Uns_Rifle 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m16a4_shot_soundset", "jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_m16a4_shot_silenced_soundset", "jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m16a4_shot_soundset", "jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_m16a4_shot_silenced_soundset", "jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
};
