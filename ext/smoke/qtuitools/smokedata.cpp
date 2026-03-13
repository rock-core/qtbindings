#include <qtuitools_includes.h>

#include <smoke.h>
#include <qtuitools_smoke.h>

namespace __smokeqtuitools {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QAction
      switch(to) {
        case 1: return (void*)(QAction*)xptr;
        default: return xptr;
      }
    case 2:   //QActionGroup
      switch(to) {
        case 2: return (void*)(QActionGroup*)xptr;
        default: return xptr;
      }
    case 3:   //QBool
      switch(to) {
        case 3: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 4:   //QChildEvent
      switch(to) {
        case 6: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 4: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 5:   //QDir
      switch(to) {
        case 5: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 6:   //QEvent
      switch(to) {
        case 6: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 8:   //QIODevice
      switch(to) {
        case 12: return (void*)(QObject*)(QIODevice*)xptr;
        case 8: return (void*)(QIODevice*)xptr;
        default: return xptr;
      }
    case 9:   //QIncompatibleFlag
      switch(to) {
        case 9: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 10:   //QLayout
      switch(to) {
        case 10: return (void*)(QLayout*)xptr;
        default: return xptr;
      }
    case 11:   //QMetaObject
      switch(to) {
        case 11: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 12:   //QObject
      switch(to) {
        case 12: return (void*)(QObject*)xptr;
        case 15: return (void*)(QUiLoader*)(QObject*)xptr;
        default: return xptr;
      }
    case 13:   //QRegExp
      switch(to) {
        case 13: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 14:   //QTimerEvent
      switch(to) {
        case 6: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 14: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 15:   //QUiLoader
      switch(to) {
        case 12: return (void*)(QObject*)(QUiLoader*)xptr;
        case 15: return (void*)(QUiLoader*)xptr;
        default: return xptr;
      }
    case 16:   //QWidget
      switch(to) {
        case 16: return (void*)(QWidget*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    12, 0,	// 1: QObject
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QUiLoader(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QAction", true, 0, 0, 0, 0, 0 },	//1
    { "QActionGroup", true, 0, 0, 0, 0, 0 },	//2
    { "QBool", true, 0, 0, 0, 0, 0 },	//3
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//4
    { "QDir", true, 0, 0, 0, 0, 0 },	//5
    { "QEvent", true, 0, 0, 0, 0, 0 },	//6
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//7
    { "QIODevice", true, 0, 0, 0, 0, 0 },	//8
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//9
    { "QLayout", true, 0, 0, 0, 0, 0 },	//10
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//11
    { "QObject", true, 0, 0, 0, 0, 0 },	//12
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//13
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//14
    { "QUiLoader", false, 1, xcall_QUiLoader, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QUiLoader) },	//15
    { "QWidget", true, 0, 0, 0, 0, 0 },	//16
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAction*", 1, Smoke::t_class|Smoke::tf_ptr },	//1
    { "QActionGroup*", 2, Smoke::t_class|Smoke::tf_ptr },	//2
    { "QBool", 3, Smoke::t_class|Smoke::tf_stack },	//3
    { "QChildEvent*", 4, Smoke::t_class|Smoke::tf_ptr },	//4
    { "QDir", 5, Smoke::t_class|Smoke::tf_stack },	//5
    { "QEvent*", 6, Smoke::t_class|Smoke::tf_ptr },	//6
    { "QFlags<QtConcurrent::ReduceOptions::enum_type>", 0, Smoke::t_uint|Smoke::tf_stack },	//7
    { "QIODevice*", 8, Smoke::t_class|Smoke::tf_ptr },	//8
    { "QIncompatibleFlag", 9, Smoke::t_class|Smoke::tf_stack },	//9
    { "QLayout*", 10, Smoke::t_class|Smoke::tf_ptr },	//10
    { "QMetaObject::Call", 11, Smoke::t_enum|Smoke::tf_stack },	//11
    { "QObject*", 12, Smoke::t_class|Smoke::tf_ptr },	//12
    { "QRegExp&", 13, Smoke::t_class|Smoke::tf_ref },	//13
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//14
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//15
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//16
    { "QTimerEvent*", 14, Smoke::t_class|Smoke::tf_ptr },	//17
    { "QUiLoader*", 15, Smoke::t_class|Smoke::tf_ptr },	//18
    { "QWidget*", 16, Smoke::t_class|Smoke::tf_ptr },	//19
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//20
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//21
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//22
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//23
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//24
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//25
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//26
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//27
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//28
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//29
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//30
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//31
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//32
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//33
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//34
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//35
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//36
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//37
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//38
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//39
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//40
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//41
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//42
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//43
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//44
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//45
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//46
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//47
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//48
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//49
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//50
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//51
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//52
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//53
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//54
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//55
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//56
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//57
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//58
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//59
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//60
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//61
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//62
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//63
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//64
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//65
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//66
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//67
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//68
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//69
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//70
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//71
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//72
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//73
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//74
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//75
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//76
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//77
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//78
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//79
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//80
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//81
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//82
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//83
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//84
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//85
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//86
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//87
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//88
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//89
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//90
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//91
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//92
    { "QtConcurrent::ReduceOptions::enum_type", 0, Smoke::t_voidp|Smoke::tf_stack },	//93
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//94
    { "QtMsgType", 7, Smoke::t_enum|Smoke::tf_stack },	//95
    { "QtValidLicenseForActiveQtModule", 7, Smoke::t_enum|Smoke::tf_stack },	//96
    { "QtValidLicenseForCoreModule", 7, Smoke::t_enum|Smoke::tf_stack },	//97
    { "QtValidLicenseForDBusModule", 7, Smoke::t_enum|Smoke::tf_stack },	//98
    { "QtValidLicenseForDeclarativeModule", 7, Smoke::t_enum|Smoke::tf_stack },	//99
    { "QtValidLicenseForGuiModule", 7, Smoke::t_enum|Smoke::tf_stack },	//100
    { "QtValidLicenseForHelpModule", 7, Smoke::t_enum|Smoke::tf_stack },	//101
    { "QtValidLicenseForMultimediaModule", 7, Smoke::t_enum|Smoke::tf_stack },	//102
    { "QtValidLicenseForNetworkModule", 7, Smoke::t_enum|Smoke::tf_stack },	//103
    { "QtValidLicenseForOpenGLModule", 7, Smoke::t_enum|Smoke::tf_stack },	//104
    { "QtValidLicenseForOpenVGModule", 7, Smoke::t_enum|Smoke::tf_stack },	//105
    { "QtValidLicenseForQt3SupportLightModule", 7, Smoke::t_enum|Smoke::tf_stack },	//106
    { "QtValidLicenseForQt3SupportModule", 7, Smoke::t_enum|Smoke::tf_stack },	//107
    { "QtValidLicenseForScriptModule", 7, Smoke::t_enum|Smoke::tf_stack },	//108
    { "QtValidLicenseForScriptToolsModule", 7, Smoke::t_enum|Smoke::tf_stack },	//109
    { "QtValidLicenseForSqlModule", 7, Smoke::t_enum|Smoke::tf_stack },	//110
    { "QtValidLicenseForSvgModule", 7, Smoke::t_enum|Smoke::tf_stack },	//111
    { "QtValidLicenseForTestModule", 7, Smoke::t_enum|Smoke::tf_stack },	//112
    { "QtValidLicenseForXmlModule", 7, Smoke::t_enum|Smoke::tf_stack },	//113
    { "QtValidLicenseForXmlPatternsModule", 7, Smoke::t_enum|Smoke::tf_stack },	//114
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//115
    { "const QDir&", 5, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//116
    { "const QMetaObject&", 11, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//117
    { "const QMetaObject*", 11, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//118
    { "const QRegExp&", 13, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//119
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//120
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//121
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//122
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//123
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//124
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//125
    { "std::bidirectional_iterator_tag", 0, Smoke::t_voidp|Smoke::tf_stack },	//126
    { "std::forward_iterator_tag", 0, Smoke::t_voidp|Smoke::tf_stack },	//127
    { "std::random_access_iterator_tag", 0, Smoke::t_voidp|Smoke::tf_stack },	//128
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//129
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//130
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//131
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    6, 0,	//1  QEvent*
    12, 6, 0,	//3  QObject*, QEvent*
    17, 0,	//6  QTimerEvent*
    4, 0,	//8  QChildEvent*
    122, 0,	//10  const char*
    122, 122, 0,	//12  const char*, const char*
    122, 122, 124, 0,	//15  const char*, const char*, int
    11, 124, 130, 0,	//19  QMetaObject::Call, int, void**
    12, 0,	//23  QObject*
    120, 0,	//25  const QString&
    8, 19, 0,	//27  QIODevice*, QWidget*
    120, 19, 120, 0,	//30  const QString&, QWidget*, const QString&
    120, 12, 120, 0,	//34  const QString&, QObject*, const QString&
    12, 120, 0,	//38  QObject*, const QString&
    116, 0,	//41  const QDir&
    115, 0,	//43  bool
    8, 0,	//45  QIODevice*
    120, 19, 0,	//47  const QString&, QWidget*
    120, 12, 0,	//50  const QString&, QObject*
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "LicensedActiveQt",	//1
    "LicensedCore",	//2
    "LicensedDBus",	//3
    "LicensedDeclarative",	//4
    "LicensedGui",	//5
    "LicensedHelp",	//6
    "LicensedMultimedia",	//7
    "LicensedNetwork",	//8
    "LicensedOpenGL",	//9
    "LicensedOpenVG",	//10
    "LicensedQt3Support",	//11
    "LicensedQt3SupportLight",	//12
    "LicensedScript",	//13
    "LicensedScriptTools",	//14
    "LicensedSql",	//15
    "LicensedSvg",	//16
    "LicensedTest",	//17
    "LicensedXml",	//18
    "LicensedXmlPatterns",	//19
    "QUiLoader",	//20
    "QUiLoader#",	//21
    "Q_COMPLEX_TYPE",	//22
    "Q_DUMMY_TYPE",	//23
    "Q_MOVABLE_TYPE",	//24
    "Q_PRIMITIVE_TYPE",	//25
    "Q_STATIC_TYPE",	//26
    "QtCriticalMsg",	//27
    "QtDebugMsg",	//28
    "QtFatalMsg",	//29
    "QtSystemMsg",	//30
    "QtWarningMsg",	//31
    "addPluginPath",	//32
    "addPluginPath$",	//33
    "availableLayouts",	//34
    "availableWidgets",	//35
    "childEvent",	//36
    "clearPluginPaths",	//37
    "connectNotify",	//38
    "createAction",	//39
    "createAction#",	//40
    "createAction#$",	//41
    "createActionGroup",	//42
    "createActionGroup#",	//43
    "createActionGroup#$",	//44
    "createLayout",	//45
    "createLayout$",	//46
    "createLayout$#",	//47
    "createLayout$#$",	//48
    "createWidget",	//49
    "createWidget$",	//50
    "createWidget$#",	//51
    "createWidget$#$",	//52
    "customEvent",	//53
    "disconnectNotify",	//54
    "event",	//55
    "eventFilter",	//56
    "isLanguageChangeEnabled",	//57
    "isScriptingEnabled",	//58
    "isTranslationEnabled",	//59
    "load",	//60
    "load#",	//61
    "load##",	//62
    "metaObject",	//63
    "pluginPaths",	//64
    "qt_metacall",	//65
    "qt_metacall$$?",	//66
    "qt_metacast",	//67
    "qt_metacast$",	//68
    "setLanguageChangeEnabled",	//69
    "setLanguageChangeEnabled$",	//70
    "setScriptingEnabled",	//71
    "setScriptingEnabled$",	//72
    "setTranslationEnabled",	//73
    "setTranslationEnabled$",	//74
    "setWorkingDirectory",	//75
    "setWorkingDirectory#",	//76
    "staticMetaObject",	//77
    "timerEvent",	//78
    "tr",	//79
    "tr$",	//80
    "tr$$",	//81
    "tr$$$",	//82
    "trUtf8",	//83
    "trUtf8$",	//84
    "trUtf8$$",	//85
    "trUtf8$$$",	//86
    "workingDirectory",	//87
    "~QUiLoader",	//88
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {7, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 1},	//1 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {7, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 2},	//2 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {7, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 3},	//3 QGlobalSpace::Q_STATIC_TYPE (enum)
    {7, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 4},	//4 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {7, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 5},	//5 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {7, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 100, 6},	//6 QGlobalSpace::LicensedGui (enum)
    {7, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 113, 7},	//7 QGlobalSpace::LicensedXml (enum)
    {7, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 106, 8},	//8 QGlobalSpace::LicensedQt3SupportLight (enum)
    {7, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 108, 9},	//9 QGlobalSpace::LicensedScript (enum)
    {7, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 105, 10},	//10 QGlobalSpace::LicensedOpenVG (enum)
    {7, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 98, 11},	//11 QGlobalSpace::LicensedDBus (enum)
    {7, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 112, 12},	//12 QGlobalSpace::LicensedTest (enum)
    {7, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 96, 13},	//13 QGlobalSpace::LicensedActiveQt (enum)
    {7, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 109, 14},	//14 QGlobalSpace::LicensedScriptTools (enum)
    {7, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 111, 15},	//15 QGlobalSpace::LicensedSvg (enum)
    {7, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 99, 16},	//16 QGlobalSpace::LicensedDeclarative (enum)
    {7, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 110, 17},	//17 QGlobalSpace::LicensedSql (enum)
    {7, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 104, 18},	//18 QGlobalSpace::LicensedOpenGL (enum)
    {7, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 97, 19},	//19 QGlobalSpace::LicensedCore (enum)
    {7, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 20},	//20 QGlobalSpace::QtDebugMsg (enum)
    {7, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 21},	//21 QGlobalSpace::QtWarningMsg (enum)
    {7, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 22},	//22 QGlobalSpace::QtCriticalMsg (enum)
    {7, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 23},	//23 QGlobalSpace::QtFatalMsg (enum)
    {7, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 24},	//24 QGlobalSpace::QtSystemMsg (enum)
    {7, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 25},	//25 QGlobalSpace::LicensedHelp (enum)
    {7, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 102, 26},	//26 QGlobalSpace::LicensedMultimedia (enum)
    {7, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 27},	//27 QGlobalSpace::LicensedQt3Support (enum)
    {7, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 114, 28},	//28 QGlobalSpace::LicensedXmlPatterns (enum)
    {7, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 103, 29},	//29 QGlobalSpace::LicensedNetwork (enum)
    {12, 55, 1, 1, Smoke::mf_virtual, 115, 0},	//30 QObject::event(QEvent*)
    {12, 56, 3, 2, Smoke::mf_virtual, 115, 0},	//31 QObject::eventFilter(QObject*, QEvent*)
    {12, 78, 6, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//32 QObject::timerEvent(QTimerEvent*)
    {12, 36, 8, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//33 QObject::childEvent(QChildEvent*)
    {12, 53, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//34 QObject::customEvent(QEvent*)
    {12, 38, 10, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//35 QObject::connectNotify(const char*)
    {12, 54, 10, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//36 QObject::disconnectNotify(const char*)
    {15, 63, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 118, 1},	//37 QUiLoader::metaObject() const
    {15, 67, 10, 1, Smoke::mf_virtual, 129, 2},	//38 QUiLoader::qt_metacast(const char*)
    {15, 79, 12, 2, Smoke::mf_static, 14, 3},	//39 QUiLoader::tr(const char*, const char*)
    {15, 83, 12, 2, Smoke::mf_static, 14, 4},	//40 QUiLoader::trUtf8(const char*, const char*)
    {15, 79, 15, 3, Smoke::mf_static, 14, 5},	//41 QUiLoader::tr(const char*, const char*, int)
    {15, 83, 15, 3, Smoke::mf_static, 14, 6},	//42 QUiLoader::trUtf8(const char*, const char*, int)
    {15, 65, 19, 3, Smoke::mf_virtual, 124, 7},	//43 QUiLoader::qt_metacall(QMetaObject::Call, int, void**)
    {15, 20, 23, 1, Smoke::mf_ctor, 18, 8},	//44 QUiLoader::QUiLoader(QObject*)
    {15, 64, 0, 0, Smoke::mf_const, 15, 9},	//45 QUiLoader::pluginPaths() const
    {15, 37, 0, 0, 0, 0, 10},	//46 QUiLoader::clearPluginPaths()
    {15, 32, 25, 1, 0, 0, 11},	//47 QUiLoader::addPluginPath(const QString&)
    {15, 60, 27, 2, 0, 19, 12},	//48 QUiLoader::load(QIODevice*, QWidget*)
    {15, 35, 0, 0, Smoke::mf_const, 15, 13},	//49 QUiLoader::availableWidgets() const
    {15, 34, 0, 0, Smoke::mf_const, 15, 14},	//50 QUiLoader::availableLayouts() const
    {15, 49, 30, 3, Smoke::mf_virtual, 19, 15},	//51 QUiLoader::createWidget(const QString&, QWidget*, const QString&)
    {15, 45, 34, 3, Smoke::mf_virtual, 10, 16},	//52 QUiLoader::createLayout(const QString&, QObject*, const QString&)
    {15, 42, 38, 2, Smoke::mf_virtual, 2, 17},	//53 QUiLoader::createActionGroup(QObject*, const QString&)
    {15, 39, 38, 2, Smoke::mf_virtual, 1, 18},	//54 QUiLoader::createAction(QObject*, const QString&)
    {15, 75, 41, 1, 0, 0, 19},	//55 QUiLoader::setWorkingDirectory(const QDir&)
    {15, 87, 0, 0, Smoke::mf_const, 5, 20},	//56 QUiLoader::workingDirectory() const
    {15, 71, 43, 1, 0, 0, 21},	//57 QUiLoader::setScriptingEnabled(bool)
    {15, 58, 0, 0, Smoke::mf_const, 115, 22},	//58 QUiLoader::isScriptingEnabled() const
    {15, 69, 43, 1, 0, 0, 23},	//59 QUiLoader::setLanguageChangeEnabled(bool)
    {15, 57, 0, 0, Smoke::mf_const, 115, 24},	//60 QUiLoader::isLanguageChangeEnabled() const
    {15, 73, 43, 1, 0, 0, 25},	//61 QUiLoader::setTranslationEnabled(bool)
    {15, 59, 0, 0, Smoke::mf_const, 115, 26},	//62 QUiLoader::isTranslationEnabled() const
    {15, 79, 10, 1, Smoke::mf_static, 14, 27},	//63 QUiLoader::tr(const char*)
    {15, 83, 10, 1, Smoke::mf_static, 14, 28},	//64 QUiLoader::trUtf8(const char*)
    {15, 20, 0, 0, Smoke::mf_ctor, 18, 29},	//65 QUiLoader::QUiLoader()
    {15, 60, 45, 1, 0, 19, 30},	//66 QUiLoader::load(QIODevice*)
    {15, 49, 25, 1, 0, 19, 31},	//67 QUiLoader::createWidget(const QString&)
    {15, 49, 47, 2, 0, 19, 32},	//68 QUiLoader::createWidget(const QString&, QWidget*)
    {15, 45, 25, 1, 0, 10, 33},	//69 QUiLoader::createLayout(const QString&)
    {15, 45, 50, 2, 0, 10, 34},	//70 QUiLoader::createLayout(const QString&, QObject*)
    {15, 42, 0, 0, 0, 2, 35},	//71 QUiLoader::createActionGroup()
    {15, 42, 23, 1, 0, 2, 36},	//72 QUiLoader::createActionGroup(QObject*)
    {15, 39, 0, 0, 0, 1, 37},	//73 QUiLoader::createAction()
    {15, 39, 23, 1, 0, 1, 38},	//74 QUiLoader::createAction(QObject*)
    {15, 77, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 117, 39},	//75 QUiLoader::staticMetaObject() const
    {15, 88, 0, 0, Smoke::mf_dtor, 0, 40 },	//76 QUiLoader::~QUiLoader()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {7, 1, 13},	// QGlobalSpace::LicensedActiveQt
    {7, 2, 19},	// QGlobalSpace::LicensedCore
    {7, 3, 11},	// QGlobalSpace::LicensedDBus
    {7, 4, 16},	// QGlobalSpace::LicensedDeclarative
    {7, 5, 6},	// QGlobalSpace::LicensedGui
    {7, 6, 25},	// QGlobalSpace::LicensedHelp
    {7, 7, 26},	// QGlobalSpace::LicensedMultimedia
    {7, 8, 29},	// QGlobalSpace::LicensedNetwork
    {7, 9, 18},	// QGlobalSpace::LicensedOpenGL
    {7, 10, 10},	// QGlobalSpace::LicensedOpenVG
    {7, 11, 27},	// QGlobalSpace::LicensedQt3Support
    {7, 12, 8},	// QGlobalSpace::LicensedQt3SupportLight
    {7, 13, 9},	// QGlobalSpace::LicensedScript
    {7, 14, 14},	// QGlobalSpace::LicensedScriptTools
    {7, 15, 17},	// QGlobalSpace::LicensedSql
    {7, 16, 15},	// QGlobalSpace::LicensedSvg
    {7, 17, 12},	// QGlobalSpace::LicensedTest
    {7, 18, 7},	// QGlobalSpace::LicensedXml
    {7, 19, 28},	// QGlobalSpace::LicensedXmlPatterns
    {7, 22, 1},	// QGlobalSpace::Q_COMPLEX_TYPE
    {7, 23, 5},	// QGlobalSpace::Q_DUMMY_TYPE
    {7, 24, 4},	// QGlobalSpace::Q_MOVABLE_TYPE
    {7, 25, 2},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {7, 26, 3},	// QGlobalSpace::Q_STATIC_TYPE
    {7, 27, 22},	// QGlobalSpace::QtCriticalMsg
    {7, 28, 20},	// QGlobalSpace::QtDebugMsg
    {7, 29, 23},	// QGlobalSpace::QtFatalMsg
    {7, 30, 24},	// QGlobalSpace::QtSystemMsg
    {7, 31, 21},	// QGlobalSpace::QtWarningMsg
    {15, 20, 65},	// QUiLoader::QUiLoader
    {15, 21, 44},	// QUiLoader::QUiLoader#
    {15, 33, 47},	// QUiLoader::addPluginPath$
    {15, 34, 50},	// QUiLoader::availableLayouts
    {15, 35, 49},	// QUiLoader::availableWidgets
    {15, 37, 46},	// QUiLoader::clearPluginPaths
    {15, 39, 73},	// QUiLoader::createAction
    {15, 40, 74},	// QUiLoader::createAction#
    {15, 41, 54},	// QUiLoader::createAction#$
    {15, 42, 71},	// QUiLoader::createActionGroup
    {15, 43, 72},	// QUiLoader::createActionGroup#
    {15, 44, 53},	// QUiLoader::createActionGroup#$
    {15, 46, 69},	// QUiLoader::createLayout$
    {15, 47, 70},	// QUiLoader::createLayout$#
    {15, 48, 52},	// QUiLoader::createLayout$#$
    {15, 50, 67},	// QUiLoader::createWidget$
    {15, 51, 68},	// QUiLoader::createWidget$#
    {15, 52, 51},	// QUiLoader::createWidget$#$
    {15, 57, 60},	// QUiLoader::isLanguageChangeEnabled
    {15, 58, 58},	// QUiLoader::isScriptingEnabled
    {15, 59, 62},	// QUiLoader::isTranslationEnabled
    {15, 61, 66},	// QUiLoader::load#
    {15, 62, 48},	// QUiLoader::load##
    {15, 63, 37},	// QUiLoader::metaObject
    {15, 64, 45},	// QUiLoader::pluginPaths
    {15, 66, 43},	// QUiLoader::qt_metacall$$?
    {15, 68, 38},	// QUiLoader::qt_metacast$
    {15, 70, 59},	// QUiLoader::setLanguageChangeEnabled$
    {15, 72, 57},	// QUiLoader::setScriptingEnabled$
    {15, 74, 61},	// QUiLoader::setTranslationEnabled$
    {15, 76, 55},	// QUiLoader::setWorkingDirectory#
    {15, 77, 75},	// QUiLoader::staticMetaObject
    {15, 80, 63},	// QUiLoader::tr$
    {15, 81, 39},	// QUiLoader::tr$$
    {15, 82, 41},	// QUiLoader::tr$$$
    {15, 84, 64},	// QUiLoader::trUtf8$
    {15, 85, 40},	// QUiLoader::trUtf8$$
    {15, 86, 42},	// QUiLoader::trUtf8$$$
    {15, 87, 56},	// QUiLoader::workingDirectory
    {15, 88, 76},	// QUiLoader::~QUiLoader
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();
SMOKE_IMPORT void init_qtgui_Smoke();

static bool initialized = false;
Smoke *qtuitools_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtuitools_Smoke() {
    init_qtcore_Smoke();
    init_qtgui_Smoke();
    if (initialized) return;
    qtuitools_Smoke = new Smoke(
        "qtuitools",
        __smokeqtuitools::classes, 16,
        __smokeqtuitools::methods, 77,
        __smokeqtuitools::methodMaps, 70,
        __smokeqtuitools::methodNames, 88,
        __smokeqtuitools::types, 131,
        __smokeqtuitools::inheritanceList,
        __smokeqtuitools::argumentList,
        __smokeqtuitools::ambiguousMethodList,
        __smokeqtuitools::cast );
    initialized = true;
}

void delete_qtuitools_Smoke() { delete qtuitools_Smoke; }

}
