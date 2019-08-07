class CfgPatches {
    class anrop_unsung_jsrs_weapons_mosin {
        name = "anrop_unsung_jsrs_weapons_mosin";
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
    };

    class Uns_Rifle762: Uns_Rifle
    {
        class Single: Single
        {
            class StandardSound;
            class SilencedSound;
        };
    };

    class uns_Rifle_boltaction_base: Uns_Rifle762 {};

    class uns_Rifle_boltaction_clip_base: uns_Rifle_boltaction_base {};
    
    class uns_mosin_base : uns_Rifle_boltaction_clip_base 
    {
        drysound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\dry\m320r_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\reload\m320r_reload.ogg", 2, 1, 35};
        
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_mosin_shot_soundset", "jsrs_mosin_shell_soundset", "jsrs_7x62mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_mosin_shot_silenced_soundset", "jsrs_mosin_shell_soundset", "jsrs_7x62mm_sd_reflector_1"};
            };
        };
    };
};
