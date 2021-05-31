#include <stdbool.h>
#include <stdio.h>
void FUN_00073770(unsigned __int128 *param_1,unsigned __int128 *param_2,unsigned int param_3)
{
  unsigned int uVar1;
  unsigned __int128 *puVar2;
  unsigned __int128 *puVar3;
  unsigned __int128 *puVar4;
  unsigned __int128 *puVar5;
  unsigned __int128 *puVar6;
  unsigned __int128 *puVar7;
  unsigned __int128 uVar8;
  unsigned __int128 uVar9;
  unsigned __int128 uVar10;
  unsigned __int128 uVar11;
  bool bVar12;
  if (param_3 != 0) {
    uVar1 = (unsigned int)param_2 & 3;
    while (uVar1 != 0) {
      param_3 = param_3 - 1;
      *(unsigned __int128 *)param_1 = *(unsigned __int128 *)param_2;
      if (param_3 == 0) {
        return;
      }
      uVar1 = (unsigned int)(unsigned __int128 *)((int)param_2 + 1) & 3;
      param_2 = (unsigned __int128 *)((int)param_2 + 1);
      param_1 = (unsigned __int128 *)((int)param_1 + 1);
    }
    if (((unsigned int)param_1 & 3) != 0) {
      bVar12 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar12) {
        puVar6 = param_2;
        if (((unsigned int)param_1 & 1) == 0) {
          do {
            param_2 = puVar6 + 1;
            uVar8 = *puVar6;
            puVar4 = (unsigned __int128 *)((int)param_1 + 2);
            *(short *)param_1 = (short)uVar8;
            bVar12 = 3 < param_3;
            param_3 = param_3 - 4;
            param_1 = param_1 + 1;
            *puVar4 = (short)((unsigned int)uVar8 >> 0x10);
            puVar6 = param_2;
          } while (bVar12);
        }
        else {
          do {
            param_2 = puVar6 + 1;
            uVar8 = *puVar6;
            *(char *)param_1 = (char)uVar8;
            puVar5 = (unsigned __int128 *)((int)param_1 + 3);
            *(short *)((int)param_1 + 1) = (short)((unsigned int)uVar8 >> 8);
            bVar12 = 3 < param_3;
            param_3 = param_3 - 4;
            param_1 = param_1 + 1;
            *puVar5 = (char)((unsigned int)uVar8 >> 0x18);
            puVar6 = param_2;
          } while (bVar12);
        }
      }
      if (!bVar12) {
        param_3 = param_3 + 4;
      }
      do {
        bVar12 = param_3 != 0;
        param_3 = param_3 - 1;
        puVar6 = param_1;
        if (bVar12) {
          puVar6 = (unsigned __int128 *)((int)param_1 + 1);
          *(unsigned __int128 *)param_1 = *(unsigned __int128 *)param_2;
          param_2 = (unsigned __int128 *)((int)param_2 + 1);
        }
        param_1 = puVar6;
      } while (bVar12 && param_3 != 0);
      return;
    }
    while (uVar1 = param_3 - 0x10, 0xf < param_3) {
      uVar8 = *param_2;
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      uVar11 = param_2[3];
      param_2 = param_2 + 4;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[2] = uVar10;
      param_1[3] = uVar11;
      param_1 = param_1 + 4;
      param_3 = uVar1;
    }
    if ((uVar1 & 8) != 0) {
      uVar8 = *param_2;
      uVar9 = param_2[1];
      param_2 = param_2 + 2;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1 = param_1 + 2;
    }
    puVar2 = param_1;
    puVar6 = param_2;
    if ((int)(param_3 << 0x1d) < 0) {
      puVar6 = param_2 + 1;
      puVar2 = param_1 + 1;
      *param_1 = *param_2;
    }
    puVar3 = puVar2;
    puVar7 = puVar6;
    if ((uVar1 & 2) != 0) {
      puVar7 = (unsigned __int128 *)((int)puVar6 + 2);
      puVar3 = (unsigned __int128 *)((int)puVar2 + 2);
      *(unsigned __int128 *)puVar2 = *(unsigned __int128 *)puVar6;
    }
    if ((int)(param_3 << 0x1f) < 0) {
      *(unsigned __int128 *)puVar3 = *(unsigned __int128 *)puVar7;
    }
  }
  printf("puVar2: ", *puVar2);
  printf("puVar3: ", *puVar3);
  printf("puVar4: ", *puVar4);
  printf("puVar5: ", *puVar5);
  printf("puVar6: ", *puVar6);
  printf("puVar7: ", *puVar7);
  return;
}