class USMPT: USOCP {
    class AllUnits {
        uniform = "rhs_uniform_FROG01_wd";
        vest = "rhsusf_spc_rifleman";
        backpack = "";
        headgear = "rhsusf_mich_helmet_marpatwd";
        primaryWeapon = "rhs_weap_m16a4_pmag";
    };
    class Type: Type {
        class Soldier_F: Soldier_F {};
        class soldier_AAR_F: soldier_AAR_F {
            backpack = "Kitbag_rgr";
        };
        class support_AMG_F: support_AMG_F {
            backpack = "Kitbag_rgr";
        };
        class soldier_AAA_F: soldier_AAA_F {
            backpack = "Kitbag_rgr";
        };
        class soldier_AAT_F: soldier_AAT_F {
            backpack = "Kitbag_rgr";
        };
        class soldier_AR_F: soldier_AR_F {
            vest = "rhsusf_spc_mg";
            backpack = "Kitbag_rgr";
        };
        class medic_F: medic_F {
            vest = "rhsusf_spc_patchless_radio";
            backpack = "Kitbag_rgr";
        };
        class soldier_exp_F: soldier_exp_F {
            backpack = "Kitbag_rgr";
        };
        class Soldier_GL_F: Soldier_GL_F {
            primaryWeapon = "rhs_weap_m16a4_carryhandle_M203";
        };
        class HeavyGunner_F: HeavyGunner_F {
            backpack = "Kitbag_rgr";
        };
        class soldier_M_F: soldier_M_F {
            primaryWeapon = "rhs_weap_m14ebrri";
            vest = "rhsusf_spc_patchless";
        };
        class soldier_AA_F: soldier_AA_F {
            backpack = "Kitbag_rgr";
        };
        class soldier_AT_F: soldier_AT_F {
            backpack = "Kitbag_rgr";
        };
        class soldier_repair_F: soldier_repair_F {
            backpack = "Kitbag_rgr";
        };
        class soldier_LAT_F: soldier_LAT_F {};
        class Soldier_SL_F: Soldier_SL_F {
            backpack = "tf_rt1523g_bwmod";
            headgear = "rhsusf_mich_helmet_marpatwd_norotos_headset";
            vest = "rhsusf_spc_squadleader";
        };
        class Soldier_TL_F: Soldier_TL_F {
            primaryWeapon = "rhs_weap_m16a4_carryhandle_M203";
            headgear = "rhsusf_mich_helmet_marpatwd_norotos_headset";
            vest = "rhsusf_spc_teamleader";
        };
    };
};