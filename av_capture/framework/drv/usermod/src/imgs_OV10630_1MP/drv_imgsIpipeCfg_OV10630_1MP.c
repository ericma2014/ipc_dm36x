
#include <drv_imgs.h>


DRV_ImgsIpipeConfig gDRV_imgsIpipeConfig_Vnfdemo = {

  .ipipeifParams = {

    .vpiIsifInDpcEnable	    = FALSE,
    .vpiIsifInDpcThreshold  = 0,
    .ddrInDpcEnable         = FALSE,
    .ddrInDpcThreshold      = 0,
    .gain                   = 0x200,
    .outClip                = 0xFFF,
    .avgFilterEnable        = FALSE,

  },

  .ipipeParams = {

    .colPat = {

      .colPat = {

        { CSL_IPIPE_SOURCE_COLOUR_GR, CSL_IPIPE_SOURCE_COLOUR_R   },
        { CSL_IPIPE_SOURCE_COLOUR_B , CSL_IPIPE_SOURCE_COLOUR_GB  },

      },
    },

    .lsc = {
      0
    },

    .dpc = {
      .lutEnable = FALSE,
      .otfEnable = TRUE,
      .otfType   = CSL_IPIPE_DPC_OTF_DEFECT_DETECTION_METHOD_MAX1_MIN1,
      .otfAlg    = CSL_IPIPE_DPC_OTF_ALG_DPC3,
      .otf3ActAdjust     = 3,
      .otf3DetThres      = 1024,
      .otf3DetThresSlope = 1,
      .otf3DetThresMin   = 20,
      .otf3DetThresMax   = 200,
      .otf3CorThres      = 1024,
      .otf3CorThresSlope = 1,
      .otf3CorThresMin   = 20,
      .otf3CorThresMax   = 200,
	},

    .nf1 = {
      .enable = FALSE,
      .spreadVal = 4,
      .spreadValSrc = CSL_IPIPE_NF_SPR_SRC_SPR_REG,
      .lutAddrShift = 0,
      .greenSampleMethod = CSL_IPIPE_NF_GREEN_SAMPLING_METHOD_BOX,
      .lscGainEnable = 0,

      .edgeDetectThresMin = 0,
      .edgeDetectThresMax = 2047,

      .lutThresTable = {
        10, 19, 28, 37,
        37, 42, 47, 53,
      },
      .lutIntensityTable = {
        31, 29, 27, 26,
        26, 17,  8,  0,
      },
      .lutSpreadTable = {
         0,  0,  0,  0,
         0,  0,  0,  0,
      },
    },

    .nf2 = {
      .enable = TRUE,
      .spreadVal = 3,
      .spreadValSrc = CSL_IPIPE_NF_SPR_SRC_SPR_REG,
      .lutAddrShift = 0,
      .greenSampleMethod = CSL_IPIPE_NF_GREEN_SAMPLING_METHOD_BOX,
      .lscGainEnable = 0,
      .edgeDetectThresMin = 0,
      .edgeDetectThresMax = 2047,
      .lutThresTable = {
        10, 19, 28, 37,
        37, 42, 47, 53,
      },
      .lutIntensityTable = {
        16, 15, 15, 14,
        13, 12, 11, 10,
      },
      .lutSpreadTable = {
         0,  0,  0,  0,
         0,  0,  0,  0,
      },
    },

    .gic = {
      .enable = FALSE,
    },

    .wb = {
      .offset = {
        0, 0, 0, 0
      },
      .gain = {
        0x200, 0x200, 0x200, 0x200
      },
    },

    .cfa = {
      .mode = CSL_IPIPE_CFA_MODE_2DAC,
      .twoDirHpValLowThres = 600,
      .twoDirHpValSlope    = 57,
      .twoDirHpMixThres    = 100,
      .twoDirHpMixSlope    = 10,
      .twoDirDirThres      = 4,
      .twoDirDirSlope      = 10,
      .twoDirNonDirWeight  = 16,
      .daaHueFrac          = 0,
      .daaEdgeThres        = 0,
      .daaThresMin         = 0,
      .daaThresSlope       = 0,
      .daaSlopeMin         = 0,
      .daaSlopeSlope       = 0,
      .daaLpWeight         = 0,
    },

    .rgb2rgb1 = {
      .matrix = {
        { 0x0100, 0x0000, 0x0000 },
        { 0x0000, 0x0100, 0x0000 },
        { 0x0000, 0x0000, 0x0100 },      
      },
      .offset = {
        0, 0, 0
      },

    },

	.gamma = {
		.tableSize = CSL_IPIPE_GAMMA_CORRECTION_TABLE_SIZE_512,
		.tableSrc = CSL_IPIPE_GAMMA_CORRECTION_TABLE_SELECT_RAM,
      .bypassR = FALSE,
      .bypassG = FALSE,
      .bypassB = FALSE,
    },

    .gammaTableR = {
			#include "gamma_OV10630_1MP.txt"
    },
    .gammaTableG = {
			#include "gamma_OV10630_1MP.txt"
    },
    .gammaTableB = {
			#include "gamma_OV10630_1MP.txt"
    },

    .rgb2rgb2 = {
   
      .matrix = {
        { 0x0100, 0x0000, 0x0000 },
        { 0x0000, 0x0100, 0x0000 },
        { 0x0000, 0x0000, 0x0100 },      
      },
      .offset = {
        0, 0, 0
      },
    },

    .lut3d = {
      .enable = FALSE,
    },

    .rgb2yuv = {

      .matrix = {
        { 0x004d, 0x0096, 0x001d },
        { 0x0fd5, 0x0fab, 0x0080 },
        { 0x0080, 0x0f95, 0x0feb },
      },
      .offset = {
        0x00, 0x80, 0x80
      },

      .cLpfEnable = FALSE,
      .cPos = CSL_IPIPE_YUV_CHROMA_POS_LUM,
    },

    .cntBrt = {
      .brightness = 0x00,
      .contrast   = 0x10,
    },

    .gbce = {
      .enable = FALSE,
    },

    .yee = {
      .enable = FALSE,
    },

    .car = {
      .enable = FALSE,
    },

    .cgs = {
      .enable = FALSE,
    },
  },
};

