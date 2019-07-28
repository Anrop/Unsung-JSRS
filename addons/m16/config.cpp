class CfgPatches {
    class anrop_unsung_jsrs_weapons_m16 {
        name = "anrop_unsung_jsrs_weapons_m16";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "JSRS_SOUNDMOD_Weapons"};
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
        drysound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\dry\spar_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\reload\spar_reload.ogg", 2, 1, 35};
        changefiremodesound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\noises\spar_firemode.ogg", 1.25, 1, 15};
        
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m16a4_shot_soundset", "jsrs_m16a4_shell_soundset", "jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m16a4_shot_silenced_soundset", "jsrs_m16a4_shell_soundset", "jsrs_5x56mm_sd_reflector_1"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m16a4_shot_soundset", "jsrs_m16a4_shell_soundset", "jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m16a4_shot_silenced_soundset", "jsrs_m16a4_shell_soundset", "jsrs_5x56mm_sd_reflector_1"};
            };
        };
    };
};
