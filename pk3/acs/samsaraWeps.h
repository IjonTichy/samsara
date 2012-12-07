#define WEPFLAGS_GOTWEAPON  1
#define WEPFLAGS_WEAPONSTAY 2

#define CHOICECOUNT         5
#define CHOICECOUNT_U       (UNIQUECOUNT*2)

#define S_WEP               0
#define S_AMMO1             1
#define S_AMMO2             2
#define S_CHECKITEM         3
#define S_CHECKFAILITEM     4

#define U_UNIQUE1           0
#define U_AMMO1             1
#define U_UNIQUE2           2
#define U_AMMO2             3

int ClassUniques[CLASSCOUNT][CHOICECOUNT_U] = 
{
    {"DoomguyBerserker",    "",                 "", ""},
    {"ChexSoulsphere",      "",                 "", ""},
    {"ArtiEgg2",            "",                 "", ""},
    {"WolfExtraLife",       "",                 "", ""},
    {"PortMysticAmbit",     "",                 "", ""},
    {"DukePortJetpack",     "DukeJetpackFuel",  "", ""},
    {"Alien Weapon",        "UnknownAmmo",      " Alien Weapon ", "UnknownAmmo2"},
    {"Thunderbolt",         "Cell",                 "", ""},
};

int UniqueMaxes[CLASSCOUNT][4] = 
{
    {0,     0,      0,  0},
    {0,     0,      0,  0},
    {16,    0,      0,  0},
    {9,     0,      0,  0},
    {16,    0,      0,  0},
    {0,     100,    0,  0},
    {0,     50,     0,  50},
    {0,     0,      0,  0},
};

int UniqueScripts[CLASSCOUNT] = {0, 0, 0, 0, 0, 0, SAMSARA_MARATHON, 0};

