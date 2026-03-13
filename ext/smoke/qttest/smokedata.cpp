#include <qttest_includes.h>

#include <smoke.h>
#include <qttest_smoke.h>

namespace __smokeqttest {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QBool
      switch(to) {
        case 1: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 2:   //QByteArray
      switch(to) {
        case 2: return (void*)(QByteArray*)xptr;
        default: return xptr;
      }
    case 3:   //QChildEvent
      switch(to) {
        case 4: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 3: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 4:   //QEvent
      switch(to) {
        case 4: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 6:   //QMetaObject
      switch(to) {
        case 6: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 7:   //QObject
      switch(to) {
        case 7: return (void*)(QObject*)xptr;
        case 18: return (void*)(QTestEventLoop*)(QObject*)xptr;
        case 10: return (void*)(QSignalSpy*)(QObject*)xptr;
        default: return xptr;
      }
    case 8:   //QPoint
      switch(to) {
        case 8: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 9:   //QRegExp
      switch(to) {
        case 9: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 10:   //QSignalSpy
      switch(to) {
        case 7: return (void*)(QObject*)(QSignalSpy*)xptr;
        case 10: return (void*)(QSignalSpy*)xptr;
        default: return xptr;
      }
    case 12:   //QTestAccessibility
      switch(to) {
        case 12: return (void*)(QTestAccessibility*)xptr;
        default: return xptr;
      }
    case 13:   //QTestAccessibilityEvent
      switch(to) {
        case 13: return (void*)(QTestAccessibilityEvent*)xptr;
        default: return xptr;
      }
    case 14:   //QTestData
      switch(to) {
        case 14: return (void*)(QTestData*)xptr;
        default: return xptr;
      }
    case 15:   //QTestDelayEvent
      switch(to) {
        case 16: return (void*)(QTestEvent*)(QTestDelayEvent*)xptr;
        case 15: return (void*)(QTestDelayEvent*)xptr;
        default: return xptr;
      }
    case 16:   //QTestEvent
      switch(to) {
        case 16: return (void*)(QTestEvent*)xptr;
        case 20: return (void*)(QTestKeyEvent*)(QTestEvent*)xptr;
        case 21: return (void*)(QTestMouseEvent*)(QTestEvent*)xptr;
        case 15: return (void*)(QTestDelayEvent*)(QTestEvent*)xptr;
        case 19: return (void*)(QTestKeyClicksEvent*)(QTestEvent*)xptr;
        default: return xptr;
      }
    case 17:   //QTestEventList
      switch(to) {
        case 17: return (void*)(QTestEventList*)xptr;
        default: return xptr;
      }
    case 18:   //QTestEventLoop
      switch(to) {
        case 7: return (void*)(QObject*)(QTestEventLoop*)xptr;
        case 18: return (void*)(QTestEventLoop*)xptr;
        default: return xptr;
      }
    case 19:   //QTestKeyClicksEvent
      switch(to) {
        case 16: return (void*)(QTestEvent*)(QTestKeyClicksEvent*)xptr;
        case 19: return (void*)(QTestKeyClicksEvent*)xptr;
        default: return xptr;
      }
    case 20:   //QTestKeyEvent
      switch(to) {
        case 16: return (void*)(QTestEvent*)(QTestKeyEvent*)xptr;
        case 20: return (void*)(QTestKeyEvent*)xptr;
        default: return xptr;
      }
    case 21:   //QTestMouseEvent
      switch(to) {
        case 16: return (void*)(QTestEvent*)(QTestMouseEvent*)xptr;
        case 21: return (void*)(QTestMouseEvent*)xptr;
        default: return xptr;
      }
    case 22:   //QTestTable
      switch(to) {
        case 22: return (void*)(QTestTable*)xptr;
        default: return xptr;
      }
    case 23:   //QTimerEvent
      switch(to) {
        case 4: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 23: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 24:   //QWidget
      switch(to) {
        case 7: return (void*)(QObject*)(QWidget*)xptr;
        case 24: return (void*)(QWidget*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    7, 0, 0,	// 1: QObject, QList
    16, 0,	// 4: QTestEvent
    0, 0,	// 6: QList
    7, 0,	// 8: QObject
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QTest(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QSignalSpy(Smoke::Index, void*, Smoke::Stack);
void xcall_QTest(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestAccessibility(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestAccessibilityEvent(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestData(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestDelayEvent(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestEvent(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestEventList(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestEventLoop(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestKeyClicksEvent(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestKeyEvent(Smoke::Index, void*, Smoke::Stack);
void xcall_QTestMouseEvent(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QBool", true, 0, 0, 0, 0, 0 },	//1
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//2
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//3
    { "QEvent", true, 0, 0, 0, 0, 0 },	//4
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//5
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//6
    { "QObject", true, 0, 0, 0, 0, 0 },	//7
    { "QPoint", true, 0, 0, 0, 0, 0 },	//8
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//9
    { "QSignalSpy", false, 1, xcall_QSignalSpy, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSignalSpy) },	//10
    { "QTest", false, 0, xcall_QTest, xenum_QTest, Smoke::cf_namespace, 0 },	//11
    { "QTestAccessibility", false, 0, xcall_QTestAccessibility, 0, Smoke::cf_deepcopy, sizeof(QTestAccessibility) },	//12
    { "QTestAccessibilityEvent", false, 0, xcall_QTestAccessibilityEvent, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QTestAccessibilityEvent) },	//13
    { "QTestData", false, 0, xcall_QTestData, 0, 0, sizeof(QTestData) },	//14
    { "QTestDelayEvent", false, 4, xcall_QTestDelayEvent, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QTestDelayEvent) },	//15
    { "QTestEvent", false, 0, xcall_QTestEvent, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QTestEvent) },	//16
    { "QTestEventList", false, 6, xcall_QTestEventList, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QTestEventList) },	//17
    { "QTestEventLoop", false, 8, xcall_QTestEventLoop, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QTestEventLoop) },	//18
    { "QTestKeyClicksEvent", false, 4, xcall_QTestKeyClicksEvent, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QTestKeyClicksEvent) },	//19
    { "QTestKeyEvent", false, 4, xcall_QTestKeyEvent, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QTestKeyEvent) },	//20
    { "QTestMouseEvent", false, 4, xcall_QTestMouseEvent, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QTestMouseEvent) },	//21
    { "QTestTable", true, 0, 0, 0, 0, 0 },	//22
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//23
    { "QWidget", true, 0, 0, 0, 0, 0 },	//24
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAccessible2::InterfaceType", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QBool", 1, Smoke::t_class|Smoke::tf_stack },	//2
    { "QByteArray", 2, Smoke::t_class|Smoke::tf_stack },	//3
    { "QChildEvent*", 3, Smoke::t_class|Smoke::tf_ptr },	//4
    { "QEvent*", 4, Smoke::t_class|Smoke::tf_ptr },	//5
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//6
    { "QList<QTestAccessibilityEvent>", 0, Smoke::t_voidp|Smoke::tf_stack },	//7
    { "QMetaObject::Call", 6, Smoke::t_enum|Smoke::tf_stack },	//8
    { "QObject*", 7, Smoke::t_class|Smoke::tf_ptr },	//9
    { "QPoint", 8, Smoke::t_class|Smoke::tf_stack },	//10
    { "QRegExp&", 9, Smoke::t_class|Smoke::tf_ref },	//11
    { "QSignalSpy*", 10, Smoke::t_class|Smoke::tf_ptr },	//12
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//13
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//14
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//15
    { "QTest::KeyAction", 11, Smoke::t_enum|Smoke::tf_stack },	//16
    { "QTest::MouseAction", 11, Smoke::t_enum|Smoke::tf_stack },	//17
    { "QTest::QBenchmarkMetric", 11, Smoke::t_enum|Smoke::tf_stack },	//18
    { "QTest::SkipMode", 11, Smoke::t_enum|Smoke::tf_stack },	//19
    { "QTest::TestFailMode", 11, Smoke::t_enum|Smoke::tf_stack },	//20
    { "QTestAccessibilityEvent*", 13, Smoke::t_class|Smoke::tf_ptr },	//21
    { "QTestData&", 14, Smoke::t_class|Smoke::tf_ref },	//22
    { "QTestDelayEvent*", 15, Smoke::t_class|Smoke::tf_ptr },	//23
    { "QTestEvent*", 16, Smoke::t_class|Smoke::tf_ptr },	//24
    { "QTestEventList*", 17, Smoke::t_class|Smoke::tf_ptr },	//25
    { "QTestEventLoop&", 18, Smoke::t_class|Smoke::tf_ref },	//26
    { "QTestEventLoop*", 18, Smoke::t_class|Smoke::tf_ptr },	//27
    { "QTestKeyClicksEvent*", 19, Smoke::t_class|Smoke::tf_ptr },	//28
    { "QTestKeyEvent*", 20, Smoke::t_class|Smoke::tf_ptr },	//29
    { "QTestMouseEvent*", 21, Smoke::t_class|Smoke::tf_ptr },	//30
    { "QTestTable*", 22, Smoke::t_class|Smoke::tf_ptr },	//31
    { "QTimerEvent*", 23, Smoke::t_class|Smoke::tf_ptr },	//32
    { "QWidget*", 24, Smoke::t_class|Smoke::tf_ptr },	//33
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//34
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//35
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//36
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//37
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//38
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//39
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//40
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//41
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//42
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//43
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//44
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//45
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//46
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//47
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//48
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//49
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//50
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//51
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//52
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//53
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//54
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//55
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//56
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//57
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//58
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//59
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//60
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//61
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//62
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//63
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//64
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//65
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//66
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//67
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//68
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//69
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//70
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//71
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//72
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//73
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//74
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//75
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//76
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//77
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//78
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//79
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//80
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//81
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//82
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//83
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//84
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//85
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//86
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//87
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//88
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//89
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//90
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//91
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//92
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//93
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//94
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//95
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//96
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//97
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//98
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//99
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//100
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//101
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//102
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//103
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//104
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//105
    { "QtMsgType", 5, Smoke::t_enum|Smoke::tf_stack },	//106
    { "QtValidLicenseForActiveQtModule", 5, Smoke::t_enum|Smoke::tf_stack },	//107
    { "QtValidLicenseForCoreModule", 5, Smoke::t_enum|Smoke::tf_stack },	//108
    { "QtValidLicenseForDBusModule", 5, Smoke::t_enum|Smoke::tf_stack },	//109
    { "QtValidLicenseForDeclarativeModule", 5, Smoke::t_enum|Smoke::tf_stack },	//110
    { "QtValidLicenseForGuiModule", 5, Smoke::t_enum|Smoke::tf_stack },	//111
    { "QtValidLicenseForHelpModule", 5, Smoke::t_enum|Smoke::tf_stack },	//112
    { "QtValidLicenseForMultimediaModule", 5, Smoke::t_enum|Smoke::tf_stack },	//113
    { "QtValidLicenseForNetworkModule", 5, Smoke::t_enum|Smoke::tf_stack },	//114
    { "QtValidLicenseForOpenGLModule", 5, Smoke::t_enum|Smoke::tf_stack },	//115
    { "QtValidLicenseForOpenVGModule", 5, Smoke::t_enum|Smoke::tf_stack },	//116
    { "QtValidLicenseForQt3SupportLightModule", 5, Smoke::t_enum|Smoke::tf_stack },	//117
    { "QtValidLicenseForQt3SupportModule", 5, Smoke::t_enum|Smoke::tf_stack },	//118
    { "QtValidLicenseForScriptModule", 5, Smoke::t_enum|Smoke::tf_stack },	//119
    { "QtValidLicenseForScriptToolsModule", 5, Smoke::t_enum|Smoke::tf_stack },	//120
    { "QtValidLicenseForSqlModule", 5, Smoke::t_enum|Smoke::tf_stack },	//121
    { "QtValidLicenseForSvgModule", 5, Smoke::t_enum|Smoke::tf_stack },	//122
    { "QtValidLicenseForTestModule", 5, Smoke::t_enum|Smoke::tf_stack },	//123
    { "QtValidLicenseForXmlModule", 5, Smoke::t_enum|Smoke::tf_stack },	//124
    { "QtValidLicenseForXmlPatternsModule", 5, Smoke::t_enum|Smoke::tf_stack },	//125
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//126
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//127
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//128
    { "char**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//129
    { "const QMetaObject&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//130
    { "const QMetaObject*", 6, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//131
    { "const QRegExp&", 9, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//132
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//133
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//134
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//135
    { "const QTestAccessibilityEvent&", 13, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//136
    { "const QTestDelayEvent&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//137
    { "const QTestEvent&", 16, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//138
    { "const QTestEventList&", 17, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//139
    { "const QTestKeyClicksEvent&", 19, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//140
    { "const QTestKeyEvent&", 20, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//141
    { "const QTestMouseEvent&", 21, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//142
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//143
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//144
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//145
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//146
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//147
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//148
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//149
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//150
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    143, 0,	//1  const char*
    5, 0,	//3  QEvent*
    9, 5, 0,	//5  QObject*, QEvent*
    32, 0,	//8  QTimerEvent*
    4, 0,	//10  QChildEvent*
    9, 143, 0,	//12  QObject*, const char*
    8, 146, 149, 0,	//15  QMetaObject::Call, int, void**
    146, 143, 0,	//19  int, const char*
    143, 146, 0,	//22  const char*, int
    126, 143, 128, 128, 143, 143, 143, 146, 0,	//25  bool, const char*, char*, char*, const char*, const char*, const char*, int
    33, 72, 6, 146, 0,	//34  QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int
    33, 72, 0,	//39  QWidget*, Qt::Key
    33, 72, 6, 0,	//42  QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>
    106, 143, 0,	//46  QtMsgType, const char*
    33, 127, 6, 146, 0,	//49  QWidget*, char, QFlags<Qt::KeyboardModifier>, int
    33, 127, 0,	//54  QWidget*, char
    33, 127, 6, 0,	//57  QWidget*, char, QFlags<Qt::KeyboardModifier>
    72, 0,	//61  Qt::Key
    17, 33, 78, 6, 10, 146, 0,	//63  QTest::MouseAction, QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int
    17, 33, 78, 6, 10, 0,	//70  QTest::MouseAction, QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint
    126, 143, 143, 143, 146, 0,	//76  bool, const char*, const char*, const char*, int
    145, 18, 0,	//82  double, QTest::QBenchmarkMetric
    146, 0,	//85  int
    127, 0,	//87  char
    16, 33, 127, 6, 146, 0,	//89  QTest::KeyAction, QWidget*, char, QFlags<Qt::KeyboardModifier>, int
    16, 33, 127, 0,	//95  QTest::KeyAction, QWidget*, char
    16, 33, 127, 6, 0,	//99  QTest::KeyAction, QWidget*, char, QFlags<Qt::KeyboardModifier>
    33, 133, 6, 146, 0,	//104  QWidget*, const QString&, QFlags<Qt::KeyboardModifier>, int
    33, 133, 0,	//109  QWidget*, const QString&
    33, 133, 6, 0,	//112  QWidget*, const QString&, QFlags<Qt::KeyboardModifier>
    16, 33, 72, 127, 6, 146, 0,	//116  QTest::KeyAction, QWidget*, Qt::Key, char, QFlags<Qt::KeyboardModifier>, int
    16, 33, 72, 127, 6, 0,	//123  QTest::KeyAction, QWidget*, Qt::Key, char, QFlags<Qt::KeyboardModifier>
    144, 144, 143, 143, 143, 146, 0,	//129  const void*, const void*, const char*, const char*, const char*, int
    143, 143, 143, 143, 143, 146, 0,	//136  const char*, const char*, const char*, const char*, const char*, int
    33, 78, 6, 10, 146, 0,	//143  QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int
    33, 78, 0,	//149  QWidget*, Qt::MouseButton
    33, 78, 6, 0,	//152  QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>
    33, 78, 6, 10, 0,	//156  QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint
    16, 33, 72, 13, 6, 146, 0,	//161  QTest::KeyAction, QWidget*, Qt::Key, QString, QFlags<Qt::KeyboardModifier>, int
    16, 33, 72, 13, 6, 0,	//168  QTest::KeyAction, QWidget*, Qt::Key, QString, QFlags<Qt::KeyboardModifier>
    144, 0,	//174  const void*
    126, 143, 143, 146, 0,	//176  bool, const char*, const char*, int
    33, 0,	//181  QWidget*
    143, 143, 20, 143, 146, 0,	//183  const char*, const char*, QTest::TestFailMode, const char*, int
    143, 19, 143, 146, 0,	//189  const char*, QTest::SkipMode, const char*, int
    143, 143, 146, 0,	//194  const char*, const char*, int
    33, 10, 146, 0,	//198  QWidget*, QPoint, int
    33, 10, 0,	//202  QWidget*, QPoint
    33, 126, 146, 6, 13, 126, 146, 0,	//205  QWidget*, bool, int, QFlags<Qt::KeyboardModifier>, QString, bool, int
    33, 126, 146, 6, 13, 126, 0,	//213  QWidget*, bool, int, QFlags<Qt::KeyboardModifier>, QString, bool
    9, 146, 129, 0,	//220  QObject*, int, char**
    9, 0,	//224  QObject*
    9, 146, 0,	//226  QObject*, int
    16, 33, 72, 6, 146, 0,	//229  QTest::KeyAction, QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int
    16, 33, 72, 0,	//235  QTest::KeyAction, QWidget*, Qt::Key
    16, 33, 72, 6, 0,	//239  QTest::KeyAction, QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>
    9, 134, 0,	//244  QObject*, const QStringList&
    136, 0,	//247  const QTestAccessibilityEvent&
    9, 146, 146, 0,	//249  QObject*, int, int
    146, 144, 0,	//253  int, const void*
    137, 0,	//256  const QTestDelayEvent&
    138, 0,	//258  const QTestEvent&
    139, 0,	//260  const QTestEventList&
    72, 6, 146, 0,	//262  Qt::Key, QFlags<Qt::KeyboardModifier>, int
    16, 72, 6, 146, 0,	//266  QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>, int
    127, 6, 146, 0,	//271  char, QFlags<Qt::KeyboardModifier>, int
    133, 6, 146, 0,	//275  const QString&, QFlags<Qt::KeyboardModifier>, int
    16, 127, 6, 146, 0,	//279  QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>, int
    78, 6, 10, 146, 0,	//284  Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int
    10, 146, 0,	//289  QPoint, int
    72, 6, 0,	//292  Qt::Key, QFlags<Qt::KeyboardModifier>
    16, 72, 0,	//295  QTest::KeyAction, Qt::Key
    16, 72, 6, 0,	//298  QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>
    127, 6, 0,	//302  char, QFlags<Qt::KeyboardModifier>
    133, 0,	//305  const QString&
    133, 6, 0,	//307  const QString&, QFlags<Qt::KeyboardModifier>
    16, 127, 0,	//310  QTest::KeyAction, char
    16, 127, 6, 0,	//313  QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>
    78, 0,	//317  Qt::MouseButton
    78, 6, 0,	//319  Qt::MouseButton, QFlags<Qt::KeyboardModifier>
    78, 6, 10, 0,	//322  Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint
    10, 0,	//326  QPoint
    143, 143, 0,	//328  const char*, const char*
    140, 0,	//331  const QTestKeyClicksEvent&
    141, 0,	//333  const QTestKeyEvent&
    16, 0,	//335  QTest::KeyAction
    6, 0,	//337  QFlags<Qt::KeyboardModifier>
    17, 78, 6, 10, 146, 0,	//339  QTest::MouseAction, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int
    142, 0,	//345  const QTestMouseEvent&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "Abort",	//1
    "BitsPerSecond",	//2
    "BytesPerSecond",	//3
    "CPUTicks",	//4
    "Click",	//5
    "Continue",	//6
    "Events",	//7
    "FramesPerSecond",	//8
    "InstructionReads",	//9
    "LicensedActiveQt",	//10
    "LicensedCore",	//11
    "LicensedDBus",	//12
    "LicensedDeclarative",	//13
    "LicensedGui",	//14
    "LicensedHelp",	//15
    "LicensedMultimedia",	//16
    "LicensedNetwork",	//17
    "LicensedOpenGL",	//18
    "LicensedOpenVG",	//19
    "LicensedQt3Support",	//20
    "LicensedQt3SupportLight",	//21
    "LicensedScript",	//22
    "LicensedScriptTools",	//23
    "LicensedSql",	//24
    "LicensedSvg",	//25
    "LicensedTest",	//26
    "LicensedXml",	//27
    "LicensedXmlPatterns",	//28
    "MouseClick",	//29
    "MouseDClick",	//30
    "MouseMove",	//31
    "MousePress",	//32
    "MouseRelease",	//33
    "Press",	//34
    "QSignalSpy",	//35
    "QSignalSpy#$",	//36
    "QTestAccessibilityEvent",	//37
    "QTestAccessibilityEvent#",	//38
    "QTestAccessibilityEvent#$",	//39
    "QTestAccessibilityEvent#$$",	//40
    "QTestDelayEvent",	//41
    "QTestDelayEvent#",	//42
    "QTestDelayEvent$",	//43
    "QTestEvent",	//44
    "QTestEvent#",	//45
    "QTestEventList",	//46
    "QTestEventList#",	//47
    "QTestEventLoop",	//48
    "QTestEventLoop#",	//49
    "QTestKeyClicksEvent",	//50
    "QTestKeyClicksEvent#",	//51
    "QTestKeyClicksEvent$$$",	//52
    "QTestKeyEvent",	//53
    "QTestKeyEvent#",	//54
    "QTestKeyEvent$$$$",	//55
    "QTestMouseEvent",	//56
    "QTestMouseEvent#",	//57
    "QTestMouseEvent$$$#$",	//58
    "Q_COMPLEX_TYPE",	//59
    "Q_DUMMY_TYPE",	//60
    "Q_MOVABLE_TYPE",	//61
    "Q_PRIMITIVE_TYPE",	//62
    "Q_STATIC_TYPE",	//63
    "QtCriticalMsg",	//64
    "QtDebugMsg",	//65
    "QtFatalMsg",	//66
    "QtSystemMsg",	//67
    "QtWarningMsg",	//68
    "Release",	//69
    "SkipAll",	//70
    "SkipSingle",	//71
    "WalltimeMilliseconds",	//72
    "_action",	//73
    "_ascii",	//74
    "_delay",	//75
    "_key",	//76
    "_modifiers",	//77
    "addColumnInternal",	//78
    "addColumnInternal$$",	//79
    "addDelay",	//80
    "addDelay$",	//81
    "addKeyClick",	//82
    "addKeyClick$",	//83
    "addKeyClick$$",	//84
    "addKeyClick$$$",	//85
    "addKeyClicks",	//86
    "addKeyClicks$",	//87
    "addKeyClicks$$",	//88
    "addKeyClicks$$$",	//89
    "addKeyEvent",	//90
    "addKeyEvent$$",	//91
    "addKeyEvent$$$",	//92
    "addKeyEvent$$$$",	//93
    "addKeyPress",	//94
    "addKeyPress$",	//95
    "addKeyPress$$",	//96
    "addKeyPress$$$",	//97
    "addKeyRelease",	//98
    "addKeyRelease$",	//99
    "addKeyRelease$$",	//100
    "addKeyRelease$$$",	//101
    "addMouseClick",	//102
    "addMouseClick$",	//103
    "addMouseClick$$",	//104
    "addMouseClick$$#",	//105
    "addMouseClick$$#$",	//106
    "addMouseDClick",	//107
    "addMouseDClick$",	//108
    "addMouseDClick$$",	//109
    "addMouseDClick$$#",	//110
    "addMouseDClick$$#$",	//111
    "addMouseMove",	//112
    "addMouseMove#",	//113
    "addMouseMove#$",	//114
    "addMousePress",	//115
    "addMousePress$",	//116
    "addMousePress$$",	//117
    "addMousePress$$#",	//118
    "addMousePress$$#$",	//119
    "addMouseRelease",	//120
    "addMouseRelease$",	//121
    "addMouseRelease$$",	//122
    "addMouseRelease$$#",	//123
    "addMouseRelease$$#$",	//124
    "append",	//125
    "append$$",	//126
    "asciiToKey",	//127
    "asciiToKey$",	//128
    "changeInterval",	//129
    "changeInterval$",	//130
    "child",	//131
    "childEvent",	//132
    "cleanup",	//133
    "clear",	//134
    "clearEvents",	//135
    "clone",	//136
    "compare_helper",	//137
    "compare_helper$$$$",	//138
    "compare_helper$$$$$$$$",	//139
    "compare_ptr_helper",	//140
    "compare_ptr_helper$$$$$$",	//141
    "compare_string_helper",	//142
    "compare_string_helper$$$$$$",	//143
    "connectNotify",	//144
    "currentAppName",	//145
    "currentDataTag",	//146
    "currentTestFailed",	//147
    "currentTestFunction",	//148
    "customEvent",	//149
    "data",	//150
    "data$",	//151
    "dataCount",	//152
    "dataTag",	//153
    "disconnectNotify",	//154
    "enterLoop",	//155
    "enterLoop$",	//156
    "event",	//157
    "eventFilter",	//158
    "events",	//159
    "exitLoop",	//160
    "ignoreMessage",	//161
    "ignoreMessage$$",	//162
    "initialize",	//163
    "instance",	//164
    "isValid",	//165
    "keyClick",	//166
    "keyClick#$",	//167
    "keyClick#$$",	//168
    "keyClick#$$$",	//169
    "keyClicks",	//170
    "keyClicks#$",	//171
    "keyClicks#$$",	//172
    "keyClicks#$$$",	//173
    "keyEvent",	//174
    "keyEvent$#$",	//175
    "keyEvent$#$$",	//176
    "keyEvent$#$$$",	//177
    "keyPress",	//178
    "keyPress#$",	//179
    "keyPress#$$",	//180
    "keyPress#$$$",	//181
    "keyRelease",	//182
    "keyRelease#$",	//183
    "keyRelease#$$",	//184
    "keyRelease#$$$",	//185
    "keyToAscii",	//186
    "keyToAscii$",	//187
    "metaObject",	//188
    "mouseClick",	//189
    "mouseClick#$",	//190
    "mouseClick#$$",	//191
    "mouseClick#$$#",	//192
    "mouseClick#$$#$",	//193
    "mouseDClick",	//194
    "mouseDClick#$",	//195
    "mouseDClick#$$",	//196
    "mouseDClick#$$#",	//197
    "mouseDClick#$$#$",	//198
    "mouseEvent",	//199
    "mouseEvent$#$$#",	//200
    "mouseEvent$#$$#$",	//201
    "mouseMove",	//202
    "mouseMove#",	//203
    "mouseMove##",	//204
    "mouseMove##$",	//205
    "mousePress",	//206
    "mousePress#$",	//207
    "mousePress#$$",	//208
    "mousePress#$$#",	//209
    "mousePress#$$#$",	//210
    "mouseRelease",	//211
    "mouseRelease#$",	//212
    "mouseRelease#$$",	//213
    "mouseRelease#$$#",	//214
    "mouseRelease#$$#$",	//215
    "newRow",	//216
    "newRow$",	//217
    "object",	//218
    "operator==",	//219
    "operator==#",	//220
    "parent",	//221
    "qData",	//222
    "qData$$",	//223
    "qElementData",	//224
    "qElementData$$",	//225
    "qExec",	//226
    "qExec#",	//227
    "qExec#$",	//228
    "qExec#$?",	//229
    "qExec#?",	//230
    "qExpectFail",	//231
    "qExpectFail$$$$$",	//232
    "qFail",	//233
    "qFail$$$",	//234
    "qGlobalData",	//235
    "qGlobalData$$",	//236
    "qSkip",	//237
    "qSkip$$$$",	//238
    "qSleep",	//239
    "qSleep$",	//240
    "qVerify",	//241
    "qVerify$$$$$",	//242
    "qWait",	//243
    "qWait$",	//244
    "qWaitForWindowShown",	//245
    "qWaitForWindowShown#",	//246
    "qWarn",	//247
    "qWarn$",	//248
    "qt_metacall",	//249
    "qt_metacall$$?",	//250
    "qt_metacast",	//251
    "qt_metacast$",	//252
    "sendKeyEvent",	//253
    "sendKeyEvent$#$$$",	//254
    "sendKeyEvent$#$$$$",	//255
    "setBenchmarkResult",	//256
    "setBenchmarkResult$$",	//257
    "setChild",	//258
    "setChild$",	//259
    "setEvent",	//260
    "setEvent$",	//261
    "setObject",	//262
    "setObject#",	//263
    "set_action",	//264
    "set_action$",	//265
    "set_ascii",	//266
    "set_ascii$",	//267
    "set_delay",	//268
    "set_delay$",	//269
    "set_key",	//270
    "set_key$",	//271
    "set_modifiers",	//272
    "set_modifiers$",	//273
    "signal",	//274
    "simulate",	//275
    "simulate#",	//276
    "simulateEvent",	//277
    "simulateEvent#$$$$$",	//278
    "simulateEvent#$$$$$$",	//279
    "staticMetaObject",	//280
    "testObject",	//281
    "timeout",	//282
    "timerEvent",	//283
    "timerEvent#",	//284
    "toHexRepresentation",	//285
    "toHexRepresentation$$",	//286
    "toString",	//287
    "toString$",	//288
    "tr",	//289
    "tr$",	//290
    "tr$$",	//291
    "tr$$$",	//292
    "trUtf8",	//293
    "trUtf8$",	//294
    "trUtf8$$",	//295
    "trUtf8$$$",	//296
    "verifyEvent",	//297
    "verifyEvent#",	//298
    "verifyEvent#$$",	//299
    "~QSignalSpy",	//300
    "~QTestAccessibilityEvent",	//301
    "~QTestData",	//302
    "~QTestDelayEvent",	//303
    "~QTestEvent",	//304
    "~QTestEventList",	//305
    "~QTestEventLoop",	//306
    "~QTestKeyClicksEvent",	//307
    "~QTestKeyEvent",	//308
    "~QTestMouseEvent",	//309
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {5, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 147, 1},	//1 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {5, 62, 0, 0, Smoke::mf_static|Smoke::mf_enum, 147, 2},	//2 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {5, 63, 0, 0, Smoke::mf_static|Smoke::mf_enum, 147, 3},	//3 QGlobalSpace::Q_STATIC_TYPE (enum)
    {5, 61, 0, 0, Smoke::mf_static|Smoke::mf_enum, 147, 4},	//4 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {5, 60, 0, 0, Smoke::mf_static|Smoke::mf_enum, 147, 5},	//5 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {5, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 111, 6},	//6 QGlobalSpace::LicensedGui (enum)
    {5, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 7},	//7 QGlobalSpace::LicensedXml (enum)
    {5, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 117, 8},	//8 QGlobalSpace::LicensedQt3SupportLight (enum)
    {5, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 119, 9},	//9 QGlobalSpace::LicensedScript (enum)
    {5, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 116, 10},	//10 QGlobalSpace::LicensedOpenVG (enum)
    {5, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 109, 11},	//11 QGlobalSpace::LicensedDBus (enum)
    {5, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 123, 12},	//12 QGlobalSpace::LicensedTest (enum)
    {5, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 13},	//13 QGlobalSpace::LicensedActiveQt (enum)
    {5, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 120, 14},	//14 QGlobalSpace::LicensedScriptTools (enum)
    {5, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 122, 15},	//15 QGlobalSpace::LicensedSvg (enum)
    {5, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 110, 16},	//16 QGlobalSpace::LicensedDeclarative (enum)
    {5, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 121, 17},	//17 QGlobalSpace::LicensedSql (enum)
    {5, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 115, 18},	//18 QGlobalSpace::LicensedOpenGL (enum)
    {5, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 108, 19},	//19 QGlobalSpace::LicensedCore (enum)
    {5, 65, 0, 0, Smoke::mf_static|Smoke::mf_enum, 106, 20},	//20 QGlobalSpace::QtDebugMsg (enum)
    {5, 68, 0, 0, Smoke::mf_static|Smoke::mf_enum, 106, 21},	//21 QGlobalSpace::QtWarningMsg (enum)
    {5, 64, 0, 0, Smoke::mf_static|Smoke::mf_enum, 106, 22},	//22 QGlobalSpace::QtCriticalMsg (enum)
    {5, 66, 0, 0, Smoke::mf_static|Smoke::mf_enum, 106, 23},	//23 QGlobalSpace::QtFatalMsg (enum)
    {5, 67, 0, 0, Smoke::mf_static|Smoke::mf_enum, 106, 24},	//24 QGlobalSpace::QtSystemMsg (enum)
    {5, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 112, 25},	//25 QGlobalSpace::LicensedHelp (enum)
    {5, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 113, 26},	//26 QGlobalSpace::LicensedMultimedia (enum)
    {5, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 118, 27},	//27 QGlobalSpace::LicensedQt3Support (enum)
    {5, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 28},	//28 QGlobalSpace::LicensedXmlPatterns (enum)
    {5, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 114, 29},	//29 QGlobalSpace::LicensedNetwork (enum)
    {7, 188, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 131, 0},	//30 QObject::metaObject() const
    {7, 251, 1, 1, Smoke::mf_virtual, 148, 0},	//31 QObject::qt_metacast(const char*)
    {7, 157, 3, 1, Smoke::mf_virtual, 126, 0},	//32 QObject::event(QEvent*)
    {7, 158, 5, 2, Smoke::mf_virtual, 126, 0},	//33 QObject::eventFilter(QObject*, QEvent*)
    {7, 283, 8, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//34 QObject::timerEvent(QTimerEvent*)
    {7, 132, 10, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//35 QObject::childEvent(QChildEvent*)
    {7, 149, 3, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//36 QObject::customEvent(QEvent*)
    {7, 144, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//37 QObject::connectNotify(const char*)
    {7, 154, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//38 QObject::disconnectNotify(const char*)
    {10, 35, 12, 2, Smoke::mf_ctor, 12, 1},	//39 QSignalSpy::QSignalSpy(QObject*, const char*)
    {10, 165, 0, 0, Smoke::mf_const, 126, 2},	//40 QSignalSpy::isValid() const
    {10, 274, 0, 0, Smoke::mf_const, 3, 3},	//41 QSignalSpy::signal() const
    {10, 249, 15, 3, Smoke::mf_virtual, 146, 4},	//42 QSignalSpy::qt_metacall(QMetaObject::Call, int, void**)
    {10, 300, 0, 0, Smoke::mf_dtor, 0, 5 },	//43 QSignalSpy::~QSignalSpy()
    {11, 78, 19, 2, Smoke::mf_static, 0, 1},	//44 QTest::addColumnInternal(int, const char*)
    {11, 235, 22, 2, Smoke::mf_static, 148, 2},	//45 QTest::qGlobalData(const char*, int)
    {11, 137, 25, 8, Smoke::mf_static, 126, 3},	//46 QTest::compare_helper(bool, const char*, char*, char*, const char*, const char*, const char*, int)
    {11, 178, 34, 4, Smoke::mf_static, 0, 4},	//47 QTest::keyPress(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {11, 178, 39, 2, Smoke::mf_static, 0, 5},	//48 QTest::keyPress(QWidget*, Qt::Key)
    {11, 178, 42, 3, Smoke::mf_static, 0, 6},	//49 QTest::keyPress(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    {11, 161, 46, 2, Smoke::mf_static, 0, 7},	//50 QTest::ignoreMessage(QtMsgType, const char*)
    {11, 178, 49, 4, Smoke::mf_static, 0, 8},	//51 QTest::keyPress(QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    {11, 178, 54, 2, Smoke::mf_static, 0, 9},	//52 QTest::keyPress(QWidget*, char)
    {11, 178, 57, 3, Smoke::mf_static, 0, 10},	//53 QTest::keyPress(QWidget*, char, QFlags<Qt::KeyboardModifier>)
    {11, 186, 61, 1, Smoke::mf_static, 127, 11},	//54 QTest::keyToAscii(Qt::Key)
    {11, 199, 63, 6, Smoke::mf_static, 0, 12},	//55 QTest::mouseEvent(QTest::MouseAction, QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {11, 199, 70, 5, Smoke::mf_static, 0, 13},	//56 QTest::mouseEvent(QTest::MouseAction, QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {11, 241, 76, 5, Smoke::mf_static, 126, 14},	//57 QTest::qVerify(bool, const char*, const char*, const char*, int)
    {11, 256, 82, 2, Smoke::mf_static, 0, 15},	//58 QTest::setBenchmarkResult(double, QTest::QBenchmarkMetric)
    {11, 146, 0, 0, Smoke::mf_static, 143, 16},	//59 QTest::currentDataTag()
    {11, 239, 85, 1, Smoke::mf_static, 0, 17},	//60 QTest::qSleep(int)
    {11, 127, 87, 1, Smoke::mf_static, 72, 18},	//61 QTest::asciiToKey(char)
    {11, 247, 1, 1, Smoke::mf_static, 0, 19},	//62 QTest::qWarn(const char*)
    {11, 174, 89, 5, Smoke::mf_static, 0, 20},	//63 QTest::keyEvent(QTest::KeyAction, QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    {11, 174, 95, 3, Smoke::mf_static, 0, 21},	//64 QTest::keyEvent(QTest::KeyAction, QWidget*, char)
    {11, 174, 99, 4, Smoke::mf_static, 0, 22},	//65 QTest::keyEvent(QTest::KeyAction, QWidget*, char, QFlags<Qt::KeyboardModifier>)
    {11, 170, 104, 4, Smoke::mf_static, 0, 23},	//66 QTest::keyClicks(QWidget*, const QString&, QFlags<Qt::KeyboardModifier>, int)
    {11, 170, 109, 2, Smoke::mf_static, 0, 24},	//67 QTest::keyClicks(QWidget*, const QString&)
    {11, 170, 112, 3, Smoke::mf_static, 0, 25},	//68 QTest::keyClicks(QWidget*, const QString&, QFlags<Qt::KeyboardModifier>)
    {11, 182, 34, 4, Smoke::mf_static, 0, 26},	//69 QTest::keyRelease(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {11, 182, 39, 2, Smoke::mf_static, 0, 27},	//70 QTest::keyRelease(QWidget*, Qt::Key)
    {11, 182, 42, 3, Smoke::mf_static, 0, 28},	//71 QTest::keyRelease(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    {11, 148, 0, 0, Smoke::mf_static, 143, 29},	//72 QTest::currentTestFunction()
    {11, 281, 0, 0, Smoke::mf_static, 9, 30},	//73 QTest::testObject()
    {11, 253, 116, 6, Smoke::mf_static, 0, 31},	//74 QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, char, QFlags<Qt::KeyboardModifier>, int)
    {11, 253, 123, 5, Smoke::mf_static, 0, 32},	//75 QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, char, QFlags<Qt::KeyboardModifier>)
    {11, 140, 129, 6, Smoke::mf_static, 126, 33},	//76 QTest::compare_ptr_helper(const void*, const void*, const char*, const char*, const char*, int)
    {11, 145, 0, 0, Smoke::mf_static, 143, 34},	//77 QTest::currentAppName()
    {11, 142, 136, 6, Smoke::mf_static, 126, 35},	//78 QTest::compare_string_helper(const char*, const char*, const char*, const char*, const char*, int)
    {11, 206, 143, 5, Smoke::mf_static, 0, 36},	//79 QTest::mousePress(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {11, 206, 149, 2, Smoke::mf_static, 0, 37},	//80 QTest::mousePress(QWidget*, Qt::MouseButton)
    {11, 206, 152, 3, Smoke::mf_static, 0, 38},	//81 QTest::mousePress(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {11, 206, 156, 4, Smoke::mf_static, 0, 39},	//82 QTest::mousePress(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {11, 243, 85, 1, Smoke::mf_static, 0, 40},	//83 QTest::qWait(int)
    {11, 253, 161, 6, Smoke::mf_static, 0, 41},	//84 QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, QString, QFlags<Qt::KeyboardModifier>, int)
    {11, 253, 168, 5, Smoke::mf_static, 0, 42},	//85 QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, QString, QFlags<Qt::KeyboardModifier>)
    {11, 166, 34, 4, Smoke::mf_static, 0, 43},	//86 QTest::keyClick(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {11, 166, 39, 2, Smoke::mf_static, 0, 44},	//87 QTest::keyClick(QWidget*, Qt::Key)
    {11, 166, 42, 3, Smoke::mf_static, 0, 45},	//88 QTest::keyClick(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    {11, 287, 174, 1, Smoke::mf_static, 128, 46},	//89 QTest::toString(const void*)
    {11, 216, 1, 1, Smoke::mf_static, 22, 47},	//90 QTest::newRow(const char*)
    {11, 189, 143, 5, Smoke::mf_static, 0, 48},	//91 QTest::mouseClick(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {11, 189, 149, 2, Smoke::mf_static, 0, 49},	//92 QTest::mouseClick(QWidget*, Qt::MouseButton)
    {11, 189, 152, 3, Smoke::mf_static, 0, 50},	//93 QTest::mouseClick(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {11, 189, 156, 4, Smoke::mf_static, 0, 51},	//94 QTest::mouseClick(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {11, 285, 22, 2, Smoke::mf_static, 128, 52},	//95 QTest::toHexRepresentation(const char*, int)
    {11, 137, 176, 4, Smoke::mf_static, 126, 53},	//96 QTest::compare_helper(bool, const char*, const char*, int)
    {11, 245, 181, 1, Smoke::mf_static, 126, 54},	//97 QTest::qWaitForWindowShown(QWidget*)
    {11, 182, 49, 4, Smoke::mf_static, 0, 55},	//98 QTest::keyRelease(QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    {11, 182, 54, 2, Smoke::mf_static, 0, 56},	//99 QTest::keyRelease(QWidget*, char)
    {11, 182, 57, 3, Smoke::mf_static, 0, 57},	//100 QTest::keyRelease(QWidget*, char, QFlags<Qt::KeyboardModifier>)
    {11, 194, 143, 5, Smoke::mf_static, 0, 58},	//101 QTest::mouseDClick(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {11, 194, 149, 2, Smoke::mf_static, 0, 59},	//102 QTest::mouseDClick(QWidget*, Qt::MouseButton)
    {11, 194, 152, 3, Smoke::mf_static, 0, 60},	//103 QTest::mouseDClick(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {11, 194, 156, 4, Smoke::mf_static, 0, 61},	//104 QTest::mouseDClick(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {11, 222, 22, 2, Smoke::mf_static, 148, 62},	//105 QTest::qData(const char*, int)
    {11, 231, 183, 5, Smoke::mf_static, 126, 63},	//106 QTest::qExpectFail(const char*, const char*, QTest::TestFailMode, const char*, int)
    {11, 147, 0, 0, Smoke::mf_static, 126, 64},	//107 QTest::currentTestFailed()
    {11, 237, 189, 4, Smoke::mf_static, 0, 65},	//108 QTest::qSkip(const char*, QTest::SkipMode, const char*, int)
    {11, 233, 194, 3, Smoke::mf_static, 0, 66},	//109 QTest::qFail(const char*, const char*, int)
    {11, 202, 198, 3, Smoke::mf_static, 0, 67},	//110 QTest::mouseMove(QWidget*, QPoint, int)
    {11, 202, 181, 1, Smoke::mf_static, 0, 68},	//111 QTest::mouseMove(QWidget*)
    {11, 202, 202, 2, Smoke::mf_static, 0, 69},	//112 QTest::mouseMove(QWidget*, QPoint)
    {11, 277, 205, 7, Smoke::mf_static, 0, 70},	//113 QTest::simulateEvent(QWidget*, bool, int, QFlags<Qt::KeyboardModifier>, QString, bool, int)
    {11, 277, 213, 6, Smoke::mf_static, 0, 71},	//114 QTest::simulateEvent(QWidget*, bool, int, QFlags<Qt::KeyboardModifier>, QString, bool)
    {11, 224, 22, 2, Smoke::mf_static, 148, 72},	//115 QTest::qElementData(const char*, int)
    {11, 211, 143, 5, Smoke::mf_static, 0, 73},	//116 QTest::mouseRelease(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {11, 211, 149, 2, Smoke::mf_static, 0, 74},	//117 QTest::mouseRelease(QWidget*, Qt::MouseButton)
    {11, 211, 152, 3, Smoke::mf_static, 0, 75},	//118 QTest::mouseRelease(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {11, 211, 156, 4, Smoke::mf_static, 0, 76},	//119 QTest::mouseRelease(QWidget*, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {11, 226, 220, 3, Smoke::mf_static, 146, 77},	//120 QTest::qExec(QObject*, int, char**)
    {11, 226, 224, 1, Smoke::mf_static, 146, 78},	//121 QTest::qExec(QObject*)
    {11, 226, 226, 2, Smoke::mf_static, 146, 79},	//122 QTest::qExec(QObject*, int)
    {11, 166, 49, 4, Smoke::mf_static, 0, 80},	//123 QTest::keyClick(QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    {11, 166, 54, 2, Smoke::mf_static, 0, 81},	//124 QTest::keyClick(QWidget*, char)
    {11, 166, 57, 3, Smoke::mf_static, 0, 82},	//125 QTest::keyClick(QWidget*, char, QFlags<Qt::KeyboardModifier>)
    {11, 174, 229, 5, Smoke::mf_static, 0, 83},	//126 QTest::keyEvent(QTest::KeyAction, QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {11, 174, 235, 3, Smoke::mf_static, 0, 84},	//127 QTest::keyEvent(QTest::KeyAction, QWidget*, Qt::Key)
    {11, 174, 239, 4, Smoke::mf_static, 0, 85},	//128 QTest::keyEvent(QTest::KeyAction, QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    {11, 226, 244, 2, Smoke::mf_static, 146, 86},	//129 QTest::qExec(QObject*, const QStringList&)
    {11, 287, 1, 1, Smoke::mf_static, 128, 87},	//130 QTest::toString(const char*)
    {11, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 20, 88},	//131 QTest::Abort (enum)
    {11, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 20, 89},	//132 QTest::Continue (enum)
    {11, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 17, 90},	//133 QTest::MousePress (enum)
    {11, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 17, 91},	//134 QTest::MouseRelease (enum)
    {11, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 17, 92},	//135 QTest::MouseClick (enum)
    {11, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 17, 93},	//136 QTest::MouseDClick (enum)
    {11, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 17, 94},	//137 QTest::MouseMove (enum)
    {11, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 16, 95},	//138 QTest::Press (enum)
    {11, 69, 0, 0, Smoke::mf_static|Smoke::mf_enum, 16, 96},	//139 QTest::Release (enum)
    {11, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 16, 97},	//140 QTest::Click (enum)
    {11, 71, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 98},	//141 QTest::SkipSingle (enum)
    {11, 70, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 99},	//142 QTest::SkipAll (enum)
    {11, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 100},	//143 QTest::FramesPerSecond (enum)
    {11, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 101},	//144 QTest::BitsPerSecond (enum)
    {11, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 102},	//145 QTest::BytesPerSecond (enum)
    {11, 72, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 103},	//146 QTest::WalltimeMilliseconds (enum)
    {11, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 104},	//147 QTest::CPUTicks (enum)
    {11, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 105},	//148 QTest::InstructionReads (enum)
    {11, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 106},	//149 QTest::Events (enum)
    {12, 163, 0, 0, Smoke::mf_static, 0, 1},	//150 QTestAccessibility::initialize()
    {12, 133, 0, 0, Smoke::mf_static, 0, 2},	//151 QTestAccessibility::cleanup()
    {12, 135, 0, 0, Smoke::mf_static, 0, 3},	//152 QTestAccessibility::clearEvents()
    {12, 159, 0, 0, Smoke::mf_static, 7, 4},	//153 QTestAccessibility::events()
    {12, 297, 247, 1, Smoke::mf_static, 126, 5},	//154 QTestAccessibility::verifyEvent(const QTestAccessibilityEvent&)
    {12, 297, 249, 3, Smoke::mf_static, 126, 6},	//155 QTestAccessibility::verifyEvent(QObject*, int, int)
    {13, 37, 249, 3, Smoke::mf_ctor, 21, 1},	//156 QTestAccessibilityEvent::QTestAccessibilityEvent(QObject*, int, int)
    {13, 219, 247, 1, Smoke::mf_const, 126, 2},	//157 QTestAccessibilityEvent::operator==(const QTestAccessibilityEvent&) const
    {13, 37, 247, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 21, 3},	//158 QTestAccessibilityEvent::QTestAccessibilityEvent(const QTestAccessibilityEvent&)
    {13, 37, 0, 0, Smoke::mf_ctor, 21, 4},	//159 QTestAccessibilityEvent::QTestAccessibilityEvent()
    {13, 37, 224, 1, Smoke::mf_ctor, 21, 5},	//160 QTestAccessibilityEvent::QTestAccessibilityEvent(QObject*)
    {13, 37, 226, 2, Smoke::mf_ctor, 21, 6},	//161 QTestAccessibilityEvent::QTestAccessibilityEvent(QObject*, int)
    {13, 218, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 9, 7},	//162 QTestAccessibilityEvent::object() const
    {13, 262, 224, 1, Smoke::mf_attribute, 0, 8},	//163 QTestAccessibilityEvent::setObject(QObject*)
    {13, 131, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 146, 9},	//164 QTestAccessibilityEvent::child() const
    {13, 258, 85, 1, Smoke::mf_attribute, 0, 10},	//165 QTestAccessibilityEvent::setChild(int)
    {13, 157, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 146, 11},	//166 QTestAccessibilityEvent::event() const
    {13, 260, 85, 1, Smoke::mf_attribute, 0, 12},	//167 QTestAccessibilityEvent::setEvent(int)
    {13, 301, 0, 0, Smoke::mf_dtor, 0, 13 },	//168 QTestAccessibilityEvent::~QTestAccessibilityEvent()
    {14, 125, 253, 2, 0, 0, 1},	//169 QTestData::append(int, const void*)
    {14, 150, 85, 1, Smoke::mf_const, 148, 2},	//170 QTestData::data(int) const
    {14, 153, 0, 0, Smoke::mf_const, 143, 3},	//171 QTestData::dataTag() const
    {14, 221, 0, 0, Smoke::mf_const, 31, 4},	//172 QTestData::parent() const
    {14, 152, 0, 0, Smoke::mf_const, 146, 5},	//173 QTestData::dataCount() const
    {14, 302, 0, 0, Smoke::mf_dtor, 0, 6 },	//174 QTestData::~QTestData()
    {15, 41, 85, 1, Smoke::mf_ctor, 23, 1},	//175 QTestDelayEvent::QTestDelayEvent(int)
    {15, 136, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 24, 2},	//176 QTestDelayEvent::clone() const
    {15, 275, 181, 1, Smoke::mf_virtual, 0, 3},	//177 QTestDelayEvent::simulate(QWidget*)
    {15, 41, 256, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 23, 4},	//178 QTestDelayEvent::QTestDelayEvent(const QTestDelayEvent&)
    {15, 303, 0, 0, Smoke::mf_dtor, 0, 5 },	//179 QTestDelayEvent::~QTestDelayEvent()
    {16, 275, 181, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 1},	//180 QTestEvent::simulate(QWidget*) [pure virtual]
    {16, 136, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 24, 2},	//181 QTestEvent::clone() const [pure virtual]
    {16, 44, 0, 0, Smoke::mf_ctor, 24, 3},	//182 QTestEvent::QTestEvent()
    {16, 44, 258, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 24, 4},	//183 QTestEvent::QTestEvent(const QTestEvent&)
    {16, 304, 0, 0, Smoke::mf_dtor, 0, 5 },	//184 QTestEvent::~QTestEvent()
    {17, 46, 0, 0, Smoke::mf_ctor, 25, 1},	//185 QTestEventList::QTestEventList()
    {17, 46, 260, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 25, 2},	//186 QTestEventList::QTestEventList(const QTestEventList&)
    {17, 134, 0, 0, 0, 0, 3},	//187 QTestEventList::clear()
    {17, 82, 262, 3, 0, 0, 4},	//188 QTestEventList::addKeyClick(Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {17, 94, 262, 3, 0, 0, 5},	//189 QTestEventList::addKeyPress(Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {17, 98, 262, 3, 0, 0, 6},	//190 QTestEventList::addKeyRelease(Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {17, 90, 266, 4, 0, 0, 7},	//191 QTestEventList::addKeyEvent(QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {17, 82, 271, 3, 0, 0, 8},	//192 QTestEventList::addKeyClick(char, QFlags<Qt::KeyboardModifier>, int)
    {17, 94, 271, 3, 0, 0, 9},	//193 QTestEventList::addKeyPress(char, QFlags<Qt::KeyboardModifier>, int)
    {17, 98, 271, 3, 0, 0, 10},	//194 QTestEventList::addKeyRelease(char, QFlags<Qt::KeyboardModifier>, int)
    {17, 86, 275, 3, 0, 0, 11},	//195 QTestEventList::addKeyClicks(const QString&, QFlags<Qt::KeyboardModifier>, int)
    {17, 90, 279, 4, 0, 0, 12},	//196 QTestEventList::addKeyEvent(QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>, int)
    {17, 115, 284, 4, 0, 0, 13},	//197 QTestEventList::addMousePress(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {17, 120, 284, 4, 0, 0, 14},	//198 QTestEventList::addMouseRelease(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {17, 102, 284, 4, 0, 0, 15},	//199 QTestEventList::addMouseClick(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {17, 107, 284, 4, 0, 0, 16},	//200 QTestEventList::addMouseDClick(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {17, 112, 289, 2, 0, 0, 17},	//201 QTestEventList::addMouseMove(QPoint, int)
    {17, 80, 85, 1, 0, 0, 18},	//202 QTestEventList::addDelay(int)
    {17, 275, 181, 1, 0, 0, 19},	//203 QTestEventList::simulate(QWidget*)
    {17, 82, 61, 1, 0, 0, 20},	//204 QTestEventList::addKeyClick(Qt::Key)
    {17, 82, 292, 2, 0, 0, 21},	//205 QTestEventList::addKeyClick(Qt::Key, QFlags<Qt::KeyboardModifier>)
    {17, 94, 61, 1, 0, 0, 22},	//206 QTestEventList::addKeyPress(Qt::Key)
    {17, 94, 292, 2, 0, 0, 23},	//207 QTestEventList::addKeyPress(Qt::Key, QFlags<Qt::KeyboardModifier>)
    {17, 98, 61, 1, 0, 0, 24},	//208 QTestEventList::addKeyRelease(Qt::Key)
    {17, 98, 292, 2, 0, 0, 25},	//209 QTestEventList::addKeyRelease(Qt::Key, QFlags<Qt::KeyboardModifier>)
    {17, 90, 295, 2, 0, 0, 26},	//210 QTestEventList::addKeyEvent(QTest::KeyAction, Qt::Key)
    {17, 90, 298, 3, 0, 0, 27},	//211 QTestEventList::addKeyEvent(QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>)
    {17, 82, 87, 1, 0, 0, 28},	//212 QTestEventList::addKeyClick(char)
    {17, 82, 302, 2, 0, 0, 29},	//213 QTestEventList::addKeyClick(char, QFlags<Qt::KeyboardModifier>)
    {17, 94, 87, 1, 0, 0, 30},	//214 QTestEventList::addKeyPress(char)
    {17, 94, 302, 2, 0, 0, 31},	//215 QTestEventList::addKeyPress(char, QFlags<Qt::KeyboardModifier>)
    {17, 98, 87, 1, 0, 0, 32},	//216 QTestEventList::addKeyRelease(char)
    {17, 98, 302, 2, 0, 0, 33},	//217 QTestEventList::addKeyRelease(char, QFlags<Qt::KeyboardModifier>)
    {17, 86, 305, 1, 0, 0, 34},	//218 QTestEventList::addKeyClicks(const QString&)
    {17, 86, 307, 2, 0, 0, 35},	//219 QTestEventList::addKeyClicks(const QString&, QFlags<Qt::KeyboardModifier>)
    {17, 90, 310, 2, 0, 0, 36},	//220 QTestEventList::addKeyEvent(QTest::KeyAction, char)
    {17, 90, 313, 3, 0, 0, 37},	//221 QTestEventList::addKeyEvent(QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>)
    {17, 115, 317, 1, 0, 0, 38},	//222 QTestEventList::addMousePress(Qt::MouseButton)
    {17, 115, 319, 2, 0, 0, 39},	//223 QTestEventList::addMousePress(Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {17, 115, 322, 3, 0, 0, 40},	//224 QTestEventList::addMousePress(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {17, 120, 317, 1, 0, 0, 41},	//225 QTestEventList::addMouseRelease(Qt::MouseButton)
    {17, 120, 319, 2, 0, 0, 42},	//226 QTestEventList::addMouseRelease(Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {17, 120, 322, 3, 0, 0, 43},	//227 QTestEventList::addMouseRelease(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {17, 102, 317, 1, 0, 0, 44},	//228 QTestEventList::addMouseClick(Qt::MouseButton)
    {17, 102, 319, 2, 0, 0, 45},	//229 QTestEventList::addMouseClick(Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {17, 102, 322, 3, 0, 0, 46},	//230 QTestEventList::addMouseClick(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {17, 107, 317, 1, 0, 0, 47},	//231 QTestEventList::addMouseDClick(Qt::MouseButton)
    {17, 107, 319, 2, 0, 0, 48},	//232 QTestEventList::addMouseDClick(Qt::MouseButton, QFlags<Qt::KeyboardModifier>)
    {17, 107, 322, 3, 0, 0, 49},	//233 QTestEventList::addMouseDClick(Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint)
    {17, 112, 0, 0, 0, 0, 50},	//234 QTestEventList::addMouseMove()
    {17, 112, 326, 1, 0, 0, 51},	//235 QTestEventList::addMouseMove(QPoint)
    {17, 305, 0, 0, Smoke::mf_dtor, 0, 52 },	//236 QTestEventList::~QTestEventList()
    {18, 188, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 131, 1},	//237 QTestEventLoop::metaObject() const
    {18, 251, 1, 1, Smoke::mf_virtual, 148, 2},	//238 QTestEventLoop::qt_metacast(const char*)
    {18, 289, 328, 2, Smoke::mf_static, 13, 3},	//239 QTestEventLoop::tr(const char*, const char*)
    {18, 293, 328, 2, Smoke::mf_static, 13, 4},	//240 QTestEventLoop::trUtf8(const char*, const char*)
    {18, 289, 194, 3, Smoke::mf_static, 13, 5},	//241 QTestEventLoop::tr(const char*, const char*, int)
    {18, 293, 194, 3, Smoke::mf_static, 13, 6},	//242 QTestEventLoop::trUtf8(const char*, const char*, int)
    {18, 249, 15, 3, Smoke::mf_virtual, 146, 7},	//243 QTestEventLoop::qt_metacall(QMetaObject::Call, int, void**)
    {18, 48, 224, 1, Smoke::mf_ctor, 27, 8},	//244 QTestEventLoop::QTestEventLoop(QObject*)
    {18, 155, 85, 1, 0, 0, 9},	//245 QTestEventLoop::enterLoop(int)
    {18, 129, 85, 1, 0, 0, 10},	//246 QTestEventLoop::changeInterval(int)
    {18, 282, 0, 0, Smoke::mf_const, 126, 11},	//247 QTestEventLoop::timeout() const
    {18, 164, 0, 0, Smoke::mf_static, 26, 12},	//248 QTestEventLoop::instance()
    {18, 160, 0, 0, Smoke::mf_slot, 0, 13},	//249 QTestEventLoop::exitLoop()
    {18, 283, 8, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 14},	//250 QTestEventLoop::timerEvent(QTimerEvent*)
    {18, 289, 1, 1, Smoke::mf_static, 13, 15},	//251 QTestEventLoop::tr(const char*)
    {18, 293, 1, 1, Smoke::mf_static, 13, 16},	//252 QTestEventLoop::trUtf8(const char*)
    {18, 48, 0, 0, Smoke::mf_ctor, 27, 17},	//253 QTestEventLoop::QTestEventLoop()
    {18, 280, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 130, 18},	//254 QTestEventLoop::staticMetaObject() const
    {18, 306, 0, 0, Smoke::mf_dtor, 0, 19 },	//255 QTestEventLoop::~QTestEventLoop()
    {19, 50, 275, 3, Smoke::mf_ctor, 28, 1},	//256 QTestKeyClicksEvent::QTestKeyClicksEvent(const QString&, QFlags<Qt::KeyboardModifier>, int)
    {19, 136, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 24, 2},	//257 QTestKeyClicksEvent::clone() const
    {19, 275, 181, 1, Smoke::mf_virtual, 0, 3},	//258 QTestKeyClicksEvent::simulate(QWidget*)
    {19, 50, 331, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 28, 4},	//259 QTestKeyClicksEvent::QTestKeyClicksEvent(const QTestKeyClicksEvent&)
    {19, 307, 0, 0, Smoke::mf_dtor, 0, 5 },	//260 QTestKeyClicksEvent::~QTestKeyClicksEvent()
    {20, 53, 266, 4, Smoke::mf_ctor, 29, 1},	//261 QTestKeyEvent::QTestKeyEvent(QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    {20, 53, 279, 4, Smoke::mf_ctor, 29, 2},	//262 QTestKeyEvent::QTestKeyEvent(QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>, int)
    {20, 136, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 24, 3},	//263 QTestKeyEvent::clone() const
    {20, 275, 181, 1, Smoke::mf_virtual, 0, 4},	//264 QTestKeyEvent::simulate(QWidget*)
    {20, 53, 333, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 29, 5},	//265 QTestKeyEvent::QTestKeyEvent(const QTestKeyEvent&)
    {20, 73, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 16, 6},	//266 QTestKeyEvent::_action() const
    {20, 264, 335, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 7},	//267 QTestKeyEvent::set_action(QTest::KeyAction)
    {20, 75, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 146, 8},	//268 QTestKeyEvent::_delay() const
    {20, 268, 85, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 9},	//269 QTestKeyEvent::set_delay(int)
    {20, 77, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 6, 10},	//270 QTestKeyEvent::_modifiers() const
    {20, 272, 337, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 11},	//271 QTestKeyEvent::set_modifiers(QFlags<Qt::KeyboardModifier>)
    {20, 74, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 127, 12},	//272 QTestKeyEvent::_ascii() const
    {20, 266, 87, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 13},	//273 QTestKeyEvent::set_ascii(char)
    {20, 76, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 72, 14},	//274 QTestKeyEvent::_key() const
    {20, 270, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 15},	//275 QTestKeyEvent::set_key(Qt::Key)
    {20, 308, 0, 0, Smoke::mf_dtor, 0, 16 },	//276 QTestKeyEvent::~QTestKeyEvent()
    {21, 56, 339, 5, Smoke::mf_ctor, 30, 1},	//277 QTestMouseEvent::QTestMouseEvent(QTest::MouseAction, Qt::MouseButton, QFlags<Qt::KeyboardModifier>, QPoint, int)
    {21, 136, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 24, 2},	//278 QTestMouseEvent::clone() const
    {21, 275, 181, 1, Smoke::mf_virtual, 0, 3},	//279 QTestMouseEvent::simulate(QWidget*)
    {21, 56, 345, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 30, 4},	//280 QTestMouseEvent::QTestMouseEvent(const QTestMouseEvent&)
    {21, 309, 0, 0, Smoke::mf_dtor, 0, 5 },	//281 QTestMouseEvent::~QTestMouseEvent()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    87,  // QTest::keyClick(QWidget*, Qt::Key)
    124,  // QTest::keyClick(QWidget*, char)
    0,
    88,  // QTest::keyClick(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    125,  // QTest::keyClick(QWidget*, char, QFlags<Qt::KeyboardModifier>)
    0,
    86,  // QTest::keyClick(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    123,  // QTest::keyClick(QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    0,
    64,  // QTest::keyEvent(QTest::KeyAction, QWidget*, char)
    127,  // QTest::keyEvent(QTest::KeyAction, QWidget*, Qt::Key)
    0,
    65,  // QTest::keyEvent(QTest::KeyAction, QWidget*, char, QFlags<Qt::KeyboardModifier>)
    128,  // QTest::keyEvent(QTest::KeyAction, QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    0,
    63,  // QTest::keyEvent(QTest::KeyAction, QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    126,  // QTest::keyEvent(QTest::KeyAction, QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    0,
    48,  // QTest::keyPress(QWidget*, Qt::Key)
    52,  // QTest::keyPress(QWidget*, char)
    0,
    49,  // QTest::keyPress(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    53,  // QTest::keyPress(QWidget*, char, QFlags<Qt::KeyboardModifier>)
    0,
    47,  // QTest::keyPress(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    51,  // QTest::keyPress(QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    0,
    70,  // QTest::keyRelease(QWidget*, Qt::Key)
    99,  // QTest::keyRelease(QWidget*, char)
    0,
    71,  // QTest::keyRelease(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>)
    100,  // QTest::keyRelease(QWidget*, char, QFlags<Qt::KeyboardModifier>)
    0,
    69,  // QTest::keyRelease(QWidget*, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    98,  // QTest::keyRelease(QWidget*, char, QFlags<Qt::KeyboardModifier>, int)
    0,
    75,  // QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, char, QFlags<Qt::KeyboardModifier>)
    85,  // QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, QString, QFlags<Qt::KeyboardModifier>)
    0,
    74,  // QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, char, QFlags<Qt::KeyboardModifier>, int)
    84,  // QTest::sendKeyEvent(QTest::KeyAction, QWidget*, Qt::Key, QString, QFlags<Qt::KeyboardModifier>, int)
    0,
    89,  // QTest::toString(const void*)
    130,  // QTest::toString(const char*)
    0,
    158,  // QTestAccessibilityEvent::QTestAccessibilityEvent(const QTestAccessibilityEvent&)
    160,  // QTestAccessibilityEvent::QTestAccessibilityEvent(QObject*)
    0,
    204,  // QTestEventList::addKeyClick(Qt::Key)
    212,  // QTestEventList::addKeyClick(char)
    0,
    205,  // QTestEventList::addKeyClick(Qt::Key, QFlags<Qt::KeyboardModifier>)
    213,  // QTestEventList::addKeyClick(char, QFlags<Qt::KeyboardModifier>)
    0,
    188,  // QTestEventList::addKeyClick(Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    192,  // QTestEventList::addKeyClick(char, QFlags<Qt::KeyboardModifier>, int)
    0,
    210,  // QTestEventList::addKeyEvent(QTest::KeyAction, Qt::Key)
    220,  // QTestEventList::addKeyEvent(QTest::KeyAction, char)
    0,
    211,  // QTestEventList::addKeyEvent(QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>)
    221,  // QTestEventList::addKeyEvent(QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>)
    0,
    191,  // QTestEventList::addKeyEvent(QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    196,  // QTestEventList::addKeyEvent(QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>, int)
    0,
    206,  // QTestEventList::addKeyPress(Qt::Key)
    214,  // QTestEventList::addKeyPress(char)
    0,
    207,  // QTestEventList::addKeyPress(Qt::Key, QFlags<Qt::KeyboardModifier>)
    215,  // QTestEventList::addKeyPress(char, QFlags<Qt::KeyboardModifier>)
    0,
    189,  // QTestEventList::addKeyPress(Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    193,  // QTestEventList::addKeyPress(char, QFlags<Qt::KeyboardModifier>, int)
    0,
    208,  // QTestEventList::addKeyRelease(Qt::Key)
    216,  // QTestEventList::addKeyRelease(char)
    0,
    209,  // QTestEventList::addKeyRelease(Qt::Key, QFlags<Qt::KeyboardModifier>)
    217,  // QTestEventList::addKeyRelease(char, QFlags<Qt::KeyboardModifier>)
    0,
    190,  // QTestEventList::addKeyRelease(Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    194,  // QTestEventList::addKeyRelease(char, QFlags<Qt::KeyboardModifier>, int)
    0,
    261,  // QTestKeyEvent::QTestKeyEvent(QTest::KeyAction, Qt::Key, QFlags<Qt::KeyboardModifier>, int)
    262,  // QTestKeyEvent::QTestKeyEvent(QTest::KeyAction, char, QFlags<Qt::KeyboardModifier>, int)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {5, 10, 13},	// QGlobalSpace::LicensedActiveQt
    {5, 11, 19},	// QGlobalSpace::LicensedCore
    {5, 12, 11},	// QGlobalSpace::LicensedDBus
    {5, 13, 16},	// QGlobalSpace::LicensedDeclarative
    {5, 14, 6},	// QGlobalSpace::LicensedGui
    {5, 15, 25},	// QGlobalSpace::LicensedHelp
    {5, 16, 26},	// QGlobalSpace::LicensedMultimedia
    {5, 17, 29},	// QGlobalSpace::LicensedNetwork
    {5, 18, 18},	// QGlobalSpace::LicensedOpenGL
    {5, 19, 10},	// QGlobalSpace::LicensedOpenVG
    {5, 20, 27},	// QGlobalSpace::LicensedQt3Support
    {5, 21, 8},	// QGlobalSpace::LicensedQt3SupportLight
    {5, 22, 9},	// QGlobalSpace::LicensedScript
    {5, 23, 14},	// QGlobalSpace::LicensedScriptTools
    {5, 24, 17},	// QGlobalSpace::LicensedSql
    {5, 25, 15},	// QGlobalSpace::LicensedSvg
    {5, 26, 12},	// QGlobalSpace::LicensedTest
    {5, 27, 7},	// QGlobalSpace::LicensedXml
    {5, 28, 28},	// QGlobalSpace::LicensedXmlPatterns
    {5, 59, 1},	// QGlobalSpace::Q_COMPLEX_TYPE
    {5, 60, 5},	// QGlobalSpace::Q_DUMMY_TYPE
    {5, 61, 4},	// QGlobalSpace::Q_MOVABLE_TYPE
    {5, 62, 2},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {5, 63, 3},	// QGlobalSpace::Q_STATIC_TYPE
    {5, 64, 22},	// QGlobalSpace::QtCriticalMsg
    {5, 65, 20},	// QGlobalSpace::QtDebugMsg
    {5, 66, 23},	// QGlobalSpace::QtFatalMsg
    {5, 67, 24},	// QGlobalSpace::QtSystemMsg
    {5, 68, 21},	// QGlobalSpace::QtWarningMsg
    {10, 36, 39},	// QSignalSpy::QSignalSpy#$
    {10, 165, 40},	// QSignalSpy::isValid
    {10, 250, 42},	// QSignalSpy::qt_metacall$$?
    {10, 274, 41},	// QSignalSpy::signal
    {10, 300, 43},	// QSignalSpy::~QSignalSpy
    {11, 1, 131},	// QTest::Abort
    {11, 2, 144},	// QTest::BitsPerSecond
    {11, 3, 145},	// QTest::BytesPerSecond
    {11, 4, 147},	// QTest::CPUTicks
    {11, 5, 140},	// QTest::Click
    {11, 6, 132},	// QTest::Continue
    {11, 7, 149},	// QTest::Events
    {11, 8, 143},	// QTest::FramesPerSecond
    {11, 9, 148},	// QTest::InstructionReads
    {11, 29, 135},	// QTest::MouseClick
    {11, 30, 136},	// QTest::MouseDClick
    {11, 31, 137},	// QTest::MouseMove
    {11, 32, 133},	// QTest::MousePress
    {11, 33, 134},	// QTest::MouseRelease
    {11, 34, 138},	// QTest::Press
    {11, 69, 139},	// QTest::Release
    {11, 70, 142},	// QTest::SkipAll
    {11, 71, 141},	// QTest::SkipSingle
    {11, 72, 146},	// QTest::WalltimeMilliseconds
    {11, 79, 44},	// QTest::addColumnInternal$$
    {11, 128, 61},	// QTest::asciiToKey$
    {11, 138, 96},	// QTest::compare_helper$$$$
    {11, 139, 46},	// QTest::compare_helper$$$$$$$$
    {11, 141, 76},	// QTest::compare_ptr_helper$$$$$$
    {11, 143, 78},	// QTest::compare_string_helper$$$$$$
    {11, 145, 77},	// QTest::currentAppName
    {11, 146, 59},	// QTest::currentDataTag
    {11, 147, 107},	// QTest::currentTestFailed
    {11, 148, 72},	// QTest::currentTestFunction
    {11, 162, 50},	// QTest::ignoreMessage$$
    {11, 167, -1},	// QTest::keyClick#$
    {11, 168, -4},	// QTest::keyClick#$$
    {11, 169, -7},	// QTest::keyClick#$$$
    {11, 171, 67},	// QTest::keyClicks#$
    {11, 172, 68},	// QTest::keyClicks#$$
    {11, 173, 66},	// QTest::keyClicks#$$$
    {11, 175, -10},	// QTest::keyEvent$#$
    {11, 176, -13},	// QTest::keyEvent$#$$
    {11, 177, -16},	// QTest::keyEvent$#$$$
    {11, 179, -19},	// QTest::keyPress#$
    {11, 180, -22},	// QTest::keyPress#$$
    {11, 181, -25},	// QTest::keyPress#$$$
    {11, 183, -28},	// QTest::keyRelease#$
    {11, 184, -31},	// QTest::keyRelease#$$
    {11, 185, -34},	// QTest::keyRelease#$$$
    {11, 187, 54},	// QTest::keyToAscii$
    {11, 190, 92},	// QTest::mouseClick#$
    {11, 191, 93},	// QTest::mouseClick#$$
    {11, 192, 94},	// QTest::mouseClick#$$#
    {11, 193, 91},	// QTest::mouseClick#$$#$
    {11, 195, 102},	// QTest::mouseDClick#$
    {11, 196, 103},	// QTest::mouseDClick#$$
    {11, 197, 104},	// QTest::mouseDClick#$$#
    {11, 198, 101},	// QTest::mouseDClick#$$#$
    {11, 200, 56},	// QTest::mouseEvent$#$$#
    {11, 201, 55},	// QTest::mouseEvent$#$$#$
    {11, 203, 111},	// QTest::mouseMove#
    {11, 204, 112},	// QTest::mouseMove##
    {11, 205, 110},	// QTest::mouseMove##$
    {11, 207, 80},	// QTest::mousePress#$
    {11, 208, 81},	// QTest::mousePress#$$
    {11, 209, 82},	// QTest::mousePress#$$#
    {11, 210, 79},	// QTest::mousePress#$$#$
    {11, 212, 117},	// QTest::mouseRelease#$
    {11, 213, 118},	// QTest::mouseRelease#$$
    {11, 214, 119},	// QTest::mouseRelease#$$#
    {11, 215, 116},	// QTest::mouseRelease#$$#$
    {11, 217, 90},	// QTest::newRow$
    {11, 223, 105},	// QTest::qData$$
    {11, 225, 115},	// QTest::qElementData$$
    {11, 227, 121},	// QTest::qExec#
    {11, 228, 122},	// QTest::qExec#$
    {11, 229, 120},	// QTest::qExec#$?
    {11, 230, 129},	// QTest::qExec#?
    {11, 232, 106},	// QTest::qExpectFail$$$$$
    {11, 234, 109},	// QTest::qFail$$$
    {11, 236, 45},	// QTest::qGlobalData$$
    {11, 238, 108},	// QTest::qSkip$$$$
    {11, 240, 60},	// QTest::qSleep$
    {11, 242, 57},	// QTest::qVerify$$$$$
    {11, 244, 83},	// QTest::qWait$
    {11, 246, 97},	// QTest::qWaitForWindowShown#
    {11, 248, 62},	// QTest::qWarn$
    {11, 254, -37},	// QTest::sendKeyEvent$#$$$
    {11, 255, -40},	// QTest::sendKeyEvent$#$$$$
    {11, 257, 58},	// QTest::setBenchmarkResult$$
    {11, 278, 114},	// QTest::simulateEvent#$$$$$
    {11, 279, 113},	// QTest::simulateEvent#$$$$$$
    {11, 281, 73},	// QTest::testObject
    {11, 286, 95},	// QTest::toHexRepresentation$$
    {11, 288, -43},	// QTest::toString$
    {12, 133, 151},	// QTestAccessibility::cleanup
    {12, 135, 152},	// QTestAccessibility::clearEvents
    {12, 159, 153},	// QTestAccessibility::events
    {12, 163, 150},	// QTestAccessibility::initialize
    {12, 298, 154},	// QTestAccessibility::verifyEvent#
    {12, 299, 155},	// QTestAccessibility::verifyEvent#$$
    {13, 37, 159},	// QTestAccessibilityEvent::QTestAccessibilityEvent
    {13, 38, -46},	// QTestAccessibilityEvent::QTestAccessibilityEvent#
    {13, 39, 161},	// QTestAccessibilityEvent::QTestAccessibilityEvent#$
    {13, 40, 156},	// QTestAccessibilityEvent::QTestAccessibilityEvent#$$
    {13, 131, 164},	// QTestAccessibilityEvent::child
    {13, 157, 166},	// QTestAccessibilityEvent::event
    {13, 218, 162},	// QTestAccessibilityEvent::object
    {13, 220, 157},	// QTestAccessibilityEvent::operator==#
    {13, 259, 165},	// QTestAccessibilityEvent::setChild$
    {13, 261, 167},	// QTestAccessibilityEvent::setEvent$
    {13, 263, 163},	// QTestAccessibilityEvent::setObject#
    {13, 301, 168},	// QTestAccessibilityEvent::~QTestAccessibilityEvent
    {14, 126, 169},	// QTestData::append$$
    {14, 151, 170},	// QTestData::data$
    {14, 152, 173},	// QTestData::dataCount
    {14, 153, 171},	// QTestData::dataTag
    {14, 221, 172},	// QTestData::parent
    {14, 302, 174},	// QTestData::~QTestData
    {15, 42, 178},	// QTestDelayEvent::QTestDelayEvent#
    {15, 43, 175},	// QTestDelayEvent::QTestDelayEvent$
    {15, 136, 176},	// QTestDelayEvent::clone
    {15, 276, 177},	// QTestDelayEvent::simulate#
    {15, 303, 179},	// QTestDelayEvent::~QTestDelayEvent
    {16, 44, 182},	// QTestEvent::QTestEvent
    {16, 45, 183},	// QTestEvent::QTestEvent#
    {16, 136, 181},	// QTestEvent::clone
    {16, 276, 180},	// QTestEvent::simulate#
    {16, 304, 184},	// QTestEvent::~QTestEvent
    {17, 46, 185},	// QTestEventList::QTestEventList
    {17, 47, 186},	// QTestEventList::QTestEventList#
    {17, 81, 202},	// QTestEventList::addDelay$
    {17, 83, -49},	// QTestEventList::addKeyClick$
    {17, 84, -52},	// QTestEventList::addKeyClick$$
    {17, 85, -55},	// QTestEventList::addKeyClick$$$
    {17, 87, 218},	// QTestEventList::addKeyClicks$
    {17, 88, 219},	// QTestEventList::addKeyClicks$$
    {17, 89, 195},	// QTestEventList::addKeyClicks$$$
    {17, 91, -58},	// QTestEventList::addKeyEvent$$
    {17, 92, -61},	// QTestEventList::addKeyEvent$$$
    {17, 93, -64},	// QTestEventList::addKeyEvent$$$$
    {17, 95, -67},	// QTestEventList::addKeyPress$
    {17, 96, -70},	// QTestEventList::addKeyPress$$
    {17, 97, -73},	// QTestEventList::addKeyPress$$$
    {17, 99, -76},	// QTestEventList::addKeyRelease$
    {17, 100, -79},	// QTestEventList::addKeyRelease$$
    {17, 101, -82},	// QTestEventList::addKeyRelease$$$
    {17, 103, 228},	// QTestEventList::addMouseClick$
    {17, 104, 229},	// QTestEventList::addMouseClick$$
    {17, 105, 230},	// QTestEventList::addMouseClick$$#
    {17, 106, 199},	// QTestEventList::addMouseClick$$#$
    {17, 108, 231},	// QTestEventList::addMouseDClick$
    {17, 109, 232},	// QTestEventList::addMouseDClick$$
    {17, 110, 233},	// QTestEventList::addMouseDClick$$#
    {17, 111, 200},	// QTestEventList::addMouseDClick$$#$
    {17, 112, 234},	// QTestEventList::addMouseMove
    {17, 113, 235},	// QTestEventList::addMouseMove#
    {17, 114, 201},	// QTestEventList::addMouseMove#$
    {17, 116, 222},	// QTestEventList::addMousePress$
    {17, 117, 223},	// QTestEventList::addMousePress$$
    {17, 118, 224},	// QTestEventList::addMousePress$$#
    {17, 119, 197},	// QTestEventList::addMousePress$$#$
    {17, 121, 225},	// QTestEventList::addMouseRelease$
    {17, 122, 226},	// QTestEventList::addMouseRelease$$
    {17, 123, 227},	// QTestEventList::addMouseRelease$$#
    {17, 124, 198},	// QTestEventList::addMouseRelease$$#$
    {17, 134, 187},	// QTestEventList::clear
    {17, 276, 203},	// QTestEventList::simulate#
    {17, 305, 236},	// QTestEventList::~QTestEventList
    {18, 48, 253},	// QTestEventLoop::QTestEventLoop
    {18, 49, 244},	// QTestEventLoop::QTestEventLoop#
    {18, 130, 246},	// QTestEventLoop::changeInterval$
    {18, 156, 245},	// QTestEventLoop::enterLoop$
    {18, 160, 249},	// QTestEventLoop::exitLoop
    {18, 164, 248},	// QTestEventLoop::instance
    {18, 188, 237},	// QTestEventLoop::metaObject
    {18, 250, 243},	// QTestEventLoop::qt_metacall$$?
    {18, 252, 238},	// QTestEventLoop::qt_metacast$
    {18, 280, 254},	// QTestEventLoop::staticMetaObject
    {18, 282, 247},	// QTestEventLoop::timeout
    {18, 284, 250},	// QTestEventLoop::timerEvent#
    {18, 290, 251},	// QTestEventLoop::tr$
    {18, 291, 239},	// QTestEventLoop::tr$$
    {18, 292, 241},	// QTestEventLoop::tr$$$
    {18, 294, 252},	// QTestEventLoop::trUtf8$
    {18, 295, 240},	// QTestEventLoop::trUtf8$$
    {18, 296, 242},	// QTestEventLoop::trUtf8$$$
    {18, 306, 255},	// QTestEventLoop::~QTestEventLoop
    {19, 51, 259},	// QTestKeyClicksEvent::QTestKeyClicksEvent#
    {19, 52, 256},	// QTestKeyClicksEvent::QTestKeyClicksEvent$$$
    {19, 136, 257},	// QTestKeyClicksEvent::clone
    {19, 276, 258},	// QTestKeyClicksEvent::simulate#
    {19, 307, 260},	// QTestKeyClicksEvent::~QTestKeyClicksEvent
    {20, 54, 265},	// QTestKeyEvent::QTestKeyEvent#
    {20, 55, -85},	// QTestKeyEvent::QTestKeyEvent$$$$
    {20, 73, 266},	// QTestKeyEvent::_action
    {20, 74, 272},	// QTestKeyEvent::_ascii
    {20, 75, 268},	// QTestKeyEvent::_delay
    {20, 76, 274},	// QTestKeyEvent::_key
    {20, 77, 270},	// QTestKeyEvent::_modifiers
    {20, 136, 263},	// QTestKeyEvent::clone
    {20, 265, 267},	// QTestKeyEvent::set_action$
    {20, 267, 273},	// QTestKeyEvent::set_ascii$
    {20, 269, 269},	// QTestKeyEvent::set_delay$
    {20, 271, 275},	// QTestKeyEvent::set_key$
    {20, 273, 271},	// QTestKeyEvent::set_modifiers$
    {20, 276, 264},	// QTestKeyEvent::simulate#
    {20, 308, 276},	// QTestKeyEvent::~QTestKeyEvent
    {21, 57, 280},	// QTestMouseEvent::QTestMouseEvent#
    {21, 58, 277},	// QTestMouseEvent::QTestMouseEvent$$$#$
    {21, 136, 278},	// QTestMouseEvent::clone
    {21, 276, 279},	// QTestMouseEvent::simulate#
    {21, 309, 281},	// QTestMouseEvent::~QTestMouseEvent
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();

static bool initialized = false;
Smoke *qttest_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qttest_Smoke() {
    init_qtcore_Smoke();
    if (initialized) return;
    qttest_Smoke = new Smoke(
        "qttest",
        __smokeqttest::classes, 24,
        __smokeqttest::methods, 282,
        __smokeqttest::methodMaps, 244,
        __smokeqttest::methodNames, 309,
        __smokeqttest::types, 150,
        __smokeqttest::inheritanceList,
        __smokeqttest::argumentList,
        __smokeqttest::ambiguousMethodList,
        __smokeqttest::cast );
    initialized = true;
}

void delete_qttest_Smoke() { delete qttest_Smoke; }

}