DRV_ImgsIpipeConfig gDRV_imgsIpipeConfig_Common = {

  .ipipeifParams = {

    .vpiIsifInDpcEnable	    = FALSE,
    .vpiIsifInDpcThreshold  = 0,
    .ddrInDpcEnable         = FALSE,
    .ddrInDpcThreshold      = 0,
    .gain                   = 0x200,
    .outClip                = 0xFFF,
    .avgFilterEnable        = FALSE,

  },

  .ipipeParams = {

    .colPat = {

      .colPat = {

        { CSL_IPIPE_SOURCE_COLOUR_GR, CSL_IPIPE_SOURCE_COLOUR_R   },
        { CSL_IPIPE_SOURCE_COLOUR_B , CSL_IPIPE_SOURCE_COLOUR_GB  },


      },
    },

    .lsc = {
      0
    },

    .dpc = {
      .lutEnable = FALSE,
      .otfEnable = TRUE,
      .otfType   = CSL_IPIPE_DPC_OTF_DEFECT_DETECTION_METHOD_MAX1_MIN1,
      .otfAlg    = CSL_IPIPE_DPC_OTF_ALG_DPC3,
      .otf3ActAdjust     = 3,
      .otf3DetThres      = 1024,
      .otf3DetThresSlope = 1,
      .otf3DetThresMin   = 20,
      .otf3DetThresMax   = 200,
      .otf3CorThres      = 1024,
      .otf3CorThresSlope = 1,
      .otf3CorThresMin   = 20,
      .otf3CorThresMax   = 200,
	},

    .nf1 = {
      .enable = FALSE,
      .spreadVal = 4,
      .spreadValSrc = CSL_IPIPE_NF_SPR_SRC_SPR_REG,
      .lutAddrShift = 0,
      .greenSampleMethod = CSL_IPIPE_NF_GREEN_SAMPLING_METHOD_BOX,
      .lscGainEnable = 0,

      .edgeDetectThresMin = 0,
      .edgeDetectThresMax = 2047,

      .lutThresTable = {
        10, 19, 28, 37,
        37, 42, 47, 53,
      },
      .lutIntensityTable = {
        31, 29, 27, 26,
        26, 17,  8,  0,
      },
      .lutSpreadTable = {
         0,  0,  0,  0,
         0,  0,  0,  0,
      },
    },

    .nf2 = {
      .enable = TRUE,
      .spreadVal = 3,
      .spreadValSrc = CSL_IPIPE_NF_SPR_SRC_SPR_REG,
      .lutAddrShift = 0,
      .greenSampleMethod = CSL_IPIPE_NF_GREEN_SAMPLING_METHOD_BOX,
      .lscGainEnable = 0,
      .edgeDetectThresMin = 0,
      .edgeDetectThresMax = 2047,
      .lutThresTable = {
        10, 19, 28, 37,
        37, 42, 47, 53,
      },
      .lutIntensityTable = {
        16, 16, 16, 16,
        16, 16, 16, 16,
      },
      .lutSpreadTable = {
         0,  0,  0,  0,
         0,  0,  0,  0,
      },
    },

    .gic = {
      .enable = FALSE,
    },

    .wb = {
      .offset = {
        0, 0, 0, 0
      },
      .gain = {
        0x200, 0x200, 0x200, 0x200
      },
    },

    .cfa = {
      .mode = CSL_IPIPE_CFA_MODE_2DAC,
      .twoDirHpValLowThres = 600,
      .twoDirHpValSlope    = 57,
      .twoDirHpMixThres    = 100,
      .twoDirHpMixSlope    = 10,
      .twoDirDirThres      = 4,
      .twoDirDirSlope      = 10,
      .twoDirNonDirWeight  = 16,
      .daaHueFrac          = 0,
      .daaEdgeThres        = 0,
      .daaThresMin         = 0,
      .daaThresSlope       = 0,
      .daaSlopeMin         = 0,
      .daaSlopeSlope       = 0,
      .daaLpWeight         = 0,
    },

    .rgb2rgb1 = {

      .matrix = {
        { 0x0100, 0x0000, 0x0000 },
        { 0x0000, 0x0100, 0x0000 },
        { 0x0000, 0x0000, 0x0100 },
      },
      .offset = {
        0, 0, 0
      },

    },

	.gamma = {
		.tableSize = CSL_IPIPE_GAMMA_CORRECTION_TABLE_SIZE_512,
		.tableSrc = CSL_IPIPE_GAMMA_CORRECTION_TABLE_SELECT_RAM,
      .bypassR = FALSE,
      .bypassG = FALSE,
      .bypassB = FALSE,
    },

    .gammaTableR = {
			#include "gamma_OV10630_1MP.txt"
    },
    .gammaTableG = {
			#include "gamma_OV10630_1MP.txt"
    },
    .gammaTableB = {
			#include "gamma_OV10630_1MP.txt"
    },

    .rgb2rgb2 = {

      .matrix = {
        { 0x0100, 0x0000, 0x0000 },
        { 0x0000, 0x0100, 0x0000 },
        { 0x0000, 0x0000, 0x0100 },
      },
      .offset = {
        0, 0, 0
      },
    },

    .lut3d = {
      .enable = FALSE,
    },

    .rgb2yuv = {

      .matrix = {
        { 0x004d, 0x0096, 0x001d },
        { 0x0fd5, 0x0fab, 0x0080 },
        { 0x0080, 0x0f95, 0x0feb },
      },
      .offset = {
        0x7f8, 0x80, 0x80
      },

      .cLpfEnable = FALSE,
      .cPos = CSL_IPIPE_YUV_CHROMA_POS_LUM,
    },

    .cntBrt = {
      .brightness = 0x00,
      .contrast   = 0x10,
    },

    .gbce = {
      .enable = FALSE,
    },

    .yee = {
      .enable = FALSE,
    },

    .car = {
      .enable = TRUE,
      .type = CSL_IPIPE_CAR_METHOD_GAIN_CONTROL,
      .hpfType = CSL_IPIPE_CAR_HPF_TYPE_2D,
      
      .hpfShift = 1,
      .hpfValThres = 2,

      .gain1Intensity = 255,
      .gain1Shift = 4,   
      .gain1Min = 128,    

      .gain2Intensity = 0,
      .gain2Shift = 0,   
      .gain2Min = 255,    

      .sw0MedFiltThres = 255,
      .sw1GainCtrlThres = 0,

    },

    .cgs = {
      .enable = FALSE,
    },
  },
};