int ClassWeapons[CLASSCOUNT][SLOTCOUNT][CHOICECOUNT] = 
{
    {   // Doomguy
        {" Fist ",                          "",             "",             "", ""},
        {" Chainsaw ",                      "",             "",             "", ""},
        {" Pistol ",                        "",             "",             "", ""},
        {" Shotgun ",                       "AmmoShell",    "",             "", ""},
        {"Super Shotgun",                   "AmmoShell",    "",             "", ""},
        {" Chaingun ",                      "Clip",         "",             "", ""},
        {"Rocket Launcher",                 "RocketAmmo",   "",             "", ""},
        {"Plasma Rifle",                    "Cell",         "",             "", ""},
        {"B.F.G. 9000",                     "Cell",         "",             "", ""},
    },

    {   // Chexguy
        {" Bootspoon ",                     "",             "",             "", ""},
        {"Super Bootspork",                 "",             "",             "", ""},
        {"Mini-Zorcher",                    "",             "",             "", ""},
        {"Large Zorcher",                   "AmmoShell",    "",             "", ""},
        {"Super Large Zorcher",             "AmmoShell",    "",             "", ""},
        {"Rapid Zorcher",                   "Clip",         "",             "", ""},
        {"Zorch Propulsor",                 "RocketAmmo",   "",             "", ""},
        {"Phasing Zorcher",                 "Cell",         "",             "", ""},
        {"LAZ Device",                      "Cell",         "",             "", ""},
    },

    {   // Corvus
        {" Staff ",                         "",             "",             "", ""},
        {"Gauntlets of the Necromancer",    "",             "",             "", ""},
        {"Elven Wand",                      "",             "",             "", ""},
        {" Firemace ",                      "AmmoShell",    "",             "", ""},
        {"Ethereal Crossbow",               "AmmoShell",    "",             "", ""},
        {"Dragon Claw",                     "Clip",         "",             "", ""},
        {"Phoenix Rod",                     "RocketAmmo",   "",             "", ""},
        {"Hellstaff",                       "Cell",         "",             "", ""},
        {"PortTomeCoop",                    "",             "",             "", ""},
    },

    {   // B.J.
        {"Knife",                           "",             "",             "", ""},
        {"BJSuperKnife",                    "",             "",             "", ""},
        {"Luger",                           "",             "",             "", ""},
        {"Machine Gun",                     "Clip",         "",             "", ""},
        {"Machine Gun",                     "Clip",         "",             "", ""},
        {"  Chaingun  ",                    "Clip",         "",             "", ""},
        {" Rocket Launcher ",               "RocketAmmo",   "",             "", ""},
        {" Flamethrower ",                  "Cell",         "",             "", ""},
        {"Spear of Destiny",                "Cell",         "",             "", ""},
    },

    {   // Parias
        {"Mace of Contrition",              "",             "",             "", ""},
        {"PortFlechette",                   "",             "",             "", ""},
        {"Sapphire Wand",                   "",             "",             "", ""},
        {"Frost Shards",                    "AmmoShell",    "",             "", ""},
        {"Timon's Axe",                     "AmmoShell",    "",             "", ""},
        {"Serpent Staff",                   "Clip",         "",             "", ""},
        {"Hammer of Retribution",           "RocketAmmo",   "",             "", ""},
        {"Firestorm",                       "Cell",         "",             "", ""},
        {"Wraithverge",                     "Cell",         "",             "", ""},
    },

    {   // Duke
        {"Mighty Boot",                     "",             "",             "", ""},
        {"Pipebombs",                       "RocketAmmo",   "",             "", ""},
        {"M1911",                           "",             "",             "", ""},
        {"  Shotgun  ",                     "AmmoShell",    "",             "", ""},
        {"Explosive Shotgun",               "RocketAmmo",   "",             "", ""},
        {"Chaingun Cannon",                 "Clip",         "",             "", ""},
        {"RPG",                             "RocketAmmo",   "",             "", ""},
        {"Freezethrower",                   "Cell",         "",             "", ""},
        {"Devastator",                      "Cell",         "",             "", ""},
    },

    {   // Security Officer
        {"Steel Knuckles",                  "",             "",             "",                 ""},
        {"KKV-7 SMG Flechette",             "Clip",         "",             "CanDualPistols",   ""},
        {".44 Magnum Mega Class A1",        "",             "",             "",                 ""},
        {"WSTE-M5 Combat Shotgun",          "AmmoShell",    "",             "CanDualShotties",  "LevelLimiter"},
        {"Fusion Pistol",                   "FusionBullet", "Cell",         "",                 ""},
        {"MA-75B Assault Rifle",            "RifleBullet",  "Clip",         "",                 ""},
        {"SPNKR-XP SSM Launcher",           "SpankerAmmo",  "RocketAmmo",   "",                 ""},
        {"TOZT-7 Napalm Unit",              "NapalmInTank", "Cell",         "",                 ""},
        {"ONI-71 Wave Motion Cannon",       "Cell",         "RocketAmmo",   "",                 ""},
    },
    {   // Ranger
        {"Axe",                             "",             "",             "", ""},
        {"Laser Cannon",                    "Cell",         "",             "", ""},
        {"Single Shotgun",                  "",             "",             "", ""},
        {"Double Shotgun",                  "AmmoShell",    "",             "", ""},
        {"Grenade Launcher",                "RocketAmmo",   "",             "", ""},
        {"Nailgun",                         "Clip",         "",             "", ""},
        {"  Rocket Launcher  ",             "RocketAmmo",   "",             "", ""},
        {"Super Nailgun",                   "Clip",         "",             "", ""},
        {"QuadDamagePickup",                "",             "",             "", "QuakeQuadTimer"},
    },
};

int ClassScripts[CLASSCOUNT][SLOTCOUNT] = 
{
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,SAMSARA_MARATHON,    0,  SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON},
    {0,0,                   0,  0,0,0,0,0,0},
};

int ClassPickupSounds[CLASSCOUNT][SLOTCOUNT] = 
{
    {
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
    },
    {
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
    },
    {
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
    },
    {
        "wolfen/knifeget",
        "wolfen/knifeget",
        "wolfen/itemget",
        "wolfen/mgunget",
        "wolfen/mgunget",
        "wolfen/weaponget",
        "wolfen/rocketget",
        "wolfen/flameget",
        "wolfen/spearget",
    },
    {
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
    },
    {
        "duke/weaponget",
        "duke/itemget",
        "duke/weaponget",
        "duke/mosspump2",
        "duke/xshotgunpump",
        "duke/weaponget",
        "duke/weaponget",
        "duke/weaponget",
        "duke/weaponget",
    },
    {
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/bigitemget",
    },
    {
        "quakeweps/weaponget",
        "quakeweps/weaponget",
        "quakeweps/weaponget",
        "quakeweps/weaponget",
        "quakeweps/weaponget",
        "quakeweps/weaponget",
        "quakeweps/weaponget",
        "quakeweps/weaponget",
        "quakeweps/quadget",
    },
};

int ClassUniqueSounds[CLASSCOUNT] = 
{
    "doomguy/itemget",
    "chex/weaponget",
    "heretic/itemget",
    "wolfen/lifeget",
    "hexen/artiget",
    "duke/itemget",
    "marathon/itemget",
    "quakeweps/weaponget",
};
