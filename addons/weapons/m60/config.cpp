class CfgPatches {
    class anrop_unsung_jsrs_weapons_m60 {
        name = "anrop_unsung_jsrs_weapons_m60";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_armour_c", "uns_weap_c", "jsrs_soundmod_complete_edition"};
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
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };

    class Uns_LMG: Uns_Rifle {};

    class Uns_HMG: Uns_LMG {};
    
    class uns_m60_base : Uns_HMG 
    {
        drySound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\navid_dry.ogg", 1.5, 1, 15};
        reloadMagazineSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\navid_reload.ogg", 2, 1, 35};
        
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m60e4_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_m60e4_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };

    class uns_MGun_base;

    class Uns_LMG_v: uns_MGun_base {
        class FullAuto: uns_MGun_base {
            class StandardSound;
        };
    };

    class uns_M60_v : Uns_LMG_v 
    {
        drySound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\navid_dry.ogg", 1.5, 1, 15};
        reloadMagazineSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\navid_reload.ogg", 2, 1, 35};

        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m60e4_shot_soundset", "jsrs_7x62mm_reverb_soundset", "jsrs_gunner_casing"};
            };
        };
    };
};
