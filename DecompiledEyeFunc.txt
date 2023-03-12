/*
The following function was decompiled using Ghidra on the Noita.exe
The lines 45 through 505 are one giant if/else block with repeated logic, and does not need much focus/explaining
the local_4c value in the giant if statement may be incorrect as the decompiler has the first value 0xacf68674 stored in memory, but I am not sure why that would be.
Does the future logic create this value some how?
How are the values being stored in local_50 and local_4c being handle and why where they spit into seperate variables instead of being combined.
*/

/* WARNING: Could not reconcile some variable overlaps */

void __fastcall FUN_005b2ff0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *local_5c;
  int local_58;
  undefined4 local_54;
  word *local_50;
  int local_4c;
  undefined4 ****local_48 [4];
  uint local_38;
  uint local_34;
  undefined4 ****local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00c7be80;
  local_10 = ExceptionList;
  local_18 = DAT_00f3a000 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_8 = 0;
  if (param_3 == 0) {
    local_50 = (word *)0x5634505c;
    local_4c = -0x5309798c;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x2c9ac076;
    local_4c = -0x67e1dcba;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x2e474a1f;
    local_4c = 0x29848a73;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0xc220213a;
    local_4c = 0x75a31019;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x1fecf4e;
    local_4c = 0x2c7aa564;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x2bf7569a;
    local_4c = -0x64cf807;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x3e145ee9;
    local_4c = -0x14890fb0;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0xb54a6af2;
    local_4c = -0x66cb8b45;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x5eea05e8;
    local_4c = 0x43ea988d;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0xadde7d91;
    local_4c = 0x4136e1da;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = &WORD_0101ef86;
    local_4c = 0x472533a7;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x3fe75e9e;
    local_4c = -0x6f5b4cca;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0xc9b9c908;
    local_4c = -0x79c07c59;
    FUN_007c5a50(&local_5c,&local_50);
    local_50 = (word *)0x52329ab4;
    local_4c = 0x20c91280;
  }
  else {
    if (param_3 == 1) {
      local_50 = (word *)0xb1c95194;
      local_4c = -0x1506a584;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x2ca1eeba;
      local_4c = -0x67e1dcba;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x2e474a1f;
      local_4c = 0x29848a73;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0xac567db9;
      local_4c = 0x75a31019;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x56f0b2ae;
      local_4c = 0x2c7a8998;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x9dfd44ec;
      local_4c = -0x64cf8bc;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x7b7555aa;
      local_4c = 0x48353272;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0xcc6a521c;
      local_4c = -0x66c0cb91;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0xe9153d2e;
      local_4c = 0x53c3db0d;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x7293312c;
      local_4c = 0x628375f9;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0xe49c1fef;
      local_4c = -0x4bf253fe;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0xccc378b2;
      local_4c = 0x537dbb53;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x4d4eaf5f;
      local_4c = -0xce66873;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0x40e1fc47;
      local_4c = -0x435c0eae;
      FUN_007c5a50(&local_5c,&local_50);
      local_50 = (word *)0xbf905626;
    }
    else {
      if (param_3 == 2) {
        local_50 = (word *)0x1cf72f99;
        local_4c = -0x79cb3e11;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x2ca1f81b;
        local_4c = -0x67e1dcba;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x2e474a1f;
        local_4c = 0x29848a73;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xe1637be9;
        local_4c = 0x75a31019;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xb914ade3;
        local_4c = -0x1d301e2d;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xb723d349;
        local_4c = 0x786f45ab;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x48c7c97b;
        local_4c = -0x411a4d5b;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xef63311a;
        local_4c = 0x2cbc058b;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x655c358a;
        local_4c = -0x51e437a7;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x797cd4b3;
        local_4c = -0x7fa4f198;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x64bf17b9;
        local_4c = -0x78149908;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xc737f7dd;
        local_4c = 0x40a4cabc;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x4f299b43;
        local_4c = -0x7201f3f8;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xe0b4b2f4;
        local_4c = 0x2aabf66d;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xfae456c4;
        local_4c = 0x5a0d593c;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x72a8e6a;
        local_4c = 0x2b885f6a;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x616cf703;
        local_4c = 0x2d28;
        goto LAB_005b3f73;
      }
      if (param_3 == 3) {
        local_50 = (word *)0xba591cfd;
        local_4c = -0x1cc6164b;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x9f5fdb97;
        local_4c = 0x40aa767c;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x6a205b2d;
        local_4c = 0x292a2b08;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xe906ad86;
        local_4c = 0x2819fcb0;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x2d7097c7;
        local_4c = -0x4c52aca3;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x5f701c14;
        local_4c = -0x1daefc51;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x3d510e03;
        local_4c = 0x7941b070;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xe4ab73f;
        local_4c = 0x7d50d317;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x71e3af41;
        local_4c = 0x2a497ecf;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xc25d5cb0;
        local_4c = -0x78202cef;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xae0a79;
        local_4c = -0x1279f8fd;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x7cb6914;
        local_4c = 0x31468f6d;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x856d0002;
        local_4c = -0x53c9f2f;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x9449c363;
        local_4c = 0x47499296;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x4b209af6;
      }
      else {
        if (param_3 != 4) {
          if (param_3 == 5) {
            local_50 = (word *)0x9445728a;
            local_4c = 0x7e7550ff;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xd0f6513;
            local_4c = -0xcfcd72b;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x9d27ce70;
            local_4c = 0x292a0d5c;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x52a05d69;
            local_4c = -0x40358a74;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xe8109a74;
            local_4c = 0x251a1f3f;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x5dedc516;
            local_4c = 0x24d30587;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x44e5f584;
            local_4c = -0x4c2c6fec;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x5790c997;
            local_4c = -0x7dc7f1f6;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xb411f01b;
            local_4c = -0x1dbb639e;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x7ebe9feb;
            local_4c = -0x4a186966;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x4471d7ec;
            local_4c = 0x4a9c0282;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x866a064b;
            local_4c = 0x313a62bf;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xa8f7fe37;
            local_4c = 0x29b312b3;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xeccf2773;
            local_4c = 0x79186c2a;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x3f22c3ac;
            local_4c = -0x47a4f70d;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xf689a796;
            local_4c = 0x286b232d;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x577b0f1;
            local_4c = 0x4eeb3967;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x42200715;
            local_4c = 0x20c;
          }
          else if (param_3 == 6) {
            local_50 = (word *)0xd85141c4;
            local_4c = 0x76b4f66f;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x910a0cde;
            local_4c = -0x706c0a10;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x84925ae2;
            local_4c = 0x2929e6c7;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x29a68a25;
            local_4c = 0x40933e6d;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xc75f5618;
            local_4c = -0x3a8c8d54;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x794787b0;
            local_4c = -0x449b6d93;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xb2dbe0fe;
            local_4c = -0xe01c636;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x936186e5;
            local_4c = 0x474efd70;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x6cad7fcf;
            local_4c = -0x3cbdcbd2;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x81bafa5d;
            local_4c = -0x1859c703;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x40004d4a;
            local_4c = 0x29a2c904;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x5cdb6750;
            local_4c = -0x49d7c635;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xfd8931dd;
            local_4c = -0x7205da9a;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x30d69c9;
            local_4c = -0x118e1277;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x22f7029a;
            local_4c = -0x3196adf5;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x4f349ac3;
            local_4c = 0x4748bf1d;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x9690947d;
            local_4c = 0x13c03;
          }
          else {
            if (param_3 != 7) {
              if (param_3 != 8) goto LAB_005b3f7f;
              local_50 = (word *)0xe3c3e1eb;
              local_4c = 0x7e7550f0;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x67eb65a7;
              local_4c = -0x706c0a0d;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x84925ae2;
              local_4c = 0x2929e6c7;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x5d0b8d5d;
              local_4c = 0x40935218;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xa3e4e814;
              local_4c = -0x398e1fca;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xdc181d46;
              local_4c = 0x5047870a;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x3dbac96b;
              local_4c = -0x7a9acb8d;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xaa9846f1;
              local_4c = 0x24ee71d2;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xc9269dc8;
              local_4c = 0x76ba6749;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xa9c340c6;
              local_4c = -0x7257dfc7;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x32d0143b;
              local_4c = -0x7fd3b3e5;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xb02e0347;
              local_4c = 0x77df0666;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x5cb83226;
              local_4c = -0x704478ee;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x99246bfc;
              local_4c = 0x569c4f81;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xa564670b;
              local_4c = -0x4b1fd50a;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0xeb81e037;
              local_4c = 0x5159ba32;
              FUN_007c5a50(&local_5c,&local_50);
              local_50 = (word *)0x8c;
              goto LAB_005b3f6c;
            }
            local_50 = (word *)0x789603e6;
            local_4c = -0x1cc61682;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xb2c91190;
            local_4c = -0x706c0a17;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x84925ae2;
            local_4c = 0x2929e6c7;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x4feb4015;
            local_4c = 0x409374a5;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xf7e604ea;
            local_4c = -0x6b686182;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x1bcc357;
            local_4c = 0x4a96793f;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x36f40675;
            local_4c = -0x3caa3f58;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xb0f85513;
            local_4c = 0x2a752013;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x1b30e279;
            local_4c = -0x43821323;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x8a93175e;
            local_4c = -0x39d39440;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x63dafb6f;
            local_4c = -0x687e1896;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xf3ba1e66;
            local_4c = -0x4f5a71c5;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x641fde95;
            local_4c = 0x297c940b;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x7874c807;
            local_4c = -0x6aedf1fd;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x1017d733;
            local_4c = -0x95a0d01;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0xdf851acf;
            local_4c = -0x6abfea91;
            FUN_007c5a50(&local_5c,&local_50);
            local_50 = (word *)0x2fdb567c;
            local_4c = 0x2167abfb;
          }
          goto LAB_005b3f73;
        }
        local_50 = (word *)0x3f7f2d6f;
        local_4c = -0x4387db07;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xd99610d2;
        local_4c = -0x139519d2;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x9c10ea2f;
        local_4c = 0x2929e6c7;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xaf3a9d6b;
        local_4c = 0x3f77f101;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x72274d9d;
        local_4c = -0x79818afe;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x89efd32a;
        local_4c = -0x7770a54e;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x80a77a7b;
        local_4c = -0x51c15ae0;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x1bcfa31f;
        local_4c = 0x7d640202;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xc2abe496;
        local_4c = 0x40c36cc3;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x8a590904;
        local_4c = 0x2584e684;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xeb45f210;
        local_4c = -0x162a4a99;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x1f571e0d;
        local_4c = 0x40d17965;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x7628b91f;
        local_4c = -0x138a5eb3;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x70e3ed4a;
        local_4c = 0x7ee7240c;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xd76e5ea0;
        local_4c = -0x4ac93da2;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xd4da8afe;
        local_4c = 0x2a9c303c;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0xec314373;
        local_4c = -0x12509251;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x96eca434;
        local_4c = 0x61f5113b;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x9fb1a087;
        local_4c = 0x281000c2;
        FUN_007c5a50(&local_5c,&local_50);
        local_50 = (word *)0x8a797d1;
      }
    }
LAB_005b3f6c:
    local_4c = 0;
  }
