/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "pesticide", "fuelFull", "peach", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw"};
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "zipties", "blindfold", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "zipties", "blindfold", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";  
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar" };
    };

    class logs {
        name = "STR_Shops_Planks";
        side = "civ";
        license = "";
        level[] = { "","",-1,"" };
        items[] = { "planks" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "keys" ,"handcuffs" ,"donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };

    class furniture {
        name = "STR_Shops_Furniture";
        side = "civ";
        license = "";
        level[] = {"", "", -1, ""};
        items[] = {"storagesmall", "storagebig","furnituredesk", "furniturechair", "furniturebagshort", "furnitureopenlaptop", "furniturecampingtable", "furnituresleepingbag", "furnituresleepingbagblue", "furnituresleepingbagbrown", "furnituresunchair", "furnituresunchairgreen", "furnituretenta", "furnituremapaltis", "furniturepalletvert", "furnituremetalrack", "furniturewoodblue", "furniturefmradio", "furnitureportgen", "furnituretarget", "furniturewoodtable"};
    };

    class organ {
        name = "STR_MAR_Organ";
        side = "civ";
        license = "";
        level[] = {"","",-1,""};
        items[] = {"kidney"}; 
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {

    //Misc
    class kidney {
        variable = "kidney";
        displayName = "STR_Item_Kidney";
        weight = 5;
        buyPrice = 100000;
        sellPrice = 50000;
        illegal = true;
        edible = 100;
        icon = "icons\ico_kidney.paa";
    };

    class spraycan {
        variable = "spraycan";
        displayName = "STR_Item_spraycan";
        weight = 2;
        buyPrice = 600;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_spraycan.paa";
    };
    
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
		
	class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 0;
        buyPrice = 1200;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ziptie.paa";
    };
	
	class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 0;
        buyPrice = 600;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\blindfold.paa";
    };
    
    class handcuffs {
        variable = "handcuffs";
        displayName = "STR_Item_handcuffs";
        weight = 1;
        buyPrice = 25;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cuffs.paa";
    };	
	
    class keys {
        variable = "keys";
        displayName = "STR_Item_Keys";
        weight = 1;
        buyPrice = 25;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_keys.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 200000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class pesticide {
        variable = "pesticide";
        displayName = "STR_Item_Pesticide";
        weight = 2;
        buyPrice = 500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pesticide.paa";
    };

    class chainsaw {
        variable = "chainsaw";
        displayName = "STR_Item_Chainsaw";
        weight = 7;
        buyPrice = 2000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\chainsaw.paa";
    };

    //Mined Items
    class logs {
        variable = "logs";
        displayName = "STR_Item_Logs";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\timber.paa";
    };   
    
    class planks {
        variable = "planks";
        displayName = "STR_Item_Planks";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = false;
        edible = -1;
        icon = "icons\timber.paa";
    };

    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 3;
        buyPrice = 3500;
        sellPrice = 2560;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 8000;
        sellPrice = 2350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };

    class storagesmall {
        variable = "storageSmall";
		displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 82500;
        sellPrice = 55000;
        varPrice = 1;
        maxPrice = 55000;
        minPrice = 55000;
        factor = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
		furniture = false;
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 165000;
        sellPrice = 137500;
        varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
        factor = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
		furniture = false;
    };

	class furnituredesk {
		variable = "furnitureDesk";
        displayName = "STR_Item_FurnitureDK";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_TableDesk_F.jpg";
		furniture = true;
	};
	
	class furniturechair {
		variable = "furnitureChair";
        displayName = "STR_Item_FurnitureCH";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CampingChair_V1_F.jpg";
		furniture = true;
	};
	
	class furniturebagshort {
		variable = "furnitureBagShort";
        displayName = "STR_Item_FurnitureBS";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BagFence_Short_F.jpg";
		furniture = true;
	};
	
	class furnitureopenlaptop {
		variable = "furnitureOpenLaptop";
        displayName = "STR_Item_FurnitureOL";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Laptop_unfolded_F.jpg";
		furniture = true;
	};
	
	class furniturecampingtable {
		variable = "furnitureCampingTable";
        displayName = "STR_Item_FurnitureCT";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CampingTable_F.jpg";
		furniture = true;
	};
	
	class furnituresleepingbag {
		variable = "furnitureSleepingBag";
        displayName = "STR_Item_FurnitureSB";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_F.jpg";
		furniture = true;
	};
	
	class furnituresleepingbagblue {
		variable = "furnitureSleepingBagBlue";
        displayName = "STR_Item_FurnitureSBBL";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_F.jpg";
		furniture = true;
	};
	
	class furnituresleepingbagbrown {
		variable = "furnitureSleepingBagBrown";
        displayName = "STR_Item_FurnitureSBBR";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_F.jpg";
		furniture = true;
	};
	
	class furnituresunchair {
		variable = "furnitureSunChair";
        displayName = "STR_Item_FurnitureSCH";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sun_chair_F.jpg";
		furniture = true;
	};
	
	class furnituresunchairgreen {
		variable = "furnitureSunChairGreen";
        displayName = "STR_Item_FurnitureSCHG";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sun_chair_green_F.jpg";
		furniture = true;
	};
	
	class furnituretenta {
		variable = "furnitureTentA";
        displayName = "STR_Item_FurnitureTA";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_TentA_F.jpg";
		furniture = true;
	};
	
	class furnituremapaltis {
		variable = "furnitureMapAltis";
        displayName = "STR_Item_FurnitureMA";
        weight = 10;
        buyPrice = 200000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\MapBoard_altis_F.jpg";
		furniture = true;
	};
	
	class furniturepalletvert {
		variable = "furniturePalletVert";
        displayName = "STR_Item_FurniturePV";
        weight = 10;
        buyPrice = 500000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Pallet_vertical_F.jpg";
		furniture = true;
	};
	
	class furnituremetalrack {
		variable = "furnitureMetalRack";
        displayName = "STR_Item_FurnitureMR";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Metal_wooden_rack_F.jpg";
		furniture = true;
	};
	class furniturewoodblue {
		variable = "furnitureWoodBlue";
        displayName = "STR_Item_FurnitureWB";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ShelvesWooden_blue_F.jpg";
		furniture = true;
	};
	
	class furniturefmradio {
		variable = "furnitureFMRadio";
        displayName = "STR_Item_FurnitureFMR";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_FMradio_F.jpg";
		furniture = true;
	};
	
	class furnitureportgen {
		variable = "furniturePortGen";
        displayName = "STR_Item_FurniturePG";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Portable_generator_F.jpg";
		furniture = true;
	};
	
	class furnituretarget {
		variable = "furnitureTarget";
        displayName = "STR_Item_FurnitureTT";
        weight = 10;
        buyPrice = 500000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Target_F.jpg";
		furniture = true;
	};
	
	class furniturewoodtable {
		variable = "furnitureWoodTable";
        displayName = "STR_Item_FurnitureWT";
        weight = 10;
        buyPrice = 250000;
        sellPrice = 175000;
		varPrice = 1;
        maxPrice = 137500;
        minPrice = 137500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WoodenTable_small_F.jpg";
		furniture = true;
	};

};