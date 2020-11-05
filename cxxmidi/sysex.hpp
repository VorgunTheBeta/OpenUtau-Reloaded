#ifndef CCXMIDI_SYSEX_HPP
#define CCXMIDI_SYSEX_HPP

namespace CxxMidi {

class Sysex
{
    enum VendorId
    {
        // Special
        Extended                                = 0,

        // Japan
        KawaiMusicalInstrumentsMFGCOLtd         = 0x40,
        RolandCorporation                       = 0x41,
        KorgInc                                 = 0x42,
        YamahaCorporation                       = 0x43,
        CasioComputerCoLtd                      = 0x44,
        KamiyaStudioCoLtd                       = 0x46,
        AkaiElectricCoLtd                       = 0x47,
        VictorCompanyofJapanLtd                 = 0x48,
        FujitsuLimited                          = 0x4B,
        SonyCorporation                         = 0x4C,
        TeacCorporation                         = 0x4E,
        MatsushitaElectricIndustrialCoLtd       = 0x50,
        FostexCorporation                       = 0x51,
        ZoomCorporation                         = 0x52,
        MatsushitaCommunicationIndustrialCoLtd  = 0x54,
        SuzukiMusicalInstrumentsMFGCoLtd        = 0x55,
        FujiSoundCorporationLtd                 = 0x56,
        AcousticTechnicalLaboratoryInc          = 0x57,
        FaithInc                                = 0x59,
        InternetCorporation                     = 0x5A,
        SeekersCoLtd                            = 0x5C,
        SDCardAssociation                       = 0x5F,

        // Other
        Educational                             = 0x7D
    };