LAB_005b3f73:
  FUN_007c5a50(&local_5c,&local_50);
LAB_005b3f7f:
  local_48[0] = (undefined4 ****)((uint)local_48[0] & 0xffffff00);
  local_34 = 0xf;
  local_38 = 0;
  local_8._0_1_ = 1;
  iVar2 = local_58 - (int)local_5c >> 3;
  uVar3 = local_34;
  uVar7 = local_38;
  while (iVar2 = iVar2 + -1, local_38 = uVar7, local_34 = uVar3, -1 < iVar2) {
    uVar8 = *(uint *)((int)local_5c + iVar2 * 8);
    uVar1 = *(uint *)((int)local_5c + iVar2 * 8 + 4);
    if ((uVar1 != 0) || (7 < uVar8)) {
      uVar9 = __aulldiv(uVar8,uVar1,7,0);
      do {
        uVar3 = (uint)(uVar9 >> 0x20);
        uVar8 = (uint)uVar9;
        uVar10 = __aulldiv(uVar8,uVar3,7,0);
        uVar7 = (uint)(uVar10 >> 0x20);
        local_4c = uVar8 + (int)uVar10 * -7 + -1;
        puVar4 = (undefined4 *)FUN_00835000(local_30,&local_4c);
        local_8._0_1_ = 2;
        FUN_00438820(local_48,puVar4,0,0xffffffff);
        local_8._0_1_ = 1;
        if (0xf < local_1c) {
          operator_delete(local_30[0]);
        }
        uVar9 = uVar10 & 0xffffffff | (ulonglong)uVar7 << 0x20;
      } while ((uVar3 != 0) ||
              (uVar9 = uVar10 & 0xffffffff | (ulonglong)uVar7 << 0x20, uVar3 = local_34,
              uVar7 = local_38, 7 < uVar8));
    }
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 ****)((uint)local_30[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (uVar7 == 0) {
    local_20 = uVar7;
    /* WARNING: Ignoring partial resolution of indirect */
    local_30[0]._0_1_ = 0;
  }
  else {
    FUN_007d0230(local_30,uVar7,'\0');
  }
  iVar2 = 0;
  if (0 < (int)local_20) {
    do {
      ppppuVar5 = local_48;
      if (0xf < uVar3) {
        ppppuVar5 = local_48[0];
      }
      ppppuVar6 = local_30;
      if (0xf < local_1c) {
        ppppuVar6 = local_30[0];
      }
      *(undefined *)(iVar2 + (int)ppppuVar6) = *(undefined *)((int)ppppuVar5 + uVar7 + (-1 - iVar2))
      ;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_20);
  }
  FUN_005b2ef0(param_1,param_2,local_30);
  if (0xf < local_1c) {
    operator_delete(local_30[0]);
  }
  if (0xf < uVar3) {
    operator_delete(local_48[0]);
  }
  if (local_5c != (void *)0x0) {
    operator_delete(local_5c);
  }
  ExceptionList = local_10;
  FUN_00c5beba(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
