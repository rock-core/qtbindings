#include <qtscript_includes.h>

#include <smoke.h>
#include <qtscript_smoke.h>

namespace __smokeqtscript {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QBool
      switch(to) {
        case 1: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 2:   //QChildEvent
      switch(to) {
        case 2: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 3:   //QDateTime
      switch(to) {
        case 3: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 4:   //QEvent
      switch(to) {
        case 4: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 5:   //QFactoryInterface
      switch(to) {
        case 5: return (void*)(QFactoryInterface*)xptr;
        case 22: return (void*)(QScriptExtensionPlugin*)(QFactoryInterface*)xptr;
        case 21: return (void*)(QScriptExtensionInterface*)(QFactoryInterface*)xptr;
        default: return xptr;
      }
    case 7:   //QLatin1String
      switch(to) {
        case 7: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 8:   //QMetaObject
      switch(to) {
        case 8: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 9:   //QObject
      switch(to) {
        case 9: return (void*)(QObject*)xptr;
        case 22: return (void*)(QScriptExtensionPlugin*)(QObject*)xptr;
        case 17: return (void*)(QScriptEngine*)(QObject*)xptr;
        default: return xptr;
      }
    case 10:   //QRegExp
      switch(to) {
        case 10: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 11:   //QScriptClass
      switch(to) {
        case 11: return (void*)(QScriptClass*)xptr;
        default: return xptr;
      }
    case 12:   //QScriptClassPrivate
      switch(to) {
        case 12: return (void*)(QScriptClassPrivate*)xptr;
        default: return xptr;
      }
    case 13:   //QScriptClassPropertyIterator
      switch(to) {
        case 13: return (void*)(QScriptClassPropertyIterator*)xptr;
        default: return xptr;
      }
    case 14:   //QScriptClassPropertyIteratorPrivate
      switch(to) {
        case 14: return (void*)(QScriptClassPropertyIteratorPrivate*)xptr;
        default: return xptr;
      }
    case 15:   //QScriptContext
      switch(to) {
        case 15: return (void*)(QScriptContext*)xptr;
        default: return xptr;
      }
    case 16:   //QScriptContextInfo
      switch(to) {
        case 16: return (void*)(QScriptContextInfo*)xptr;
        default: return xptr;
      }
    case 17:   //QScriptEngine
      switch(to) {
        case 9: return (void*)(QObject*)(QScriptEngine*)xptr;
        case 17: return (void*)(QScriptEngine*)xptr;
        default: return xptr;
      }
    case 18:   //QScriptEngineAgent
      switch(to) {
        case 18: return (void*)(QScriptEngineAgent*)xptr;
        default: return xptr;
      }
    case 19:   //QScriptEngineAgentPrivate
      switch(to) {
        case 19: return (void*)(QScriptEngineAgentPrivate*)xptr;
        default: return xptr;
      }
    case 20:   //QScriptEnginePrivate
      switch(to) {
        case 20: return (void*)(QScriptEnginePrivate*)xptr;
        default: return xptr;
      }
    case 21:   //QScriptExtensionInterface
      switch(to) {
        case 5: return (void*)(QFactoryInterface*)(QScriptExtensionInterface*)xptr;
        case 21: return (void*)(QScriptExtensionInterface*)xptr;
        case 22: return (void*)(QScriptExtensionPlugin*)(QScriptExtensionInterface*)xptr;
        default: return xptr;
      }
    case 22:   //QScriptExtensionPlugin
      switch(to) {
        case 9: return (void*)(QObject*)(QScriptExtensionPlugin*)xptr;
        case 21: return (void*)(QScriptExtensionInterface*)(QScriptExtensionPlugin*)xptr;
        case 5: return (void*)(QFactoryInterface*)(QScriptExtensionPlugin*)xptr;
        case 22: return (void*)(QScriptExtensionPlugin*)xptr;
        default: return xptr;
      }
    case 23:   //QScriptProgram
      switch(to) {
        case 23: return (void*)(QScriptProgram*)xptr;
        default: return xptr;
      }
    case 24:   //QScriptString
      switch(to) {
        case 24: return (void*)(QScriptString*)xptr;
        default: return xptr;
      }
    case 25:   //QScriptSyntaxCheckResult
      switch(to) {
        case 25: return (void*)(QScriptSyntaxCheckResult*)xptr;
        default: return xptr;
      }
    case 26:   //QScriptValue
      switch(to) {
        case 26: return (void*)(QScriptValue*)xptr;
        default: return xptr;
      }
    case 27:   //QScriptValueIterator
      switch(to) {
        case 27: return (void*)(QScriptValueIterator*)xptr;
        default: return xptr;
      }
    case 28:   //QScriptable
      switch(to) {
        case 28: return (void*)(QScriptable*)xptr;
        default: return xptr;
      }
    case 29:   //QTimerEvent
      switch(to) {
        case 29: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 30:   //QVariant
      switch(to) {
        case 30: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    9, 0,	// 1: QObject
    5, 0,	// 3: QFactoryInterface
    9, 21, 0,	// 5: QObject, QScriptExtensionInterface
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QScriptEngine(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QScriptClass(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QScriptSyntaxCheckResult(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QScriptValue(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QScriptContext(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QScriptEngineAgent(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QScriptContextInfo(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptClass(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptClassPropertyIterator(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptContext(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptContextInfo(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptEngine(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptEngineAgent(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptExtensionInterface(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptExtensionPlugin(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptString(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptSyntaxCheckResult(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptValue(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptValueIterator(Smoke::Index, void*, Smoke::Stack);
void xcall_QScriptable(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QBool", true, 0, 0, 0, 0, 0 },	//1
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//2
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//3
    { "QEvent", true, 0, 0, 0, 0, 0 },	//4
    { "QFactoryInterface", true, 0, 0, 0, 0, 0 },	//5
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//6
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//7
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//8
    { "QObject", true, 0, 0, 0, 0, 0 },	//9
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//10
    { "QScriptClass", false, 0, xcall_QScriptClass, xenum_QScriptClass, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QScriptClass) },	//11
    { "QScriptClassPrivate", true, 0, 0, 0, 0, 0 },	//12
    { "QScriptClassPropertyIterator", false, 0, xcall_QScriptClassPropertyIterator, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QScriptClassPropertyIterator) },	//13
    { "QScriptClassPropertyIteratorPrivate", true, 0, 0, 0, 0, 0 },	//14
    { "QScriptContext", false, 0, xcall_QScriptContext, xenum_QScriptContext, 0, sizeof(QScriptContext) },	//15
    { "QScriptContextInfo", false, 0, xcall_QScriptContextInfo, xenum_QScriptContextInfo, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QScriptContextInfo) },	//16
    { "QScriptEngine", false, 1, xcall_QScriptEngine, xenum_QScriptEngine, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QScriptEngine) },	//17
    { "QScriptEngineAgent", false, 0, xcall_QScriptEngineAgent, xenum_QScriptEngineAgent, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QScriptEngineAgent) },	//18
    { "QScriptEngineAgentPrivate", true, 0, 0, 0, 0, 0 },	//19
    { "QScriptEnginePrivate", true, 0, 0, 0, 0, 0 },	//20
    { "QScriptExtensionInterface", false, 3, xcall_QScriptExtensionInterface, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QScriptExtensionInterface) },	//21
    { "QScriptExtensionPlugin", false, 5, xcall_QScriptExtensionPlugin, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QScriptExtensionPlugin) },	//22
    { "QScriptProgram", true, 0, 0, 0, 0, 0 },	//23
    { "QScriptString", false, 0, xcall_QScriptString, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QScriptString) },	//24
    { "QScriptSyntaxCheckResult", false, 0, xcall_QScriptSyntaxCheckResult, xenum_QScriptSyntaxCheckResult, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QScriptSyntaxCheckResult) },	//25
    { "QScriptValue", false, 0, xcall_QScriptValue, xenum_QScriptValue, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QScriptValue) },	//26
    { "QScriptValueIterator", false, 0, xcall_QScriptValueIterator, 0, Smoke::cf_constructor, sizeof(QScriptValueIterator) },	//27
    { "QScriptable", false, 0, xcall_QScriptable, 0, Smoke::cf_constructor, sizeof(QScriptable) },	//28
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//29
    { "QVariant", true, 0, 0, 0, 0, 0 },	//30
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QBool", 1, Smoke::t_class|Smoke::tf_stack },	//1
    { "QChildEvent*", 2, Smoke::t_class|Smoke::tf_ptr },	//2
    { "QDateTime", 3, Smoke::t_class|Smoke::tf_stack },	//3
    { "QEvent*", 4, Smoke::t_class|Smoke::tf_ptr },	//4
    { "QFlags<QScriptClass::QueryFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//5
    { "QFlags<QScriptValue::PropertyFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//6
    { "QList<QScriptValue>", 0, Smoke::t_voidp|Smoke::tf_stack },	//7
    { "QMetaObject::Call", 8, Smoke::t_enum|Smoke::tf_stack },	//8
    { "QObject*", 9, Smoke::t_class|Smoke::tf_ptr },	//9
    { "QRegExp", 10, Smoke::t_class|Smoke::tf_stack },	//10
    { "QRegExp&", 10, Smoke::t_class|Smoke::tf_ref },	//11
    { "QScriptClass*", 11, Smoke::t_class|Smoke::tf_ptr },	//12
    { "QScriptClass::Extension", 11, Smoke::t_enum|Smoke::tf_stack },	//13
    { "QScriptClass::QueryFlag", 11, Smoke::t_enum|Smoke::tf_stack },	//14
    { "QScriptClassPrivate&", 12, Smoke::t_class|Smoke::tf_ref },	//15
    { "QScriptClassPropertyIterator*", 13, Smoke::t_class|Smoke::tf_ptr },	//16
    { "QScriptClassPropertyIteratorPrivate&", 14, Smoke::t_class|Smoke::tf_ref },	//17
    { "QScriptContext*", 15, Smoke::t_class|Smoke::tf_ptr },	//18
    { "QScriptContext::Error", 15, Smoke::t_enum|Smoke::tf_stack },	//19
    { "QScriptContext::ExecutionState", 15, Smoke::t_enum|Smoke::tf_stack },	//20
    { "QScriptContextInfo&", 16, Smoke::t_class|Smoke::tf_ref },	//21
    { "QScriptContextInfo*", 16, Smoke::t_class|Smoke::tf_ptr },	//22
    { "QScriptContextInfo::FunctionType", 16, Smoke::t_enum|Smoke::tf_stack },	//23
    { "QScriptEngine*", 17, Smoke::t_class|Smoke::tf_ptr },	//24
    { "QScriptEngine::QObjectWrapOption", 17, Smoke::t_enum|Smoke::tf_stack },	//25
    { "QScriptEngine::ValueOwnership", 17, Smoke::t_enum|Smoke::tf_stack },	//26
    { "QScriptEngineAgent*", 18, Smoke::t_class|Smoke::tf_ptr },	//27
    { "QScriptEngineAgent::Extension", 18, Smoke::t_enum|Smoke::tf_stack },	//28
    { "QScriptEngineAgentPrivate&", 19, Smoke::t_class|Smoke::tf_ref },	//29
    { "QScriptEnginePrivate&", 20, Smoke::t_class|Smoke::tf_ref },	//30
    { "QScriptExtensionInterface*", 21, Smoke::t_class|Smoke::tf_ptr },	//31
    { "QScriptExtensionPlugin*", 22, Smoke::t_class|Smoke::tf_ptr },	//32
    { "QScriptString", 24, Smoke::t_class|Smoke::tf_stack },	//33
    { "QScriptString&", 24, Smoke::t_class|Smoke::tf_ref },	//34
    { "QScriptString*", 24, Smoke::t_class|Smoke::tf_ptr },	//35
    { "QScriptSyntaxCheckResult", 25, Smoke::t_class|Smoke::tf_stack },	//36
    { "QScriptSyntaxCheckResult&", 25, Smoke::t_class|Smoke::tf_ref },	//37
    { "QScriptSyntaxCheckResult*", 25, Smoke::t_class|Smoke::tf_ptr },	//38
    { "QScriptSyntaxCheckResult::State", 25, Smoke::t_enum|Smoke::tf_stack },	//39
    { "QScriptValue", 26, Smoke::t_class|Smoke::tf_stack },	//40
    { "QScriptValue&", 26, Smoke::t_class|Smoke::tf_ref },	//41
    { "QScriptValue(*)(QScriptContext*,QScriptEngine*)", 26, Smoke::t_class|Smoke::tf_stack },	//42
    { "QScriptValue(*)(QScriptContext*,QScriptEngine*,void*)", 26, Smoke::t_class|Smoke::tf_stack },	//43
    { "QScriptValue*", 26, Smoke::t_class|Smoke::tf_ptr },	//44
    { "QScriptValue::PropertyFlag", 26, Smoke::t_enum|Smoke::tf_stack },	//45
    { "QScriptValue::ResolveFlag", 26, Smoke::t_enum|Smoke::tf_stack },	//46
    { "QScriptValue::SpecialValue", 26, Smoke::t_enum|Smoke::tf_stack },	//47
    { "QScriptValueIterator&", 27, Smoke::t_class|Smoke::tf_ref },	//48
    { "QScriptValueIterator*", 27, Smoke::t_class|Smoke::tf_ptr },	//49
    { "QScriptable*", 28, Smoke::t_class|Smoke::tf_ptr },	//50
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//51
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//52
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//53
    { "QTimerEvent*", 29, Smoke::t_class|Smoke::tf_ptr },	//54
    { "QVariant", 30, Smoke::t_class|Smoke::tf_stack },	//55
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//56
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//57
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//58
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//59
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//60
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//61
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//62
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//63
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//64
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//65
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//66
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//67
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//68
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//69
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//70
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//71
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//72
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//73
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//74
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//75
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//76
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//77
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//78
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//79
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//80
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//81
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//82
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//83
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//84
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//85
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//86
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//87
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//88
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//89
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//90
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//91
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//92
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//93
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//94
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//95
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//96
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//97
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//98
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//99
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//100
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//101
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//102
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//103
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//104
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//105
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//106
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//107
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//108
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//109
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//110
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//111
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//112
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//113
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//114
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//115
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//116
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//117
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//118
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//119
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//120
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//121
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//122
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//123
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//124
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//125
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//126
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//127
    { "QtMsgType", 6, Smoke::t_enum|Smoke::tf_stack },	//128
    { "QtValidLicenseForActiveQtModule", 6, Smoke::t_enum|Smoke::tf_stack },	//129
    { "QtValidLicenseForCoreModule", 6, Smoke::t_enum|Smoke::tf_stack },	//130
    { "QtValidLicenseForDBusModule", 6, Smoke::t_enum|Smoke::tf_stack },	//131
    { "QtValidLicenseForDeclarativeModule", 6, Smoke::t_enum|Smoke::tf_stack },	//132
    { "QtValidLicenseForGuiModule", 6, Smoke::t_enum|Smoke::tf_stack },	//133
    { "QtValidLicenseForHelpModule", 6, Smoke::t_enum|Smoke::tf_stack },	//134
    { "QtValidLicenseForMultimediaModule", 6, Smoke::t_enum|Smoke::tf_stack },	//135
    { "QtValidLicenseForNetworkModule", 6, Smoke::t_enum|Smoke::tf_stack },	//136
    { "QtValidLicenseForOpenGLModule", 6, Smoke::t_enum|Smoke::tf_stack },	//137
    { "QtValidLicenseForOpenVGModule", 6, Smoke::t_enum|Smoke::tf_stack },	//138
    { "QtValidLicenseForQt3SupportLightModule", 6, Smoke::t_enum|Smoke::tf_stack },	//139
    { "QtValidLicenseForQt3SupportModule", 6, Smoke::t_enum|Smoke::tf_stack },	//140
    { "QtValidLicenseForScriptModule", 6, Smoke::t_enum|Smoke::tf_stack },	//141
    { "QtValidLicenseForScriptToolsModule", 6, Smoke::t_enum|Smoke::tf_stack },	//142
    { "QtValidLicenseForSqlModule", 6, Smoke::t_enum|Smoke::tf_stack },	//143
    { "QtValidLicenseForSvgModule", 6, Smoke::t_enum|Smoke::tf_stack },	//144
    { "QtValidLicenseForTestModule", 6, Smoke::t_enum|Smoke::tf_stack },	//145
    { "QtValidLicenseForXmlModule", 6, Smoke::t_enum|Smoke::tf_stack },	//146
    { "QtValidLicenseForXmlPatternsModule", 6, Smoke::t_enum|Smoke::tf_stack },	//147
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//148
    { "bool*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//149
    { "const QDateTime&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//150
    { "const QFlags<QScriptEngine::QObjectWrapOption>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//151
    { "const QFlags<QScriptValue::PropertyFlag>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//152
    { "const QFlags<QScriptValue::ResolveFlag>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//153
    { "const QLatin1String&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//154
    { "const QList<QScriptValue>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//155
    { "const QMetaObject&", 8, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//156
    { "const QMetaObject*", 8, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//157
    { "const QRegExp&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//158
    { "const QScriptContext*", 15, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//159
    { "const QScriptContextInfo&", 16, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//160
    { "const QScriptExtensionInterface&", 21, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//161
    { "const QScriptProgram&", 23, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//162
    { "const QScriptString&", 24, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//163
    { "const QScriptSyntaxCheckResult&", 25, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//164
    { "const QScriptValue&", 26, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//165
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//166
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//167
    { "const QVariant&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//168
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//169
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//170
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//171
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//172
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//173
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//174
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//175
    { "unsigned int*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//176
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//177
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//178
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//179
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//180
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    9, 169, 165, 165, 0,	//1  QObject*, const char*, const QScriptValue&, const QScriptValue&
    4, 0,	//6  QEvent*
    9, 4, 0,	//8  QObject*, QEvent*
    54, 0,	//11  QTimerEvent*
    2, 0,	//13  QChildEvent*
    169, 0,	//15  const char*
    24, 0,	//17  QScriptEngine*
    165, 163, 5, 176, 0,	//19  const QScriptValue&, const QScriptString&, QFlags<QScriptClass::QueryFlag>, unsigned int*
    165, 163, 175, 0,	//24  const QScriptValue&, const QScriptString&, unsigned int
    41, 163, 175, 165, 0,	//28  QScriptValue&, const QScriptString&, unsigned int, const QScriptValue&
    165, 0,	//33  const QScriptValue&
    13, 0,	//35  QScriptClass::Extension
    13, 168, 0,	//37  QScriptClass::Extension, const QVariant&
    24, 15, 0,	//40  QScriptEngine*, QScriptClassPrivate&
    165, 17, 0,	//43  const QScriptValue&, QScriptClassPropertyIteratorPrivate&
    172, 0,	//46  int
    19, 166, 0,	//48  QScriptContext::Error, const QString&
    166, 0,	//51  const QString&
    159, 0,	//53  const QScriptContext*
    160, 0,	//55  const QScriptContextInfo&
    169, 169, 0,	//57  const char*, const char*
    169, 169, 172, 0,	//60  const char*, const char*, int
    8, 172, 179, 0,	//64  QMetaObject::Call, int, void**
    9, 0,	//68  QObject*
    166, 166, 172, 0,	//70  const QString&, const QString&, int
    162, 0,	//74  const QScriptProgram&
    42, 172, 0,	//76  QScriptValue(*)(QScriptContext*,QScriptEngine*), int
    42, 165, 172, 0,	//79  QScriptValue(*)(QScriptContext*,QScriptEngine*), const QScriptValue&, int
    43, 178, 0,	//83  QScriptValue(*)(QScriptContext*,QScriptEngine*,void*), void*
    168, 0,	//86  const QVariant&
    165, 168, 0,	//88  const QScriptValue&, const QVariant&
    158, 0,	//91  const QRegExp&
    12, 165, 0,	//93  QScriptClass*, const QScriptValue&
    175, 0,	//96  unsigned int
    166, 166, 0,	//98  const QString&, const QString&
    171, 0,	//101  double
    150, 0,	//103  const QDateTime&
    9, 26, 151, 0,	//105  QObject*, QScriptEngine::ValueOwnership, const QFlags<QScriptEngine::QObjectWrapOption>&
    165, 9, 26, 151, 0,	//109  const QScriptValue&, QObject*, QScriptEngine::ValueOwnership, const QFlags<QScriptEngine::QObjectWrapOption>&
    157, 165, 0,	//114  const QMetaObject*, const QScriptValue&
    172, 165, 0,	//117  int, const QScriptValue&
    27, 0,	//120  QScriptEngineAgent*
    174, 0,	//122  long long
    30, 9, 0,	//124  QScriptEnginePrivate&, QObject*
    42, 0,	//127  QScriptValue(*)(QScriptContext*,QScriptEngine*)
    42, 165, 0,	//129  QScriptValue(*)(QScriptContext*,QScriptEngine*), const QScriptValue&
    12, 0,	//132  QScriptClass*
    9, 26, 0,	//134  QObject*, QScriptEngine::ValueOwnership
    165, 9, 0,	//137  const QScriptValue&, QObject*
    165, 9, 26, 0,	//140  const QScriptValue&, QObject*, QScriptEngine::ValueOwnership
    157, 0,	//144  const QMetaObject*
    30, 0,	//146  QScriptEnginePrivate&
    174, 166, 166, 172, 0,	//148  long long, const QString&, const QString&, int
    174, 165, 0,	//153  long long, const QScriptValue&
    174, 172, 172, 0,	//156  long long, int, int
    174, 165, 148, 0,	//160  long long, const QScriptValue&, bool
    28, 0,	//164  QScriptEngineAgent::Extension
    28, 168, 0,	//166  QScriptEngineAgent::Extension, const QVariant&
    29, 24, 0,	//169  QScriptEngineAgentPrivate&, QScriptEngine*
    166, 24, 0,	//172  const QString&, QScriptEngine*
    161, 0,	//175  const QScriptExtensionInterface&
    163, 0,	//177  const QScriptString&
    149, 0,	//179  bool*
    164, 0,	//181  const QScriptSyntaxCheckResult&
    24, 47, 0,	//183  QScriptEngine*, QScriptValue::SpecialValue
    24, 148, 0,	//186  QScriptEngine*, bool
    24, 172, 0,	//189  QScriptEngine*, int
    24, 175, 0,	//192  QScriptEngine*, unsigned int
    24, 171, 0,	//195  QScriptEngine*, double
    24, 166, 0,	//198  QScriptEngine*, const QString&
    47, 0,	//201  QScriptValue::SpecialValue
    148, 0,	//203  bool
    154, 0,	//205  const QLatin1String&
    166, 153, 0,	//207  const QString&, const QFlags<QScriptValue::ResolveFlag>&
    166, 165, 152, 0,	//210  const QString&, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&
    175, 153, 0,	//214  unsigned int, const QFlags<QScriptValue::ResolveFlag>&
    175, 165, 152, 0,	//217  unsigned int, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&
    163, 153, 0,	//221  const QScriptString&, const QFlags<QScriptValue::ResolveFlag>&
    163, 165, 152, 0,	//224  const QScriptString&, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&
    165, 155, 0,	//228  const QScriptValue&, const QList<QScriptValue>&
    165, 165, 0,	//231  const QScriptValue&, const QScriptValue&
    155, 0,	//234  const QList<QScriptValue>&
    166, 165, 0,	//236  const QString&, const QScriptValue&
    175, 165, 0,	//239  unsigned int, const QScriptValue&
    163, 165, 0,	//242  const QScriptString&, const QScriptValue&
    41, 0,	//245  QScriptValue&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "AutoCreateDynamicProperties",	//1
    "AutoOwnership",	//2
    "Callable",	//3
    "DebuggerInvocationRequest",	//4
    "Error",	//5
    "ExceptionState",	//6
    "ExcludeChildObjects",	//7
    "ExcludeDeleteLater",	//8
    "ExcludeSlots",	//9
    "ExcludeSuperClassContents",	//10
    "ExcludeSuperClassMethods",	//11
    "ExcludeSuperClassProperties",	//12
    "HandlesReadAccess",	//13
    "HandlesWriteAccess",	//14
    "HasInstance",	//15
    "Intermediate",	//16
    "KeepExistingFlags",	//17
    "LicensedActiveQt",	//18
    "LicensedCore",	//19
    "LicensedDBus",	//20
    "LicensedDeclarative",	//21
    "LicensedGui",	//22
    "LicensedHelp",	//23
    "LicensedMultimedia",	//24
    "LicensedNetwork",	//25
    "LicensedOpenGL",	//26
    "LicensedOpenVG",	//27
    "LicensedQt3Support",	//28
    "LicensedQt3SupportLight",	//29
    "LicensedScript",	//30
    "LicensedScriptTools",	//31
    "LicensedSql",	//32
    "LicensedSvg",	//33
    "LicensedTest",	//34
    "LicensedXml",	//35
    "LicensedXmlPatterns",	//36
    "NativeFunction",	//37
    "NormalState",	//38
    "NullValue",	//39
    "PreferExistingWrapperObject",	//40
    "PropertyGetter",	//41
    "PropertySetter",	//42
    "QObjectMember",	//43
    "QScriptClass",	//44
    "QScriptClass#",	//45
    "QScriptClass##",	//46
    "QScriptClassPropertyIterator",	//47
    "QScriptClassPropertyIterator#",	//48
    "QScriptClassPropertyIterator##",	//49
    "QScriptContextInfo",	//50
    "QScriptContextInfo#",	//51
    "QScriptEngine",	//52
    "QScriptEngine#",	//53
    "QScriptEngine##",	//54
    "QScriptEngineAgent",	//55
    "QScriptEngineAgent#",	//56
    "QScriptEngineAgent##",	//57
    "QScriptExtensionInterface",	//58
    "QScriptExtensionInterface#",	//59
    "QScriptExtensionPlugin",	//60
    "QScriptExtensionPlugin#",	//61
    "QScriptString",	//62
    "QScriptString#",	//63
    "QScriptSyntaxCheckResult",	//64
    "QScriptSyntaxCheckResult#",	//65
    "QScriptValue",	//66
    "QScriptValue#",	//67
    "QScriptValue#$",	//68
    "QScriptValue$",	//69
    "QScriptValueIterator",	//70
    "QScriptValueIterator#",	//71
    "QScriptable",	//72
    "Q_COMPLEX_TYPE",	//73
    "Q_DUMMY_TYPE",	//74
    "Q_MOVABLE_TYPE",	//75
    "Q_PRIMITIVE_TYPE",	//76
    "Q_STATIC_TYPE",	//77
    "QtCriticalMsg",	//78
    "QtDebugMsg",	//79
    "QtFatalMsg",	//80
    "QtFunction",	//81
    "QtOwnership",	//82
    "QtPropertyFunction",	//83
    "QtSystemMsg",	//84
    "QtWarningMsg",	//85
    "RangeError",	//86
    "ReadOnly",	//87
    "ReferenceError",	//88
    "ResolveFull",	//89
    "ResolveLocal",	//90
    "ResolvePrototype",	//91
    "ResolveScope",	//92
    "ScriptFunction",	//93
    "ScriptOwnership",	//94
    "SkipInEnumeration",	//95
    "SkipMethodsInEnumeration",	//96
    "SyntaxError",	//97
    "TypeError",	//98
    "URIError",	//99
    "UndefinedValue",	//100
    "Undeletable",	//101
    "UnknownError",	//102
    "UserRange",	//103
    "Valid",	//104
    "abortEvaluation",	//105
    "abortEvaluation#",	//106
    "activationObject",	//107
    "agent",	//108
    "argument",	//109
    "argument$",	//110
    "argumentCount",	//111
    "argumentsObject",	//112
    "availableExtensions",	//113
    "backtrace",	//114
    "call",	//115
    "call#",	//116
    "call##",	//117
    "call#?",	//118
    "callee",	//119
    "canEvaluate",	//120
    "canEvaluate$",	//121
    "checkSyntax",	//122
    "checkSyntax$",	//123
    "childEvent",	//124
    "clearExceptions",	//125
    "collectGarbage",	//126
    "columnNumber",	//127
    "connectNotify",	//128
    "construct",	//129
    "construct#",	//130
    "construct?",	//131
    "context",	//132
    "contextPop",	//133
    "contextPush",	//134
    "currentContext",	//135
    "customEvent",	//136
    "data",	//137
    "defaultPrototype",	//138
    "defaultPrototype$",	//139
    "disconnectNotify",	//140
    "engine",	//141
    "equals",	//142
    "equals#",	//143
    "errorColumnNumber",	//144
    "errorLineNumber",	//145
    "errorMessage",	//146
    "evaluate",	//147
    "evaluate#",	//148
    "evaluate$",	//149
    "evaluate$$",	//150
    "evaluate$$$",	//151
    "event",	//152
    "eventFilter",	//153
    "exceptionCatch",	//154
    "exceptionCatch$#",	//155
    "exceptionThrow",	//156
    "exceptionThrow$#$",	//157
    "extension",	//158
    "extension$",	//159
    "extension$#",	//160
    "fileName",	//161
    "flags",	//162
    "functionEndLineNumber",	//163
    "functionEntry",	//164
    "functionEntry$",	//165
    "functionExit",	//166
    "functionExit$#",	//167
    "functionMetaIndex",	//168
    "functionName",	//169
    "functionParameterNames",	//170
    "functionStartLineNumber",	//171
    "functionType",	//172
    "globalObject",	//173
    "hasNext",	//174
    "hasPrevious",	//175
    "hasUncaughtException",	//176
    "id",	//177
    "importExtension",	//178
    "importExtension$",	//179
    "importedExtensions",	//180
    "initialize",	//181
    "initialize$#",	//182
    "installTranslatorFunctions",	//183
    "installTranslatorFunctions#",	//184
    "instanceOf",	//185
    "instanceOf#",	//186
    "isArray",	//187
    "isBool",	//188
    "isBoolean",	//189
    "isCalledAsConstructor",	//190
    "isDate",	//191
    "isError",	//192
    "isEvaluating",	//193
    "isFunction",	//194
    "isNull",	//195
    "isNumber",	//196
    "isObject",	//197
    "isQMetaObject",	//198
    "isQObject",	//199
    "isRegExp",	//200
    "isString",	//201
    "isUndefined",	//202
    "isValid",	//203
    "isVariant",	//204
    "keys",	//205
    "lessThan",	//206
    "lessThan#",	//207
    "lineNumber",	//208
    "metaObject",	//209
    "name",	//210
    "newActivationObject",	//211
    "newArray",	//212
    "newArray$",	//213
    "newDate",	//214
    "newDate#",	//215
    "newDate$",	//216
    "newFunction",	//217
    "newFunction#",	//218
    "newFunction##",	//219
    "newFunction##$",	//220
    "newFunction#$",	//221
    "newIterator",	//222
    "newIterator#",	//223
    "newObject",	//224
    "newObject#",	//225
    "newObject##",	//226
    "newQMetaObject",	//227
    "newQMetaObject#",	//228
    "newQMetaObject##",	//229
    "newQObject",	//230
    "newQObject#",	//231
    "newQObject##",	//232
    "newQObject##$",	//233
    "newQObject##$#",	//234
    "newQObject#$",	//235
    "newQObject#$#",	//236
    "newRegExp",	//237
    "newRegExp#",	//238
    "newRegExp$$",	//239
    "newVariant",	//240
    "newVariant#",	//241
    "newVariant##",	//242
    "next",	//243
    "nullValue",	//244
    "object",	//245
    "objectById",	//246
    "objectById$",	//247
    "objectId",	//248
    "operator QString",	//249
    "operator!=",	//250
    "operator!=#",	//251
    "operator=",	//252
    "operator=#",	//253
    "operator==",	//254
    "operator==#",	//255
    "parentContext",	//256
    "popContext",	//257
    "popScope",	//258
    "positionChange",	//259
    "positionChange$$$",	//260
    "previous",	//261
    "processEventsInterval",	//262
    "property",	//263
    "property#",	//264
    "property##",	//265
    "property##$",	//266
    "property$",	//267
    "property$#",	//268
    "propertyFlags",	//269
    "propertyFlags#",	//270
    "propertyFlags##",	//271
    "propertyFlags##$",	//272
    "propertyFlags$",	//273
    "propertyFlags$#",	//274
    "prototype",	//275
    "pushContext",	//276
    "pushScope",	//277
    "pushScope#",	//278
    "qScriptConnect",	//279
    "qScriptConnect#$##",	//280
    "qt_metacall",	//281
    "qt_metacall$$?",	//282
    "qt_metacast",	//283
    "qt_metacast$",	//284
    "queryProperty",	//285
    "queryProperty##$$",	//286
    "remove",	//287
    "reportAdditionalMemoryCost",	//288
    "reportAdditionalMemoryCost$",	//289
    "returnValue",	//290
    "scope",	//291
    "scopeChain",	//292
    "scriptClass",	//293
    "scriptId",	//294
    "scriptLoad",	//295
    "scriptLoad$$$$",	//296
    "scriptName",	//297
    "scriptUnload",	//298
    "scriptUnload$",	//299
    "setActivationObject",	//300
    "setActivationObject#",	//301
    "setAgent",	//302
    "setAgent#",	//303
    "setData",	//304
    "setData#",	//305
    "setDefaultPrototype",	//306
    "setDefaultPrototype$#",	//307
    "setGlobalObject",	//308
    "setGlobalObject#",	//309
    "setProcessEventsInterval",	//310
    "setProcessEventsInterval$",	//311
    "setProperty",	//312
    "setProperty##",	//313
    "setProperty###",	//314
    "setProperty##$#",	//315
    "setProperty$#",	//316
    "setProperty$##",	//317
    "setPrototype",	//318
    "setPrototype#",	//319
    "setReturnValue",	//320
    "setReturnValue#",	//321
    "setScope",	//322
    "setScope#",	//323
    "setScriptClass",	//324
    "setScriptClass#",	//325
    "setThisObject",	//326
    "setThisObject#",	//327
    "setValue",	//328
    "setValue#",	//329
    "setupPackage",	//330
    "setupPackage$#",	//331
    "signalHandlerException",	//332
    "signalHandlerException#",	//333
    "state",	//334
    "staticMetaObject",	//335
    "strictlyEquals",	//336
    "strictlyEquals#",	//337
    "supportsExtension",	//338
    "supportsExtension$",	//339
    "thisObject",	//340
    "throwError",	//341
    "throwError$",	//342
    "throwError$$",	//343
    "throwValue",	//344
    "throwValue#",	//345
    "timerEvent",	//346
    "toArrayIndex",	//347
    "toArrayIndex$",	//348
    "toBack",	//349
    "toBool",	//350
    "toBoolean",	//351
    "toDateTime",	//352
    "toFront",	//353
    "toInt32",	//354
    "toInteger",	//355
    "toNumber",	//356
    "toObject",	//357
    "toObject#",	//358
    "toQMetaObject",	//359
    "toQObject",	//360
    "toRegExp",	//361
    "toString",	//362
    "toStringHandle",	//363
    "toStringHandle$",	//364
    "toUInt16",	//365
    "toUInt32",	//366
    "toVariant",	//367
    "tr",	//368
    "tr$",	//369
    "tr$$",	//370
    "tr$$$",	//371
    "trUtf8",	//372
    "trUtf8$",	//373
    "trUtf8$$",	//374
    "trUtf8$$$",	//375
    "uncaughtException",	//376
    "uncaughtExceptionBacktrace",	//377
    "uncaughtExceptionLineNumber",	//378
    "undefinedValue",	//379
    "value",	//380
    "~QScriptClass",	//381
    "~QScriptClassPropertyIterator",	//382
    "~QScriptContext",	//383
    "~QScriptContextInfo",	//384
    "~QScriptEngine",	//385
    "~QScriptEngineAgent",	//386
    "~QScriptExtensionInterface",	//387
    "~QScriptExtensionPlugin",	//388
    "~QScriptString",	//389
    "~QScriptSyntaxCheckResult",	//390
    "~QScriptValue",	//391
    "~QScriptValueIterator",	//392
    "~QScriptable",	//393
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {5, 205, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 52, 0},	//1 QFactoryInterface::keys() const [pure virtual]
    {6, 279, 1, 4, Smoke::mf_static, 148, 1},	//2 QGlobalSpace::qScriptConnect(QObject*, const char*, const QScriptValue&, const QScriptValue&)
    {6, 73, 0, 0, Smoke::mf_static|Smoke::mf_enum, 173, 2},	//3 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {6, 76, 0, 0, Smoke::mf_static|Smoke::mf_enum, 173, 3},	//4 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {6, 77, 0, 0, Smoke::mf_static|Smoke::mf_enum, 173, 4},	//5 QGlobalSpace::Q_STATIC_TYPE (enum)
    {6, 75, 0, 0, Smoke::mf_static|Smoke::mf_enum, 173, 5},	//6 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {6, 74, 0, 0, Smoke::mf_static|Smoke::mf_enum, 173, 6},	//7 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {6, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 133, 7},	//8 QGlobalSpace::LicensedGui (enum)
    {6, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 8},	//9 QGlobalSpace::LicensedXml (enum)
    {6, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 9},	//10 QGlobalSpace::LicensedQt3SupportLight (enum)
    {6, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 10},	//11 QGlobalSpace::LicensedScript (enum)
    {6, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 138, 11},	//12 QGlobalSpace::LicensedOpenVG (enum)
    {6, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 131, 12},	//13 QGlobalSpace::LicensedDBus (enum)
    {6, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 13},	//14 QGlobalSpace::LicensedTest (enum)
    {6, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 129, 14},	//15 QGlobalSpace::LicensedActiveQt (enum)
    {6, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 15},	//16 QGlobalSpace::LicensedScriptTools (enum)
    {6, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 16},	//17 QGlobalSpace::LicensedSvg (enum)
    {6, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 17},	//18 QGlobalSpace::LicensedDeclarative (enum)
    {6, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 143, 18},	//19 QGlobalSpace::LicensedSql (enum)
    {6, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 137, 19},	//20 QGlobalSpace::LicensedOpenGL (enum)
    {6, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 130, 20},	//21 QGlobalSpace::LicensedCore (enum)
    {6, 79, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 21},	//22 QGlobalSpace::QtDebugMsg (enum)
    {6, 85, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 22},	//23 QGlobalSpace::QtWarningMsg (enum)
    {6, 78, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 23},	//24 QGlobalSpace::QtCriticalMsg (enum)
    {6, 80, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 24},	//25 QGlobalSpace::QtFatalMsg (enum)
    {6, 84, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 25},	//26 QGlobalSpace::QtSystemMsg (enum)
    {6, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 26},	//27 QGlobalSpace::LicensedHelp (enum)
    {6, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 27},	//28 QGlobalSpace::LicensedMultimedia (enum)
    {6, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 28},	//29 QGlobalSpace::LicensedQt3Support (enum)
    {6, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 147, 29},	//30 QGlobalSpace::LicensedXmlPatterns (enum)
    {6, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 136, 30},	//31 QGlobalSpace::LicensedNetwork (enum)
    {9, 152, 6, 1, Smoke::mf_virtual, 148, 0},	//32 QObject::event(QEvent*)
    {9, 153, 8, 2, Smoke::mf_virtual, 148, 0},	//33 QObject::eventFilter(QObject*, QEvent*)
    {9, 346, 11, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//34 QObject::timerEvent(QTimerEvent*)
    {9, 124, 13, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//35 QObject::childEvent(QChildEvent*)
    {9, 136, 6, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//36 QObject::customEvent(QEvent*)
    {9, 128, 15, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//37 QObject::connectNotify(const char*)
    {9, 140, 15, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//38 QObject::disconnectNotify(const char*)
    {11, 44, 17, 1, Smoke::mf_ctor, 12, 1},	//39 QScriptClass::QScriptClass(QScriptEngine*)
    {11, 141, 0, 0, Smoke::mf_const, 24, 2},	//40 QScriptClass::engine() const
    {11, 285, 19, 4, Smoke::mf_virtual, 5, 3},	//41 QScriptClass::queryProperty(const QScriptValue&, const QScriptString&, QFlags<QScriptClass::QueryFlag>, unsigned int*)
    {11, 263, 24, 3, Smoke::mf_virtual, 40, 4},	//42 QScriptClass::property(const QScriptValue&, const QScriptString&, unsigned int)
    {11, 312, 28, 4, Smoke::mf_virtual, 0, 5},	//43 QScriptClass::setProperty(QScriptValue&, const QScriptString&, unsigned int, const QScriptValue&)
    {11, 269, 24, 3, Smoke::mf_virtual, 6, 6},	//44 QScriptClass::propertyFlags(const QScriptValue&, const QScriptString&, unsigned int)
    {11, 222, 33, 1, Smoke::mf_virtual, 16, 7},	//45 QScriptClass::newIterator(const QScriptValue&)
    {11, 275, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 40, 8},	//46 QScriptClass::prototype() const
    {11, 210, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 51, 9},	//47 QScriptClass::name() const
    {11, 338, 35, 1, Smoke::mf_const|Smoke::mf_virtual, 148, 10},	//48 QScriptClass::supportsExtension(QScriptClass::Extension) const
    {11, 158, 37, 2, Smoke::mf_virtual, 55, 11},	//49 QScriptClass::extension(QScriptClass::Extension, const QVariant&)
    {11, 44, 40, 2, Smoke::mf_ctor|Smoke::mf_protected, 12, 12},	//50 QScriptClass::QScriptClass(QScriptEngine*, QScriptClassPrivate&)
    {11, 158, 35, 1, 0, 55, 13},	//51 QScriptClass::extension(QScriptClass::Extension)
    {11, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 14, 14},	//52 QScriptClass::HandlesReadAccess (enum)
    {11, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 14, 15},	//53 QScriptClass::HandlesWriteAccess (enum)
    {11, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 13, 16},	//54 QScriptClass::Callable (enum)
    {11, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 13, 17},	//55 QScriptClass::HasInstance (enum)
    {11, 381, 0, 0, Smoke::mf_dtor, 0, 18 },	//56 QScriptClass::~QScriptClass()
    {13, 47, 33, 1, Smoke::mf_ctor|Smoke::mf_protected, 16, 1},	//57 QScriptClassPropertyIterator::QScriptClassPropertyIterator(const QScriptValue&)
    {13, 245, 0, 0, Smoke::mf_const, 40, 2},	//58 QScriptClassPropertyIterator::object() const
    {13, 174, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 148, 3},	//59 QScriptClassPropertyIterator::hasNext() const [pure virtual]
    {13, 243, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 4},	//60 QScriptClassPropertyIterator::next() [pure virtual]
    {13, 175, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 148, 5},	//61 QScriptClassPropertyIterator::hasPrevious() const [pure virtual]
    {13, 261, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 6},	//62 QScriptClassPropertyIterator::previous() [pure virtual]
    {13, 353, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 7},	//63 QScriptClassPropertyIterator::toFront() [pure virtual]
    {13, 349, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 8},	//64 QScriptClassPropertyIterator::toBack() [pure virtual]
    {13, 210, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 33, 9},	//65 QScriptClassPropertyIterator::name() const [pure virtual]
    {13, 177, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 175, 10},	//66 QScriptClassPropertyIterator::id() const
    {13, 162, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 6, 11},	//67 QScriptClassPropertyIterator::flags() const
    {13, 47, 43, 2, Smoke::mf_ctor|Smoke::mf_protected, 16, 12},	//68 QScriptClassPropertyIterator::QScriptClassPropertyIterator(const QScriptValue&, QScriptClassPropertyIteratorPrivate&)
    {13, 382, 0, 0, Smoke::mf_dtor, 0, 13 },	//69 QScriptClassPropertyIterator::~QScriptClassPropertyIterator()
    {15, 256, 0, 0, Smoke::mf_const, 18, 1},	//70 QScriptContext::parentContext() const
    {15, 141, 0, 0, Smoke::mf_const, 24, 2},	//71 QScriptContext::engine() const
    {15, 334, 0, 0, Smoke::mf_const, 20, 3},	//72 QScriptContext::state() const
    {15, 119, 0, 0, Smoke::mf_const, 40, 4},	//73 QScriptContext::callee() const
    {15, 111, 0, 0, Smoke::mf_const, 172, 5},	//74 QScriptContext::argumentCount() const
    {15, 109, 46, 1, Smoke::mf_const, 40, 6},	//75 QScriptContext::argument(int) const
    {15, 112, 0, 0, Smoke::mf_const, 40, 7},	//76 QScriptContext::argumentsObject() const
    {15, 292, 0, 0, Smoke::mf_const, 7, 8},	//77 QScriptContext::scopeChain() const
    {15, 277, 33, 1, 0, 0, 9},	//78 QScriptContext::pushScope(const QScriptValue&)
    {15, 258, 0, 0, 0, 40, 10},	//79 QScriptContext::popScope()
    {15, 290, 0, 0, Smoke::mf_const, 40, 11},	//80 QScriptContext::returnValue() const
    {15, 320, 33, 1, 0, 0, 12},	//81 QScriptContext::setReturnValue(const QScriptValue&)
    {15, 107, 0, 0, Smoke::mf_const, 40, 13},	//82 QScriptContext::activationObject() const
    {15, 300, 33, 1, 0, 0, 14},	//83 QScriptContext::setActivationObject(const QScriptValue&)
    {15, 340, 0, 0, Smoke::mf_const, 40, 15},	//84 QScriptContext::thisObject() const
    {15, 326, 33, 1, 0, 0, 16},	//85 QScriptContext::setThisObject(const QScriptValue&)
    {15, 190, 0, 0, Smoke::mf_const, 148, 17},	//86 QScriptContext::isCalledAsConstructor() const
    {15, 344, 33, 1, 0, 40, 18},	//87 QScriptContext::throwValue(const QScriptValue&)
    {15, 341, 48, 2, 0, 40, 19},	//88 QScriptContext::throwError(QScriptContext::Error, const QString&)
    {15, 341, 51, 1, 0, 40, 20},	//89 QScriptContext::throwError(const QString&)
    {15, 114, 0, 0, Smoke::mf_const, 52, 21},	//90 QScriptContext::backtrace() const
    {15, 362, 0, 0, Smoke::mf_const, 51, 22},	//91 QScriptContext::toString() const
    {15, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 20, 23},	//92 QScriptContext::NormalState (enum)
    {15, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 20, 24},	//93 QScriptContext::ExceptionState (enum)
    {15, 102, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 25},	//94 QScriptContext::UnknownError (enum)
    {15, 88, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 26},	//95 QScriptContext::ReferenceError (enum)
    {15, 97, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 27},	//96 QScriptContext::SyntaxError (enum)
    {15, 98, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 28},	//97 QScriptContext::TypeError (enum)
    {15, 86, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 29},	//98 QScriptContext::RangeError (enum)
    {15, 99, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 30},	//99 QScriptContext::URIError (enum)
    {15, 383, 0, 0, Smoke::mf_dtor, 0, 31 },	//100 QScriptContext::~QScriptContext()
    {16, 50, 53, 1, Smoke::mf_ctor, 22, 1},	//101 QScriptContextInfo::QScriptContextInfo(const QScriptContext*)
    {16, 50, 55, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 22, 2},	//102 QScriptContextInfo::QScriptContextInfo(const QScriptContextInfo&)
    {16, 50, 0, 0, Smoke::mf_ctor, 22, 3},	//103 QScriptContextInfo::QScriptContextInfo()
    {16, 252, 55, 1, 0, 21, 4},	//104 QScriptContextInfo::operator=(const QScriptContextInfo&)
    {16, 195, 0, 0, Smoke::mf_const, 148, 5},	//105 QScriptContextInfo::isNull() const
    {16, 294, 0, 0, Smoke::mf_const, 174, 6},	//106 QScriptContextInfo::scriptId() const
    {16, 161, 0, 0, Smoke::mf_const, 51, 7},	//107 QScriptContextInfo::fileName() const
    {16, 208, 0, 0, Smoke::mf_const, 172, 8},	//108 QScriptContextInfo::lineNumber() const
    {16, 127, 0, 0, Smoke::mf_const, 172, 9},	//109 QScriptContextInfo::columnNumber() const
    {16, 169, 0, 0, Smoke::mf_const, 51, 10},	//110 QScriptContextInfo::functionName() const
    {16, 172, 0, 0, Smoke::mf_const, 23, 11},	//111 QScriptContextInfo::functionType() const
    {16, 170, 0, 0, Smoke::mf_const, 52, 12},	//112 QScriptContextInfo::functionParameterNames() const
    {16, 171, 0, 0, Smoke::mf_const, 172, 13},	//113 QScriptContextInfo::functionStartLineNumber() const
    {16, 163, 0, 0, Smoke::mf_const, 172, 14},	//114 QScriptContextInfo::functionEndLineNumber() const
    {16, 168, 0, 0, Smoke::mf_const, 172, 15},	//115 QScriptContextInfo::functionMetaIndex() const
    {16, 254, 55, 1, Smoke::mf_const, 148, 16},	//116 QScriptContextInfo::operator==(const QScriptContextInfo&) const
    {16, 250, 55, 1, Smoke::mf_const, 148, 17},	//117 QScriptContextInfo::operator!=(const QScriptContextInfo&) const
    {16, 93, 0, 0, Smoke::mf_static|Smoke::mf_enum, 23, 18},	//118 QScriptContextInfo::ScriptFunction (enum)
    {16, 81, 0, 0, Smoke::mf_static|Smoke::mf_enum, 23, 19},	//119 QScriptContextInfo::QtFunction (enum)
    {16, 83, 0, 0, Smoke::mf_static|Smoke::mf_enum, 23, 20},	//120 QScriptContextInfo::QtPropertyFunction (enum)
    {16, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 23, 21},	//121 QScriptContextInfo::NativeFunction (enum)
    {16, 384, 0, 0, Smoke::mf_dtor, 0, 22 },	//122 QScriptContextInfo::~QScriptContextInfo()
    {17, 209, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 157, 1},	//123 QScriptEngine::metaObject() const
    {17, 283, 15, 1, Smoke::mf_virtual, 178, 2},	//124 QScriptEngine::qt_metacast(const char*)
    {17, 368, 57, 2, Smoke::mf_static, 51, 3},	//125 QScriptEngine::tr(const char*, const char*)
    {17, 372, 57, 2, Smoke::mf_static, 51, 4},	//126 QScriptEngine::trUtf8(const char*, const char*)
    {17, 368, 60, 3, Smoke::mf_static, 51, 5},	//127 QScriptEngine::tr(const char*, const char*, int)
    {17, 372, 60, 3, Smoke::mf_static, 51, 6},	//128 QScriptEngine::trUtf8(const char*, const char*, int)
    {17, 281, 64, 3, Smoke::mf_virtual, 172, 7},	//129 QScriptEngine::qt_metacall(QMetaObject::Call, int, void**)
    {17, 52, 0, 0, Smoke::mf_ctor, 24, 8},	//130 QScriptEngine::QScriptEngine()
    {17, 52, 68, 1, Smoke::mf_ctor, 24, 9},	//131 QScriptEngine::QScriptEngine(QObject*)
    {17, 173, 0, 0, Smoke::mf_const, 40, 10},	//132 QScriptEngine::globalObject() const
    {17, 308, 33, 1, 0, 0, 11},	//133 QScriptEngine::setGlobalObject(const QScriptValue&)
    {17, 135, 0, 0, Smoke::mf_const, 18, 12},	//134 QScriptEngine::currentContext() const
    {17, 276, 0, 0, 0, 18, 13},	//135 QScriptEngine::pushContext()
    {17, 257, 0, 0, 0, 0, 14},	//136 QScriptEngine::popContext()
    {17, 120, 51, 1, Smoke::mf_const, 148, 15},	//137 QScriptEngine::canEvaluate(const QString&) const
    {17, 122, 51, 1, Smoke::mf_static, 36, 16},	//138 QScriptEngine::checkSyntax(const QString&)
    {17, 147, 70, 3, 0, 40, 17},	//139 QScriptEngine::evaluate(const QString&, const QString&, int)
    {17, 147, 74, 1, 0, 40, 18},	//140 QScriptEngine::evaluate(const QScriptProgram&)
    {17, 193, 0, 0, Smoke::mf_const, 148, 19},	//141 QScriptEngine::isEvaluating() const
    {17, 105, 33, 1, 0, 0, 20},	//142 QScriptEngine::abortEvaluation(const QScriptValue&)
    {17, 176, 0, 0, Smoke::mf_const, 148, 21},	//143 QScriptEngine::hasUncaughtException() const
    {17, 376, 0, 0, Smoke::mf_const, 40, 22},	//144 QScriptEngine::uncaughtException() const
    {17, 378, 0, 0, Smoke::mf_const, 172, 23},	//145 QScriptEngine::uncaughtExceptionLineNumber() const
    {17, 377, 0, 0, Smoke::mf_const, 52, 24},	//146 QScriptEngine::uncaughtExceptionBacktrace() const
    {17, 125, 0, 0, 0, 0, 25},	//147 QScriptEngine::clearExceptions()
    {17, 244, 0, 0, 0, 40, 26},	//148 QScriptEngine::nullValue()
    {17, 379, 0, 0, 0, 40, 27},	//149 QScriptEngine::undefinedValue()
    {17, 217, 76, 2, 0, 40, 28},	//150 QScriptEngine::newFunction(QScriptValue(*)(QScriptContext*,QScriptEngine*), int)
    {17, 217, 79, 3, 0, 40, 29},	//151 QScriptEngine::newFunction(QScriptValue(*)(QScriptContext*,QScriptEngine*), const QScriptValue&, int)
    {17, 217, 83, 2, 0, 40, 30},	//152 QScriptEngine::newFunction(QScriptValue(*)(QScriptContext*,QScriptEngine*,void*), void*)
    {17, 240, 86, 1, 0, 40, 31},	//153 QScriptEngine::newVariant(const QVariant&)
    {17, 240, 88, 2, 0, 40, 32},	//154 QScriptEngine::newVariant(const QScriptValue&, const QVariant&)
    {17, 237, 91, 1, 0, 40, 33},	//155 QScriptEngine::newRegExp(const QRegExp&)
    {17, 224, 0, 0, 0, 40, 34},	//156 QScriptEngine::newObject()
    {17, 224, 93, 2, 0, 40, 35},	//157 QScriptEngine::newObject(QScriptClass*, const QScriptValue&)
    {17, 212, 96, 1, 0, 40, 36},	//158 QScriptEngine::newArray(unsigned int)
    {17, 237, 98, 2, 0, 40, 37},	//159 QScriptEngine::newRegExp(const QString&, const QString&)
    {17, 214, 101, 1, 0, 40, 38},	//160 QScriptEngine::newDate(double)
    {17, 214, 103, 1, 0, 40, 39},	//161 QScriptEngine::newDate(const QDateTime&)
    {17, 211, 0, 0, 0, 40, 40},	//162 QScriptEngine::newActivationObject()
    {17, 230, 105, 3, 0, 40, 41},	//163 QScriptEngine::newQObject(QObject*, QScriptEngine::ValueOwnership, const QFlags<QScriptEngine::QObjectWrapOption>&)
    {17, 230, 109, 4, 0, 40, 42},	//164 QScriptEngine::newQObject(const QScriptValue&, QObject*, QScriptEngine::ValueOwnership, const QFlags<QScriptEngine::QObjectWrapOption>&)
    {17, 227, 114, 2, 0, 40, 43},	//165 QScriptEngine::newQMetaObject(const QMetaObject*, const QScriptValue&)
    {17, 138, 46, 1, Smoke::mf_const, 40, 44},	//166 QScriptEngine::defaultPrototype(int) const
    {17, 306, 117, 2, 0, 0, 45},	//167 QScriptEngine::setDefaultPrototype(int, const QScriptValue&)
    {17, 183, 33, 1, 0, 0, 46},	//168 QScriptEngine::installTranslatorFunctions(const QScriptValue&)
    {17, 178, 51, 1, 0, 40, 47},	//169 QScriptEngine::importExtension(const QString&)
    {17, 113, 0, 0, Smoke::mf_const, 52, 48},	//170 QScriptEngine::availableExtensions() const
    {17, 180, 0, 0, Smoke::mf_const, 52, 49},	//171 QScriptEngine::importedExtensions() const
    {17, 126, 0, 0, 0, 0, 50},	//172 QScriptEngine::collectGarbage()
    {17, 288, 46, 1, 0, 0, 51},	//173 QScriptEngine::reportAdditionalMemoryCost(int)
    {17, 310, 46, 1, 0, 0, 52},	//174 QScriptEngine::setProcessEventsInterval(int)
    {17, 262, 0, 0, Smoke::mf_const, 172, 53},	//175 QScriptEngine::processEventsInterval() const
    {17, 302, 120, 1, 0, 0, 54},	//176 QScriptEngine::setAgent(QScriptEngineAgent*)
    {17, 108, 0, 0, Smoke::mf_const, 27, 55},	//177 QScriptEngine::agent() const
    {17, 363, 51, 1, 0, 33, 56},	//178 QScriptEngine::toStringHandle(const QString&)
    {17, 357, 33, 1, 0, 40, 57},	//179 QScriptEngine::toObject(const QScriptValue&)
    {17, 246, 122, 1, Smoke::mf_const, 40, 58},	//180 QScriptEngine::objectById(long long) const
    {17, 332, 33, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 59},	//181 QScriptEngine::signalHandlerException(const QScriptValue&)
    {17, 52, 124, 2, Smoke::mf_ctor|Smoke::mf_protected, 24, 60},	//182 QScriptEngine::QScriptEngine(QScriptEnginePrivate&, QObject*)
    {17, 368, 15, 1, Smoke::mf_static, 51, 61},	//183 QScriptEngine::tr(const char*)
    {17, 372, 15, 1, Smoke::mf_static, 51, 62},	//184 QScriptEngine::trUtf8(const char*)
    {17, 147, 51, 1, 0, 40, 63},	//185 QScriptEngine::evaluate(const QString&)
    {17, 147, 98, 2, 0, 40, 64},	//186 QScriptEngine::evaluate(const QString&, const QString&)
    {17, 105, 0, 0, 0, 0, 65},	//187 QScriptEngine::abortEvaluation()
    {17, 217, 127, 1, 0, 40, 66},	//188 QScriptEngine::newFunction(QScriptValue(*)(QScriptContext*,QScriptEngine*))
    {17, 217, 129, 2, 0, 40, 67},	//189 QScriptEngine::newFunction(QScriptValue(*)(QScriptContext*,QScriptEngine*), const QScriptValue&)
    {17, 224, 132, 1, 0, 40, 68},	//190 QScriptEngine::newObject(QScriptClass*)
    {17, 212, 0, 0, 0, 40, 69},	//191 QScriptEngine::newArray()
    {17, 230, 68, 1, 0, 40, 70},	//192 QScriptEngine::newQObject(QObject*)
    {17, 230, 134, 2, 0, 40, 71},	//193 QScriptEngine::newQObject(QObject*, QScriptEngine::ValueOwnership)
    {17, 230, 137, 2, 0, 40, 72},	//194 QScriptEngine::newQObject(const QScriptValue&, QObject*)
    {17, 230, 140, 3, 0, 40, 73},	//195 QScriptEngine::newQObject(const QScriptValue&, QObject*, QScriptEngine::ValueOwnership)
    {17, 227, 144, 1, 0, 40, 74},	//196 QScriptEngine::newQMetaObject(const QMetaObject*)
    {17, 183, 0, 0, 0, 0, 75},	//197 QScriptEngine::installTranslatorFunctions()
    {17, 52, 146, 1, Smoke::mf_ctor|Smoke::mf_protected, 24, 76},	//198 QScriptEngine::QScriptEngine(QScriptEnginePrivate&)
    {17, 335, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 156, 77},	//199 QScriptEngine::staticMetaObject() const
    {17, 82, 0, 0, Smoke::mf_static|Smoke::mf_enum, 26, 78},	//200 QScriptEngine::QtOwnership (enum)
    {17, 94, 0, 0, Smoke::mf_static|Smoke::mf_enum, 26, 79},	//201 QScriptEngine::ScriptOwnership (enum)
    {17, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 26, 80},	//202 QScriptEngine::AutoOwnership (enum)
    {17, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 81},	//203 QScriptEngine::ExcludeChildObjects (enum)
    {17, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 82},	//204 QScriptEngine::ExcludeSuperClassMethods (enum)
    {17, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 83},	//205 QScriptEngine::ExcludeSuperClassProperties (enum)
    {17, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 84},	//206 QScriptEngine::ExcludeSuperClassContents (enum)
    {17, 96, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 85},	//207 QScriptEngine::SkipMethodsInEnumeration (enum)
    {17, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 86},	//208 QScriptEngine::ExcludeDeleteLater (enum)
    {17, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 87},	//209 QScriptEngine::ExcludeSlots (enum)
    {17, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 88},	//210 QScriptEngine::AutoCreateDynamicProperties (enum)
    {17, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 89},	//211 QScriptEngine::PreferExistingWrapperObject (enum)
    {17, 385, 0, 0, Smoke::mf_dtor, 0, 90 },	//212 QScriptEngine::~QScriptEngine()
    {18, 55, 17, 1, Smoke::mf_ctor, 27, 1},	//213 QScriptEngineAgent::QScriptEngineAgent(QScriptEngine*)
    {18, 295, 148, 4, Smoke::mf_virtual, 0, 2},	//214 QScriptEngineAgent::scriptLoad(long long, const QString&, const QString&, int)
    {18, 298, 122, 1, Smoke::mf_virtual, 0, 3},	//215 QScriptEngineAgent::scriptUnload(long long)
    {18, 134, 0, 0, Smoke::mf_virtual, 0, 4},	//216 QScriptEngineAgent::contextPush()
    {18, 133, 0, 0, Smoke::mf_virtual, 0, 5},	//217 QScriptEngineAgent::contextPop()
    {18, 164, 122, 1, Smoke::mf_virtual, 0, 6},	//218 QScriptEngineAgent::functionEntry(long long)
    {18, 166, 153, 2, Smoke::mf_virtual, 0, 7},	//219 QScriptEngineAgent::functionExit(long long, const QScriptValue&)
    {18, 259, 156, 3, Smoke::mf_virtual, 0, 8},	//220 QScriptEngineAgent::positionChange(long long, int, int)
    {18, 156, 160, 3, Smoke::mf_virtual, 0, 9},	//221 QScriptEngineAgent::exceptionThrow(long long, const QScriptValue&, bool)
    {18, 154, 153, 2, Smoke::mf_virtual, 0, 10},	//222 QScriptEngineAgent::exceptionCatch(long long, const QScriptValue&)
    {18, 338, 164, 1, Smoke::mf_const|Smoke::mf_virtual, 148, 11},	//223 QScriptEngineAgent::supportsExtension(QScriptEngineAgent::Extension) const
    {18, 158, 166, 2, Smoke::mf_virtual, 55, 12},	//224 QScriptEngineAgent::extension(QScriptEngineAgent::Extension, const QVariant&)
    {18, 141, 0, 0, Smoke::mf_const, 24, 13},	//225 QScriptEngineAgent::engine() const
    {18, 55, 169, 2, Smoke::mf_ctor|Smoke::mf_protected, 27, 14},	//226 QScriptEngineAgent::QScriptEngineAgent(QScriptEngineAgentPrivate&, QScriptEngine*)
    {18, 158, 164, 1, 0, 55, 15},	//227 QScriptEngineAgent::extension(QScriptEngineAgent::Extension)
    {18, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 28, 16},	//228 QScriptEngineAgent::DebuggerInvocationRequest (enum)
    {18, 386, 0, 0, Smoke::mf_dtor, 0, 17 },	//229 QScriptEngineAgent::~QScriptEngineAgent()
    {21, 181, 172, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 1},	//230 QScriptExtensionInterface::initialize(const QString&, QScriptEngine*) [pure virtual]
    {21, 58, 0, 0, Smoke::mf_ctor, 31, 2},	//231 QScriptExtensionInterface::QScriptExtensionInterface()
    {21, 58, 175, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 31, 3},	//232 QScriptExtensionInterface::QScriptExtensionInterface(const QScriptExtensionInterface&)
    {21, 387, 0, 0, Smoke::mf_dtor, 0, 4 },	//233 QScriptExtensionInterface::~QScriptExtensionInterface()
    {22, 209, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 157, 1},	//234 QScriptExtensionPlugin::metaObject() const
    {22, 283, 15, 1, Smoke::mf_virtual, 178, 2},	//235 QScriptExtensionPlugin::qt_metacast(const char*)
    {22, 368, 57, 2, Smoke::mf_static, 51, 3},	//236 QScriptExtensionPlugin::tr(const char*, const char*)
    {22, 372, 57, 2, Smoke::mf_static, 51, 4},	//237 QScriptExtensionPlugin::trUtf8(const char*, const char*)
    {22, 368, 60, 3, Smoke::mf_static, 51, 5},	//238 QScriptExtensionPlugin::tr(const char*, const char*, int)
    {22, 372, 60, 3, Smoke::mf_static, 51, 6},	//239 QScriptExtensionPlugin::trUtf8(const char*, const char*, int)
    {22, 281, 64, 3, Smoke::mf_virtual, 172, 7},	//240 QScriptExtensionPlugin::qt_metacall(QMetaObject::Call, int, void**)
    {22, 60, 68, 1, Smoke::mf_ctor, 32, 8},	//241 QScriptExtensionPlugin::QScriptExtensionPlugin(QObject*)
    {22, 205, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 52, 9},	//242 QScriptExtensionPlugin::keys() const [pure virtual]
    {22, 181, 172, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 10},	//243 QScriptExtensionPlugin::initialize(const QString&, QScriptEngine*) [pure virtual]
    {22, 330, 172, 2, Smoke::mf_const, 40, 11},	//244 QScriptExtensionPlugin::setupPackage(const QString&, QScriptEngine*) const
    {22, 368, 15, 1, Smoke::mf_static, 51, 12},	//245 QScriptExtensionPlugin::tr(const char*)
    {22, 372, 15, 1, Smoke::mf_static, 51, 13},	//246 QScriptExtensionPlugin::trUtf8(const char*)
    {22, 60, 0, 0, Smoke::mf_ctor, 32, 14},	//247 QScriptExtensionPlugin::QScriptExtensionPlugin()
    {22, 335, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 156, 15},	//248 QScriptExtensionPlugin::staticMetaObject() const
    {22, 388, 0, 0, Smoke::mf_dtor, 0, 16 },	//249 QScriptExtensionPlugin::~QScriptExtensionPlugin()
    {24, 62, 0, 0, Smoke::mf_ctor, 35, 1},	//250 QScriptString::QScriptString()
    {24, 62, 177, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 35, 2},	//251 QScriptString::QScriptString(const QScriptString&)
    {24, 252, 177, 1, 0, 34, 3},	//252 QScriptString::operator=(const QScriptString&)
    {24, 203, 0, 0, Smoke::mf_const, 148, 4},	//253 QScriptString::isValid() const
    {24, 254, 177, 1, Smoke::mf_const, 148, 5},	//254 QScriptString::operator==(const QScriptString&) const
    {24, 250, 177, 1, Smoke::mf_const, 148, 6},	//255 QScriptString::operator!=(const QScriptString&) const
    {24, 347, 179, 1, Smoke::mf_const, 175, 7},	//256 QScriptString::toArrayIndex(bool*) const
    {24, 362, 0, 0, Smoke::mf_const, 51, 8},	//257 QScriptString::toString() const
    {24, 249, 0, 0, Smoke::mf_const, 51, 9},	//258 QScriptString::operator QString() const
    {24, 347, 0, 0, Smoke::mf_const, 175, 10},	//259 QScriptString::toArrayIndex() const
    {24, 389, 0, 0, Smoke::mf_dtor, 0, 11 },	//260 QScriptString::~QScriptString()
    {25, 64, 181, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 38, 1},	//261 QScriptSyntaxCheckResult::QScriptSyntaxCheckResult(const QScriptSyntaxCheckResult&)
    {25, 334, 0, 0, Smoke::mf_const, 39, 2},	//262 QScriptSyntaxCheckResult::state() const
    {25, 145, 0, 0, Smoke::mf_const, 172, 3},	//263 QScriptSyntaxCheckResult::errorLineNumber() const
    {25, 144, 0, 0, Smoke::mf_const, 172, 4},	//264 QScriptSyntaxCheckResult::errorColumnNumber() const
    {25, 146, 0, 0, Smoke::mf_const, 51, 5},	//265 QScriptSyntaxCheckResult::errorMessage() const
    {25, 252, 181, 1, 0, 37, 6},	//266 QScriptSyntaxCheckResult::operator=(const QScriptSyntaxCheckResult&)
    {25, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 39, 7},	//267 QScriptSyntaxCheckResult::Error (enum)
    {25, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 39, 8},	//268 QScriptSyntaxCheckResult::Intermediate (enum)
    {25, 104, 0, 0, Smoke::mf_static|Smoke::mf_enum, 39, 9},	//269 QScriptSyntaxCheckResult::Valid (enum)
    {25, 390, 0, 0, Smoke::mf_dtor, 0, 10 },	//270 QScriptSyntaxCheckResult::~QScriptSyntaxCheckResult()
    {26, 66, 0, 0, Smoke::mf_ctor, 44, 1},	//271 QScriptValue::QScriptValue()
    {26, 66, 33, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 44, 2},	//272 QScriptValue::QScriptValue(const QScriptValue&)
    {26, 66, 183, 2, Smoke::mf_ctor, 44, 3},	//273 QScriptValue::QScriptValue(QScriptEngine*, QScriptValue::SpecialValue)
    {26, 66, 186, 2, Smoke::mf_ctor, 44, 4},	//274 QScriptValue::QScriptValue(QScriptEngine*, bool)
    {26, 66, 189, 2, Smoke::mf_ctor, 44, 5},	//275 QScriptValue::QScriptValue(QScriptEngine*, int)
    {26, 66, 192, 2, Smoke::mf_ctor, 44, 6},	//276 QScriptValue::QScriptValue(QScriptEngine*, unsigned int)
    {26, 66, 195, 2, Smoke::mf_ctor, 44, 7},	//277 QScriptValue::QScriptValue(QScriptEngine*, double)
    {26, 66, 198, 2, Smoke::mf_ctor, 44, 8},	//278 QScriptValue::QScriptValue(QScriptEngine*, const QString&)
    {26, 66, 201, 1, Smoke::mf_ctor, 44, 9},	//279 QScriptValue::QScriptValue(QScriptValue::SpecialValue)
    {26, 66, 203, 1, Smoke::mf_ctor, 44, 10},	//280 QScriptValue::QScriptValue(bool)
    {26, 66, 46, 1, Smoke::mf_ctor, 44, 11},	//281 QScriptValue::QScriptValue(int)
    {26, 66, 96, 1, Smoke::mf_ctor, 44, 12},	//282 QScriptValue::QScriptValue(unsigned int)
    {26, 66, 101, 1, Smoke::mf_ctor, 44, 13},	//283 QScriptValue::QScriptValue(double)
    {26, 66, 51, 1, Smoke::mf_ctor, 44, 14},	//284 QScriptValue::QScriptValue(const QString&)
    {26, 66, 205, 1, Smoke::mf_ctor, 44, 15},	//285 QScriptValue::QScriptValue(const QLatin1String&)
    {26, 252, 33, 1, 0, 41, 16},	//286 QScriptValue::operator=(const QScriptValue&)
    {26, 141, 0, 0, Smoke::mf_const, 24, 17},	//287 QScriptValue::engine() const
    {26, 203, 0, 0, Smoke::mf_const, 148, 18},	//288 QScriptValue::isValid() const
    {26, 188, 0, 0, Smoke::mf_const, 148, 19},	//289 QScriptValue::isBool() const
    {26, 189, 0, 0, Smoke::mf_const, 148, 20},	//290 QScriptValue::isBoolean() const
    {26, 196, 0, 0, Smoke::mf_const, 148, 21},	//291 QScriptValue::isNumber() const
    {26, 194, 0, 0, Smoke::mf_const, 148, 22},	//292 QScriptValue::isFunction() const
    {26, 195, 0, 0, Smoke::mf_const, 148, 23},	//293 QScriptValue::isNull() const
    {26, 201, 0, 0, Smoke::mf_const, 148, 24},	//294 QScriptValue::isString() const
    {26, 202, 0, 0, Smoke::mf_const, 148, 25},	//295 QScriptValue::isUndefined() const
    {26, 204, 0, 0, Smoke::mf_const, 148, 26},	//296 QScriptValue::isVariant() const
    {26, 199, 0, 0, Smoke::mf_const, 148, 27},	//297 QScriptValue::isQObject() const
    {26, 198, 0, 0, Smoke::mf_const, 148, 28},	//298 QScriptValue::isQMetaObject() const
    {26, 197, 0, 0, Smoke::mf_const, 148, 29},	//299 QScriptValue::isObject() const
    {26, 191, 0, 0, Smoke::mf_const, 148, 30},	//300 QScriptValue::isDate() const
    {26, 200, 0, 0, Smoke::mf_const, 148, 31},	//301 QScriptValue::isRegExp() const
    {26, 187, 0, 0, Smoke::mf_const, 148, 32},	//302 QScriptValue::isArray() const
    {26, 192, 0, 0, Smoke::mf_const, 148, 33},	//303 QScriptValue::isError() const
    {26, 362, 0, 0, Smoke::mf_const, 51, 34},	//304 QScriptValue::toString() const
    {26, 356, 0, 0, Smoke::mf_const, 171, 35},	//305 QScriptValue::toNumber() const
    {26, 350, 0, 0, Smoke::mf_const, 148, 36},	//306 QScriptValue::toBool() const
    {26, 351, 0, 0, Smoke::mf_const, 148, 37},	//307 QScriptValue::toBoolean() const
    {26, 355, 0, 0, Smoke::mf_const, 171, 38},	//308 QScriptValue::toInteger() const
    {26, 354, 0, 0, Smoke::mf_const, 172, 39},	//309 QScriptValue::toInt32() const
    {26, 366, 0, 0, Smoke::mf_const, 175, 40},	//310 QScriptValue::toUInt32() const
    {26, 365, 0, 0, Smoke::mf_const, 177, 41},	//311 QScriptValue::toUInt16() const
    {26, 367, 0, 0, Smoke::mf_const, 55, 42},	//312 QScriptValue::toVariant() const
    {26, 360, 0, 0, Smoke::mf_const, 9, 43},	//313 QScriptValue::toQObject() const
    {26, 359, 0, 0, Smoke::mf_const, 157, 44},	//314 QScriptValue::toQMetaObject() const
    {26, 357, 0, 0, Smoke::mf_const, 40, 45},	//315 QScriptValue::toObject() const
    {26, 352, 0, 0, Smoke::mf_const, 3, 46},	//316 QScriptValue::toDateTime() const
    {26, 361, 0, 0, Smoke::mf_const, 10, 47},	//317 QScriptValue::toRegExp() const
    {26, 185, 33, 1, Smoke::mf_const, 148, 48},	//318 QScriptValue::instanceOf(const QScriptValue&) const
    {26, 206, 33, 1, Smoke::mf_const, 148, 49},	//319 QScriptValue::lessThan(const QScriptValue&) const
    {26, 142, 33, 1, Smoke::mf_const, 148, 50},	//320 QScriptValue::equals(const QScriptValue&) const
    {26, 336, 33, 1, Smoke::mf_const, 148, 51},	//321 QScriptValue::strictlyEquals(const QScriptValue&) const
    {26, 275, 0, 0, Smoke::mf_const, 40, 52},	//322 QScriptValue::prototype() const
    {26, 318, 33, 1, 0, 0, 53},	//323 QScriptValue::setPrototype(const QScriptValue&)
    {26, 291, 0, 0, Smoke::mf_const, 40, 54},	//324 QScriptValue::scope() const
    {26, 322, 33, 1, 0, 0, 55},	//325 QScriptValue::setScope(const QScriptValue&)
    {26, 263, 207, 2, Smoke::mf_const, 40, 56},	//326 QScriptValue::property(const QString&, const QFlags<QScriptValue::ResolveFlag>&) const
    {26, 312, 210, 3, 0, 0, 57},	//327 QScriptValue::setProperty(const QString&, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&)
    {26, 263, 214, 2, Smoke::mf_const, 40, 58},	//328 QScriptValue::property(unsigned int, const QFlags<QScriptValue::ResolveFlag>&) const
    {26, 312, 217, 3, 0, 0, 59},	//329 QScriptValue::setProperty(unsigned int, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&)
    {26, 263, 221, 2, Smoke::mf_const, 40, 60},	//330 QScriptValue::property(const QScriptString&, const QFlags<QScriptValue::ResolveFlag>&) const
    {26, 312, 224, 3, 0, 0, 61},	//331 QScriptValue::setProperty(const QScriptString&, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&)
    {26, 269, 207, 2, Smoke::mf_const, 6, 62},	//332 QScriptValue::propertyFlags(const QString&, const QFlags<QScriptValue::ResolveFlag>&) const
    {26, 269, 221, 2, Smoke::mf_const, 6, 63},	//333 QScriptValue::propertyFlags(const QScriptString&, const QFlags<QScriptValue::ResolveFlag>&) const
    {26, 115, 228, 2, 0, 40, 64},	//334 QScriptValue::call(const QScriptValue&, const QList<QScriptValue>&)
    {26, 115, 231, 2, 0, 40, 65},	//335 QScriptValue::call(const QScriptValue&, const QScriptValue&)
    {26, 129, 234, 1, 0, 40, 66},	//336 QScriptValue::construct(const QList<QScriptValue>&)
    {26, 129, 33, 1, 0, 40, 67},	//337 QScriptValue::construct(const QScriptValue&)
    {26, 137, 0, 0, Smoke::mf_const, 40, 68},	//338 QScriptValue::data() const
    {26, 304, 33, 1, 0, 0, 69},	//339 QScriptValue::setData(const QScriptValue&)
    {26, 293, 0, 0, Smoke::mf_const, 12, 70},	//340 QScriptValue::scriptClass() const
    {26, 324, 132, 1, 0, 0, 71},	//341 QScriptValue::setScriptClass(QScriptClass*)
    {26, 248, 0, 0, Smoke::mf_const, 174, 72},	//342 QScriptValue::objectId() const
    {26, 263, 51, 1, Smoke::mf_const, 40, 73},	//343 QScriptValue::property(const QString&) const
    {26, 312, 236, 2, 0, 0, 74},	//344 QScriptValue::setProperty(const QString&, const QScriptValue&)
    {26, 263, 96, 1, Smoke::mf_const, 40, 75},	//345 QScriptValue::property(unsigned int) const
    {26, 312, 239, 2, 0, 0, 76},	//346 QScriptValue::setProperty(unsigned int, const QScriptValue&)
    {26, 263, 177, 1, Smoke::mf_const, 40, 77},	//347 QScriptValue::property(const QScriptString&) const
    {26, 312, 242, 2, 0, 0, 78},	//348 QScriptValue::setProperty(const QScriptString&, const QScriptValue&)
    {26, 269, 51, 1, Smoke::mf_const, 6, 79},	//349 QScriptValue::propertyFlags(const QString&) const
    {26, 269, 177, 1, Smoke::mf_const, 6, 80},	//350 QScriptValue::propertyFlags(const QScriptString&) const
    {26, 115, 0, 0, 0, 40, 81},	//351 QScriptValue::call()
    {26, 115, 33, 1, 0, 40, 82},	//352 QScriptValue::call(const QScriptValue&)
    {26, 129, 0, 0, 0, 40, 83},	//353 QScriptValue::construct()
    {26, 90, 0, 0, Smoke::mf_static|Smoke::mf_enum, 46, 84},	//354 QScriptValue::ResolveLocal (enum)
    {26, 91, 0, 0, Smoke::mf_static|Smoke::mf_enum, 46, 85},	//355 QScriptValue::ResolvePrototype (enum)
    {26, 92, 0, 0, Smoke::mf_static|Smoke::mf_enum, 46, 86},	//356 QScriptValue::ResolveScope (enum)
    {26, 89, 0, 0, Smoke::mf_static|Smoke::mf_enum, 46, 87},	//357 QScriptValue::ResolveFull (enum)
    {26, 87, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 88},	//358 QScriptValue::ReadOnly (enum)
    {26, 101, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 89},	//359 QScriptValue::Undeletable (enum)
    {26, 95, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 90},	//360 QScriptValue::SkipInEnumeration (enum)
    {26, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 91},	//361 QScriptValue::PropertyGetter (enum)
    {26, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 92},	//362 QScriptValue::PropertySetter (enum)
    {26, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 93},	//363 QScriptValue::QObjectMember (enum)
    {26, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 94},	//364 QScriptValue::KeepExistingFlags (enum)
    {26, 103, 0, 0, Smoke::mf_static|Smoke::mf_enum, 45, 95},	//365 QScriptValue::UserRange (enum)
    {26, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 47, 96},	//366 QScriptValue::NullValue (enum)
    {26, 100, 0, 0, Smoke::mf_static|Smoke::mf_enum, 47, 97},	//367 QScriptValue::UndefinedValue (enum)
    {26, 391, 0, 0, Smoke::mf_dtor, 0, 98 },	//368 QScriptValue::~QScriptValue()
    {27, 70, 33, 1, Smoke::mf_ctor, 49, 1},	//369 QScriptValueIterator::QScriptValueIterator(const QScriptValue&)
    {27, 174, 0, 0, Smoke::mf_const, 148, 2},	//370 QScriptValueIterator::hasNext() const
    {27, 243, 0, 0, 0, 0, 3},	//371 QScriptValueIterator::next()
    {27, 175, 0, 0, Smoke::mf_const, 148, 4},	//372 QScriptValueIterator::hasPrevious() const
    {27, 261, 0, 0, 0, 0, 5},	//373 QScriptValueIterator::previous()
    {27, 210, 0, 0, Smoke::mf_const, 51, 6},	//374 QScriptValueIterator::name() const
    {27, 297, 0, 0, Smoke::mf_const, 33, 7},	//375 QScriptValueIterator::scriptName() const
    {27, 380, 0, 0, Smoke::mf_const, 40, 8},	//376 QScriptValueIterator::value() const
    {27, 328, 33, 1, 0, 0, 9},	//377 QScriptValueIterator::setValue(const QScriptValue&)
    {27, 162, 0, 0, Smoke::mf_const, 6, 10},	//378 QScriptValueIterator::flags() const
    {27, 287, 0, 0, 0, 0, 11},	//379 QScriptValueIterator::remove()
    {27, 353, 0, 0, 0, 0, 12},	//380 QScriptValueIterator::toFront()
    {27, 349, 0, 0, 0, 0, 13},	//381 QScriptValueIterator::toBack()
    {27, 252, 245, 1, 0, 48, 14},	//382 QScriptValueIterator::operator=(QScriptValue&)
    {27, 392, 0, 0, Smoke::mf_dtor, 0, 15 },	//383 QScriptValueIterator::~QScriptValueIterator()
    {28, 72, 0, 0, Smoke::mf_ctor, 50, 1},	//384 QScriptable::QScriptable()
    {28, 141, 0, 0, Smoke::mf_const, 24, 2},	//385 QScriptable::engine() const
    {28, 132, 0, 0, Smoke::mf_const, 18, 3},	//386 QScriptable::context() const
    {28, 340, 0, 0, Smoke::mf_const, 40, 4},	//387 QScriptable::thisObject() const
    {28, 111, 0, 0, Smoke::mf_const, 172, 5},	//388 QScriptable::argumentCount() const
    {28, 109, 46, 1, Smoke::mf_const, 40, 6},	//389 QScriptable::argument(int) const
    {28, 393, 0, 0, Smoke::mf_dtor, 0, 7 },	//390 QScriptable::~QScriptable()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    101,  // QScriptContextInfo::QScriptContextInfo(const QScriptContext*)
    102,  // QScriptContextInfo::QScriptContextInfo(const QScriptContextInfo&)
    0,
    131,  // QScriptEngine::QScriptEngine(QObject*)
    198,  // QScriptEngine::QScriptEngine(QScriptEnginePrivate&)
    0,
    150,  // QScriptEngine::newFunction(QScriptValue(*)(QScriptContext*,QScriptEngine*), int)
    152,  // QScriptEngine::newFunction(QScriptValue(*)(QScriptContext*,QScriptEngine*,void*), void*)
    0,
    272,  // QScriptValue::QScriptValue(const QScriptValue&)
    285,  // QScriptValue::QScriptValue(const QLatin1String&)
    0,
    273,  // QScriptValue::QScriptValue(QScriptEngine*, QScriptValue::SpecialValue)
    274,  // QScriptValue::QScriptValue(QScriptEngine*, bool)
    275,  // QScriptValue::QScriptValue(QScriptEngine*, int)
    276,  // QScriptValue::QScriptValue(QScriptEngine*, unsigned int)
    277,  // QScriptValue::QScriptValue(QScriptEngine*, double)
    278,  // QScriptValue::QScriptValue(QScriptEngine*, const QString&)
    0,
    279,  // QScriptValue::QScriptValue(QScriptValue::SpecialValue)
    280,  // QScriptValue::QScriptValue(bool)
    281,  // QScriptValue::QScriptValue(int)
    282,  // QScriptValue::QScriptValue(unsigned int)
    283,  // QScriptValue::QScriptValue(double)
    284,  // QScriptValue::QScriptValue(const QString&)
    0,
    343,  // QScriptValue::property(const QString&) const
    345,  // QScriptValue::property(unsigned int) const
    0,
    326,  // QScriptValue::property(const QString&, const QFlags<QScriptValue::ResolveFlag>&) const
    328,  // QScriptValue::property(unsigned int, const QFlags<QScriptValue::ResolveFlag>&) const
    0,
    344,  // QScriptValue::setProperty(const QString&, const QScriptValue&)
    346,  // QScriptValue::setProperty(unsigned int, const QScriptValue&)
    0,
    327,  // QScriptValue::setProperty(const QString&, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&)
    329,  // QScriptValue::setProperty(unsigned int, const QScriptValue&, const QFlags<QScriptValue::PropertyFlag>&)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {6, 18, 15},	// QGlobalSpace::LicensedActiveQt
    {6, 19, 21},	// QGlobalSpace::LicensedCore
    {6, 20, 13},	// QGlobalSpace::LicensedDBus
    {6, 21, 18},	// QGlobalSpace::LicensedDeclarative
    {6, 22, 8},	// QGlobalSpace::LicensedGui
    {6, 23, 27},	// QGlobalSpace::LicensedHelp
    {6, 24, 28},	// QGlobalSpace::LicensedMultimedia
    {6, 25, 31},	// QGlobalSpace::LicensedNetwork
    {6, 26, 20},	// QGlobalSpace::LicensedOpenGL
    {6, 27, 12},	// QGlobalSpace::LicensedOpenVG
    {6, 28, 29},	// QGlobalSpace::LicensedQt3Support
    {6, 29, 10},	// QGlobalSpace::LicensedQt3SupportLight
    {6, 30, 11},	// QGlobalSpace::LicensedScript
    {6, 31, 16},	// QGlobalSpace::LicensedScriptTools
    {6, 32, 19},	// QGlobalSpace::LicensedSql
    {6, 33, 17},	// QGlobalSpace::LicensedSvg
    {6, 34, 14},	// QGlobalSpace::LicensedTest
    {6, 35, 9},	// QGlobalSpace::LicensedXml
    {6, 36, 30},	// QGlobalSpace::LicensedXmlPatterns
    {6, 73, 3},	// QGlobalSpace::Q_COMPLEX_TYPE
    {6, 74, 7},	// QGlobalSpace::Q_DUMMY_TYPE
    {6, 75, 6},	// QGlobalSpace::Q_MOVABLE_TYPE
    {6, 76, 4},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {6, 77, 5},	// QGlobalSpace::Q_STATIC_TYPE
    {6, 78, 24},	// QGlobalSpace::QtCriticalMsg
    {6, 79, 22},	// QGlobalSpace::QtDebugMsg
    {6, 80, 25},	// QGlobalSpace::QtFatalMsg
    {6, 84, 26},	// QGlobalSpace::QtSystemMsg
    {6, 85, 23},	// QGlobalSpace::QtWarningMsg
    {6, 280, 2},	// QGlobalSpace::qScriptConnect#$##
    {11, 3, 54},	// QScriptClass::Callable
    {11, 13, 52},	// QScriptClass::HandlesReadAccess
    {11, 14, 53},	// QScriptClass::HandlesWriteAccess
    {11, 15, 55},	// QScriptClass::HasInstance
    {11, 45, 39},	// QScriptClass::QScriptClass#
    {11, 46, 50},	// QScriptClass::QScriptClass##
    {11, 141, 40},	// QScriptClass::engine
    {11, 159, 51},	// QScriptClass::extension$
    {11, 160, 49},	// QScriptClass::extension$#
    {11, 210, 47},	// QScriptClass::name
    {11, 223, 45},	// QScriptClass::newIterator#
    {11, 266, 42},	// QScriptClass::property##$
    {11, 272, 44},	// QScriptClass::propertyFlags##$
    {11, 275, 46},	// QScriptClass::prototype
    {11, 286, 41},	// QScriptClass::queryProperty##$$
    {11, 315, 43},	// QScriptClass::setProperty##$#
    {11, 339, 48},	// QScriptClass::supportsExtension$
    {11, 381, 56},	// QScriptClass::~QScriptClass
    {13, 48, 57},	// QScriptClassPropertyIterator::QScriptClassPropertyIterator#
    {13, 49, 68},	// QScriptClassPropertyIterator::QScriptClassPropertyIterator##
    {13, 162, 67},	// QScriptClassPropertyIterator::flags
    {13, 174, 59},	// QScriptClassPropertyIterator::hasNext
    {13, 175, 61},	// QScriptClassPropertyIterator::hasPrevious
    {13, 177, 66},	// QScriptClassPropertyIterator::id
    {13, 210, 65},	// QScriptClassPropertyIterator::name
    {13, 243, 60},	// QScriptClassPropertyIterator::next
    {13, 245, 58},	// QScriptClassPropertyIterator::object
    {13, 261, 62},	// QScriptClassPropertyIterator::previous
    {13, 349, 64},	// QScriptClassPropertyIterator::toBack
    {13, 353, 63},	// QScriptClassPropertyIterator::toFront
    {13, 382, 69},	// QScriptClassPropertyIterator::~QScriptClassPropertyIterator
    {15, 6, 93},	// QScriptContext::ExceptionState
    {15, 38, 92},	// QScriptContext::NormalState
    {15, 86, 98},	// QScriptContext::RangeError
    {15, 88, 95},	// QScriptContext::ReferenceError
    {15, 97, 96},	// QScriptContext::SyntaxError
    {15, 98, 97},	// QScriptContext::TypeError
    {15, 99, 99},	// QScriptContext::URIError
    {15, 102, 94},	// QScriptContext::UnknownError
    {15, 107, 82},	// QScriptContext::activationObject
    {15, 110, 75},	// QScriptContext::argument$
    {15, 111, 74},	// QScriptContext::argumentCount
    {15, 112, 76},	// QScriptContext::argumentsObject
    {15, 114, 90},	// QScriptContext::backtrace
    {15, 119, 73},	// QScriptContext::callee
    {15, 141, 71},	// QScriptContext::engine
    {15, 190, 86},	// QScriptContext::isCalledAsConstructor
    {15, 256, 70},	// QScriptContext::parentContext
    {15, 258, 79},	// QScriptContext::popScope
    {15, 278, 78},	// QScriptContext::pushScope#
    {15, 290, 80},	// QScriptContext::returnValue
    {15, 292, 77},	// QScriptContext::scopeChain
    {15, 301, 83},	// QScriptContext::setActivationObject#
    {15, 321, 81},	// QScriptContext::setReturnValue#
    {15, 327, 85},	// QScriptContext::setThisObject#
    {15, 334, 72},	// QScriptContext::state
    {15, 340, 84},	// QScriptContext::thisObject
    {15, 342, 89},	// QScriptContext::throwError$
    {15, 343, 88},	// QScriptContext::throwError$$
    {15, 345, 87},	// QScriptContext::throwValue#
    {15, 362, 91},	// QScriptContext::toString
    {15, 383, 100},	// QScriptContext::~QScriptContext
    {16, 37, 121},	// QScriptContextInfo::NativeFunction
    {16, 50, 103},	// QScriptContextInfo::QScriptContextInfo
    {16, 51, -1},	// QScriptContextInfo::QScriptContextInfo#
    {16, 81, 119},	// QScriptContextInfo::QtFunction
    {16, 83, 120},	// QScriptContextInfo::QtPropertyFunction
    {16, 93, 118},	// QScriptContextInfo::ScriptFunction
    {16, 127, 109},	// QScriptContextInfo::columnNumber
    {16, 161, 107},	// QScriptContextInfo::fileName
    {16, 163, 114},	// QScriptContextInfo::functionEndLineNumber
    {16, 168, 115},	// QScriptContextInfo::functionMetaIndex
    {16, 169, 110},	// QScriptContextInfo::functionName
    {16, 170, 112},	// QScriptContextInfo::functionParameterNames
    {16, 171, 113},	// QScriptContextInfo::functionStartLineNumber
    {16, 172, 111},	// QScriptContextInfo::functionType
    {16, 195, 105},	// QScriptContextInfo::isNull
    {16, 208, 108},	// QScriptContextInfo::lineNumber
    {16, 251, 117},	// QScriptContextInfo::operator!=#
    {16, 253, 104},	// QScriptContextInfo::operator=#
    {16, 255, 116},	// QScriptContextInfo::operator==#
    {16, 294, 106},	// QScriptContextInfo::scriptId
    {16, 384, 122},	// QScriptContextInfo::~QScriptContextInfo
    {17, 1, 210},	// QScriptEngine::AutoCreateDynamicProperties
    {17, 2, 202},	// QScriptEngine::AutoOwnership
    {17, 7, 203},	// QScriptEngine::ExcludeChildObjects
    {17, 8, 208},	// QScriptEngine::ExcludeDeleteLater
    {17, 9, 209},	// QScriptEngine::ExcludeSlots
    {17, 10, 206},	// QScriptEngine::ExcludeSuperClassContents
    {17, 11, 204},	// QScriptEngine::ExcludeSuperClassMethods
    {17, 12, 205},	// QScriptEngine::ExcludeSuperClassProperties
    {17, 40, 211},	// QScriptEngine::PreferExistingWrapperObject
    {17, 52, 130},	// QScriptEngine::QScriptEngine
    {17, 53, -4},	// QScriptEngine::QScriptEngine#
    {17, 54, 182},	// QScriptEngine::QScriptEngine##
    {17, 82, 200},	// QScriptEngine::QtOwnership
    {17, 94, 201},	// QScriptEngine::ScriptOwnership
    {17, 96, 207},	// QScriptEngine::SkipMethodsInEnumeration
    {17, 105, 187},	// QScriptEngine::abortEvaluation
    {17, 106, 142},	// QScriptEngine::abortEvaluation#
    {17, 108, 177},	// QScriptEngine::agent
    {17, 113, 170},	// QScriptEngine::availableExtensions
    {17, 121, 137},	// QScriptEngine::canEvaluate$
    {17, 123, 138},	// QScriptEngine::checkSyntax$
    {17, 125, 147},	// QScriptEngine::clearExceptions
    {17, 126, 172},	// QScriptEngine::collectGarbage
    {17, 135, 134},	// QScriptEngine::currentContext
    {17, 139, 166},	// QScriptEngine::defaultPrototype$
    {17, 148, 140},	// QScriptEngine::evaluate#
    {17, 149, 185},	// QScriptEngine::evaluate$
    {17, 150, 186},	// QScriptEngine::evaluate$$
    {17, 151, 139},	// QScriptEngine::evaluate$$$
    {17, 173, 132},	// QScriptEngine::globalObject
    {17, 176, 143},	// QScriptEngine::hasUncaughtException
    {17, 179, 169},	// QScriptEngine::importExtension$
    {17, 180, 171},	// QScriptEngine::importedExtensions
    {17, 183, 197},	// QScriptEngine::installTranslatorFunctions
    {17, 184, 168},	// QScriptEngine::installTranslatorFunctions#
    {17, 193, 141},	// QScriptEngine::isEvaluating
    {17, 209, 123},	// QScriptEngine::metaObject
    {17, 211, 162},	// QScriptEngine::newActivationObject
    {17, 212, 191},	// QScriptEngine::newArray
    {17, 213, 158},	// QScriptEngine::newArray$
    {17, 215, 161},	// QScriptEngine::newDate#
    {17, 216, 160},	// QScriptEngine::newDate$
    {17, 218, 188},	// QScriptEngine::newFunction#
    {17, 219, 189},	// QScriptEngine::newFunction##
    {17, 220, 151},	// QScriptEngine::newFunction##$
    {17, 221, -7},	// QScriptEngine::newFunction#$
    {17, 224, 156},	// QScriptEngine::newObject
    {17, 225, 190},	// QScriptEngine::newObject#
    {17, 226, 157},	// QScriptEngine::newObject##
    {17, 228, 196},	// QScriptEngine::newQMetaObject#
    {17, 229, 165},	// QScriptEngine::newQMetaObject##
    {17, 231, 192},	// QScriptEngine::newQObject#
    {17, 232, 194},	// QScriptEngine::newQObject##
    {17, 233, 195},	// QScriptEngine::newQObject##$
    {17, 234, 164},	// QScriptEngine::newQObject##$#
    {17, 235, 193},	// QScriptEngine::newQObject#$
    {17, 236, 163},	// QScriptEngine::newQObject#$#
    {17, 238, 155},	// QScriptEngine::newRegExp#
    {17, 239, 159},	// QScriptEngine::newRegExp$$
    {17, 241, 153},	// QScriptEngine::newVariant#
    {17, 242, 154},	// QScriptEngine::newVariant##
    {17, 244, 148},	// QScriptEngine::nullValue
    {17, 247, 180},	// QScriptEngine::objectById$
    {17, 257, 136},	// QScriptEngine::popContext
    {17, 262, 175},	// QScriptEngine::processEventsInterval
    {17, 276, 135},	// QScriptEngine::pushContext
    {17, 282, 129},	// QScriptEngine::qt_metacall$$?
    {17, 284, 124},	// QScriptEngine::qt_metacast$
    {17, 289, 173},	// QScriptEngine::reportAdditionalMemoryCost$
    {17, 303, 176},	// QScriptEngine::setAgent#
    {17, 307, 167},	// QScriptEngine::setDefaultPrototype$#
    {17, 309, 133},	// QScriptEngine::setGlobalObject#
    {17, 311, 174},	// QScriptEngine::setProcessEventsInterval$
    {17, 333, 181},	// QScriptEngine::signalHandlerException#
    {17, 335, 199},	// QScriptEngine::staticMetaObject
    {17, 358, 179},	// QScriptEngine::toObject#
    {17, 364, 178},	// QScriptEngine::toStringHandle$
    {17, 369, 183},	// QScriptEngine::tr$
    {17, 370, 125},	// QScriptEngine::tr$$
    {17, 371, 127},	// QScriptEngine::tr$$$
    {17, 373, 184},	// QScriptEngine::trUtf8$
    {17, 374, 126},	// QScriptEngine::trUtf8$$
    {17, 375, 128},	// QScriptEngine::trUtf8$$$
    {17, 376, 144},	// QScriptEngine::uncaughtException
    {17, 377, 146},	// QScriptEngine::uncaughtExceptionBacktrace
    {17, 378, 145},	// QScriptEngine::uncaughtExceptionLineNumber
    {17, 379, 149},	// QScriptEngine::undefinedValue
    {17, 385, 212},	// QScriptEngine::~QScriptEngine
    {18, 4, 228},	// QScriptEngineAgent::DebuggerInvocationRequest
    {18, 56, 213},	// QScriptEngineAgent::QScriptEngineAgent#
    {18, 57, 226},	// QScriptEngineAgent::QScriptEngineAgent##
    {18, 133, 217},	// QScriptEngineAgent::contextPop
    {18, 134, 216},	// QScriptEngineAgent::contextPush
    {18, 141, 225},	// QScriptEngineAgent::engine
    {18, 155, 222},	// QScriptEngineAgent::exceptionCatch$#
    {18, 157, 221},	// QScriptEngineAgent::exceptionThrow$#$
    {18, 159, 227},	// QScriptEngineAgent::extension$
    {18, 160, 224},	// QScriptEngineAgent::extension$#
    {18, 165, 218},	// QScriptEngineAgent::functionEntry$
    {18, 167, 219},	// QScriptEngineAgent::functionExit$#
    {18, 260, 220},	// QScriptEngineAgent::positionChange$$$
    {18, 296, 214},	// QScriptEngineAgent::scriptLoad$$$$
    {18, 299, 215},	// QScriptEngineAgent::scriptUnload$
    {18, 339, 223},	// QScriptEngineAgent::supportsExtension$
    {18, 386, 229},	// QScriptEngineAgent::~QScriptEngineAgent
    {21, 58, 231},	// QScriptExtensionInterface::QScriptExtensionInterface
    {21, 59, 232},	// QScriptExtensionInterface::QScriptExtensionInterface#
    {21, 182, 230},	// QScriptExtensionInterface::initialize$#
    {21, 387, 233},	// QScriptExtensionInterface::~QScriptExtensionInterface
    {22, 60, 247},	// QScriptExtensionPlugin::QScriptExtensionPlugin
    {22, 61, 241},	// QScriptExtensionPlugin::QScriptExtensionPlugin#
    {22, 182, 243},	// QScriptExtensionPlugin::initialize$#
    {22, 205, 242},	// QScriptExtensionPlugin::keys
    {22, 209, 234},	// QScriptExtensionPlugin::metaObject
    {22, 282, 240},	// QScriptExtensionPlugin::qt_metacall$$?
    {22, 284, 235},	// QScriptExtensionPlugin::qt_metacast$
    {22, 331, 244},	// QScriptExtensionPlugin::setupPackage$#
    {22, 335, 248},	// QScriptExtensionPlugin::staticMetaObject
    {22, 369, 245},	// QScriptExtensionPlugin::tr$
    {22, 370, 236},	// QScriptExtensionPlugin::tr$$
    {22, 371, 238},	// QScriptExtensionPlugin::tr$$$
    {22, 373, 246},	// QScriptExtensionPlugin::trUtf8$
    {22, 374, 237},	// QScriptExtensionPlugin::trUtf8$$
    {22, 375, 239},	// QScriptExtensionPlugin::trUtf8$$$
    {22, 388, 249},	// QScriptExtensionPlugin::~QScriptExtensionPlugin
    {24, 62, 250},	// QScriptString::QScriptString
    {24, 63, 251},	// QScriptString::QScriptString#
    {24, 203, 253},	// QScriptString::isValid
    {24, 249, 258},	// QScriptString::operator QString
    {24, 251, 255},	// QScriptString::operator!=#
    {24, 253, 252},	// QScriptString::operator=#
    {24, 255, 254},	// QScriptString::operator==#
    {24, 347, 259},	// QScriptString::toArrayIndex
    {24, 348, 256},	// QScriptString::toArrayIndex$
    {24, 362, 257},	// QScriptString::toString
    {24, 389, 260},	// QScriptString::~QScriptString
    {25, 5, 267},	// QScriptSyntaxCheckResult::Error
    {25, 16, 268},	// QScriptSyntaxCheckResult::Intermediate
    {25, 65, 261},	// QScriptSyntaxCheckResult::QScriptSyntaxCheckResult#
    {25, 104, 269},	// QScriptSyntaxCheckResult::Valid
    {25, 144, 264},	// QScriptSyntaxCheckResult::errorColumnNumber
    {25, 145, 263},	// QScriptSyntaxCheckResult::errorLineNumber
    {25, 146, 265},	// QScriptSyntaxCheckResult::errorMessage
    {25, 253, 266},	// QScriptSyntaxCheckResult::operator=#
    {25, 334, 262},	// QScriptSyntaxCheckResult::state
    {25, 390, 270},	// QScriptSyntaxCheckResult::~QScriptSyntaxCheckResult
    {26, 17, 364},	// QScriptValue::KeepExistingFlags
    {26, 39, 366},	// QScriptValue::NullValue
    {26, 41, 361},	// QScriptValue::PropertyGetter
    {26, 42, 362},	// QScriptValue::PropertySetter
    {26, 43, 363},	// QScriptValue::QObjectMember
    {26, 66, 271},	// QScriptValue::QScriptValue
    {26, 67, -10},	// QScriptValue::QScriptValue#
    {26, 68, -13},	// QScriptValue::QScriptValue#$
    {26, 69, -20},	// QScriptValue::QScriptValue$
    {26, 87, 358},	// QScriptValue::ReadOnly
    {26, 89, 357},	// QScriptValue::ResolveFull
    {26, 90, 354},	// QScriptValue::ResolveLocal
    {26, 91, 355},	// QScriptValue::ResolvePrototype
    {26, 92, 356},	// QScriptValue::ResolveScope
    {26, 95, 360},	// QScriptValue::SkipInEnumeration
    {26, 100, 367},	// QScriptValue::UndefinedValue
    {26, 101, 359},	// QScriptValue::Undeletable
    {26, 103, 365},	// QScriptValue::UserRange
    {26, 115, 351},	// QScriptValue::call
    {26, 116, 352},	// QScriptValue::call#
    {26, 117, 335},	// QScriptValue::call##
    {26, 118, 334},	// QScriptValue::call#?
    {26, 129, 353},	// QScriptValue::construct
    {26, 130, 337},	// QScriptValue::construct#
    {26, 131, 336},	// QScriptValue::construct?
    {26, 137, 338},	// QScriptValue::data
    {26, 141, 287},	// QScriptValue::engine
    {26, 143, 320},	// QScriptValue::equals#
    {26, 186, 318},	// QScriptValue::instanceOf#
    {26, 187, 302},	// QScriptValue::isArray
    {26, 188, 289},	// QScriptValue::isBool
    {26, 189, 290},	// QScriptValue::isBoolean
    {26, 191, 300},	// QScriptValue::isDate
    {26, 192, 303},	// QScriptValue::isError
    {26, 194, 292},	// QScriptValue::isFunction
    {26, 195, 293},	// QScriptValue::isNull
    {26, 196, 291},	// QScriptValue::isNumber
    {26, 197, 299},	// QScriptValue::isObject
    {26, 198, 298},	// QScriptValue::isQMetaObject
    {26, 199, 297},	// QScriptValue::isQObject
    {26, 200, 301},	// QScriptValue::isRegExp
    {26, 201, 294},	// QScriptValue::isString
    {26, 202, 295},	// QScriptValue::isUndefined
    {26, 203, 288},	// QScriptValue::isValid
    {26, 204, 296},	// QScriptValue::isVariant
    {26, 207, 319},	// QScriptValue::lessThan#
    {26, 248, 342},	// QScriptValue::objectId
    {26, 253, 286},	// QScriptValue::operator=#
    {26, 264, 347},	// QScriptValue::property#
    {26, 265, 330},	// QScriptValue::property##
    {26, 267, -27},	// QScriptValue::property$
    {26, 268, -30},	// QScriptValue::property$#
    {26, 270, 350},	// QScriptValue::propertyFlags#
    {26, 271, 333},	// QScriptValue::propertyFlags##
    {26, 273, 349},	// QScriptValue::propertyFlags$
    {26, 274, 332},	// QScriptValue::propertyFlags$#
    {26, 275, 322},	// QScriptValue::prototype
    {26, 291, 324},	// QScriptValue::scope
    {26, 293, 340},	// QScriptValue::scriptClass
    {26, 305, 339},	// QScriptValue::setData#
    {26, 313, 348},	// QScriptValue::setProperty##
    {26, 314, 331},	// QScriptValue::setProperty###
    {26, 316, -33},	// QScriptValue::setProperty$#
    {26, 317, -36},	// QScriptValue::setProperty$##
    {26, 319, 323},	// QScriptValue::setPrototype#
    {26, 323, 325},	// QScriptValue::setScope#
    {26, 325, 341},	// QScriptValue::setScriptClass#
    {26, 337, 321},	// QScriptValue::strictlyEquals#
    {26, 350, 306},	// QScriptValue::toBool
    {26, 351, 307},	// QScriptValue::toBoolean
    {26, 352, 316},	// QScriptValue::toDateTime
    {26, 354, 309},	// QScriptValue::toInt32
    {26, 355, 308},	// QScriptValue::toInteger
    {26, 356, 305},	// QScriptValue::toNumber
    {26, 357, 315},	// QScriptValue::toObject
    {26, 359, 314},	// QScriptValue::toQMetaObject
    {26, 360, 313},	// QScriptValue::toQObject
    {26, 361, 317},	// QScriptValue::toRegExp
    {26, 362, 304},	// QScriptValue::toString
    {26, 365, 311},	// QScriptValue::toUInt16
    {26, 366, 310},	// QScriptValue::toUInt32
    {26, 367, 312},	// QScriptValue::toVariant
    {26, 391, 368},	// QScriptValue::~QScriptValue
    {27, 71, 369},	// QScriptValueIterator::QScriptValueIterator#
    {27, 162, 378},	// QScriptValueIterator::flags
    {27, 174, 370},	// QScriptValueIterator::hasNext
    {27, 175, 372},	// QScriptValueIterator::hasPrevious
    {27, 210, 374},	// QScriptValueIterator::name
    {27, 243, 371},	// QScriptValueIterator::next
    {27, 253, 382},	// QScriptValueIterator::operator=#
    {27, 261, 373},	// QScriptValueIterator::previous
    {27, 287, 379},	// QScriptValueIterator::remove
    {27, 297, 375},	// QScriptValueIterator::scriptName
    {27, 329, 377},	// QScriptValueIterator::setValue#
    {27, 349, 381},	// QScriptValueIterator::toBack
    {27, 353, 380},	// QScriptValueIterator::toFront
    {27, 380, 376},	// QScriptValueIterator::value
    {27, 392, 383},	// QScriptValueIterator::~QScriptValueIterator
    {28, 72, 384},	// QScriptable::QScriptable
    {28, 110, 389},	// QScriptable::argument$
    {28, 111, 388},	// QScriptable::argumentCount
    {28, 132, 386},	// QScriptable::context
    {28, 141, 385},	// QScriptable::engine
    {28, 340, 387},	// QScriptable::thisObject
    {28, 393, 390},	// QScriptable::~QScriptable
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();

static bool initialized = false;
Smoke *qtscript_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtscript_Smoke() {
    init_qtcore_Smoke();
    if (initialized) return;
    qtscript_Smoke = new Smoke(
        "qtscript",
        __smokeqtscript::classes, 30,
        __smokeqtscript::methods, 391,
        __smokeqtscript::methodMaps, 365,
        __smokeqtscript::methodNames, 393,
        __smokeqtscript::types, 180,
        __smokeqtscript::inheritanceList,
        __smokeqtscript::argumentList,
        __smokeqtscript::ambiguousMethodList,
        __smokeqtscript::cast );
    initialized = true;
}

void delete_qtscript_Smoke() { delete qtscript_Smoke; }

}
