/*
	fn_cocaine.sqf
    Authors:AlaskaVet Modified by Larry Lancelot for cocaine effects
    Adds a effects for the cociane Item
*/

//Close inventory
closeDialog 0;

//Little hint then wait a litle before starting drugs effects
hint "Snort it up";
sleep 3;

//Activate ppEffects we need
"chromAberration" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
//Let's go for 45secs of effetcs
for "_i" from 0 to 44 do
{
    "chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
    "chromAberration" ppEffectCommit 1;   
    "radialBlur" ppEffectAdjust  [random 0.01,random 0.02,0.15,0.05];
    "radialBlur" ppEffectCommit 1;
    sleep 1;
};

//Stop effects
"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

//Deactivate ppEffects
"chromAberration" ppEffectEnable false;
"radialBlur" ppEffectEnable false;
resetCamShake;