    enum ExtendedVendorId
    {
        // North American Group
        TaHorngMusicalInstrument                = 0x000074,
        eTekLabsForteTech                       = 0x000075,
        ElectroVoice                            = 0x000076,
        MidisoftCorporation                     = 0x000077,
        QSoundLabs                              = 0x000078,
        Westrex                                 = 0x000079,
        Nvidia                                  = 0x00007A,
        ESSTechnology                           = 0x00007B,
        MediaTrixPeripherals                    = 0x00007C,
        BrooktreeCorp                           = 0x00007D,
        OtariCorp                               = 0x00007E,
        KeyElectronicsInc                       = 0x00007F,
        ShureIncorporated                       = 0x000100,
        AuraSound                               = 0x000101,
        CrystalSemiconductor                    = 0x000102,
        ConexantRockwell                        = 0x000103,
        SiliconGraphics                         = 0x000104,
        MAudioMidiman                           = 0x000105,
        PreSonus                                = 0x000106,
        TopazEnterprises                        = 0x000108,
        CastLighting                            = 0x000109,
        Microsoft                               = 0x00010A,
        SonicFoundry                            = 0x00010B,
        Line6FastForwardYamaha                  = 0x00010C,
        BeatnikInc                              = 0x00010D,
        VanKoeveringCompany                     = 0x00010E,
        AltechSystems                           = 0x00010F,
        SNSResearch                             = 0x000110,
        VLSITechnology                          = 0x000111,
        ChromaticResearch                       = 0x000112,
        Sapphire                                = 0x000113,
        IDRC                                    = 0x000114,
        JustonicTuning                          = 0x000115,
        TorCompResearchInc                      = 0x000116,
        NewtekInc                               = 0x000117,
        SoundSculpture                          = 0x000118,
        WalkerTechnical                         = 0x000119,
        DigitalHarmonyPAVO                      = 0x00011A,
        InVisionInteractive                     = 0x00011B,
        TSquareDesign                           = 0x00011C,
        NemesysMusicTechnology                  = 0x00011D,
        DBXProfessionalHarmanIntl               = 0x00011E,
        SyndyneCorporation                      = 0x00011F,
        Bitheadz                                = 0x000120,
        CakewalkMusicSoftwareGibson             = 0x000121,
        AnalogDevices                           = 0x000122,
        NationalSemiconductor                   = 0x000123,
        BoomTheoryAdinolfiAlternativePercussion = 0x000124,
        VirtualDSPCorporation                   = 0x000125,
        AntaresSystems                          = 0x000126,
        AngelSoftware                           = 0x000127,
        StLouisMusic                            = 0x000128,
        PassportMusicSoftwareLlcGvox            = 0x000129,
        AshleyAudioInc                          = 0x00012A,
        VariLiteInc                             = 0x00012B,
        SummitAudioInc                          = 0x00012C,
        AurealSemiconductorInc                  = 0x00012D,
        SeaSoundLlc                             = 0x00012E,
        USRobotics                              = 0x00012F,
        AurisisResearch                         = 0x000130,
        NearfieldResearch                       = 0x000131,
        FM7Inc                                  = 0x000132,
        SwivelSystems                           = 0x000133,
        HyperactiveAudioSystems                 = 0x000134,
        MidiLiteCastleStudiosProductions        = 0x000135,
        RadikalTechnologies                     = 0x000136,
        RogerLinnDesign                         = 0x000137,
        TCHeliconVocalTechnologies              = 0x000138,
        EventElectronics                        = 0x000139,
        SonicNetworkInc                         = 0x00013A,
        RealtimeMusicSolutions                  = 0x00013B,
        ApogeeDigital                           = 0x00013C,
        ClassicalOrgansInc                      = 0x00013D,
        MicrotoolsInc                           = 0x00013E,
        NumarkIndustries                        = 0x00013F,
        FrontierDesignGroupLlc                  = 0x000140,
        RecordareLlc                            = 0x000141,
        StarrLabs                               = 0x000142,
        VoyagerSoundInc                         = 0x000143,
        ManifoldLabs                            = 0x000144,
        AviomInc                                = 0x000145,
        MixmeisterTechnology                    = 0x000146,
        NotationSoftware                        = 0x000147,
        MercurialCommunications                 = 0x000148,
        WaveArts                                = 0x000149,
        LogicSequencingDevices                  = 0x00014A,
        AxessElectronics                        = 0x00014B,
        MuseResearch                            = 0x00014C,
        OpenLabs                                = 0x00014D,
        GuillemotCorp                           = 0x00014E,
        SamsonTechnologies                      = 0x00014F,
        ElectronicTheatreControls               = 0x000150,
        BlackberryRIM                           = 0x000151,
        Mobileer                                = 0x000152,
        Synthogy                                = 0x000153,
        LynxStudioTechnologyInc                 = 0x000154,
        DamageControlEngineeringLlc             = 0x000155,
        YostEngineeringInc                      = 0x000156,
        BrooksNForsmanDesignsLlcDrumLite        = 0x000157,
        InfiniteResponse                        = 0x000158,
        GarritanCorp                            = 0x000159,
        PlogueArtetTechnologieInc               = 0x00015A,
        RJMMusicTechnology                      = 0x00015B,
        CustomSolutionsSoftware                 = 0x00015C,
        SonarcanaLlcHighlyLiquid                = 0x00015D,
        Centrance                               = 0x00015E,
        KesumoLlc                               = 0x00015F,
        StantonGibson                           = 0x000160,
        LividInstruments                        = 0x000161,
        FirstAct745Media                        = 0x000162,
        PygraphicsInc                           = 0x000163,
        PanadigmInnovationsLtd                  = 0x000164,
        AvedisZildjianCo                        = 0x000165,
        AuvitalMusicCorp                        = 0x000166,
        YouRockGuitarInspiredInstruments        = 0x000167,
        ChrisGriggDesigns                       = 0x000168,
        SlateDigitalLlc                         = 0x000169,
        Mixware                                 = 0x00016A,
        SocialEntropy                           = 0x00016B,
        SourceAudioLlc                          = 0x00016C,
        ErnieBallMusicMan                       = 0x00016D,
        Fishman                                 = 0x00016E,
        CustomAudioElectronics                  = 0x00016F,
        AmericanAudioDJ                         = 0x000170,
        MegaControlSystems                      = 0x000171,
        KilpatrickAudio                         = 0x000172,
        iConnectivity                           = 0x000173,
        FractalAudio                            = 0x000174,
        NetLogicMicrosystems                    = 0x000175,
        MusicComputing                          = 0x000176,
        NektarTechnologyInc                     = 0x000177,
        ZenphSoundInnovations                   = 0x000178,
        DJTechToolscom                          = 0x000179,
        RezonanceLabs                           = 0x00017A,
        DecibelEleven                           = 0x00017B,
        CNMAT                                   = 0x00017C,
        MediaOverkill                           = 0x00017D,
        ConfusionStudios                        = 0x00017E,
        moForteInc                              = 0x00017F,
        MiseluInc                               = 0x000200,
        AmeliasCompassLlc                       = 0x000201,
        ZivixLlc                                = 0x000202,
        Artiphon                                = 0x000203,
        SynclavierDigital                       = 0x000204,
        LightNSoundControlDevicesLlc            = 0x000205,
        RetronymsInc                            = 0x000206,
        JSTechnologies                          = 0x000207,
        QuiccoSound                             = 0x000208,
        ADesignsAudio                           = 0x000209,
        McCarthyMusicCorp                       = 0x00020A,
        DenonDJ                                 = 0x00020B,
        KeithRobertMurray                       = 0x00020C,
        Google                                  = 0x00020D,
        ISPTechnologies                         = 0x00020E,
        AbstraktInstrumentsLlc                  = 0x00020F,
        MerisLlc                                = 0x000210,
        SensorpointLlc                          = 0x000211,
        HiZLabs                                 = 0x000212,
        Imitone                                 = 0x000213,
        IntellijelDesignsInc                    = 0x000214,
        DaszInstrumentsInc                      = 0x000215,
        Remidi                                  = 0x000216,
        DisasterAreaDesignsLlc                  = 0x000217,
        UniversalAudio                          = 0x000218,
        CarterDuncanCorp                        = 0x000219,
        EssentialTechnology                     = 0x00021A,
        CantuxResearchLlc                       = 0x00021B,
        HummelTechnologies                      = 0x00021C,
        SenselInc                               = 0x00021D,
        DBMLGroup                               = 0x00021E,
        MadronaLabs                             = 0x00021F,

