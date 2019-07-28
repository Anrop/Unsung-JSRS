class CfgPatches {
    class anrop_unsung_jsrs_weapons_m60 {
        name = "anrop_unsung_jsrs_weapons_m60";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_armour_c", "uns_weap_c", "JSRS_SOUNDMOD_Weapons"};
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
        drysound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\dry\navid_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\reload\navid_reload.ogg", 2, 1, 35};
        bullet1[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_1.ogg", 2.0099, 1, 10};
        bullet2[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_2.ogg", 2.0099, 1, 10};
        bullet3[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_3.ogg", 2.0099, 1, 10};
        bullet4[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_4.ogg", 2.0099, 1, 10};
        bullet5[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_1.ogg", 2.0099, 1, 10};
        bullet6[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_2.ogg", 2.0099, 1, 10};
        bullet7[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_3.ogg", 2.0099, 1, 10};
        bullet8[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_4.ogg", 2.0099, 1, 10};
        bullet9[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_1.ogg", 2.0099, 1, 10};
        bullet10[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_2.ogg", 2.0099, 1, 10};
        bullet11[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_3.ogg", 2.0099, 1, 10};
        bullet12[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_4.ogg", 2.0099, 1, 10};
        soundbullet[] = {"bullet1", 0.08, "bullet2", 0.084, "bullet3", 0.084, "bullet4", 0.084, "bullet5", 0.093, "bullet6", 0.093, "bullet7", 0.074, "bullet8", 0.074, "bullet9", 0.084, "bullet10", 0.085, "bullet11", 0.083, "bullet12", 0.083};
        
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m60e4_shot_soundset", "jsrs_spmg_shell_soundset", "jsrs_7x62mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_m60e4_shot_silenced_soundset", "jsrs_spmg_shell_soundset", "jsrs_7x62mm_sd_reflector_1"};
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
        drysound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\dry\navid_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\reload\navid_reload.ogg", 2, 1, 35};

        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m60e4_shot_soundset", "jsrs_spmg_shell_soundset", "jsrs_7x62mm_reflector_1"};
            };
        };
    };
};
