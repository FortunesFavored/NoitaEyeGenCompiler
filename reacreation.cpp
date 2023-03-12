
#include <iostream>
#include <string>
#include <new>
using namespace std;

// What is the appropriate value that needs to be passed into "this"? the function doesnt work as is...
// Is this all in one class? If so "this" keywork might make more sense.
// Looks like this function takes values from pointers and moves them around in memory.
void lowestFunc (void * voidVar, unsigned int param_1) {
    cout << "Runing Lowest Func..." << endl;
    void * Var1;
    int Var2;
    void * _Dst;

    _Dst = (void *) 0x0;
    // goto TargetLine;
    cout << "don't skip this line" << endl;

    if (param_1 != 0) {
        if (param_1 < 0x20000000) {
            _Dst = operator new(param_1 * 8);
            if ( _Dst != (void *) 0x0 ) goto checkpoint1;
            cout << "bad memory allocation... which means something when wrong." << endl;
        }
        cout << "bad alloc call" << endl;
        std::bad_alloc();
    }
checkpoint1:
    cout << "Something happens..." << endl;
    // memmove(_Dst, * voidVar, * (int *) voidVar + 4 - (int) * voidVar & 0xfffffff8);

    Var1 = voidVar;
    cout << Var1 << endl;
    cout << (void *) 0x0 << endl;

    if (Var1 != (void *) 0x0) {
        operator delete(Var1);
    }

    * (void **) voidVar = _Dst;
    // * (void **)((int)voidVar + 8) = (void *)((int)_Dst + param_1 * 8);
    // * (void **)((int)voidVar + 4) = (void *)((int)_Dst + (Var2 - (int)Var1 >> 3) * 8);
    cout << * (void **) voidVar << endl;
    // cout << * (void **)((int)voidVar + 8) << endl;
    // cout << * (void **)((int)voidVar + 4) << endl;

    // TargetLine : cout << "goto working as intended..." << endl;

    return;
}

// The following is the second lowest function
void __thiscall handleVoidPointer(void *this,uint param_1)

{
  int *extraout_ECX;
  int extraout_EDX;
  int iVar1;
  uint uVar2;
  uint unaff_retaddr;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 <= (uint)(iVar1 - *(int *)((int)this + 4) >> 3)) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  if (0x1fffffffU - (*(int *)((int)this + 4) - *this >> 3) < param_1) {
    std::_Xlength_error("vector<T> too long");
    this = extraout_ECX;
    iVar1 = extraout_EDX;
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = iVar1 - *this >> 3;
  if (0x1fffffff - (uVar2 >> 1) < uVar2) {
    basicFunc(this,unaff_retaddr);
    return;
  }
  basicFunc(this,unaff_retaddr);
  return;
}

void __thiscall BetweenPairs(void * vPtr, undefined4 * param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
  if ((param_1 < puVar1) && (*this <= param_1)) {
    iVar3 = (int)param_1 - (int)*this >> 3;
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      handleVoidPointer(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
      iVar2 = *this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      handleVoidPointer(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return;
}


int main () {
    void * local_5c;
    local_5c = (void *)0x0;

    word * local_50;
    local_50 = (word *)0x5634505c;


    cout << "Running Main..." << endl;
    int x = 0x000f0000;
    cout << "Value:" << x << "\n" << x+1 << endl;
    void * voidVar;
    unsigned int uIntVar = 5;
    lowestFunc(voidVar, x);
    return 0;
}

