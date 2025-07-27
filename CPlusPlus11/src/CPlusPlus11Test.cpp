#include "Align.h"
#include "Attribute.h"
#include "Auto2decltype.h"
#include "Explicit.h"
#include "Forward_list.h"
#include "Literals.h"
#include "Packaged_task.h"
#include "Promise2future.h"
#include "Random.h"
#include "Regex.h"
#include "Thread_local.h"

void CPlusPlus11Test()
{
    AlignNameSpace::AlignExample();
    AttributeNameSpace::AttributeExample();
    Auto2decltypeNameSpace::Auto2decltypeExample();
    ExplicitNameSpace::ExplicitExample();
    Forward_listNameSpace::Forward_listExample();
    LiteralsNameSpace::LiteralsExample();
    Packaged_taskNameSpace::Packaged_taskExample();
    Promise2futureNameSpace::Promise2futureExample();
    RandomNameSpace::RandomExample();
    RegexNameSpace::RegexExample();
    Thread_localNameSpace::Thread_localExample();
}