        // Europe and other group
        FocusriteNovation                       = 0x002029,
        SamkyungMechatronics                    = 0x00202A,
        MedeliElectronicsCo                     = 0x00202B,
        CharlieLabSRL                           = 0x00202C,
        BlueChipMusicTechnology                 = 0x00202D,
        BEEOHCorp                               = 0x00202E,
        LGSemiconAmerica                        = 0x00202F,
        TESI                                    = 0x002030,
        EMAGIC                                  = 0x002031,
        BehringerGmbH                           = 0x002032,
        AccessMusicElectronics                  = 0x002033,
        Synoptic                                = 0x002034,
        Hanmesoft                               = 0x002035,
        TerratecElectronicGmbH                  = 0x002036,
        ProelSpA                                = 0x002037,
        IBKMIDI                                 = 0x002038,
        IRCAM                                   = 0x002039,
        PropellerheadSoftware                   = 0x00203A,
        RedSoundSystemsLtd                      = 0x00203B,
        ElektronESIAB                           = 0x00203C,
        SintefexAudio                           = 0x00203D,
        MAMMusicandMore                         = 0x00203E,
        AmsaroGmbH                              = 0x00203F,
        CDSAdvancedTechnologyBVLanbox           = 0x002040,
        ModeMachinesTouchedBySoundGmbH          = 0x002041,
        DSPArts                                 = 0x002042,
        PhilReesMusicTech                       = 0x002043,
        StamerMusikanlagenGmbH                  = 0x002044,
        MusicalMuntanerSAdbaSoundart            = 0x002045,
        CMexxSoftware                           = 0x002046,
        KlavisTechnologies                      = 0x002047,
        NoteheadsAB                             = 0x002048,
        Algorithmix                             = 0x002049,
        SkrydstrupRND                           = 0x00204A,
        ProfessionalAudioCompany                = 0x00204B,
        NewWaveLabsMadWaves                     = 0x00204C,
        Vermona                                 = 0x00204D,
        Nokia                                   = 0x00204E,
        WaveIdea                                = 0x00204F,
        HartmannGmbH                            = 0x002050,
        LionsTracs                              = 0x002051,
        AnalogueSystems                         = 0x002052,
        FocalJMlab                              = 0x002053,
        RingwayElectronicsChangZhouCoLtd        = 0x002054,
        FaithTechnologiesDigiplug               = 0x002055,
        Showworks                               = 0x002056,
        ManikinElectronic                       = 0x002057,
        A1ComeTech                              = 0x002058,
        PhonicCorp                              = 0x002059,
        DolbyAustraliaLake                      = 0x00205A,
        SilansysTechnologies                    = 0x00205B,
        WinbondElectronics                      = 0x00205C,
        CinetixMedienundInterfaceGmbH           = 0x00205D,
        ANGSoluzioniDigitali                    = 0x00205E,
        SequentixMusicSystems                   = 0x00205F,
        OramProAudio                            = 0x002060,
        Be4Ltd                                  = 0x002061,
        InfectionMusic                          = 0x002062,
        CentralMusicCoCME                       = 0x002063,
        genoQsMachinesGmbH                      = 0x002064,
        Medialon                                = 0x002065,
        WavesAudioLtd                           = 0x002066,
        JerashLabs                              = 0x002067,
        DaFact                                  = 0x002068,
        ElbyDesigns                             = 0x002069,
        SpectralAudio                           = 0x00206A,
        Arturia                                 = 0x00206B,
        Vixid                                   = 0x00206C,
        CThruMusic                              = 0x00206D,
        YaHorngElectronicCoLTD                  = 0x00206E,
        SMProAudio                              = 0x00206F,
        OTOMACHINES                             = 0x002070,
        ELZABSAGLAB                             = 0x002071,
        BlackstarAmplificationLtd               = 0x002072,
        M3iTechnologiesGmbH                     = 0x002073,
        GemaltofromXiring                       = 0x002074,
        ProstageSL                              = 0x002075,
        TeenageEngineering                      = 0x002076,
        TobiasErichsenConsulting                = 0x002077,
        NixerLtd                                = 0x002078,
        HanpinElectronCoLtd                     = 0x002079,
        MIDIhardwareRSowa                       = 0x00207A,
        BeyondMusicIndustrialLtd                = 0x00207B,
        KissBoxBV                               = 0x00207C,
        MisaDigitalTechnologiesLtd              = 0x00207D,
        AIMusicsTechnologyInc                   = 0x00207E,
        SeratoIncLP                             = 0x00207F,
        Limex                                   = 0x002100,
        KyoddayTokai                            = 0x002101,
        MutableInstruments                      = 0x002102,
        PreSonusSoftwareLtd                     = 0x002103,
        IngenicoXiring                          = 0x002104,
        FairlightInstrumentsPtyLtd              = 0x002105,
        MusicomLab                              = 0x002106,
        ModalElectronicsModulusVacoLoco         = 0x002107,
        RWAHongKongLimited                      = 0x002108,
        NativeInstruments                       = 0x002109,
        Naonext                                 = 0x00210A,
        MFB                                     = 0x00210B,
        TeknelResearch                          = 0x00210C,
        PloytecGmbH                             = 0x00210D,
        SurfinKangarooStudio                    = 0x00210E,
        PhilipsElectronicsHKLtd                 = 0x00210F,
        ROLILtd                                 = 0x002110,
        PandaAudioLtd                           = 0x002111,
        BauMSoftware                            = 0x002112,
        MachinewerksLtd                         = 0x002113,
        XiamenElaneElectronics                  = 0x002114,
        MarshallAmplificationPLC                = 0x002115,
        KiwitechnicsLtd                         = 0x002116,
        RobPapen                                = 0x002117,
        SpicetoneOU                             = 0x002118,
        V3Sound                                 = 0x002119,
        IKMultimedia                            = 0x00211A,
        NovaliaLtd                              = 0x00211B,
        ModorMusic                              = 0x00211C,
        Ableton                                 = 0x00211D,
        Dtronics                                = 0x00211E,
        ZAQAudio                                = 0x00211F,
        MuabaobaoEducationTechnologyCoLtd       = 0x002120,
        FluxEffects                             = 0x002121,
        AudiothingiesMCDA                       = 0x002122,
        Retrokits                               = 0x002123,
        MorningstarFXPteLtd                     = 0x002124,
        HotoneAudio                             = 0x002125,
        Expressive                              = 0x002126,
        ExpertSleepersLtd                       = 0x002127,
        TimecodeVisionTechnology                = 0x002128,
        HornbergResearchGbR                     = 0x002129,
        SonicPotions                            = 0x00212A,
        Audiofront                              = 0x00212B,
        FredsLab                                = 0x00212C,

        // Japan
        CrimsonTechnologyInc                    = 0x004000,
        SoftbankMobileCorp                      = 0x004001,
        DNMHoldingsInc                          = 0x004003
    };
};

} // namespace CxxMidi

#endif // CXXMIDI_SYSEX_HPP

