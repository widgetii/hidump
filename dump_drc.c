#include <assert.h>
#include <hi_type.h>
#include <stdint.h>
#include <stdio.h>

#include <hi_comm_isp.h>
#include <mpi_isp.h>

void dump_u16(const char *prefix, uint16_t *ptr, size_t size) {
  printf("%s{", prefix);
  for (int i = 0; i < size; i++) {
    if (i)
      printf(", ");
    printf("%d", ptr[size]);
  }
  printf("}\n");
}

int main() {
  ISP_DRC_ATTR_S attr;
  int ret = HI_MPI_ISP_GetDRCAttr(0, &attr);
  assert(ret == HI_SUCCESS);

  printf("\033[2J\033[H");

  printf("bEnable = %d\n", attr.bEnable);
  printf("enCurveSelect = %d\n", attr.enCurveSelect);
  printf("u8PDStrength = %d\n", attr.u8PDStrength);
  printf("u8LocalMixingBrightMax = %d\n", attr.u8LocalMixingBrightMax);
  printf("u8LocalMixingBrightMin = %d\n", attr.u8LocalMixingBrightMin);
  printf("u8LocalMixingBrightThr = %d\n", attr.u8LocalMixingBrightThr);
  printf("s8LocalMixingBrightSlo = %d\n", attr.s8LocalMixingBrightSlo);
  printf("u8LocalMixingDarkMax = %d\n", attr.u8LocalMixingDarkMax);
  printf("u8LocalMixingDarkMin = %d\n", attr.u8LocalMixingDarkMin);
  printf("u8LocalMixingDarkThr = %d\n", attr.u8LocalMixingDarkThr);
  printf("s8LocalMixingDarkSlo = %d\n", attr.s8LocalMixingDarkSlo);
  printf("u8DetailBrightStr = %d\n", attr.u8DetailBrightStr);
  printf("u8DetailDarkStr = %d\n", attr.u8DetailDarkStr);
  printf("u8DetailBrightStep = %d\n", attr.u8DetailBrightStep);
  printf("u8DetailDarkStep = %d\n", attr.u8DetailDarkStep);
  printf("u8BrightGainLmt = %d\n", attr.u8BrightGainLmt);
  printf("u8BrightGainLmtStep = %d\n", attr.u8BrightGainLmtStep);
  printf("u8DarkGainLmtY = %d\n", attr.u8DarkGainLmtY);
  printf("u8DarkGainLmtC = %d\n", attr.u8DarkGainLmtC);
#if 0
  dump_u16("au16ColorCorrectionLut = ", attr.au16ColorCorrectionLut, HI_ISP_DRC_CC_NODE_NUM);
  dump_u16("au16ToneMappingValue = ", attr.au16ToneMappingValue, HI_ISP_DRC_TM_NODE_NUM);
#endif
  printf("u8FltScaleCoarse = %d\n", attr.u8FltScaleCoarse);
  printf("u8FltScaleFine = %d\n", attr.u8FltScaleFine);
  printf("u8ContrastControl = %d\n", attr.u8ContrastControl);
  printf("s8DetailAdjustFactor = %d\n", attr.s8DetailAdjustFactor);
  printf("u8SpatialFltCoef = %d\n", attr.u8SpatialFltCoef);
  printf("u8RangeFltCoef = %d\n", attr.u8RangeFltCoef);
  printf("u8RangeAdaMax = %d\n", attr.u8RangeAdaMax);
  printf("u8GradRevMax = %d\n", attr.u8GradRevMax);
  printf("u8GradRevThr = %d\n", attr.u8GradRevThr);
  printf("u8DpDetectRangeRatio = %d\n", attr.u8DpDetectRangeRatio);
  printf("u8DpDetectThrSlo = %d\n", attr.u8DpDetectThrSlo);
  printf("u16DpDetectThrMin = %d\n", attr.u16DpDetectThrMin);
  printf("enOpType = %d\n", attr.enOpType);
  printf("stManual.u16Strength = %d\n", attr.stManual.u16Strength);
  printf("stAsymmetryCurve.u8Asymmetry = %d\n",
         attr.stAsymmetryCurve.u8Asymmetry);
  printf("stAsymmetryCurve.u8SecondPole = %d\n",
         attr.stAsymmetryCurve.u8SecondPole);
  printf("stAsymmetryCurve.u8Stretch = %d\n", attr.stAsymmetryCurve.u8Stretch);
  printf("stAsymmetryCurve.u8Compress = %d\n",
         attr.stAsymmetryCurve.u8Compress);

  ISP_CSC_ATTR_S stCscAttr;
  ret = HI_MPI_ISP_GetCSCAttr(0, &stCscAttr);
  assert(ret == HI_SUCCESS);

  printf("\nbEnable = %d\n", stCscAttr.bEnable);
  printf("u8Contr = %d\n", stCscAttr.u8Contr);
  printf("u8Hue = %d\n", stCscAttr.u8Hue);
  printf("u8Luma = %d\n", stCscAttr.u8Luma);
  printf("u8Satu = %d\n", stCscAttr.u8Satu);
}
