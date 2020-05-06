class CfgPatches {
    class anrop_unsung_jsrs_vehicles_ah1 {
        name = "anrop_unsung_jsrs_vehicles_ah1";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_AH1G_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_AH1G_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class CfgVehicles 
{
    class Helicopter_Base_H;
    class uns_AH1g_base: Helicopter_Base_H
    {
        soundgetin[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\open.ogg",1,1,50};
        soundgetout[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\close.ogg",1,1,50};
        soundengineonint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\int_start.ogg",1,1};
        soundengineonext[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\ext_start.ogg",1,1,300};
        soundengineoffint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\int_off.ogg",1,1};
        soundengineoffext[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\ext_off.ogg",1,1,300};
        sounddammage[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\helibasiccrash.ogg",0.75,1};
        soundlocked[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\opfor_lock_1.ogg",0.75,1};
        soundincommingmissile[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\opfor_lock_2.ogg",0.75,1};
        rotordamageint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_rotor_int.ogg",0.75,1};
        rotordamageout[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_rotor_ext.ogg",2.0,1,300};
        rotordamage[] = {"rotordamageint","rotordamageout"};
        taildamageint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_tail.ogg",0.75,1};
        taildamageout[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_tail.ogg",2.0,1,300};
        taildamage[] = {"taildamageint","taildamageout"};
        landingsoundint0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\landing_skids_int1_open.ogg",0.75,1};
        landingsoundint1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\landing_skids_int1_open.ogg",0.75,1};
        landingsoundint[] = {"landingsoundint0",0.5,"landingsoundint1",0.5};
        landingsoundout0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\landing_skids_ext1.ogg",1,1,300};
        landingsoundout1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\landing_skids_ext1.ogg",1,1,300};
        landingsoundout[] = {"landingsoundout0",0.5,"landingsoundout1",0.5};
        gearupext[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\gear_up_out.ogg",1.5,1,700};
        gearupint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\gear_up_in.ogg",1.5,1};
        gearup[] = {"gearupint","gearupext"};
        geardownint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\gear_down_in.ogg",1.5,1};
        geardownext[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\gear_down_out.ogg",1.5,1,700};
        geardown[] = {"geardownint","geardownext"};
        slingcargoattach0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_1hooklock.ogg",1.35,1};
        slingcargoattach1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_1hooklock.ogg",1,1,300};
        slingcargoattach[] = {"slingcargoattach0","slingcargoattach1"};
        slingcargodetach0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_1hookunlock.ogg",1.5,1};
        slingcargodetach1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_1hookunlock.ogg",1,1,300};
        slingcargodetach[] = {"slingcargodetach0","slingcargodetach1"};
        class sounds
        {
            class Engine
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\NoSound.ogg",1,1};
                frequency = "0";
                volume = "0";
            };
            class RotorLowOut
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\NoSound.ogg",1,1};
                frequency = "0";
                volume = "0";
            };
            class RotorHighOut
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\NoSound.ogg",1,1};
                frequency = "0";
                volume = "0";
            };
            class EngineIn
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\NoSound.ogg",1,1};
                frequency = "0";
                volume = "0";
            };
            class RotorLowIn
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\NoSound.ogg",1,1};
                frequency = "0";
                volume = "0";
            };
            class RotorHighIn
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\NoSound.ogg",1,1};
                frequency = "0";
                volume = "0";
            };
            class DistanceSound
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\NoSound.ogg",1,1};
                frequency = "0";
                volume = "0";
            };
            class engineext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\engine_close.ogg",1.5,1,300};
                frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                volume = "2*campos*(0 max (rotorspeed-0.4))";
            };
            class rotorext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\rotor_close.ogg",1.6,1,300};
                frequency = "rotorspeed";
                volume = "campos*2*(rotorspeed factor [0.3, 1]) * (1 + rotorthrust)";
            };
            class rotorswist
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\tail_rotor.ogg",1,1,200};
                frequency = 1;
                volume = "campos * (rotorthrust factor [0.7, 0.9])";
            };
            class engineint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\int_main.ogg",1,1};
                frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                volume = "(1-campos)*2*(0 max (rotorspeed-0.4))";
            };
            class rotorint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\int_speed_down.ogg",0.75,1};
                frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                volume = "(1 - campos) * (rotorspeed factor [0.3, 0.7]) * (1 + rotorthrust) * 0.7";
            };
            class rotorbench
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\rotor\rotor_fast.ogg",0.75,1};
                frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust) * 0.4";
                cone[] = {1.6,3.14,1.6,0.95};
            };
            class enginebench
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\rotor\rotor_fast.ogg",0.75,1};
                frequency = "rotorspeed";
                volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (0 max (rotorspeed-0.4))";
            };
            class transmissiondamageext_phase1
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",1,1,300};
                frequency = "0.66 + rotorspeed / 3";
                volume = "campos * (transmissiondamage factor [0.3, 0.35]) * (transmissiondamage factor [0.5, 0.45]) * (rotorspeed factor [0.2, 0.5])";
            };
            class transmissiondamageext_phase2
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",1,1,300};
                frequency = "0.66 + rotorspeed / 3";
                volume = "campos * (transmissiondamage factor [0.45, 0.5]) * (rotorspeed factor [0.2, 0.5])";
            };
            class transmissiondamageint_phase1
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",0.75,1};
                frequency = "0.66 + rotorspeed / 3";
                volume = "(1 - campos) * (transmissiondamage factor [0.3, 0.35]) * (transmissiondamage factor [0.5, 0.45]) * (rotorspeed factor [0.2, 0.5])";
            };
            class transmissiondamageint_phase2
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",0.75,1};
                frequency = "0.66 + rotorspeed / 3";
                volume = "(1 - campos) * (transmissiondamage factor [0.45, 0.5]) * (rotorspeed factor [0.2, 0.5])";
            };
            class rotornoiseext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\rotor\rotor_fast.ogg",0.5,1,200};
                frequency = 1;
                volume = "(campos*(rotorspeed factor [0.6, 0.85]))";
                cone[] = {1.6,3.14,2,0.95};
            };
            class distance
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\engine_far.ogg",1,1,1000};
                frequency = "rotorspeed";
                volume = "2 * campos * (0 max (rotorspeed-0.4))";
            };
            class fardistance
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\rotor_far.ogg",0.75,1,3750};
                frequency = "rotorspeed";
                volume = "3*campos * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust)";
            };
            class damagealarmint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",0.75,1};
                frequency = 1;
                volume = "engineon * (1 - campos) * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0.0, 0.001])";
            };
            class damagealarmext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",1,1,100};
                frequency = 1;
                volume = "engineon * campos * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0, 0.001])";
            };
            class rotorlowalarmint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",0.75,1};
                frequency = 1;
                volume = "engineon * (1 - campos) * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class rotorlowalarmext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",1,1,75};
                frequency = 1;
                volume = "engineon * campos * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class windbench
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\wind_open_in.ogg",0.5,1};
                frequency = 1;
                volume = "4 * (playerpos factor [3.9, 4]) * (1 - campos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
            };
            class rainext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\rain1_ext.ogg",1,1,100};
                frequency = 1;
                volume = "campos * (rain - rotorspeed/2) * 2";
            };
            class rainint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\rain1_int_open.ogg",0.5,1};
                frequency = 1;
                volume = "(1-campos)*(rain - rotorspeed/2)*2";
            };
            class windint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\wind_open_in.ogg",0.5,1};
                frequency = 1;
                volume = "(1-campos)*(speed factor[5, 50])*(speed factor[5, 50])";
            };
            class windlateralmovementint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\wind_open_in.ogg",0.5,1,50};
                frequency = 1;
                volume = "(1-campos)*lateralmovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
            };
            class gstress
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\vehicle_stress2b.ogg",0.75,1};
                frequency = 1;
                volume = "engineon * (1-campos) * ((gmeterz factor[1.5, 2.5]) + (gmeterz factor[0.5, -0.5]))";
            };
            class speedstress
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\vehicle_stress2b.ogg",0.75,1};
                frequency = 1;
                volume = "(1-campos)*(speed factor[40,80])";
            };
            class scrubtreeext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubtree.ogg",1,1,500};
                frequency = 1;
                volume = "campos * (scrubtree factor[0.02, 0.05])";
            };
            class scrublandext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrublandext.ogg",1,1,500};
                frequency = 1;
                volume = "campos * (scrubland factor[0.02, 0.05])";
            };
            class scrubbuildingext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubbuilding.ogg",1,1,500};
                frequency = 1;
                volume = "campos * (scrubbuilding factor[0.02, 0.05])";
            };
            class scrublandint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrublandint_open.ogg",0.75,1};
                frequency = 1;
                volume = "2 * (1-campos) * (scrubland factor[0.02, 0.05])";
            };
            class scrubbuildingint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubbuilding.ogg",0.75,1};
                frequency = 1;
                volume = "2 * (1 - campos) * (scrubbuilding factor[0.02, 0.05])";
            };
            class scrubtreeint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubtree.ogg",0.75,1};
                frequency = 1;
                volume = "(1 - campos) * ((scrubtree) factor [0, 0.01])";
            };
            class slingloaddownext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_enginedownext.ogg",1,1,500};
                frequency = 1;
                volume = "campos*(slingloadactive factor [0,-1])";
            };
            class slingloadupext
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_engineupext.ogg",1,1,500};
                frequency = 1;
                volume = "campos*(slingloadactive factor [0,1])";
            };
            class slingloaddownint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_enginedownint.ogg",0.75,1};
                frequency = 1;
                volume = "(1-campos)*(slingloadactive factor [0,-1])";
            };
            class slingloadupint
            {
                sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_engineupint.ogg",0.75,1};
                frequency = 1;
                volume = "(1-campos)*(slingloadactive factor [0,1])";
            };
        };
        class soundsext
        {
            class soundevents{};
            class sounds
            {
                class engineext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\engine_close.ogg",1.5,1,300};
                    frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                    volume = "2*campos*(0 max (rotorspeed-0.4))";
                };
                class rotorext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\rotor_close.ogg",1.6,1,300};
                    frequency = "rotorspeed";
                    volume = "campos*2*(rotorspeed factor [0.3, 1]) * (1 + rotorthrust)";
                };
                class rotorswist
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\tail_rotor.ogg",1,1,200};
                    frequency = 1;
                    volume = "campos * (rotorthrust factor [0.7, 0.9])";
                };
                class engineint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\int_main.ogg",1,1};
                    frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                    volume = "(1-campos)*2*(0 max (rotorspeed-0.4))";
                };
                class rotorint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\int_speed_down.ogg",0.75,1};
                    frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                    volume = "(1 - campos) * (rotorspeed factor [0.3, 0.7]) * (1 + rotorthrust) * 0.7";
                };
                class rotorbench
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\rotor\rotor_fast.ogg",0.75,1};
                    frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
                    volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust) * 0.4";
                    cone[] = {1.6,3.14,1.6,0.95};
                };
                class enginebench
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\rotor\rotor_fast.ogg",0.75,1};
                    frequency = "rotorspeed";
                    volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (0 max (rotorspeed-0.4))";
                };
                class transmissiondamageext_phase1
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",1,1,300};
                    frequency = "0.66 + rotorspeed / 3";
                    volume = "campos * (transmissiondamage factor [0.3, 0.35]) * (transmissiondamage factor [0.5, 0.45]) * (rotorspeed factor [0.2, 0.5])";
                };
                class transmissiondamageext_phase2
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",1,1,300};
                    frequency = "0.66 + rotorspeed / 3";
                    volume = "campos * (transmissiondamage factor [0.45, 0.5]) * (rotorspeed factor [0.2, 0.5])";
                };
                class transmissiondamageint_phase1
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",0.75,1};
                    frequency = "0.66 + rotorspeed / 3";
                    volume = "(1 - campos) * (transmissiondamage factor [0.3, 0.35]) * (transmissiondamage factor [0.5, 0.45]) * (rotorspeed factor [0.2, 0.5])";
                };
                class transmissiondamageint_phase2
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_transmission_int_1.ogg",0.75,1};
                    frequency = "0.66 + rotorspeed / 3";
                    volume = "(1 - campos) * (transmissiondamage factor [0.45, 0.5]) * (rotorspeed factor [0.2, 0.5])";
                };
                class rotornoiseext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\rotor\rotor_fast.ogg",0.5,1,200};
                    frequency = 1;
                    volume = "(campos*(rotorspeed factor [0.6, 0.85]))";
                    cone[] = {1.6,3.14,2,0.95};
                };
                class distance
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\engine_far.ogg",1,1,1000};
                    frequency = "rotorspeed";
                    volume = "2 * campos * (0 max (rotorspeed-0.4))";
                };
                class fardistance
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\AH1Z_Viper\rotor_far.ogg",0.75,1,3750};
                    frequency = "rotorspeed";
                    volume = "3*campos * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust)";
                };
                class damagealarmint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",0.75,1};
                    frequency = 1;
                    volume = "engineon * (1 - campos) * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0.0, 0.001])";
                };
                class damagealarmext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",1,1,100};
                    frequency = 1;
                    volume = "engineon * campos * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0, 0.001])";
                };
                class rotorlowalarmint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",0.75,1};
                    frequency = 1;
                    volume = "engineon * (1 - campos) * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
                };
                class rotorlowalarmext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",1,1,75};
                    frequency = 1;
                    volume = "engineon * campos * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
                };
                class windbench
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\wind_open_in.ogg",0.75,1};
                    frequency = 1;
                    volume = "4 * (playerpos factor [3.9, 4]) * (1 - campos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
                };
                class rainext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\rain1_ext.ogg",1,1,100};
                    frequency = 1;
                    volume = "campos * (rain - rotorspeed/2) * 2";
                };
                class rainint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\rain1_int_open.ogg",0.5,1};
                    frequency = 1;
                    volume = "(1-campos)*(rain - rotorspeed/2)*2";
                };
                class windint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\wind_open_in.ogg",0.75,1};
                    frequency = 1;
                    volume = "(1-campos)*(speed factor[5, 50])*(speed factor[5, 50])";
                };
                class windlateralmovementint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\wind_open_in.ogg",1,1,50};
                    frequency = 1;
                    volume = "(1-campos)*lateralmovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
                };
                class gstress
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\vehicle_stress2b.ogg",0.75,1};
                    frequency = 1;
                    volume = "engineon * (1-campos) * ((gmeterz factor[1.5, 2.5]) + (gmeterz factor[0.5, -0.5]))";
                };
                class speedstress
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\vehicle_stress2b.ogg",0.75,1};
                    frequency = 1;
                    volume = "(1-campos)*(speed factor[40,80])";
                };
                class scrubtreeext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubtree.ogg",1,1,500};
                    frequency = 1;
                    volume = "campos * (scrubtree factor[0.02, 0.05])";
                };
                class scrublandext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrublandext.ogg",1,1,500};
                    frequency = 1;
                    volume = "campos * (scrubland factor[0.02, 0.05])";
                };
                class scrubbuildingext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubbuilding.ogg",1,1,500};
                    frequency = 1;
                    volume = "campos * (scrubbuilding factor[0.02, 0.05])";
                };
                class scrublandint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrublandint_open.ogg",0.75,1};
                    frequency = 1;
                    volume = "2 * (1-campos) * (scrubland factor[0.02, 0.05])";
                };
                class scrubbuildingint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubbuilding.ogg",0.75,1};
                    frequency = 1;
                    volume = "2 * (1 - campos) * (scrubbuilding factor[0.02, 0.05])";
                };
                class scrubtreeint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\scrubtree.ogg",0.75,1};
                    frequency = 1;
                    volume = "(1 - campos) * ((scrubtree) factor [0, 0.01])";
                };
                class slingloaddownext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_enginedownext.ogg",1,1,500};
                    frequency = 1;
                    volume = "campos*(slingloadactive factor [0,-1])";
                };
                class slingloadupext
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_engineupext.ogg",1,1,500};
                    frequency = 1;
                    volume = "campos*(slingloadactive factor [0,1])";
                };
                class slingloaddownint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_enginedownint.ogg",0.75,1};
                    frequency = 1;
                    volume = "(1-campos)*(slingloadactive factor [0,-1])";
                };
                class slingloadupint
                {
                    sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\sl_engineupint.ogg",0.75,1};
                    frequency = 1;
                    volume = "(1-campos)*(slingloadactive factor [0,1])";
                };
            };
        };
    };
};
