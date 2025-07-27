#include "Any.h"
#include "Apply.h"
#include "As_const.h"
#include "Execution.h"
#include "Filesystem.h"
#include "Ifconstexpr.h"
#include "Inline.h"
#include "Literals.h"
#include "Make_from_tuple.h"
#include "Namespace.h"
#include "Nodiscard.h"
#include "Optional.h"
#include "String_view.h"
#include "Tuple_element.h"
#include "Tuple.h"
#include "Unary.h"
#include "Variant.h"
#include "Visit.h"

void CPlusPlus17Test()
{
    AnyNameSpace::AnyExample();
    ApplyNameSpace::ApplyExample();
    As_constNameSpace::As_constExample();
    ExecutionNameSpace::ExecutionExample();
    FilesystemNameSpace::FilesystemExample();
    IfconstexprNameSpace::IfconstexprExample();
    InlineNameSpace::InlineExample();
    LiteralsNameSpace::LiteralsExample();
    Make_from_tupleNameSpace::Make_from_tupleExample();
    NamespaceNameSpace::NamespaceExample();
    NodiscardNameSpace::NodiscardExample();
    OptionalNameSpace::OptionalExample();
    String_viewNameSpace::String_viewExample();
    Tuple_elementNameSpace::Tuple_elementExample();
    TupleNameSpace::TupleExample();
    UnaryNameSpace::UnaryExample();
    VariantNameSpace::VariantExample();
    VisitNameSpace::VisitExample();
}