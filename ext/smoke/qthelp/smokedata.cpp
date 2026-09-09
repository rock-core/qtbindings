#include <qthelp_includes.h>

#include <smoke.h>
#include <qthelp_smoke.h>

namespace __smokeqthelp {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QAbstractItemModel
      switch(to) {
        case 58: return (void*)(QObject*)(QAbstractItemModel*)xptr;
        case 1: return (void*)(QAbstractItemModel*)xptr;
        case 33: return (void*)(QHelpIndexModel*)(QAbstractItemModel*)xptr;
        case 29: return (void*)(QHelpContentModel*)(QAbstractItemModel*)xptr;
        default: return xptr;
      }
    case 2:   //QActionEvent
      switch(to) {
        case 2: return (void*)(QActionEvent*)xptr;
        default: return xptr;
      }
    case 3:   //QBitArray
      switch(to) {
        case 3: return (void*)(QBitArray*)xptr;
        default: return xptr;
      }
    case 4:   //QBool
      switch(to) {
        case 4: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 5:   //QBrush
      switch(to) {
        case 5: return (void*)(QBrush*)xptr;
        default: return xptr;
      }
    case 6:   //QByteArray
      switch(to) {
        case 6: return (void*)(QByteArray*)xptr;
        default: return xptr;
      }
    case 7:   //QChar
      switch(to) {
        case 7: return (void*)(QChar*)xptr;
        default: return xptr;
      }
    case 8:   //QChildEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 8: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 9:   //QCloseEvent
      switch(to) {
        case 9: return (void*)(QCloseEvent*)xptr;
        default: return xptr;
      }
    case 10:   //QColor
      switch(to) {
        case 10: return (void*)(QColor*)xptr;
        default: return xptr;
      }
    case 11:   //QContextMenuEvent
      switch(to) {
        case 11: return (void*)(QContextMenuEvent*)xptr;
        default: return xptr;
      }
    case 12:   //QCursor
      switch(to) {
        case 12: return (void*)(QCursor*)xptr;
        default: return xptr;
      }
    case 13:   //QDataStream
      switch(to) {
        case 13: return (void*)(QDataStream*)xptr;
        default: return xptr;
      }
    case 14:   //QDate
      switch(to) {
        case 14: return (void*)(QDate*)xptr;
        default: return xptr;
      }
    case 15:   //QDateTime
      switch(to) {
        case 15: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 16:   //QDebug
      switch(to) {
        case 16: return (void*)(QDebug*)xptr;
        default: return xptr;
      }
    case 17:   //QDir
      switch(to) {
        case 17: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 18:   //QDragEnterEvent
      switch(to) {
        case 18: return (void*)(QDragEnterEvent*)xptr;
        default: return xptr;
      }
    case 19:   //QDragLeaveEvent
      switch(to) {
        case 19: return (void*)(QDragLeaveEvent*)xptr;
        default: return xptr;
      }
    case 20:   //QDragMoveEvent
      switch(to) {
        case 20: return (void*)(QDragMoveEvent*)xptr;
        default: return xptr;
      }
    case 21:   //QDropEvent
      switch(to) {
        case 21: return (void*)(QDropEvent*)xptr;
        default: return xptr;
      }
    case 22:   //QEasingCurve
      switch(to) {
        case 22: return (void*)(QEasingCurve*)xptr;
        default: return xptr;
      }
    case 23:   //QEvent
      switch(to) {
        case 23: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 24:   //QFocusEvent
      switch(to) {
        case 24: return (void*)(QFocusEvent*)xptr;
        default: return xptr;
      }
    case 25:   //QFont
      switch(to) {
        case 25: return (void*)(QFont*)xptr;
        default: return xptr;
      }
    case 27:   //QHashDummyValue
      switch(to) {
        case 27: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 28:   //QHelpContentItem
      switch(to) {
        case 28: return (void*)(QHelpContentItem*)xptr;
        default: return xptr;
      }
    case 29:   //QHelpContentModel
      switch(to) {
        case 1: return (void*)(QAbstractItemModel*)(QHelpContentModel*)xptr;
        case 58: return (void*)(QObject*)(QHelpContentModel*)xptr;
        case 29: return (void*)(QHelpContentModel*)xptr;
        default: return xptr;
      }
    case 30:   //QHelpContentWidget
      switch(to) {
        case 93: return (void*)(QTreeView*)(QHelpContentWidget*)xptr;
        case 99: return (void*)(QWidget*)(QHelpContentWidget*)xptr;
        case 58: return (void*)(QObject*)(QHelpContentWidget*)xptr;
        case 30: return (void*)(QHelpContentWidget*)xptr;
        default: return xptr;
      }
    case 31:   //QHelpEngine
      switch(to) {
        case 32: return (void*)(QHelpEngineCore*)(QHelpEngine*)xptr;
        case 58: return (void*)(QObject*)(QHelpEngine*)xptr;
        case 31: return (void*)(QHelpEngine*)xptr;
        default: return xptr;
      }
    case 32:   //QHelpEngineCore
      switch(to) {
        case 58: return (void*)(QObject*)(QHelpEngineCore*)xptr;
        case 32: return (void*)(QHelpEngineCore*)xptr;
        case 31: return (void*)(QHelpEngine*)(QHelpEngineCore*)xptr;
        default: return xptr;
      }
    case 33:   //QHelpIndexModel
      switch(to) {
        case 83: return (void*)(QStringListModel*)(QHelpIndexModel*)xptr;
        case 1: return (void*)(QAbstractItemModel*)(QHelpIndexModel*)xptr;
        case 58: return (void*)(QObject*)(QHelpIndexModel*)xptr;
        case 33: return (void*)(QHelpIndexModel*)xptr;
        default: return xptr;
      }
    case 34:   //QHelpIndexWidget
      switch(to) {
        case 50: return (void*)(QListView*)(QHelpIndexWidget*)xptr;
        case 99: return (void*)(QWidget*)(QHelpIndexWidget*)xptr;
        case 58: return (void*)(QObject*)(QHelpIndexWidget*)xptr;
        case 34: return (void*)(QHelpIndexWidget*)xptr;
        default: return xptr;
      }
    case 35:   //QHelpSearchEngine
      switch(to) {
        case 58: return (void*)(QObject*)(QHelpSearchEngine*)xptr;
        case 35: return (void*)(QHelpSearchEngine*)xptr;
        default: return xptr;
      }
    case 36:   //QHelpSearchQuery
      switch(to) {
        case 36: return (void*)(QHelpSearchQuery*)xptr;
        default: return xptr;
      }
    case 37:   //QHelpSearchQueryWidget
      switch(to) {
        case 99: return (void*)(QWidget*)(QHelpSearchQueryWidget*)xptr;
        case 58: return (void*)(QObject*)(QHelpSearchQueryWidget*)xptr;
        case 37: return (void*)(QHelpSearchQueryWidget*)xptr;
        default: return xptr;
      }
    case 38:   //QHelpSearchResultWidget
      switch(to) {
        case 99: return (void*)(QWidget*)(QHelpSearchResultWidget*)xptr;
        case 58: return (void*)(QObject*)(QHelpSearchResultWidget*)xptr;
        case 38: return (void*)(QHelpSearchResultWidget*)xptr;
        default: return xptr;
      }
    case 39:   //QHideEvent
      switch(to) {
        case 39: return (void*)(QHideEvent*)xptr;
        default: return xptr;
      }
    case 40:   //QIcon
      switch(to) {
        case 40: return (void*)(QIcon*)xptr;
        default: return xptr;
      }
    case 41:   //QImage
      switch(to) {
        case 41: return (void*)(QImage*)xptr;
        default: return xptr;
      }
    case 42:   //QIncompatibleFlag
      switch(to) {
        case 42: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 43:   //QInputMethodEvent
      switch(to) {
        case 43: return (void*)(QInputMethodEvent*)xptr;
        default: return xptr;
      }
    case 44:   //QItemSelectionRange
      switch(to) {
        case 44: return (void*)(QItemSelectionRange*)xptr;
        default: return xptr;
      }
    case 45:   //QKeyEvent
      switch(to) {
        case 45: return (void*)(QKeyEvent*)xptr;
        default: return xptr;
      }
    case 46:   //QKeySequence
      switch(to) {
        case 46: return (void*)(QKeySequence*)xptr;
        default: return xptr;
      }
    case 47:   //QLatin1String
      switch(to) {
        case 47: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 48:   //QLine
      switch(to) {
        case 48: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 49:   //QLineF
      switch(to) {
        case 49: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 50:   //QListView
      switch(to) {
        case 99: return (void*)(QWidget*)(QListView*)xptr;
        case 58: return (void*)(QObject*)(QListView*)xptr;
        case 50: return (void*)(QListView*)xptr;
        case 34: return (void*)(QHelpIndexWidget*)(QListView*)xptr;
        default: return xptr;
      }
    case 51:   //QLocale
      switch(to) {
        case 51: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 52:   //QMargins
      switch(to) {
        case 52: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 53:   //QMatrix
      switch(to) {
        case 53: return (void*)(QMatrix*)xptr;
        default: return xptr;
      }
    case 54:   //QMetaObject
      switch(to) {
        case 54: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 55:   //QModelIndex
      switch(to) {
        case 55: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 56:   //QMouseEvent
      switch(to) {
        case 56: return (void*)(QMouseEvent*)xptr;
        default: return xptr;
      }
    case 57:   //QMoveEvent
      switch(to) {
        case 57: return (void*)(QMoveEvent*)xptr;
        default: return xptr;
      }
    case 58:   //QObject
      switch(to) {
        case 58: return (void*)(QObject*)xptr;
        case 37: return (void*)(QHelpSearchQueryWidget*)(QObject*)xptr;
        case 30: return (void*)(QHelpContentWidget*)(QObject*)xptr;
        case 33: return (void*)(QHelpIndexModel*)(QObject*)xptr;
        case 29: return (void*)(QHelpContentModel*)(QObject*)xptr;
        case 34: return (void*)(QHelpIndexWidget*)(QObject*)xptr;
        case 32: return (void*)(QHelpEngineCore*)(QObject*)xptr;
        case 31: return (void*)(QHelpEngine*)(QObject*)xptr;
        case 35: return (void*)(QHelpSearchEngine*)(QObject*)xptr;
        case 38: return (void*)(QHelpSearchResultWidget*)(QObject*)xptr;
        default: return xptr;
      }
    case 59:   //QPaintEngine
      switch(to) {
        case 59: return (void*)(QPaintEngine*)xptr;
        default: return xptr;
      }
    case 60:   //QPaintEvent
      switch(to) {
        case 60: return (void*)(QPaintEvent*)xptr;
        default: return xptr;
      }
    case 61:   //QPainterPath
      switch(to) {
        case 61: return (void*)(QPainterPath*)xptr;
        default: return xptr;
      }
    case 62:   //QPalette
      switch(to) {
        case 62: return (void*)(QPalette*)xptr;
        default: return xptr;
      }
    case 63:   //QPersistentModelIndex
      switch(to) {
        case 63: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 64:   //QPixmap
      switch(to) {
        case 64: return (void*)(QPixmap*)xptr;
        default: return xptr;
      }
    case 65:   //QPoint
      switch(to) {
        case 65: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 66:   //QPointF
      switch(to) {
        case 66: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 67:   //QPolygon
      switch(to) {
        case 67: return (void*)(QPolygon*)xptr;
        default: return xptr;
      }
    case 68:   //QPolygonF
      switch(to) {
        case 68: return (void*)(QPolygonF*)xptr;
        default: return xptr;
      }
    case 69:   //QRect
      switch(to) {
        case 69: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 70:   //QRectF
      switch(to) {
        case 70: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 71:   //QRegExp
      switch(to) {
        case 71: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 72:   //QRegion
      switch(to) {
        case 72: return (void*)(QRegion*)xptr;
        default: return xptr;
      }
    case 73:   //QResizeEvent
      switch(to) {
        case 73: return (void*)(QResizeEvent*)xptr;
        default: return xptr;
      }
    case 74:   //QShowEvent
      switch(to) {
        case 74: return (void*)(QShowEvent*)xptr;
        default: return xptr;
      }
    case 75:   //QSize
      switch(to) {
        case 75: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 76:   //QSizeF
      switch(to) {
        case 76: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 77:   //QSizePolicy
      switch(to) {
        case 77: return (void*)(QSizePolicy*)xptr;
        default: return xptr;
      }
    case 78:   //QSqlDatabase
      switch(to) {
        case 78: return (void*)(QSqlDatabase*)xptr;
        default: return xptr;
      }
    case 79:   //QSqlError
      switch(to) {
        case 79: return (void*)(QSqlError*)xptr;
        default: return xptr;
      }
    case 80:   //QSqlField
      switch(to) {
        case 80: return (void*)(QSqlField*)xptr;
        default: return xptr;
      }
    case 81:   //QSqlRecord
      switch(to) {
        case 81: return (void*)(QSqlRecord*)xptr;
        default: return xptr;
      }
    case 82:   //QString::Null
      switch(to) {
        case 82: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 83:   //QStringListModel
      switch(to) {
        case 1: return (void*)(QAbstractItemModel*)(QStringListModel*)xptr;
        case 58: return (void*)(QObject*)(QStringListModel*)xptr;
        case 83: return (void*)(QStringListModel*)xptr;
        case 33: return (void*)(QHelpIndexModel*)(QStringListModel*)xptr;
        default: return xptr;
      }
    case 84:   //QStringRef
      switch(to) {
        case 84: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 85:   //QStyle
      switch(to) {
        case 58: return (void*)(QObject*)(QStyle*)xptr;
        case 85: return (void*)(QStyle*)xptr;
        default: return xptr;
      }
    case 86:   //QStyleOption
      switch(to) {
        case 86: return (void*)(QStyleOption*)xptr;
        default: return xptr;
      }
    case 87:   //QTabletEvent
      switch(to) {
        case 87: return (void*)(QTabletEvent*)xptr;
        default: return xptr;
      }
    case 88:   //QTextStream
      switch(to) {
        case 88: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 89:   //QTextStreamManipulator
      switch(to) {
        case 89: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 90:   //QTime
      switch(to) {
        case 90: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 91:   //QTimerEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 91: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 92:   //QTransform
      switch(to) {
        case 92: return (void*)(QTransform*)xptr;
        default: return xptr;
      }
    case 93:   //QTreeView
      switch(to) {
        case 99: return (void*)(QWidget*)(QTreeView*)xptr;
        case 58: return (void*)(QObject*)(QTreeView*)xptr;
        case 93: return (void*)(QTreeView*)xptr;
        case 30: return (void*)(QHelpContentWidget*)(QTreeView*)xptr;
        default: return xptr;
      }
    case 94:   //QUrl
      switch(to) {
        case 94: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 95:   //QUuid
      switch(to) {
        case 95: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 96:   //QVariant
      switch(to) {
        case 96: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 97:   //QVariantComparisonHelper
      switch(to) {
        case 97: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    case 98:   //QWheelEvent
      switch(to) {
        case 98: return (void*)(QWheelEvent*)xptr;
        default: return xptr;
      }
    case 99:   //QWidget
      switch(to) {
        case 58: return (void*)(QObject*)(QWidget*)xptr;
        case 99: return (void*)(QWidget*)xptr;
        case 37: return (void*)(QHelpSearchQueryWidget*)(QWidget*)xptr;
        case 30: return (void*)(QHelpContentWidget*)(QWidget*)xptr;
        case 34: return (void*)(QHelpIndexWidget*)(QWidget*)xptr;
        case 38: return (void*)(QHelpSearchResultWidget*)(QWidget*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    1, 0,	// 1: QAbstractItemModel
    93, 0,	// 3: QTreeView
    32, 0,	// 5: QHelpEngineCore
    58, 0,	// 7: QObject
    83, 0,	// 9: QStringListModel
    50, 0,	// 11: QListView
    99, 0,	// 13: QWidget
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QHelpSearchQuery(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpContentItem(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpContentModel(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpContentWidget(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpEngine(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpEngineCore(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpIndexModel(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpIndexWidget(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpSearchEngine(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpSearchQuery(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpSearchQueryWidget(Smoke::Index, void*, Smoke::Stack);
void xcall_QHelpSearchResultWidget(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QAbstractItemModel", true, 0, 0, 0, 0, 0 },	//1
    { "QActionEvent", true, 0, 0, 0, 0, 0 },	//2
    { "QBitArray", true, 0, 0, 0, 0, 0 },	//3
    { "QBool", true, 0, 0, 0, 0, 0 },	//4
    { "QBrush", true, 0, 0, 0, 0, 0 },	//5
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//6
    { "QChar", true, 0, 0, 0, 0, 0 },	//7
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//8
    { "QCloseEvent", true, 0, 0, 0, 0, 0 },	//9
    { "QColor", true, 0, 0, 0, 0, 0 },	//10
    { "QContextMenuEvent", true, 0, 0, 0, 0, 0 },	//11
    { "QCursor", true, 0, 0, 0, 0, 0 },	//12
    { "QDataStream", true, 0, 0, 0, 0, 0 },	//13
    { "QDate", true, 0, 0, 0, 0, 0 },	//14
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//15
    { "QDebug", true, 0, 0, 0, 0, 0 },	//16
    { "QDir", true, 0, 0, 0, 0, 0 },	//17
    { "QDragEnterEvent", true, 0, 0, 0, 0, 0 },	//18
    { "QDragLeaveEvent", true, 0, 0, 0, 0, 0 },	//19
    { "QDragMoveEvent", true, 0, 0, 0, 0, 0 },	//20
    { "QDropEvent", true, 0, 0, 0, 0, 0 },	//21
    { "QEasingCurve", true, 0, 0, 0, 0, 0 },	//22
    { "QEvent", true, 0, 0, 0, 0, 0 },	//23
    { "QFocusEvent", true, 0, 0, 0, 0, 0 },	//24
    { "QFont", true, 0, 0, 0, 0, 0 },	//25
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//26
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//27
    { "QHelpContentItem", false, 0, xcall_QHelpContentItem, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QHelpContentItem) },	//28
    { "QHelpContentModel", false, 1, xcall_QHelpContentModel, 0, Smoke::cf_virtual, sizeof(QHelpContentModel) },	//29
    { "QHelpContentWidget", false, 3, xcall_QHelpContentWidget, 0, Smoke::cf_virtual, sizeof(QHelpContentWidget) },	//30
    { "QHelpEngine", false, 5, xcall_QHelpEngine, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QHelpEngine) },	//31
    { "QHelpEngineCore", false, 7, xcall_QHelpEngineCore, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QHelpEngineCore) },	//32
    { "QHelpIndexModel", false, 9, xcall_QHelpIndexModel, 0, Smoke::cf_virtual, sizeof(QHelpIndexModel) },	//33
    { "QHelpIndexWidget", false, 11, xcall_QHelpIndexWidget, 0, Smoke::cf_virtual, sizeof(QHelpIndexWidget) },	//34
    { "QHelpSearchEngine", false, 7, xcall_QHelpSearchEngine, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QHelpSearchEngine) },	//35
    { "QHelpSearchQuery", false, 0, xcall_QHelpSearchQuery, xenum_QHelpSearchQuery, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QHelpSearchQuery) },	//36
    { "QHelpSearchQueryWidget", false, 13, xcall_QHelpSearchQueryWidget, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QHelpSearchQueryWidget) },	//37
    { "QHelpSearchResultWidget", false, 13, xcall_QHelpSearchResultWidget, 0, Smoke::cf_virtual, sizeof(QHelpSearchResultWidget) },	//38
    { "QHideEvent", true, 0, 0, 0, 0, 0 },	//39
    { "QIcon", true, 0, 0, 0, 0, 0 },	//40
    { "QImage", true, 0, 0, 0, 0, 0 },	//41
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//42
    { "QInputMethodEvent", true, 0, 0, 0, 0, 0 },	//43
    { "QItemSelectionRange", true, 0, 0, 0, 0, 0 },	//44
    { "QKeyEvent", true, 0, 0, 0, 0, 0 },	//45
    { "QKeySequence", true, 0, 0, 0, 0, 0 },	//46
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//47
    { "QLine", true, 0, 0, 0, 0, 0 },	//48
    { "QLineF", true, 0, 0, 0, 0, 0 },	//49
    { "QListView", true, 0, 0, 0, 0, 0 },	//50
    { "QLocale", true, 0, 0, 0, 0, 0 },	//51
    { "QMargins", true, 0, 0, 0, 0, 0 },	//52
    { "QMatrix", true, 0, 0, 0, 0, 0 },	//53
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//54
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//55
    { "QMouseEvent", true, 0, 0, 0, 0, 0 },	//56
    { "QMoveEvent", true, 0, 0, 0, 0, 0 },	//57
    { "QObject", true, 0, 0, 0, 0, 0 },	//58
    { "QPaintEngine", true, 0, 0, 0, 0, 0 },	//59
    { "QPaintEvent", true, 0, 0, 0, 0, 0 },	//60
    { "QPainterPath", true, 0, 0, 0, 0, 0 },	//61
    { "QPalette", true, 0, 0, 0, 0, 0 },	//62
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//63
    { "QPixmap", true, 0, 0, 0, 0, 0 },	//64
    { "QPoint", true, 0, 0, 0, 0, 0 },	//65
    { "QPointF", true, 0, 0, 0, 0, 0 },	//66
    { "QPolygon", true, 0, 0, 0, 0, 0 },	//67
    { "QPolygonF", true, 0, 0, 0, 0, 0 },	//68
    { "QRect", true, 0, 0, 0, 0, 0 },	//69
    { "QRectF", true, 0, 0, 0, 0, 0 },	//70
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//71
    { "QRegion", true, 0, 0, 0, 0, 0 },	//72
    { "QResizeEvent", true, 0, 0, 0, 0, 0 },	//73
    { "QShowEvent", true, 0, 0, 0, 0, 0 },	//74
    { "QSize", true, 0, 0, 0, 0, 0 },	//75
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//76
    { "QSizePolicy", true, 0, 0, 0, 0, 0 },	//77
    { "QSqlDatabase", true, 0, 0, 0, 0, 0 },	//78
    { "QSqlError", true, 0, 0, 0, 0, 0 },	//79
    { "QSqlField", true, 0, 0, 0, 0, 0 },	//80
    { "QSqlRecord", true, 0, 0, 0, 0, 0 },	//81
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//82
    { "QStringListModel", true, 0, 0, 0, 0, 0 },	//83
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//84
    { "QStyle", true, 0, 0, 0, 0, 0 },	//85
    { "QStyleOption", true, 0, 0, 0, 0, 0 },	//86
    { "QTabletEvent", true, 0, 0, 0, 0, 0 },	//87
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//88
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//89
    { "QTime", true, 0, 0, 0, 0, 0 },	//90
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//91
    { "QTransform", true, 0, 0, 0, 0, 0 },	//92
    { "QTreeView", true, 0, 0, 0, 0, 0 },	//93
    { "QUrl", true, 0, 0, 0, 0, 0 },	//94
    { "QUuid", true, 0, 0, 0, 0, 0 },	//95
    { "QVariant", true, 0, 0, 0, 0, 0 },	//96
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//97
    { "QWheelEvent", true, 0, 0, 0, 0, 0 },	//98
    { "QWidget", true, 0, 0, 0, 0, 0 },	//99
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QAbstractItemView::EditTrigger", 0, Smoke::t_enum|Smoke::tf_stack },	//2
    { "QAbstractSpinBox::StepEnabledFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//3
    { "QActionEvent*", 2, Smoke::t_class|Smoke::tf_ptr },	//4
    { "QBitArray", 3, Smoke::t_class|Smoke::tf_stack },	//5
    { "QBitArray&", 3, Smoke::t_class|Smoke::tf_ref },	//6
    { "QBool", 4, Smoke::t_class|Smoke::tf_stack },	//7
    { "QBrush&", 5, Smoke::t_class|Smoke::tf_ref },	//8
    { "QByteArray", 6, Smoke::t_class|Smoke::tf_stack },	//9
    { "QByteArray&", 6, Smoke::t_class|Smoke::tf_ref },	//10
    { "QChar", 7, Smoke::t_class|Smoke::tf_stack },	//11
    { "QChar&", 7, Smoke::t_class|Smoke::tf_ref },	//12
    { "QChildEvent*", 8, Smoke::t_class|Smoke::tf_ptr },	//13
    { "QCloseEvent*", 9, Smoke::t_class|Smoke::tf_ptr },	//14
    { "QColor&", 10, Smoke::t_class|Smoke::tf_ref },	//15
    { "QContextMenuEvent*", 11, Smoke::t_class|Smoke::tf_ptr },	//16
    { "QCursor&", 12, Smoke::t_class|Smoke::tf_ref },	//17
    { "QDataStream&", 13, Smoke::t_class|Smoke::tf_ref },	//18
    { "QDate&", 14, Smoke::t_class|Smoke::tf_ref },	//19
    { "QDateTime&", 15, Smoke::t_class|Smoke::tf_ref },	//20
    { "QDebug", 16, Smoke::t_class|Smoke::tf_stack },	//21
    { "QDir::Filter", 17, Smoke::t_enum|Smoke::tf_stack },	//22
    { "QDir::SortFlag", 17, Smoke::t_enum|Smoke::tf_stack },	//23
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//24
    { "QDragEnterEvent*", 18, Smoke::t_class|Smoke::tf_ptr },	//25
    { "QDragLeaveEvent*", 19, Smoke::t_class|Smoke::tf_ptr },	//26
    { "QDragMoveEvent*", 20, Smoke::t_class|Smoke::tf_ptr },	//27
    { "QDropEvent*", 21, Smoke::t_class|Smoke::tf_ptr },	//28
    { "QEasingCurve&", 22, Smoke::t_class|Smoke::tf_ref },	//29
    { "QEvent*", 23, Smoke::t_class|Smoke::tf_ptr },	//30
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//31
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//32
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//33
    { "QFlags<QAbstractItemView::EditTrigger>", 0, Smoke::t_uint|Smoke::tf_stack },	//34
    { "QFlags<QAbstractSpinBox::StepEnabledFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//35
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//36
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//37
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//38
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//39
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//40
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//41
    { "QFlags<QItemSelectionModel::SelectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//42
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//43
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//44
    { "QFlags<QSizePolicy::ControlType>", 0, Smoke::t_uint|Smoke::tf_stack },	//45
    { "QFlags<QSql::ParamTypeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//46
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//47
    { "QFlags<QStyle::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//48
    { "QFlags<QStyle::SubControl>", 0, Smoke::t_uint|Smoke::tf_stack },	//49
    { "QFlags<QStyleOptionButton::ButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//50
    { "QFlags<QStyleOptionFrameV2::FrameFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//51
    { "QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//52
    { "QFlags<QStyleOptionTab::CornerWidget>", 0, Smoke::t_uint|Smoke::tf_stack },	//53
    { "QFlags<QStyleOptionToolBar::ToolBarFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//54
    { "QFlags<QStyleOptionToolButton::ToolButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//55
    { "QFlags<QStyleOptionViewItemV2::ViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//56
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//57
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//58
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//59
    { "QFlags<QWidget::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//60
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//61
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//62
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//63
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//64
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//65
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//66
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//67
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//68
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//69
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//70
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//71
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//72
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//73
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//74
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//75
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//76
    { "QFocusEvent*", 24, Smoke::t_class|Smoke::tf_ptr },	//77
    { "QFont&", 25, Smoke::t_class|Smoke::tf_ref },	//78
    { "QHelpContentItem*", 28, Smoke::t_class|Smoke::tf_ptr },	//79
    { "QHelpContentModel*", 29, Smoke::t_class|Smoke::tf_ptr },	//80
    { "QHelpContentWidget*", 30, Smoke::t_class|Smoke::tf_ptr },	//81
    { "QHelpEngine*", 31, Smoke::t_class|Smoke::tf_ptr },	//82
    { "QHelpEngineCore*", 32, Smoke::t_class|Smoke::tf_ptr },	//83
    { "QHelpIndexModel*", 33, Smoke::t_class|Smoke::tf_ptr },	//84
    { "QHelpIndexWidget*", 34, Smoke::t_class|Smoke::tf_ptr },	//85
    { "QHelpSearchEngine*", 35, Smoke::t_class|Smoke::tf_ptr },	//86
    { "QHelpSearchQuery*", 36, Smoke::t_class|Smoke::tf_ptr },	//87
    { "QHelpSearchQuery::FieldName", 36, Smoke::t_enum|Smoke::tf_stack },	//88
    { "QHelpSearchQueryWidget*", 37, Smoke::t_class|Smoke::tf_ptr },	//89
    { "QHelpSearchResultWidget*", 38, Smoke::t_class|Smoke::tf_ptr },	//90
    { "QHideEvent*", 39, Smoke::t_class|Smoke::tf_ptr },	//91
    { "QIODevice::OpenModeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//92
    { "QIcon&", 40, Smoke::t_class|Smoke::tf_ref },	//93
    { "QImage&", 41, Smoke::t_class|Smoke::tf_ref },	//94
    { "QIncompatibleFlag", 42, Smoke::t_class|Smoke::tf_stack },	//95
    { "QInputMethodEvent*", 43, Smoke::t_class|Smoke::tf_ptr },	//96
    { "QItemSelectionModel::SelectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//97
    { "QKeyEvent*", 45, Smoke::t_class|Smoke::tf_ptr },	//98
    { "QKeySequence&", 46, Smoke::t_class|Smoke::tf_ref },	//99
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//100
    { "QLine", 48, Smoke::t_class|Smoke::tf_stack },	//101
    { "QLine&", 48, Smoke::t_class|Smoke::tf_ref },	//102
    { "QLineF", 49, Smoke::t_class|Smoke::tf_stack },	//103
    { "QLineF&", 49, Smoke::t_class|Smoke::tf_ref },	//104
    { "QList<QHelpSearchQuery>", 0, Smoke::t_voidp|Smoke::tf_stack },	//105
    { "QList<QPair<QString,QString> >", 0, Smoke::t_voidp|Smoke::tf_stack },	//106
    { "QList<QStringList>", 0, Smoke::t_voidp|Smoke::tf_stack },	//107
    { "QList<QUrl>", 0, Smoke::t_voidp|Smoke::tf_stack },	//108
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//109
    { "QLocale&", 51, Smoke::t_class|Smoke::tf_ref },	//110
    { "QLocale::NumberOption", 51, Smoke::t_enum|Smoke::tf_stack },	//111
    { "QMap<QString,QUrl>", 0, Smoke::t_voidp|Smoke::tf_stack },	//112
    { "QMatrix&", 53, Smoke::t_class|Smoke::tf_ref },	//113
    { "QMetaObject::Call", 54, Smoke::t_enum|Smoke::tf_stack },	//114
    { "QModelIndex", 55, Smoke::t_class|Smoke::tf_stack },	//115
    { "QMouseEvent*", 56, Smoke::t_class|Smoke::tf_ptr },	//116
    { "QMoveEvent*", 57, Smoke::t_class|Smoke::tf_ptr },	//117
    { "QObject*", 58, Smoke::t_class|Smoke::tf_ptr },	//118
    { "QObject*(*)()", 58, Smoke::t_class|Smoke::tf_ptr },	//119
    { "QPaintDevice::PaintDeviceMetric", 0, Smoke::t_enum|Smoke::tf_stack },	//120
    { "QPaintEngine*", 59, Smoke::t_class|Smoke::tf_ptr },	//121
    { "QPaintEvent*", 60, Smoke::t_class|Smoke::tf_ptr },	//122
    { "QPainterPath", 61, Smoke::t_class|Smoke::tf_stack },	//123
    { "QPainterPath&", 61, Smoke::t_class|Smoke::tf_ref },	//124
    { "QPalette&", 62, Smoke::t_class|Smoke::tf_ref },	//125
    { "QPixmap&", 64, Smoke::t_class|Smoke::tf_ref },	//126
    { "QPoint", 65, Smoke::t_class|Smoke::tf_stack },	//127
    { "QPoint&", 65, Smoke::t_class|Smoke::tf_ref },	//128
    { "QPointF", 66, Smoke::t_class|Smoke::tf_stack },	//129
    { "QPointF&", 66, Smoke::t_class|Smoke::tf_ref },	//130
    { "QPolygon", 67, Smoke::t_class|Smoke::tf_stack },	//131
    { "QPolygon&", 67, Smoke::t_class|Smoke::tf_ref },	//132
    { "QPolygonF", 68, Smoke::t_class|Smoke::tf_stack },	//133
    { "QPolygonF&", 68, Smoke::t_class|Smoke::tf_ref },	//134
    { "QRect&", 69, Smoke::t_class|Smoke::tf_ref },	//135
    { "QRectF&", 70, Smoke::t_class|Smoke::tf_ref },	//136
    { "QRegExp&", 71, Smoke::t_class|Smoke::tf_ref },	//137
    { "QRegion", 72, Smoke::t_class|Smoke::tf_stack },	//138
    { "QRegion&", 72, Smoke::t_class|Smoke::tf_ref },	//139
    { "QResizeEvent*", 73, Smoke::t_class|Smoke::tf_ptr },	//140
    { "QShowEvent*", 74, Smoke::t_class|Smoke::tf_ptr },	//141
    { "QSize", 75, Smoke::t_class|Smoke::tf_stack },	//142
    { "QSize&", 75, Smoke::t_class|Smoke::tf_ref },	//143
    { "QSizeF&", 76, Smoke::t_class|Smoke::tf_ref },	//144
    { "QSizePolicy&", 77, Smoke::t_class|Smoke::tf_ref },	//145
    { "QSizePolicy::ControlType", 77, Smoke::t_enum|Smoke::tf_stack },	//146
    { "QSql::Location", 0, Smoke::t_enum|Smoke::tf_stack },	//147
    { "QSql::NumericalPrecisionPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//148
    { "QSql::ParamTypeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//149
    { "QSql::TableType", 0, Smoke::t_enum|Smoke::tf_stack },	//150
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//151
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//152
    { "QString::Null", 82, Smoke::t_class|Smoke::tf_stack },	//153
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//154
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//155
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//156
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//157
    { "QStyle&", 85, Smoke::t_class|Smoke::tf_ref },	//158
    { "QStyle::StateFlag", 85, Smoke::t_enum|Smoke::tf_stack },	//159
    { "QStyle::SubControl", 85, Smoke::t_enum|Smoke::tf_stack },	//160
    { "QStyleOptionButton::ButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//161
    { "QStyleOptionFrameV2::FrameFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//162
    { "QStyleOptionQ3ListViewItem::Q3ListViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//163
    { "QStyleOptionTab::CornerWidget", 0, Smoke::t_enum|Smoke::tf_stack },	//164
    { "QStyleOptionToolBar::ToolBarFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//165
    { "QStyleOptionToolButton::ToolButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//166
    { "QStyleOptionViewItemV2::ViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//167
    { "QTabletEvent*", 87, Smoke::t_class|Smoke::tf_ptr },	//168
    { "QTextCodec::ConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//169
    { "QTextStream&", 88, Smoke::t_class|Smoke::tf_ref },	//170
    { "QTextStream&(*)(QTextStream&)", 88, Smoke::t_class|Smoke::tf_ref },	//171
    { "QTextStream::NumberFlag", 88, Smoke::t_enum|Smoke::tf_stack },	//172
    { "QTextStreamManipulator", 89, Smoke::t_class|Smoke::tf_stack },	//173
    { "QTime&", 90, Smoke::t_class|Smoke::tf_ref },	//174
    { "QTimerEvent*", 91, Smoke::t_class|Smoke::tf_ptr },	//175
    { "QTransform", 92, Smoke::t_class|Smoke::tf_stack },	//176
    { "QTransform&", 92, Smoke::t_class|Smoke::tf_ref },	//177
    { "QUrl", 94, Smoke::t_class|Smoke::tf_stack },	//178
    { "QUrl&", 94, Smoke::t_class|Smoke::tf_ref },	//179
    { "QUrl::FormattingOption", 94, Smoke::t_enum|Smoke::tf_stack },	//180
    { "QUuid&", 95, Smoke::t_class|Smoke::tf_ref },	//181
    { "QVariant", 96, Smoke::t_class|Smoke::tf_stack },	//182
    { "QVariant&", 96, Smoke::t_class|Smoke::tf_ref },	//183
    { "QVariant::Type", 96, Smoke::t_enum|Smoke::tf_stack },	//184
    { "QVariant::Type&", 96, Smoke::t_enum|Smoke::tf_ref },	//185
    { "QWheelEvent*", 98, Smoke::t_class|Smoke::tf_ptr },	//186
    { "QWidget*", 99, Smoke::t_class|Smoke::tf_ptr },	//187
    { "QWidget::RenderFlag", 99, Smoke::t_enum|Smoke::tf_stack },	//188
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//189
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//190
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//191
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//192
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//193
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//194
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//195
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//196
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//197
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//198
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//199
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//200
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//201
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//202
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//203
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//204
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//205
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//206
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//207
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//208
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//209
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//210
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//211
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//212
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//213
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//214
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//215
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//216
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//217
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//218
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//219
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//220
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//221
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//222
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//223
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//224
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//225
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//226
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//227
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//228
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//229
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//230
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//231
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//232
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//233
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//234
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//235
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//236
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//237
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//238
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//239
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//240
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//241
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//242
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//243
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//244
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//245
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//246
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//247
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//248
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//249
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//250
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//251
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//252
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//253
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//254
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//255
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//256
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//257
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//258
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//259
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//260
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//261
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//262
    { "QtMsgType", 26, Smoke::t_enum|Smoke::tf_stack },	//263
    { "QtValidLicenseForActiveQtModule", 26, Smoke::t_enum|Smoke::tf_stack },	//264
    { "QtValidLicenseForCoreModule", 26, Smoke::t_enum|Smoke::tf_stack },	//265
    { "QtValidLicenseForDBusModule", 26, Smoke::t_enum|Smoke::tf_stack },	//266
    { "QtValidLicenseForDeclarativeModule", 26, Smoke::t_enum|Smoke::tf_stack },	//267
    { "QtValidLicenseForGuiModule", 26, Smoke::t_enum|Smoke::tf_stack },	//268
    { "QtValidLicenseForHelpModule", 26, Smoke::t_enum|Smoke::tf_stack },	//269
    { "QtValidLicenseForMultimediaModule", 26, Smoke::t_enum|Smoke::tf_stack },	//270
    { "QtValidLicenseForNetworkModule", 26, Smoke::t_enum|Smoke::tf_stack },	//271
    { "QtValidLicenseForOpenGLModule", 26, Smoke::t_enum|Smoke::tf_stack },	//272
    { "QtValidLicenseForOpenVGModule", 26, Smoke::t_enum|Smoke::tf_stack },	//273
    { "QtValidLicenseForQt3SupportLightModule", 26, Smoke::t_enum|Smoke::tf_stack },	//274
    { "QtValidLicenseForQt3SupportModule", 26, Smoke::t_enum|Smoke::tf_stack },	//275
    { "QtValidLicenseForScriptModule", 26, Smoke::t_enum|Smoke::tf_stack },	//276
    { "QtValidLicenseForScriptToolsModule", 26, Smoke::t_enum|Smoke::tf_stack },	//277
    { "QtValidLicenseForSqlModule", 26, Smoke::t_enum|Smoke::tf_stack },	//278
    { "QtValidLicenseForSvgModule", 26, Smoke::t_enum|Smoke::tf_stack },	//279
    { "QtValidLicenseForTestModule", 26, Smoke::t_enum|Smoke::tf_stack },	//280
    { "QtValidLicenseForXmlModule", 26, Smoke::t_enum|Smoke::tf_stack },	//281
    { "QtValidLicenseForXmlPatternsModule", 26, Smoke::t_enum|Smoke::tf_stack },	//282
    { "_XEvent*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//283
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//284
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//285
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//286
    { "const QBitArray&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//287
    { "const QBrush&", 5, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//288
    { "const QByteArray", 6, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//289
    { "const QByteArray&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//290
    { "const QChar&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//291
    { "const QColor&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//292
    { "const QCursor&", 12, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//293
    { "const QDate&", 14, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//294
    { "const QDateTime&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//295
    { "const QDir&", 17, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//296
    { "const QEasingCurve&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//297
    { "const QFont&", 25, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//298
    { "const QHashDummyValue&", 27, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//299
    { "const QHelpContentItem&", 28, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//300
    { "const QHelpSearchQuery&", 36, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//301
    { "const QIcon&", 40, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//302
    { "const QImage&", 41, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//303
    { "const QItemSelectionRange&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//304
    { "const QKeySequence&", 46, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//305
    { "const QLatin1String&", 47, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//306
    { "const QLine&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//307
    { "const QLineF&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//308
    { "const QList<QHelpSearchQuery>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//309
    { "const QLocale&", 51, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//310
    { "const QMap<QString,QUrl>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//311
    { "const QMargins&", 52, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//312
    { "const QMatrix&", 53, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//313
    { "const QMetaObject&", 54, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//314
    { "const QMetaObject*", 54, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//315
    { "const QModelIndex&", 55, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//316
    { "const QObject*", 58, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//317
    { "const QPainterPath&", 61, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//318
    { "const QPalette&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//319
    { "const QPersistentModelIndex&", 63, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//320
    { "const QPixmap&", 64, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//321
    { "const QPoint", 65, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//322
    { "const QPoint&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//323
    { "const QPointF", 66, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//324
    { "const QPointF&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//325
    { "const QPolygon&", 67, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//326
    { "const QPolygonF&", 68, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//327
    { "const QRect&", 69, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//328
    { "const QRectF&", 70, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//329
    { "const QRegExp&", 71, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//330
    { "const QRegExp*", 71, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//331
    { "const QRegion&", 72, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//332
    { "const QSize", 75, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//333
    { "const QSize&", 75, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//334
    { "const QSizeF", 76, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//335
    { "const QSizeF&", 76, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//336
    { "const QSizePolicy&", 77, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//337
    { "const QSqlDatabase&", 78, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//338
    { "const QSqlError&", 79, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//339
    { "const QSqlField&", 80, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//340
    { "const QSqlRecord&", 81, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//341
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//342
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//343
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//344
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//345
    { "const QStringRef&", 84, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//346
    { "const QStyleOption&", 86, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//347
    { "const QStyleOption::OptionType&", 86, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//348
    { "const QTime&", 90, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//349
    { "const QTransform&", 92, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//350
    { "const QUrl&", 94, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//351
    { "const QUuid&", 95, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//352
    { "const QVariant&", 96, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//353
    { "const QVariant::Type", 96, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//354
    { "const QVariantComparisonHelper&", 97, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//355
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//356
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//357
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//358
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//359
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//360
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//361
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//362
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//363
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//364
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//365
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//366
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//367
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//368
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//369
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//370
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//371
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//372
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//373
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//374
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//375
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//376
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//377
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//378
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    287, 287, 0,	//1  const QBitArray&, const QBitArray&
    320, 0,	//4  const QPersistentModelIndex&
    209, 361, 0,	//6  Qt::DockWidgetArea, int
    356, 356, 361, 0,	//9  const char*, const char*, int
    323, 359, 0,	//13  const QPoint&, double
    359, 0,	//16  double
    21, 304, 0,	//18  QDebug, const QItemSelectionRange&
    359, 325, 0,	//21  double, const QPointF&
    233, 70, 0,	//24  Qt::MouseButton, QFlags<Qt::MouseButton>
    312, 312, 0,	//27  const QMargins&, const QMargins&
    21, 347, 0,	//30  QDebug, const QStyleOption&
    359, 336, 0,	//33  double, const QSizeF&
    23, 361, 0,	//36  QDir::SortFlag, int
    2, 2, 0,	//39  QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger
    21, 320, 0,	//42  QDebug, const QPersistentModelIndex&
    18, 94, 0,	//45  QDataStream&, QImage&
    18, 337, 0,	//48  QDataStream&, const QSizePolicy&
    222, 361, 0,	//51  Qt::InputMethodHint, int
    165, 361, 0,	//54  QStyleOptionToolBar::ToolBarFeature, int
    21, 350, 0,	//57  QDebug, const QTransform&
    286, 356, 0,	//60  char*, const char*
    328, 328, 0,	//63  const QRect&, const QRect&
    334, 334, 0,	//66  const QSize&, const QSize&
    18, 350, 0,	//69  QDataStream&, const QTransform&
    169, 169, 0,	//72  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    21, 323, 0,	//75  QDebug, const QPoint&
    367, 0,	//78  unsigned char
    22, 36, 0,	//80  QDir::Filter, QFlags<QDir::Filter>
    325, 313, 0,	//83  const QPointF&, const QMatrix&
    307, 350, 0,	//86  const QLine&, const QTransform&
    31, 39, 0,	//89  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    259, 75, 0,	//92  Qt::WindowState, QFlags<Qt::WindowState>
    336, 359, 0,	//95  const QSizeF&, double
    18, 307, 0,	//98  QDataStream&, const QLine&
    22, 361, 0,	//101  QDir::Filter, int
    350, 350, 0,	//104  const QTransform&, const QTransform&
    369, 0,	//107  unsigned int
    336, 336, 0,	//109  const QSizeF&, const QSizeF&
    290, 290, 0,	//112  const QByteArray&, const QByteArray&
    306, 346, 0,	//115  const QLatin1String&, const QStringRef&
    233, 233, 0,	//118  Qt::MouseButton, Qt::MouseButton
    21, 354, 0,	//121  QDebug, const QVariant::Type
    353, 355, 0,	//124  const QVariant&, const QVariantComparisonHelper&
    7, 7, 0,	//127  QBool, QBool
    164, 164, 0,	//130  QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget
    163, 163, 0,	//133  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature
    189, 61, 0,	//136  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    346, 0,	//139  const QStringRef&
    153, 153, 0,	//141  QString::Null, QString::Null
    21, 298, 0,	//144  QDebug, const QFont&
    149, 361, 0,	//147  QSql::ParamTypeFlag, int
    21, 326, 0,	//150  QDebug, const QPolygon&
    18, 329, 0,	//153  QDataStream&, const QRectF&
    149, 149, 0,	//156  QSql::ParamTypeFlag, QSql::ParamTypeFlag
    18, 110, 0,	//159  QDataStream&, QLocale&
    160, 361, 0,	//162  QStyle::SubControl, int
    11, 343, 0,	//165  QChar, const QString&
    92, 41, 0,	//168  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    22, 22, 0,	//171  QDir::Filter, QDir::Filter
    18, 319, 0,	//174  QDataStream&, const QPalette&
    21, 349, 0,	//177  QDebug, const QTime&
    18, 290, 0,	//180  QDataStream&, const QByteArray&
    21, 294, 0,	//183  QDebug, const QDate&
    287, 0,	//186  const QBitArray&
    357, 368, 361, 0,	//188  const unsigned char*, unsigned char*, int
    327, 350, 0,	//192  const QPolygonF&, const QTransform&
    353, 184, 376, 0,	//195  const QVariant&, QVariant::Type, void*
    343, 0,	//199  const QString&
    372, 0,	//201  unsigned short
    119, 0,	//203  QObject*(*)()
    362, 0,	//205  long
    250, 250, 0,	//207  Qt::ToolBarArea, Qt::ToolBarArea
    363, 0,	//210  long long
    21, 327, 0,	//212  QDebug, const QPolygonF&
    188, 361, 0,	//215  QWidget::RenderFlag, int
    21, 292, 0,	//218  QDebug, const QColor&
    211, 361, 0,	//221  Qt::DropAction, int
    18, 344, 0,	//224  QDataStream&, const QStringList&
    1, 1, 0,	//227  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    360, 0,	//230  float
    189, 189, 0,	//232  Qt::AlignmentFlag, Qt::AlignmentFlag
    18, 15, 0,	//235  QDataStream&, QColor&
    24, 361, 0,	//238  QDirIterator::IteratorFlag, int
    18, 330, 0,	//241  QDataStream&, const QRegExp&
    180, 361, 0,	//244  QUrl::FormattingOption, int
    24, 38, 0,	//247  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    290, 356, 0,	//250  const QByteArray&, const char*
    21, 336, 0,	//253  QDebug, const QSizeF&
    209, 62, 0,	//256  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    163, 361, 0,	//259  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int
    307, 313, 0,	//262  const QLine&, const QMatrix&
    361, 361, 361, 0,	//265  int, int, int
    308, 313, 0,	//269  const QLineF&, const QMatrix&
    235, 235, 0,	//272  Qt::Orientation, Qt::Orientation
    318, 313, 0,	//275  const QPainterPath&, const QMatrix&
    250, 361, 0,	//278  Qt::ToolBarArea, int
    18, 130, 0,	//281  QDataStream&, QPointF&
    18, 305, 0,	//284  QDataStream&, const QKeySequence&
    231, 361, 0,	//287  Qt::MatchFlag, int
    21, 297, 0,	//290  QDebug, const QEasingCurve&
    97, 361, 0,	//293  QItemSelectionModel::SelectionFlag, int
    18, 293, 0,	//296  QDataStream&, const QCursor&
    216, 216, 0,	//299  Qt::GestureFlag, Qt::GestureFlag
    18, 19, 0,	//302  QDataStream&, QDate&
    92, 92, 0,	//305  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    31, 361, 0,	//308  QEventLoop::ProcessEventsFlag, int
    285, 290, 0,	//311  char, const QByteArray&
    21, 48, 0,	//314  QDebug, QFlags<QStyle::StateFlag>
    356, 290, 0,	//317  const char*, const QByteArray&
    18, 181, 0,	//320  QDataStream&, QUuid&
    359, 359, 0,	//323  double, double
    18, 10, 0,	//326  QDataStream&, QByteArray&
    18, 183, 0,	//329  QDataStream&, QVariant&
    18, 137, 0,	//332  QDataStream&, QRegExp&
    325, 325, 0,	//335  const QPointF&, const QPointF&
    350, 359, 0,	//338  const QTransform&, double
    3, 35, 0,	//341  QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>
    161, 161, 0,	//344  QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature
    346, 346, 0,	//347  const QStringRef&, const QStringRef&
    161, 361, 0,	//350  QStyleOptionButton::ButtonFeature, int
    32, 361, 0,	//353  QFile::Permission, int
    21, 308, 0,	//356  QDebug, const QLineF&
    11, 11, 0,	//359  QChar, QChar
    318, 350, 0,	//362  const QPainterPath&, const QTransform&
    18, 288, 0,	//365  QDataStream&, const QBrush&
    356, 356, 369, 0,	//368  const char*, const char*, unsigned int
    290, 0,	//372  const QByteArray&
    3, 3, 0,	//374  QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag
    159, 361, 0,	//377  QStyle::StateFlag, int
    21, 36, 0,	//380  QDebug, QFlags<QDir::Filter>
    356, 361, 0,	//383  const char*, int
    18, 139, 0,	//386  QDataStream&, QRegion&
    164, 361, 0,	//389  QStyleOptionTab::CornerWidget, int
    172, 58, 0,	//392  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    18, 6, 0,	//395  QDataStream&, QBitArray&
    325, 359, 0,	//398  const QPointF&, double
    11, 0,	//401  QChar
    1, 33, 0,	//403  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    375, 0,	//406  void(*)(QtMsgType,const char*)
    18, 294, 0,	//408  QDataStream&, const QDate&
    317, 343, 314, 0,	//411  const QObject*, const QString&, const QMetaObject&
    231, 69, 0,	//415  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    216, 361, 0,	//418  Qt::GestureFlag, int
    169, 361, 0,	//421  QTextCodec::ConversionFlag, int
    146, 146, 0,	//424  QSizePolicy::ControlType, QSizePolicy::ControlType
    18, 17, 0,	//427  QDataStream&, QCursor&
    228, 68, 0,	//430  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    231, 231, 0,	//433  Qt::MatchFlag, Qt::MatchFlag
    18, 177, 0,	//436  QDataStream&, QTransform&
    326, 313, 0,	//439  const QPolygon&, const QMatrix&
    376, 0,	//442  void*
    164, 53, 0,	//444  QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>
    343, 153, 0,	//447  const QString&, QString::Null
    166, 166, 0,	//450  QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature
    21, 340, 0,	//453  QDebug, const QSqlField&
    100, 361, 0,	//456  QLibrary::LoadHint, int
    18, 144, 0,	//459  QDataStream&, QSizeF&
    346, 356, 0,	//462  const QStringRef&, const char*
    325, 0,	//465  const QPointF&
    376, 366, 366, 366, 0,	//467  void*, size_t, size_t, size_t
    225, 225, 0,	//472  Qt::ItemFlag, Qt::ItemFlag
    18, 321, 0,	//475  QDataStream&, const QPixmap&
    371, 0,	//478  unsigned long long
    260, 76, 0,	//480  Qt::WindowType, QFlags<Qt::WindowType>
    21, 334, 0,	//483  QDebug, const QSize&
    325, 350, 0,	//486  const QPointF&, const QTransform&
    225, 67, 0,	//489  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    253, 74, 0,	//492  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    18, 351, 0,	//495  QDataStream&, const QUrl&
    376, 361, 366, 0,	//498  void*, int, size_t
    146, 45, 0,	//502  QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>
    18, 353, 0,	//505  QDataStream&, const QVariant&
    18, 102, 0,	//508  QDataStream&, QLine&
    290, 361, 0,	//511  const QByteArray&, int
    3, 361, 0,	//514  QAbstractSpinBox::StepEnabledFlag, int
    228, 228, 0,	//517  Qt::KeyboardModifier, Qt::KeyboardModifier
    374, 0,	//520  void(*)()
    189, 361, 0,	//522  Qt::AlignmentFlag, int
    323, 313, 0,	//525  const QPoint&, const QMatrix&
    228, 361, 0,	//528  Qt::KeyboardModifier, int
    225, 361, 0,	//531  Qt::ItemFlag, int
    220, 65, 0,	//534  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    323, 323, 0,	//537  const QPoint&, const QPoint&
    154, 361, 0,	//540  QString::SectionFlag, int
    260, 361, 0,	//543  Qt::WindowType, int
    188, 188, 0,	//546  QWidget::RenderFlag, QWidget::RenderFlag
    346, 343, 0,	//549  const QStringRef&, const QString&
    299, 299, 0,	//552  const QHashDummyValue&, const QHashDummyValue&
    356, 369, 0,	//555  const char*, unsigned int
    180, 180, 0,	//558  QUrl::FormattingOption, QUrl::FormattingOption
    18, 93, 0,	//561  QDataStream&, QIcon&
    18, 326, 0,	//564  QDataStream&, const QPolygon&
    253, 361, 0,	//567  Qt::TouchPointState, int
    188, 60, 0,	//570  QWidget::RenderFlag, QFlags<QWidget::RenderFlag>
    21, 312, 0,	//573  QDebug, const QMargins&
    356, 0,	//576  const char*
    2, 361, 0,	//578  QAbstractItemView::EditTrigger, int
    170, 171, 0,	//581  QTextStream&, QTextStream&(*)(QTextStream&)
    159, 48, 0,	//584  QStyle::StateFlag, QFlags<QStyle::StateFlag>
    166, 55, 0,	//587  QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>
    18, 29, 0,	//590  QDataStream&, QEasingCurve&
    21, 338, 0,	//593  QDebug, const QSqlDatabase&
    18, 308, 0,	//596  QDataStream&, const QLineF&
    32, 40, 0,	//599  QFile::Permission, QFlags<QFile::Permission>
    21, 318, 0,	//602  QDebug, const QPainterPath&
    286, 356, 369, 0,	//605  char*, const char*, unsigned int
    18, 8, 0,	//609  QDataStream&, QBrush&
    18, 325, 0,	//612  QDataStream&, const QPointF&
    351, 0,	//615  const QUrl&
    361, 0,	//617  int
    323, 360, 0,	//619  const QPoint&, float
    111, 361, 0,	//622  QLocale::NumberOption, int
    376, 366, 0,	//625  void*, size_t
    343, 343, 0,	//628  const QString&, const QString&
    166, 361, 0,	//631  QStyleOptionToolButton::ToolButtonFeature, int
    356, 356, 356, 361, 0,	//634  const char*, const char*, const char*, int
    343, 346, 0,	//639  const QString&, const QStringRef&
    146, 361, 0,	//642  QSizePolicy::ControlType, int
    18, 145, 0,	//645  QDataStream&, QSizePolicy&
    21, 341, 0,	//648  QDebug, const QSqlRecord&
    356, 346, 0,	//651  const char*, const QStringRef&
    18, 113, 0,	//654  QDataStream&, QMatrix&
    233, 361, 0,	//657  Qt::MouseButton, int
    163, 52, 0,	//660  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>
    18, 143, 0,	//663  QDataStream&, QSize&
    24, 24, 0,	//666  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    222, 222, 0,	//669  Qt::InputMethodHint, Qt::InputMethodHint
    172, 172, 0,	//672  QTextStream::NumberFlag, QTextStream::NumberFlag
    18, 185, 0,	//675  QDataStream&, QVariant::Type&
    247, 72, 0,	//678  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    308, 350, 0,	//681  const QLineF&, const QTransform&
    346, 306, 0,	//684  const QStringRef&, const QLatin1String&
    365, 0,	//687  signed char
    18, 327, 0,	//689  QDataStream&, const QPolygonF&
    18, 336, 0,	//692  QDataStream&, const QSizeF&
    250, 73, 0,	//695  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    18, 298, 0,	//698  QDataStream&, const QFont&
    356, 356, 0,	//701  const char*, const char*
    160, 49, 0,	//704  QStyle::SubControl, QFlags<QStyle::SubControl>
    18, 313, 0,	//707  QDataStream&, const QMatrix&
    100, 100, 0,	//710  QLibrary::LoadHint, QLibrary::LoadHint
    259, 259, 0,	//713  Qt::WindowState, Qt::WindowState
    21, 351, 0,	//716  QDebug, const QUrl&
    180, 59, 0,	//719  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    18, 134, 0,	//722  QDataStream&, QPolygonF&
    18, 125, 0,	//725  QDataStream&, QPalette&
    18, 318, 0,	//728  QDataStream&, const QPainterPath&
    329, 329, 0,	//731  const QRectF&, const QRectF&
    359, 334, 0,	//734  double, const QSize&
    32, 32, 0,	//737  QFile::Permission, QFile::Permission
    316, 0,	//740  const QModelIndex&
    160, 160, 0,	//742  QStyle::SubControl, QStyle::SubControl
    21, 307, 0,	//745  QDebug, const QLine&
    2, 34, 0,	//748  QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>
    18, 287, 0,	//751  QDataStream&, const QBitArray&
    313, 313, 0,	//754  const QMatrix&, const QMatrix&
    167, 167, 0,	//757  QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature
    376, 358, 366, 0,	//760  void*, const void*, size_t
    359, 323, 0,	//764  double, const QPoint&
    21, 316, 0,	//767  QDebug, const QModelIndex&
    364, 0,	//770  short
    21, 295, 0,	//772  QDebug, const QDateTime&
    18, 323, 0,	//775  QDataStream&, const QPoint&
    18, 303, 0,	//778  QDataStream&, const QImage&
    290, 285, 0,	//781  const QByteArray&, char
    21, 305, 0,	//784  QDebug, const QKeySequence&
    21, 317, 0,	//787  QDebug, const QObject*
    360, 360, 0,	//790  float, float
    18, 78, 0,	//793  QDataStream&, QFont&
    23, 37, 0,	//796  QDir::SortFlag, QFlags<QDir::SortFlag>
    286, 366, 356, 373, 0,	//799  char*, size_t, const char*, va_list
    154, 47, 0,	//804  QString::SectionFlag, QFlags<QString::SectionFlag>
    18, 334, 0,	//807  QDataStream&, const QSize&
    97, 42, 0,	//810  QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>
    18, 136, 0,	//813  QDataStream&, QRectF&
    169, 57, 0,	//816  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    21, 41, 0,	//819  QDebug, QFlags<QIODevice::OpenModeFlag>
    18, 291, 0,	//822  QDataStream&, const QChar&
    284, 7, 0,	//825  bool, QBool
    370, 0,	//828  unsigned long
    21, 329, 0,	//830  QDebug, const QRectF&
    326, 350, 0,	//833  const QPolygon&, const QTransform&
    7, 284, 0,	//836  QBool, bool
    259, 361, 0,	//839  Qt::WindowState, int
    167, 56, 0,	//842  QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>
    18, 156, 0,	//845  QDataStream&, QStringList&
    18, 328, 0,	//848  QDataStream&, const QRect&
    18, 332, 0,	//851  QDataStream&, const QRegion&
    209, 209, 0,	//854  Qt::DockWidgetArea, Qt::DockWidgetArea
    21, 313, 0,	//857  QDebug, const QMatrix&
    111, 44, 0,	//860  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    18, 292, 0,	//863  QDataStream&, const QColor&
    260, 260, 0,	//866  Qt::WindowType, Qt::WindowType
    334, 359, 0,	//869  const QSize&, double
    153, 343, 0,	//872  QString::Null, const QString&
    21, 288, 0,	//875  QDebug, const QBrush&
    23, 23, 0,	//878  QDir::SortFlag, QDir::SortFlag
    222, 66, 0,	//881  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    18, 128, 0,	//884  QDataStream&, QPoint&
    21, 325, 0,	//887  QDebug, const QPointF&
    317, 343, 331, 314, 109, 0,	//890  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    162, 162, 0,	//896  QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature
    18, 20, 0,	//899  QDataStream&, QDateTime&
    18, 349, 0,	//902  QDataStream&, const QTime&
    18, 99, 0,	//905  QDataStream&, QKeySequence&
    18, 352, 0,	//908  QDataStream&, const QUuid&
    170, 173, 0,	//911  QTextStream&, QTextStreamManipulator
    332, 350, 0,	//914  const QRegion&, const QTransform&
    154, 154, 0,	//917  QString::SectionFlag, QString::SectionFlag
    366, 366, 0,	//920  size_t, size_t
    172, 361, 0,	//923  QTextStream::NumberFlag, int
    357, 361, 361, 0,	//926  const unsigned char*, int, int
    357, 361, 0,	//930  const unsigned char*, int
    92, 361, 0,	//933  QIODevice::OpenModeFlag, int
    361, 323, 0,	//936  int, const QPoint&
    21, 348, 0,	//939  QDebug, const QStyleOption::OptionType&
    216, 64, 0,	//942  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    327, 313, 0,	//945  const QPolygonF&, const QMatrix&
    323, 0,	//948  const QPoint&
    18, 132, 0,	//950  QDataStream&, QPolygon&
    149, 46, 0,	//953  QSql::ParamTypeFlag, QFlags<QSql::ParamTypeFlag>
    18, 152, 0,	//956  QDataStream&, QString&
    97, 97, 0,	//959  QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag
    18, 343, 0,	//962  QDataStream&, const QString&
    18, 297, 0,	//965  QDataStream&, const QEasingCurve&
    18, 12, 0,	//968  QDataStream&, QChar&
    159, 159, 0,	//971  QStyle::StateFlag, QStyle::StateFlag
    304, 0,	//974  const QItemSelectionRange&
    247, 247, 0,	//976  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    18, 126, 0,	//979  QDataStream&, QPixmap&
    31, 31, 0,	//982  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    18, 135, 0,	//985  QDataStream&, QRect&
    1, 361, 0,	//988  QAbstractFileEngine::FileFlag, int
    263, 356, 0,	//991  QtMsgType, const char*
    21, 339, 0,	//994  QDebug, const QSqlError&
    220, 361, 0,	//997  Qt::ImageConversionFlag, int
    161, 50, 0,	//1000  QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>
    21, 328, 0,	//1003  QDebug, const QRect&
    18, 302, 0,	//1006  QDataStream&, const QIcon&
    18, 354, 0,	//1009  QDataStream&, const QVariant::Type
    167, 361, 0,	//1012  QStyleOptionViewItemV2::ViewItemFeature, int
    18, 104, 0,	//1015  QDataStream&, QLineF&
    18, 124, 0,	//1018  QDataStream&, QPainterPath&
    253, 253, 0,	//1021  Qt::TouchPointState, Qt::TouchPointState
    247, 361, 0,	//1024  Qt::TextInteractionFlag, int
    323, 350, 0,	//1027  const QPoint&, const QTransform&
    162, 361, 0,	//1030  QStyleOptionFrameV2::FrameFeature, int
    165, 165, 0,	//1033  QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature
    285, 0,	//1036  char
    18, 295, 0,	//1038  QDataStream&, const QDateTime&
    18, 174, 0,	//1041  QDataStream&, QTime&
    323, 361, 0,	//1044  const QPoint&, int
    220, 220, 0,	//1047  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    162, 51, 0,	//1050  QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>
    211, 63, 0,	//1053  Qt::DropAction, QFlags<Qt::DropAction>
    211, 211, 0,	//1056  Qt::DropAction, Qt::DropAction
    235, 361, 0,	//1059  Qt::Orientation, int
    21, 296, 0,	//1062  QDebug, const QDir&
    332, 313, 0,	//1065  const QRegion&, const QMatrix&
    21, 332, 0,	//1068  QDebug, const QRegion&
    360, 323, 0,	//1071  float, const QPoint&
    18, 179, 0,	//1074  QDataStream&, QUrl&
    100, 43, 0,	//1077  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    343, 11, 0,	//1080  const QString&, QChar
    361, 361, 361, 361, 0,	//1083  int, int, int, int
    235, 71, 0,	//1088  Qt::Orientation, QFlags<Qt::Orientation>
    165, 54, 0,	//1091  QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>
    366, 0,	//1094  size_t
    21, 353, 0,	//1096  QDebug, const QVariant&
    111, 111, 0,	//1099  QLocale::NumberOption, QLocale::NumberOption
    18, 310, 0,	//1102  QDataStream&, const QLocale&
    79, 0,	//1105  QHelpContentItem*
    300, 0,	//1107  const QHelpContentItem&
    114, 361, 377, 0,	//1109  QMetaObject::Call, int, void**
    316, 361, 0,	//1113  const QModelIndex&, int
    361, 361, 316, 0,	//1116  int, int, const QModelIndex&
    361, 361, 0,	//1120  int, int
    343, 118, 0,	//1123  const QString&, QObject*
    343, 344, 0,	//1126  const QString&, const QStringList&
    342, 344, 343, 0,	//1129  const QString, const QStringList&, const QString&
    343, 353, 0,	//1133  const QString&, const QVariant&
    284, 0,	//1136  bool
    342, 344, 0,	//1138  const QString, const QStringList&
    351, 343, 0,	//1141  const QUrl&, const QString&
    311, 343, 0,	//1144  const QMap<QString,QUrl>&, const QString&
    83, 118, 0,	//1147  QHelpEngineCore*, QObject*
    309, 0,	//1150  const QList<QHelpSearchQuery>&
    83, 0,	//1152  QHelpEngineCore*
    88, 344, 0,	//1154  QHelpSearchQuery::FieldName, const QStringList&
    301, 0,	//1157  const QHelpSearchQuery&
    88, 0,	//1159  QHelpSearchQuery::FieldName
    344, 0,	//1161  const QStringList&
    187, 0,	//1163  QWidget*
    30, 0,	//1165  QEvent*
    118, 30, 0,	//1167  QObject*, QEvent*
    175, 0,	//1170  QTimerEvent*
    13, 0,	//1172  QChildEvent*
    116, 0,	//1174  QMouseEvent*
    186, 0,	//1176  QWheelEvent*
    98, 0,	//1178  QKeyEvent*
    77, 0,	//1180  QFocusEvent*
    122, 0,	//1182  QPaintEvent*
    117, 0,	//1184  QMoveEvent*
    140, 0,	//1186  QResizeEvent*
    14, 0,	//1188  QCloseEvent*
    16, 0,	//1190  QContextMenuEvent*
    168, 0,	//1192  QTabletEvent*
    4, 0,	//1194  QActionEvent*
    25, 0,	//1196  QDragEnterEvent*
    27, 0,	//1198  QDragMoveEvent*
    26, 0,	//1200  QDragLeaveEvent*
    28, 0,	//1202  QDropEvent*
    141, 0,	//1204  QShowEvent*
    91, 0,	//1206  QHideEvent*
    283, 0,	//1208  _XEvent*
    120, 0,	//1210  QPaintDevice::PaintDeviceMetric
    96, 0,	//1212  QInputMethodEvent*
    223, 0,	//1214  Qt::InputMethodQuery
    158, 0,	//1216  QStyle&
    319, 0,	//1218  const QPalette&
    298, 0,	//1220  const QFont&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "ALL",	//1
    "ATLEAST",	//2
    "DEFAULT",	//3
    "DrawChildren",	//4
    "DrawWindowBackground",	//5
    "FUZZY",	//6
    "IgnoreMask",	//7
    "LicensedActiveQt",	//8
    "LicensedCore",	//9
    "LicensedDBus",	//10
    "LicensedDeclarative",	//11
    "LicensedGui",	//12
    "LicensedHelp",	//13
    "LicensedMultimedia",	//14
    "LicensedNetwork",	//15
    "LicensedOpenGL",	//16
    "LicensedOpenVG",	//17
    "LicensedQt3Support",	//18
    "LicensedQt3SupportLight",	//19
    "LicensedScript",	//20
    "LicensedScriptTools",	//21
    "LicensedSql",	//22
    "LicensedSvg",	//23
    "LicensedTest",	//24
    "LicensedXml",	//25
    "LicensedXmlPatterns",	//26
    "PHRASE",	//27
    "QHelpContentItem",	//28
    "QHelpContentItem#",	//29
    "QHelpEngine",	//30
    "QHelpEngine$",	//31
    "QHelpEngine$#",	//32
    "QHelpEngineCore",	//33
    "QHelpEngineCore$",	//34
    "QHelpEngineCore$#",	//35
    "QHelpSearchEngine",	//36
    "QHelpSearchEngine#",	//37
    "QHelpSearchEngine##",	//38
    "QHelpSearchQuery",	//39
    "QHelpSearchQuery#",	//40
    "QHelpSearchQuery$?",	//41
    "QHelpSearchQueryWidget",	//42
    "QHelpSearchQueryWidget#",	//43
    "Q_COMPLEX_TYPE",	//44
    "Q_DUMMY_TYPE",	//45
    "Q_MOVABLE_TYPE",	//46
    "Q_PRIMITIVE_TYPE",	//47
    "Q_STATIC_TYPE",	//48
    "QtCriticalMsg",	//49
    "QtDebugMsg",	//50
    "QtFatalMsg",	//51
    "QtSystemMsg",	//52
    "QtWarningMsg",	//53
    "WITHOUT",	//54
    "actionEvent",	//55
    "activateCurrentItem",	//56
    "addCustomFilter",	//57
    "addCustomFilter$?",	//58
    "autoSaveFilter",	//59
    "cancelIndexing",	//60
    "cancelSearching",	//61
    "child",	//62
    "child$",	//63
    "childCount",	//64
    "childEvent",	//65
    "childPosition",	//66
    "childPosition#",	//67
    "closeEvent",	//68
    "collapseExtendedSearch",	//69
    "collectionFile",	//70
    "columnCount",	//71
    "columnCount#",	//72
    "connectNotify",	//73
    "contentItemAt",	//74
    "contentItemAt#",	//75
    "contentModel",	//76
    "contentWidget",	//77
    "contentsCreated",	//78
    "contentsCreationStarted",	//79
    "contextMenuEvent",	//80
    "copyCollectionFile",	//81
    "copyCollectionFile$",	//82
    "createContents",	//83
    "createContents$",	//84
    "createIndex",	//85
    "createIndex$",	//86
    "currentFilter",	//87
    "currentFilterChanged",	//88
    "currentFilterChanged$",	//89
    "customEvent",	//90
    "customFilters",	//91
    "customValue",	//92
    "customValue$",	//93
    "customValue$#",	//94
    "data",	//95
    "data#$",	//96
    "devType",	//97
    "disconnectNotify",	//98
    "documentationFileName",	//99
    "documentationFileName$",	//100
    "dragEnterEvent",	//101
    "dragLeaveEvent",	//102
    "dragMoveEvent",	//103
    "dropEvent",	//104
    "enabledChange",	//105
    "enterEvent",	//106
    "error",	//107
    "event",	//108
    "eventFilter",	//109
    "expandExtendedSearch",	//110
    "fieldName",	//111
    "fileData",	//112
    "fileData#",	//113
    "files",	//114
    "files$?",	//115
    "files$?$",	//116
    "filter",	//117
    "filter$",	//118
    "filter$$",	//119
    "filterAttributeSets",	//120
    "filterAttributeSets$",	//121
    "filterAttributes",	//122
    "filterAttributes$",	//123
    "filterIndices",	//124
    "filterIndices$",	//125
    "filterIndices$$",	//126
    "findFile",	//127
    "findFile#",	//128
    "focusNextPrevChild",	//129
    "focusOutEvent",	//130
    "fontChange",	//131
    "heightForWidth",	//132
    "hideEvent",	//133
    "hitCount",	//134
    "hits",	//135
    "hits$$",	//136
    "hitsCount",	//137
    "index",	//138
    "index$$",	//139
    "index$$#",	//140
    "indexCreated",	//141
    "indexCreationStarted",	//142
    "indexModel",	//143
    "indexOf",	//144
    "indexOf#",	//145
    "indexWidget",	//146
    "indexingFinished",	//147
    "indexingStarted",	//148
    "inputMethodEvent",	//149
    "inputMethodQuery",	//150
    "isCreatingContents",	//151
    "isCreatingIndex",	//152
    "keyPressEvent",	//153
    "keyReleaseEvent",	//154
    "languageChange",	//155
    "leaveEvent",	//156
    "linkActivated",	//157
    "linkActivated#",	//158
    "linkActivated#$",	//159
    "linkAt",	//160
    "linkAt#",	//161
    "linksActivated",	//162
    "linksActivated?$",	//163
    "linksForIdentifier",	//164
    "linksForIdentifier$",	//165
    "linksForKeyword",	//166
    "linksForKeyword$",	//167
    "metaData",	//168
    "metaData$$",	//169
    "metaObject",	//170
    "metric",	//171
    "minimumSizeHint",	//172
    "mouseDoubleClickEvent",	//173
    "mouseMoveEvent",	//174
    "mousePressEvent",	//175
    "mouseReleaseEvent",	//176
    "moveEvent",	//177
    "namespaceName",	//178
    "namespaceName$",	//179
    "operator!=",	//180
    "operator!=##",	//181
    "operator!=#$",	//182
    "operator!=$#",	//183
    "operator&",	//184
    "operator&##",	//185
    "operator*",	//186
    "operator*##",	//187
    "operator*#$",	//188
    "operator*$#",	//189
    "operator+",	//190
    "operator+##",	//191
    "operator+#$",	//192
    "operator+$#",	//193
    "operator+$$",	//194
    "operator-",	//195
    "operator-#",	//196
    "operator-##",	//197
    "operator-#$",	//198
    "operator/",	//199
    "operator/#$",	//200
    "operator<",	//201
    "operator<##",	//202
    "operator<#$",	//203
    "operator<$#",	//204
    "operator<<",	//205
    "operator<<##",	//206
    "operator<<#$",	//207
    "operator<<#?",	//208
    "operator<=",	//209
    "operator<=##",	//210
    "operator<=#$",	//211
    "operator<=$#",	//212
    "operator==",	//213
    "operator==##",	//214
    "operator==#$",	//215
    "operator==$#",	//216
    "operator>",	//217
    "operator>##",	//218
    "operator>#$",	//219
    "operator>$#",	//220
    "operator>=",	//221
    "operator>=##",	//222
    "operator>=#$",	//223
    "operator>=$#",	//224
    "operator>>",	//225
    "operator>>##",	//226
    "operator>>#$",	//227
    "operator>>#?",	//228
    "operator^",	//229
    "operator^##",	//230
    "operator|",	//231
    "operator|##",	//232
    "operator|$$",	//233
    "paintEngine",	//234
    "paintEvent",	//235
    "paletteChange",	//236
    "parent",	//237
    "parent#",	//238
    "qAcos",	//239
    "qAcos$",	//240
    "qAddPostRoutine",	//241
    "qAddPostRoutine$",	//242
    "qAlpha",	//243
    "qAlpha$",	//244
    "qAppName",	//245
    "qAsin",	//246
    "qAsin$",	//247
    "qAtan",	//248
    "qAtan$",	//249
    "qAtan2",	//250
    "qAtan2$$",	//251
    "qBadAlloc",	//252
    "qBlue",	//253
    "qBlue$",	//254
    "qCeil",	//255
    "qCeil$",	//256
    "qChecksum",	//257
    "qChecksum$$",	//258
    "qCompress",	//259
    "qCompress#",	//260
    "qCompress#$",	//261
    "qCompress$$",	//262
    "qCompress$$$",	//263
    "qCos",	//264
    "qCos$",	//265
    "qCritical",	//266
    "qDebug",	//267
    "qExp",	//268
    "qExp$",	//269
    "qFabs",	//270
    "qFabs$",	//271
    "qFastCos",	//272
    "qFastCos$",	//273
    "qFastSin",	//274
    "qFastSin$",	//275
    "qFlagLocation",	//276
    "qFlagLocation$",	//277
    "qFloor",	//278
    "qFloor$",	//279
    "qFree",	//280
    "qFree$",	//281
    "qFreeAligned",	//282
    "qFreeAligned$",	//283
    "qFuzzyCompare",	//284
    "qFuzzyCompare##",	//285
    "qFuzzyCompare$$",	//286
    "qFuzzyIsNull",	//287
    "qFuzzyIsNull$",	//288
    "qGray",	//289
    "qGray$",	//290
    "qGray$$$",	//291
    "qGreen",	//292
    "qGreen$",	//293
    "qHash",	//294
    "qHash#",	//295
    "qHash$",	//296
    "qInf",	//297
    "qInstallMsgHandler",	//298
    "qInstallMsgHandler$",	//299
    "qIntCast",	//300
    "qIntCast$",	//301
    "qIsFinite",	//302
    "qIsFinite$",	//303
    "qIsGray",	//304
    "qIsGray$",	//305
    "qIsInf",	//306
    "qIsInf$",	//307
    "qIsNaN",	//308
    "qIsNaN$",	//309
    "qIsNull",	//310
    "qIsNull$",	//311
    "qLn",	//312
    "qLn$",	//313
    "qMalloc",	//314
    "qMalloc$",	//315
    "qMallocAligned",	//316
    "qMallocAligned$$",	//317
    "qMemCopy",	//318
    "qMemCopy$$$",	//319
    "qMemSet",	//320
    "qMemSet$$$",	//321
    "qPow",	//322
    "qPow$$",	//323
    "qQNaN",	//324
    "qRealloc",	//325
    "qRealloc$$",	//326
    "qReallocAligned",	//327
    "qReallocAligned$$$$",	//328
    "qRed",	//329
    "qRed$",	//330
    "qRegisterStaticPluginInstanceFunction",	//331
    "qRegisterStaticPluginInstanceFunction#",	//332
    "qRemovePostRoutine",	//333
    "qRemovePostRoutine$",	//334
    "qRgb",	//335
    "qRgb$$$",	//336
    "qRgba",	//337
    "qRgba$$$$",	//338
    "qRound",	//339
    "qRound$",	//340
    "qRound64",	//341
    "qRound64$",	//342
    "qSNaN",	//343
    "qSetFieldWidth",	//344
    "qSetFieldWidth$",	//345
    "qSetPadChar",	//346
    "qSetPadChar#",	//347
    "qSetRealNumberPrecision",	//348
    "qSetRealNumberPrecision$",	//349
    "qSharedBuild",	//350
    "qSin",	//351
    "qSin$",	//352
    "qSqrt",	//353
    "qSqrt$",	//354
    "qStringComparisonHelper",	//355
    "qStringComparisonHelper#$",	//356
    "qTan",	//357
    "qTan$",	//358
    "qUncompress",	//359
    "qUncompress#",	//360
    "qUncompress$$",	//361
    "qVersion",	//362
    "qWarning",	//363
    "qbswap_helper",	//364
    "qbswap_helper$$$",	//365
    "qgetenv",	//366
    "qgetenv$",	//367
    "qputenv",	//368
    "qputenv$#",	//369
    "qrand",	//370
    "qsrand",	//371
    "qsrand$",	//372
    "qstrcmp",	//373
    "qstrcmp##",	//374
    "qstrcmp#$",	//375
    "qstrcmp$#",	//376
    "qstrcmp$$",	//377
    "qstrcpy",	//378
    "qstrcpy$$",	//379
    "qstrdup",	//380
    "qstrdup$",	//381
    "qstricmp",	//382
    "qstricmp$$",	//383
    "qstrlen",	//384
    "qstrlen$",	//385
    "qstrncmp",	//386
    "qstrncmp$$$",	//387
    "qstrncpy",	//388
    "qstrncpy$$$",	//389
    "qstrnicmp",	//390
    "qstrnicmp$$$",	//391
    "qstrnlen",	//392
    "qstrnlen$$",	//393
    "qtTrId",	//394
    "qtTrId$",	//395
    "qtTrId$$",	//396
    "qt_assert",	//397
    "qt_assert$$$",	//398
    "qt_assert_x",	//399
    "qt_assert_x$$$$",	//400
    "qt_check_pointer",	//401
    "qt_check_pointer$$",	//402
    "qt_error_string",	//403
    "qt_error_string$",	//404
    "qt_message_output",	//405
    "qt_message_output$$",	//406
    "qt_metacall",	//407
    "qt_metacall$$?",	//408
    "qt_metacast",	//409
    "qt_metacast$",	//410
    "qt_noop",	//411
    "qt_qFindChild_helper",	//412
    "qt_qFindChild_helper#$#",	//413
    "qt_qFindChildren_helper",	//414
    "qt_qFindChildren_helper#$##?",	//415
    "query",	//416
    "queryWidget",	//417
    "qvariant_cast_helper",	//418
    "qvariant_cast_helper#$$",	//419
    "qvsnprintf",	//420
    "qvsnprintf$$$?",	//421
    "readersAboutToBeInvalidated",	//422
    "registerDocumentation",	//423
    "registerDocumentation$",	//424
    "registeredDocumentations",	//425
    "reindexDocumentation",	//426
    "removeCustomFilter",	//427
    "removeCustomFilter$",	//428
    "removeCustomValue",	//429
    "removeCustomValue$",	//430
    "requestShowLink",	//431
    "requestShowLink#",	//432
    "resizeEvent",	//433
    "resultWidget",	//434
    "row",	//435
    "rowCount",	//436
    "rowCount#",	//437
    "search",	//438
    "search?",	//439
    "searchEngine",	//440
    "searchingFinished",	//441
    "searchingFinished$",	//442
    "searchingStarted",	//443
    "setAutoSaveFilter",	//444
    "setAutoSaveFilter$",	//445
    "setCollectionFile",	//446
    "setCollectionFile$",	//447
    "setCurrentFilter",	//448
    "setCurrentFilter$",	//449
    "setCustomValue",	//450
    "setCustomValue$#",	//451
    "setFieldName",	//452
    "setFieldName$",	//453
    "setQuery",	//454
    "setQuery?",	//455
    "setVisible",	//456
    "setWordList",	//457
    "setWordList?",	//458
    "setupData",	//459
    "setupFinished",	//460
    "setupStarted",	//461
    "showEvent",	//462
    "sizeHint",	//463
    "staticMetaObject",	//464
    "styleChange",	//465
    "tabletEvent",	//466
    "timerEvent",	//467
    "title",	//468
    "tr",	//469
    "tr$",	//470
    "tr$$",	//471
    "tr$$$",	//472
    "trUtf8",	//473
    "trUtf8$",	//474
    "trUtf8$$",	//475
    "trUtf8$$$",	//476
    "unregisterDocumentation",	//477
    "unregisterDocumentation$",	//478
    "url",	//479
    "warning",	//480
    "warning$",	//481
    "wheelEvent",	//482
    "windowActivationChange",	//483
    "wordList",	//484
    "x11Event",	//485
    "~QHelpContentItem",	//486
    "~QHelpContentModel",	//487
    "~QHelpContentWidget",	//488
    "~QHelpEngine",	//489
    "~QHelpEngineCore",	//490
    "~QHelpIndexWidget",	//491
    "~QHelpSearchEngine",	//492
    "~QHelpSearchQuery",	//493
    "~QHelpSearchQueryWidget",	//494
    "~QHelpSearchResultWidget",	//495
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {26, 184, 1, 2, Smoke::mf_static, 5, 1},	//1 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {26, 266, 0, 0, Smoke::mf_static, 21, 2},	//2 QGlobalSpace::qCritical()
    {26, 294, 4, 1, Smoke::mf_static, 369, 3},	//3 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {26, 231, 6, 2, Smoke::mf_static, 95, 4},	//4 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {26, 397, 9, 3, Smoke::mf_static, 0, 5},	//5 QGlobalSpace::qt_assert(const char*, const char*, int)
    {26, 186, 13, 2, Smoke::mf_static, 322, 6},	//6 QGlobalSpace::operator*(const QPoint&, double)
    {26, 306, 16, 1, Smoke::mf_static, 284, 7},	//7 QGlobalSpace::qIsInf(double)
    {26, 205, 18, 2, Smoke::mf_static, 21, 8},	//8 QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    {26, 186, 21, 2, Smoke::mf_static, 324, 9},	//9 QGlobalSpace::operator*(double, const QPointF&)
    {26, 231, 24, 2, Smoke::mf_static, 70, 10},	//10 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {26, 180, 27, 2, Smoke::mf_static, 284, 11},	//11 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {26, 205, 30, 2, Smoke::mf_static, 21, 12},	//12 QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    {26, 186, 33, 2, Smoke::mf_static, 335, 13},	//13 QGlobalSpace::operator*(double, const QSizeF&)
    {26, 231, 36, 2, Smoke::mf_static, 95, 14},	//14 QGlobalSpace::operator|(QDir::SortFlag, int)
    {26, 231, 39, 2, Smoke::mf_static, 34, 15},	//15 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    {26, 205, 42, 2, Smoke::mf_static, 21, 16},	//16 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {26, 225, 45, 2, Smoke::mf_static, 18, 17},	//17 QGlobalSpace::operator>>(QDataStream&, QImage&)
    {26, 205, 48, 2, Smoke::mf_static, 18, 18},	//18 QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    {26, 231, 51, 2, Smoke::mf_static, 95, 19},	//19 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {26, 231, 54, 2, Smoke::mf_static, 95, 20},	//20 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    {26, 205, 57, 2, Smoke::mf_static, 21, 21},	//21 QGlobalSpace::operator<<(QDebug, const QTransform&)
    {26, 378, 60, 2, Smoke::mf_static, 286, 22},	//22 QGlobalSpace::qstrcpy(char*, const char*)
    {26, 180, 63, 2, Smoke::mf_static, 284, 23},	//23 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {26, 190, 66, 2, Smoke::mf_static, 333, 24},	//24 QGlobalSpace::operator+(const QSize&, const QSize&)
    {26, 270, 16, 1, Smoke::mf_static, 359, 25},	//25 QGlobalSpace::qFabs(double)
    {26, 205, 69, 2, Smoke::mf_static, 18, 26},	//26 QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    {26, 231, 72, 2, Smoke::mf_static, 57, 27},	//27 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {26, 205, 75, 2, Smoke::mf_static, 21, 28},	//28 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {26, 324, 0, 0, Smoke::mf_static, 359, 29},	//29 QGlobalSpace::qQNaN()
    {26, 294, 78, 1, Smoke::mf_static, 369, 30},	//30 QGlobalSpace::qHash(unsigned char)
    {26, 231, 80, 2, Smoke::mf_static, 36, 31},	//31 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {26, 186, 83, 2, Smoke::mf_static, 129, 32},	//32 QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    {26, 186, 86, 2, Smoke::mf_static, 101, 33},	//33 QGlobalSpace::operator*(const QLine&, const QTransform&)
    {26, 362, 0, 0, Smoke::mf_static, 356, 34},	//34 QGlobalSpace::qVersion()
    {26, 231, 89, 2, Smoke::mf_static, 39, 35},	//35 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {26, 213, 27, 2, Smoke::mf_static, 284, 36},	//36 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {26, 231, 92, 2, Smoke::mf_static, 75, 37},	//37 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {26, 186, 95, 2, Smoke::mf_static, 335, 38},	//38 QGlobalSpace::operator*(const QSizeF&, double)
    {26, 205, 98, 2, Smoke::mf_static, 18, 39},	//39 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {26, 231, 101, 2, Smoke::mf_static, 95, 40},	//40 QGlobalSpace::operator|(QDir::Filter, int)
    {26, 284, 104, 2, Smoke::mf_static, 284, 41},	//41 QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    {26, 255, 16, 1, Smoke::mf_static, 361, 42},	//42 QGlobalSpace::qCeil(double)
    {26, 370, 0, 0, Smoke::mf_static, 361, 43},	//43 QGlobalSpace::qrand()
    {26, 289, 107, 1, Smoke::mf_static, 361, 44},	//44 QGlobalSpace::qGray(unsigned int)
    {26, 195, 109, 2, Smoke::mf_static, 335, 45},	//45 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {26, 221, 112, 2, Smoke::mf_static, 284, 46},	//46 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {26, 213, 115, 2, Smoke::mf_static, 284, 47},	//47 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {26, 231, 118, 2, Smoke::mf_static, 70, 48},	//48 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {26, 205, 121, 2, Smoke::mf_static, 21, 49},	//49 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {26, 329, 107, 1, Smoke::mf_static, 361, 50},	//50 QGlobalSpace::qRed(unsigned int)
    {26, 180, 124, 2, Smoke::mf_static, 284, 51},	//51 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {26, 213, 127, 2, Smoke::mf_static, 284, 52},	//52 QGlobalSpace::operator==(QBool, QBool)
    {26, 231, 130, 2, Smoke::mf_static, 53, 53},	//53 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    {26, 231, 133, 2, Smoke::mf_static, 52, 54},	//54 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    {26, 231, 136, 2, Smoke::mf_static, 61, 55},	//55 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {26, 294, 139, 1, Smoke::mf_static, 369, 56},	//56 QGlobalSpace::qHash(const QStringRef&)
    {26, 213, 141, 2, Smoke::mf_static, 284, 57},	//57 QGlobalSpace::operator==(QString::Null, QString::Null)
    {26, 205, 144, 2, Smoke::mf_static, 21, 58},	//58 QGlobalSpace::operator<<(QDebug, const QFont&)
    {26, 231, 147, 2, Smoke::mf_static, 95, 59},	//59 QGlobalSpace::operator|(QSql::ParamTypeFlag, int)
    {26, 205, 150, 2, Smoke::mf_static, 21, 60},	//60 QGlobalSpace::operator<<(QDebug, const QPolygon&)
    {26, 205, 153, 2, Smoke::mf_static, 18, 61},	//61 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {26, 231, 156, 2, Smoke::mf_static, 46, 62},	//62 QGlobalSpace::operator|(QSql::ParamTypeFlag, QSql::ParamTypeFlag)
    {26, 225, 159, 2, Smoke::mf_static, 18, 63},	//63 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {26, 243, 107, 1, Smoke::mf_static, 361, 64},	//64 QGlobalSpace::qAlpha(unsigned int)
    {26, 231, 162, 2, Smoke::mf_static, 95, 65},	//65 QGlobalSpace::operator|(QStyle::SubControl, int)
    {26, 190, 165, 2, Smoke::mf_static, 342, 66},	//66 QGlobalSpace::operator+(QChar, const QString&)
    {26, 292, 107, 1, Smoke::mf_static, 361, 67},	//67 QGlobalSpace::qGreen(unsigned int)
    {26, 231, 168, 2, Smoke::mf_static, 41, 68},	//68 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {26, 231, 171, 2, Smoke::mf_static, 36, 69},	//69 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {26, 205, 174, 2, Smoke::mf_static, 18, 70},	//70 QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    {26, 205, 177, 2, Smoke::mf_static, 21, 71},	//71 QGlobalSpace::operator<<(QDebug, const QTime&)
    {26, 205, 180, 2, Smoke::mf_static, 18, 72},	//72 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {26, 205, 183, 2, Smoke::mf_static, 21, 73},	//73 QGlobalSpace::operator<<(QDebug, const QDate&)
    {26, 294, 186, 1, Smoke::mf_static, 369, 74},	//74 QGlobalSpace::qHash(const QBitArray&)
    {26, 248, 16, 1, Smoke::mf_static, 359, 75},	//75 QGlobalSpace::qAtan(double)
    {26, 364, 188, 3, Smoke::mf_static, 0, 76},	//76 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {26, 186, 192, 2, Smoke::mf_static, 133, 77},	//77 QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    {26, 418, 195, 3, Smoke::mf_static, 284, 78},	//78 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {26, 294, 199, 1, Smoke::mf_static, 369, 79},	//79 QGlobalSpace::qHash(const QString&)
    {26, 294, 201, 1, Smoke::mf_static, 369, 80},	//80 QGlobalSpace::qHash(unsigned short)
    {26, 331, 203, 1, Smoke::mf_static, 0, 81},	//81 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {26, 294, 205, 1, Smoke::mf_static, 369, 82},	//82 QGlobalSpace::qHash(long)
    {26, 231, 207, 2, Smoke::mf_static, 73, 83},	//83 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {26, 294, 210, 1, Smoke::mf_static, 369, 84},	//84 QGlobalSpace::qHash(long long)
    {26, 205, 212, 2, Smoke::mf_static, 21, 85},	//85 QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    {26, 190, 109, 2, Smoke::mf_static, 335, 86},	//86 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {26, 231, 215, 2, Smoke::mf_static, 95, 87},	//87 QGlobalSpace::operator|(QWidget::RenderFlag, int)
    {26, 205, 218, 2, Smoke::mf_static, 21, 88},	//88 QGlobalSpace::operator<<(QDebug, const QColor&)
    {26, 231, 221, 2, Smoke::mf_static, 95, 89},	//89 QGlobalSpace::operator|(Qt::DropAction, int)
    {26, 264, 16, 1, Smoke::mf_static, 359, 90},	//90 QGlobalSpace::qCos(double)
    {26, 205, 224, 2, Smoke::mf_static, 18, 91},	//91 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {26, 231, 227, 2, Smoke::mf_static, 33, 92},	//92 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {26, 371, 107, 1, Smoke::mf_static, 0, 93},	//93 QGlobalSpace::qsrand(unsigned int)
    {26, 306, 230, 1, Smoke::mf_static, 284, 94},	//94 QGlobalSpace::qIsInf(float)
    {26, 231, 232, 2, Smoke::mf_static, 61, 95},	//95 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {26, 225, 235, 2, Smoke::mf_static, 18, 96},	//96 QGlobalSpace::operator>>(QDataStream&, QColor&)
    {26, 231, 238, 2, Smoke::mf_static, 95, 97},	//97 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {26, 205, 241, 2, Smoke::mf_static, 18, 98},	//98 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {26, 231, 244, 2, Smoke::mf_static, 95, 99},	//99 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {26, 231, 247, 2, Smoke::mf_static, 38, 100},	//100 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {26, 201, 250, 2, Smoke::mf_static, 284, 101},	//101 QGlobalSpace::operator<(const QByteArray&, const char*)
    {26, 205, 253, 2, Smoke::mf_static, 21, 102},	//102 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {26, 231, 256, 2, Smoke::mf_static, 62, 103},	//103 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {26, 231, 259, 2, Smoke::mf_static, 95, 104},	//104 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    {26, 186, 262, 2, Smoke::mf_static, 101, 105},	//105 QGlobalSpace::operator*(const QLine&, const QMatrix&)
    {26, 363, 0, 0, Smoke::mf_static, 21, 106},	//106 QGlobalSpace::qWarning()
    {26, 289, 265, 3, Smoke::mf_static, 361, 107},	//107 QGlobalSpace::qGray(int, int, int)
    {26, 186, 269, 2, Smoke::mf_static, 103, 108},	//108 QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    {26, 231, 272, 2, Smoke::mf_static, 71, 109},	//109 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {26, 186, 275, 2, Smoke::mf_static, 123, 110},	//110 QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    {26, 231, 278, 2, Smoke::mf_static, 95, 111},	//111 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {26, 225, 281, 2, Smoke::mf_static, 18, 112},	//112 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {26, 205, 284, 2, Smoke::mf_static, 18, 113},	//113 QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    {26, 231, 287, 2, Smoke::mf_static, 95, 114},	//114 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {26, 205, 290, 2, Smoke::mf_static, 21, 115},	//115 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {26, 231, 293, 2, Smoke::mf_static, 95, 116},	//116 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    {26, 205, 296, 2, Smoke::mf_static, 18, 117},	//117 QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    {26, 231, 299, 2, Smoke::mf_static, 64, 118},	//118 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {26, 225, 302, 2, Smoke::mf_static, 18, 119},	//119 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {26, 231, 305, 2, Smoke::mf_static, 41, 120},	//120 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {26, 231, 308, 2, Smoke::mf_static, 95, 121},	//121 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {26, 190, 311, 2, Smoke::mf_static, 289, 122},	//122 QGlobalSpace::operator+(char, const QByteArray&)
    {26, 199, 13, 2, Smoke::mf_static, 322, 123},	//123 QGlobalSpace::operator/(const QPoint&, double)
    {26, 205, 314, 2, Smoke::mf_static, 21, 124},	//124 QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    {26, 213, 317, 2, Smoke::mf_static, 284, 125},	//125 QGlobalSpace::operator==(const char*, const QByteArray&)
    {26, 225, 320, 2, Smoke::mf_static, 18, 126},	//126 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {26, 308, 230, 1, Smoke::mf_static, 284, 127},	//127 QGlobalSpace::qIsNaN(float)
    {26, 284, 323, 2, Smoke::mf_static, 284, 128},	//128 QGlobalSpace::qFuzzyCompare(double, double)
    {26, 310, 230, 1, Smoke::mf_static, 284, 129},	//129 QGlobalSpace::qIsNull(float)
    {26, 225, 326, 2, Smoke::mf_static, 18, 130},	//130 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {26, 225, 329, 2, Smoke::mf_static, 18, 131},	//131 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {26, 225, 332, 2, Smoke::mf_static, 18, 132},	//132 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {26, 213, 335, 2, Smoke::mf_static, 284, 133},	//133 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {26, 199, 338, 2, Smoke::mf_static, 176, 134},	//134 QGlobalSpace::operator/(const QTransform&, double)
    {26, 231, 341, 2, Smoke::mf_static, 35, 135},	//135 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    {26, 231, 344, 2, Smoke::mf_static, 50, 136},	//136 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    {26, 180, 347, 2, Smoke::mf_static, 284, 137},	//137 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {26, 231, 350, 2, Smoke::mf_static, 95, 138},	//138 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    {26, 231, 353, 2, Smoke::mf_static, 95, 139},	//139 QGlobalSpace::operator|(QFile::Permission, int)
    {26, 205, 356, 2, Smoke::mf_static, 21, 140},	//140 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {26, 201, 359, 2, Smoke::mf_static, 284, 141},	//141 QGlobalSpace::operator<(QChar, QChar)
    {26, 186, 362, 2, Smoke::mf_static, 123, 142},	//142 QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    {26, 205, 365, 2, Smoke::mf_static, 18, 143},	//143 QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    {26, 390, 368, 3, Smoke::mf_static, 361, 144},	//144 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {26, 294, 372, 1, Smoke::mf_static, 369, 145},	//145 QGlobalSpace::qHash(const QByteArray&)
    {26, 231, 374, 2, Smoke::mf_static, 35, 146},	//146 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    {26, 231, 377, 2, Smoke::mf_static, 95, 147},	//147 QGlobalSpace::operator|(QStyle::StateFlag, int)
    {26, 205, 380, 2, Smoke::mf_static, 21, 148},	//148 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {26, 401, 383, 2, Smoke::mf_static, 0, 149},	//149 QGlobalSpace::qt_check_pointer(const char*, int)
    {26, 225, 386, 2, Smoke::mf_static, 18, 150},	//150 QGlobalSpace::operator>>(QDataStream&, QRegion&)
    {26, 231, 389, 2, Smoke::mf_static, 95, 151},	//151 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    {26, 231, 392, 2, Smoke::mf_static, 58, 152},	//152 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {26, 225, 395, 2, Smoke::mf_static, 18, 153},	//153 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {26, 186, 398, 2, Smoke::mf_static, 324, 154},	//154 QGlobalSpace::operator*(const QPointF&, double)
    {26, 373, 112, 2, Smoke::mf_static, 361, 155},	//155 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {26, 346, 401, 1, Smoke::mf_static, 173, 156},	//156 QGlobalSpace::qSetPadChar(QChar)
    {26, 373, 250, 2, Smoke::mf_static, 361, 157},	//157 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {26, 213, 66, 2, Smoke::mf_static, 284, 158},	//158 QGlobalSpace::operator==(const QSize&, const QSize&)
    {26, 350, 0, 0, Smoke::mf_static, 284, 159},	//159 QGlobalSpace::qSharedBuild()
    {26, 231, 403, 2, Smoke::mf_static, 33, 160},	//160 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {26, 298, 406, 1, Smoke::mf_static, 375, 161},	//161 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {26, 205, 408, 2, Smoke::mf_static, 18, 162},	//162 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {26, 412, 411, 3, Smoke::mf_static, 118, 163},	//163 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {26, 231, 415, 2, Smoke::mf_static, 69, 164},	//164 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {26, 231, 418, 2, Smoke::mf_static, 95, 165},	//165 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {26, 180, 112, 2, Smoke::mf_static, 284, 166},	//166 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {26, 231, 421, 2, Smoke::mf_static, 95, 167},	//167 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {26, 231, 424, 2, Smoke::mf_static, 45, 168},	//168 QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    {26, 225, 427, 2, Smoke::mf_static, 18, 169},	//169 QGlobalSpace::operator>>(QDataStream&, QCursor&)
    {26, 231, 430, 2, Smoke::mf_static, 68, 170},	//170 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {26, 199, 95, 2, Smoke::mf_static, 335, 171},	//171 QGlobalSpace::operator/(const QSizeF&, double)
    {26, 231, 433, 2, Smoke::mf_static, 69, 172},	//172 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {26, 225, 436, 2, Smoke::mf_static, 18, 173},	//173 QGlobalSpace::operator>>(QDataStream&, QTransform&)
    {26, 186, 439, 2, Smoke::mf_static, 131, 174},	//174 QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    {26, 217, 359, 2, Smoke::mf_static, 284, 175},	//175 QGlobalSpace::operator>(QChar, QChar)
    {26, 221, 317, 2, Smoke::mf_static, 284, 176},	//176 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {26, 282, 442, 1, Smoke::mf_static, 0, 177},	//177 QGlobalSpace::qFreeAligned(void*)
    {26, 231, 444, 2, Smoke::mf_static, 53, 178},	//178 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    {26, 213, 447, 2, Smoke::mf_static, 284, 179},	//179 QGlobalSpace::operator==(const QString&, QString::Null)
    {26, 300, 230, 1, Smoke::mf_static, 361, 180},	//180 QGlobalSpace::qIntCast(float)
    {26, 201, 112, 2, Smoke::mf_static, 284, 181},	//181 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {26, 231, 450, 2, Smoke::mf_static, 55, 182},	//182 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    {26, 205, 453, 2, Smoke::mf_static, 21, 183},	//183 QGlobalSpace::operator<<(QDebug, const QSqlField&)
    {26, 368, 317, 2, Smoke::mf_static, 284, 184},	//184 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {26, 231, 456, 2, Smoke::mf_static, 95, 185},	//185 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {26, 225, 459, 2, Smoke::mf_static, 18, 186},	//186 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {26, 355, 462, 2, Smoke::mf_static, 284, 187},	//187 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {26, 386, 368, 3, Smoke::mf_static, 361, 188},	//188 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {26, 195, 465, 1, Smoke::mf_static, 324, 189},	//189 QGlobalSpace::operator-(const QPointF&)
    {26, 327, 467, 4, Smoke::mf_static, 376, 190},	//190 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {26, 231, 472, 2, Smoke::mf_static, 67, 191},	//191 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {26, 205, 475, 2, Smoke::mf_static, 18, 192},	//192 QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    {26, 294, 478, 1, Smoke::mf_static, 369, 193},	//193 QGlobalSpace::qHash(unsigned long long)
    {26, 231, 480, 2, Smoke::mf_static, 76, 194},	//194 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {26, 205, 483, 2, Smoke::mf_static, 21, 195},	//195 QGlobalSpace::operator<<(QDebug, const QSize&)
    {26, 186, 486, 2, Smoke::mf_static, 129, 196},	//196 QGlobalSpace::operator*(const QPointF&, const QTransform&)
    {26, 231, 489, 2, Smoke::mf_static, 67, 197},	//197 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {26, 231, 492, 2, Smoke::mf_static, 74, 198},	//198 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {26, 245, 0, 0, Smoke::mf_static, 151, 199},	//199 QGlobalSpace::qAppName()
    {26, 221, 347, 2, Smoke::mf_static, 284, 200},	//200 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {26, 294, 401, 1, Smoke::mf_static, 369, 201},	//201 QGlobalSpace::qHash(QChar)
    {26, 213, 124, 2, Smoke::mf_static, 284, 202},	//202 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {26, 287, 16, 1, Smoke::mf_static, 284, 203},	//203 QGlobalSpace::qFuzzyIsNull(double)
    {26, 205, 495, 2, Smoke::mf_static, 18, 204},	//204 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {26, 320, 498, 3, Smoke::mf_static, 376, 205},	//205 QGlobalSpace::qMemSet(void*, int, size_t)
    {26, 250, 323, 2, Smoke::mf_static, 359, 206},	//206 QGlobalSpace::qAtan2(double, double)
    {26, 231, 502, 2, Smoke::mf_static, 45, 207},	//207 QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    {26, 205, 505, 2, Smoke::mf_static, 18, 208},	//208 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {26, 225, 508, 2, Smoke::mf_static, 18, 209},	//209 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {26, 259, 511, 2, Smoke::mf_static, 9, 210},	//210 QGlobalSpace::qCompress(const QByteArray&, int)
    {26, 259, 372, 1, Smoke::mf_static, 9, 211},	//211 QGlobalSpace::qCompress(const QByteArray&)
    {26, 231, 514, 2, Smoke::mf_static, 95, 212},	//212 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    {26, 231, 517, 2, Smoke::mf_static, 68, 213},	//213 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {26, 201, 317, 2, Smoke::mf_static, 284, 214},	//214 QGlobalSpace::operator<(const char*, const QByteArray&)
    {26, 241, 520, 1, Smoke::mf_static, 0, 215},	//215 QGlobalSpace::qAddPostRoutine(void(*)())
    {26, 231, 522, 2, Smoke::mf_static, 95, 216},	//216 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {26, 186, 525, 2, Smoke::mf_static, 127, 217},	//217 QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    {26, 231, 528, 2, Smoke::mf_static, 95, 218},	//218 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {26, 231, 531, 2, Smoke::mf_static, 95, 219},	//219 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {26, 268, 16, 1, Smoke::mf_static, 359, 220},	//220 QGlobalSpace::qExp(double)
    {26, 180, 66, 2, Smoke::mf_static, 284, 221},	//221 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {26, 231, 534, 2, Smoke::mf_static, 65, 222},	//222 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {26, 209, 250, 2, Smoke::mf_static, 284, 223},	//223 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {26, 180, 537, 2, Smoke::mf_static, 284, 224},	//224 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {26, 231, 540, 2, Smoke::mf_static, 95, 225},	//225 QGlobalSpace::operator|(QString::SectionFlag, int)
    {26, 231, 543, 2, Smoke::mf_static, 95, 226},	//226 QGlobalSpace::operator|(Qt::WindowType, int)
    {26, 231, 546, 2, Smoke::mf_static, 60, 227},	//227 QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    {26, 213, 549, 2, Smoke::mf_static, 284, 228},	//228 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {26, 310, 16, 1, Smoke::mf_static, 284, 229},	//229 QGlobalSpace::qIsNull(double)
    {26, 213, 552, 2, Smoke::mf_static, 284, 230},	//230 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {26, 300, 16, 1, Smoke::mf_static, 361, 231},	//231 QGlobalSpace::qIntCast(double)
    {26, 229, 1, 2, Smoke::mf_static, 5, 232},	//232 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {26, 257, 555, 2, Smoke::mf_static, 372, 233},	//233 QGlobalSpace::qChecksum(const char*, unsigned int)
    {26, 231, 558, 2, Smoke::mf_static, 59, 234},	//234 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {26, 225, 561, 2, Smoke::mf_static, 18, 235},	//235 QGlobalSpace::operator>>(QDataStream&, QIcon&)
    {26, 205, 564, 2, Smoke::mf_static, 18, 236},	//236 QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    {26, 186, 338, 2, Smoke::mf_static, 176, 237},	//237 QGlobalSpace::operator*(const QTransform&, double)
    {26, 231, 567, 2, Smoke::mf_static, 95, 238},	//238 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {26, 231, 570, 2, Smoke::mf_static, 60, 239},	//239 QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    {26, 201, 347, 2, Smoke::mf_static, 284, 240},	//240 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {26, 205, 573, 2, Smoke::mf_static, 21, 241},	//241 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {26, 366, 576, 1, Smoke::mf_static, 9, 242},	//242 QGlobalSpace::qgetenv(const char*)
    {26, 231, 578, 2, Smoke::mf_static, 95, 243},	//243 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    {26, 180, 462, 2, Smoke::mf_static, 284, 244},	//244 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {26, 225, 581, 2, Smoke::mf_static, 170, 245},	//245 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {26, 180, 317, 2, Smoke::mf_static, 284, 246},	//246 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {26, 239, 16, 1, Smoke::mf_static, 359, 247},	//247 QGlobalSpace::qAcos(double)
    {26, 231, 584, 2, Smoke::mf_static, 48, 248},	//248 QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    {26, 217, 347, 2, Smoke::mf_static, 284, 249},	//249 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {26, 231, 587, 2, Smoke::mf_static, 55, 250},	//250 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    {26, 225, 590, 2, Smoke::mf_static, 18, 251},	//251 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {26, 205, 593, 2, Smoke::mf_static, 21, 252},	//252 QGlobalSpace::operator<<(QDebug, const QSqlDatabase&)
    {26, 205, 596, 2, Smoke::mf_static, 18, 253},	//253 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {26, 231, 599, 2, Smoke::mf_static, 40, 254},	//254 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {26, 205, 602, 2, Smoke::mf_static, 21, 255},	//255 QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    {26, 388, 605, 3, Smoke::mf_static, 286, 256},	//256 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {26, 225, 609, 2, Smoke::mf_static, 18, 257},	//257 QGlobalSpace::operator>>(QDataStream&, QBrush&)
    {26, 205, 612, 2, Smoke::mf_static, 18, 258},	//258 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {26, 294, 615, 1, Smoke::mf_static, 369, 259},	//259 QGlobalSpace::qHash(const QUrl&)
    {26, 302, 230, 1, Smoke::mf_static, 284, 260},	//260 QGlobalSpace::qIsFinite(float)
    {26, 403, 617, 1, Smoke::mf_static, 151, 261},	//261 QGlobalSpace::qt_error_string(int)
    {26, 403, 0, 0, Smoke::mf_static, 151, 262},	//262 QGlobalSpace::qt_error_string()
    {26, 186, 619, 2, Smoke::mf_static, 322, 263},	//263 QGlobalSpace::operator*(const QPoint&, float)
    {26, 231, 622, 2, Smoke::mf_static, 95, 264},	//264 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {26, 325, 625, 2, Smoke::mf_static, 376, 265},	//265 QGlobalSpace::qRealloc(void*, size_t)
    {26, 190, 628, 2, Smoke::mf_static, 342, 266},	//266 QGlobalSpace::operator+(const QString&, const QString&)
    {26, 231, 631, 2, Smoke::mf_static, 95, 267},	//267 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    {26, 399, 634, 4, Smoke::mf_static, 0, 268},	//268 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {26, 180, 250, 2, Smoke::mf_static, 284, 269},	//269 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {26, 180, 639, 2, Smoke::mf_static, 284, 270},	//270 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {26, 231, 642, 2, Smoke::mf_static, 95, 271},	//271 QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    {26, 225, 645, 2, Smoke::mf_static, 18, 272},	//272 QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    {26, 217, 112, 2, Smoke::mf_static, 284, 273},	//273 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {26, 339, 16, 1, Smoke::mf_static, 361, 274},	//274 QGlobalSpace::qRound(double)
    {26, 213, 537, 2, Smoke::mf_static, 284, 275},	//275 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {26, 205, 648, 2, Smoke::mf_static, 21, 276},	//276 QGlobalSpace::operator<<(QDebug, const QSqlRecord&)
    {26, 231, 1, 2, Smoke::mf_static, 5, 277},	//277 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {26, 213, 651, 2, Smoke::mf_static, 284, 278},	//278 QGlobalSpace::operator==(const char*, const QStringRef&)
    {26, 190, 317, 2, Smoke::mf_static, 289, 279},	//279 QGlobalSpace::operator+(const char*, const QByteArray&)
    {26, 225, 654, 2, Smoke::mf_static, 18, 280},	//280 QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    {26, 231, 657, 2, Smoke::mf_static, 95, 281},	//281 QGlobalSpace::operator|(Qt::MouseButton, int)
    {26, 231, 660, 2, Smoke::mf_static, 52, 282},	//282 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    {26, 209, 347, 2, Smoke::mf_static, 284, 283},	//283 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {26, 225, 663, 2, Smoke::mf_static, 18, 284},	//284 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {26, 231, 666, 2, Smoke::mf_static, 38, 285},	//285 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {26, 231, 669, 2, Smoke::mf_static, 66, 286},	//286 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {26, 304, 107, 1, Smoke::mf_static, 284, 287},	//287 QGlobalSpace::qIsGray(unsigned int)
    {26, 231, 672, 2, Smoke::mf_static, 58, 288},	//288 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {26, 225, 675, 2, Smoke::mf_static, 18, 289},	//289 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {26, 213, 359, 2, Smoke::mf_static, 284, 290},	//290 QGlobalSpace::operator==(QChar, QChar)
    {26, 231, 678, 2, Smoke::mf_static, 72, 291},	//291 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {26, 180, 549, 2, Smoke::mf_static, 284, 292},	//292 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {26, 186, 681, 2, Smoke::mf_static, 103, 293},	//293 QGlobalSpace::operator*(const QLineF&, const QTransform&)
    {26, 180, 684, 2, Smoke::mf_static, 284, 294},	//294 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {26, 294, 687, 1, Smoke::mf_static, 369, 295},	//295 QGlobalSpace::qHash(signed char)
    {26, 205, 689, 2, Smoke::mf_static, 18, 296},	//296 QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    {26, 205, 692, 2, Smoke::mf_static, 18, 297},	//297 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {26, 231, 695, 2, Smoke::mf_static, 73, 298},	//298 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {26, 353, 16, 1, Smoke::mf_static, 359, 299},	//299 QGlobalSpace::qSqrt(double)
    {26, 205, 698, 2, Smoke::mf_static, 18, 300},	//300 QGlobalSpace::operator<<(QDataStream&, const QFont&)
    {26, 373, 701, 2, Smoke::mf_static, 361, 301},	//301 QGlobalSpace::qstrcmp(const char*, const char*)
    {26, 231, 704, 2, Smoke::mf_static, 49, 302},	//302 QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    {26, 205, 707, 2, Smoke::mf_static, 18, 303},	//303 QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    {26, 180, 115, 2, Smoke::mf_static, 284, 304},	//304 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {26, 180, 359, 2, Smoke::mf_static, 284, 305},	//305 QGlobalSpace::operator!=(QChar, QChar)
    {26, 231, 710, 2, Smoke::mf_static, 43, 306},	//306 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {26, 392, 555, 2, Smoke::mf_static, 369, 307},	//307 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {26, 335, 265, 3, Smoke::mf_static, 369, 308},	//308 QGlobalSpace::qRgb(int, int, int)
    {26, 278, 16, 1, Smoke::mf_static, 361, 309},	//309 QGlobalSpace::qFloor(double)
    {26, 231, 713, 2, Smoke::mf_static, 75, 310},	//310 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {26, 205, 716, 2, Smoke::mf_static, 21, 311},	//311 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {26, 231, 719, 2, Smoke::mf_static, 59, 312},	//312 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {26, 213, 109, 2, Smoke::mf_static, 284, 313},	//313 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {26, 225, 722, 2, Smoke::mf_static, 18, 314},	//314 QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    {26, 225, 725, 2, Smoke::mf_static, 18, 315},	//315 QGlobalSpace::operator>>(QDataStream&, QPalette&)
    {26, 205, 728, 2, Smoke::mf_static, 18, 316},	//316 QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    {26, 213, 347, 2, Smoke::mf_static, 284, 317},	//317 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {26, 180, 731, 2, Smoke::mf_static, 284, 318},	//318 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {26, 186, 734, 2, Smoke::mf_static, 333, 319},	//319 QGlobalSpace::operator*(double, const QSize&)
    {26, 231, 737, 2, Smoke::mf_static, 40, 320},	//320 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {26, 294, 740, 1, Smoke::mf_static, 369, 321},	//321 QGlobalSpace::qHash(const QModelIndex&)
    {26, 231, 742, 2, Smoke::mf_static, 49, 322},	//322 QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    {26, 205, 745, 2, Smoke::mf_static, 21, 323},	//323 QGlobalSpace::operator<<(QDebug, const QLine&)
    {26, 231, 748, 2, Smoke::mf_static, 34, 324},	//324 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    {26, 333, 520, 1, Smoke::mf_static, 0, 325},	//325 QGlobalSpace::qRemovePostRoutine(void(*)())
    {26, 205, 751, 2, Smoke::mf_static, 18, 326},	//326 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {26, 284, 754, 2, Smoke::mf_static, 284, 327},	//327 QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    {26, 231, 757, 2, Smoke::mf_static, 56, 328},	//328 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    {26, 276, 576, 1, Smoke::mf_static, 356, 329},	//329 QGlobalSpace::qFlagLocation(const char*)
    {26, 318, 760, 3, Smoke::mf_static, 376, 330},	//330 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {26, 221, 250, 2, Smoke::mf_static, 284, 331},	//331 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {26, 186, 764, 2, Smoke::mf_static, 322, 332},	//332 QGlobalSpace::operator*(double, const QPoint&)
    {26, 308, 16, 1, Smoke::mf_static, 284, 333},	//333 QGlobalSpace::qIsNaN(double)
    {26, 205, 767, 2, Smoke::mf_static, 21, 334},	//334 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {26, 294, 770, 1, Smoke::mf_static, 369, 335},	//335 QGlobalSpace::qHash(short)
    {26, 297, 0, 0, Smoke::mf_static, 359, 336},	//336 QGlobalSpace::qInf()
    {26, 205, 772, 2, Smoke::mf_static, 21, 337},	//337 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {26, 205, 775, 2, Smoke::mf_static, 18, 338},	//338 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {26, 205, 778, 2, Smoke::mf_static, 18, 339},	//339 QGlobalSpace::operator<<(QDataStream&, const QImage&)
    {26, 190, 781, 2, Smoke::mf_static, 289, 340},	//340 QGlobalSpace::operator+(const QByteArray&, char)
    {26, 205, 784, 2, Smoke::mf_static, 21, 341},	//341 QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    {26, 199, 398, 2, Smoke::mf_static, 324, 342},	//342 QGlobalSpace::operator/(const QPointF&, double)
    {26, 359, 372, 1, Smoke::mf_static, 9, 343},	//343 QGlobalSpace::qUncompress(const QByteArray&)
    {26, 221, 359, 2, Smoke::mf_static, 284, 344},	//344 QGlobalSpace::operator>=(QChar, QChar)
    {26, 209, 112, 2, Smoke::mf_static, 284, 345},	//345 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {26, 348, 617, 1, Smoke::mf_static, 173, 346},	//346 QGlobalSpace::qSetRealNumberPrecision(int)
    {26, 205, 787, 2, Smoke::mf_static, 21, 347},	//347 QGlobalSpace::operator<<(QDebug, const QObject*)
    {26, 351, 16, 1, Smoke::mf_static, 359, 348},	//348 QGlobalSpace::qSin(double)
    {26, 246, 16, 1, Smoke::mf_static, 359, 349},	//349 QGlobalSpace::qAsin(double)
    {26, 382, 701, 2, Smoke::mf_static, 361, 350},	//350 QGlobalSpace::qstricmp(const char*, const char*)
    {26, 284, 790, 2, Smoke::mf_static, 284, 351},	//351 QGlobalSpace::qFuzzyCompare(float, float)
    {26, 225, 793, 2, Smoke::mf_static, 18, 352},	//352 QGlobalSpace::operator>>(QDataStream&, QFont&)
    {26, 231, 796, 2, Smoke::mf_static, 37, 353},	//353 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {26, 420, 799, 4, Smoke::mf_static, 361, 354},	//354 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {26, 231, 804, 2, Smoke::mf_static, 47, 355},	//355 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {26, 205, 807, 2, Smoke::mf_static, 18, 356},	//356 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {26, 411, 0, 0, Smoke::mf_static, 0, 357},	//357 QGlobalSpace::qt_noop()
    {26, 231, 810, 2, Smoke::mf_static, 42, 358},	//358 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    {26, 217, 317, 2, Smoke::mf_static, 284, 359},	//359 QGlobalSpace::operator>(const char*, const QByteArray&)
    {26, 225, 813, 2, Smoke::mf_static, 18, 360},	//360 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {26, 344, 617, 1, Smoke::mf_static, 173, 361},	//361 QGlobalSpace::qSetFieldWidth(int)
    {26, 231, 816, 2, Smoke::mf_static, 57, 362},	//362 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {26, 205, 819, 2, Smoke::mf_static, 21, 363},	//363 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {26, 205, 822, 2, Smoke::mf_static, 18, 364},	//364 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {26, 213, 731, 2, Smoke::mf_static, 284, 365},	//365 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {26, 180, 825, 2, Smoke::mf_static, 284, 366},	//366 QGlobalSpace::operator!=(bool, QBool)
    {26, 294, 828, 1, Smoke::mf_static, 369, 367},	//367 QGlobalSpace::qHash(unsigned long)
    {26, 205, 830, 2, Smoke::mf_static, 21, 368},	//368 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {26, 186, 833, 2, Smoke::mf_static, 131, 369},	//369 QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    {26, 180, 836, 2, Smoke::mf_static, 284, 370},	//370 QGlobalSpace::operator!=(QBool, bool)
    {26, 231, 839, 2, Smoke::mf_static, 95, 371},	//371 QGlobalSpace::operator|(Qt::WindowState, int)
    {26, 231, 842, 2, Smoke::mf_static, 56, 372},	//372 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    {26, 195, 537, 2, Smoke::mf_static, 322, 373},	//373 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {26, 312, 16, 1, Smoke::mf_static, 359, 374},	//374 QGlobalSpace::qLn(double)
    {26, 225, 845, 2, Smoke::mf_static, 18, 375},	//375 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {26, 384, 576, 1, Smoke::mf_static, 369, 376},	//376 QGlobalSpace::qstrlen(const char*)
    {26, 190, 250, 2, Smoke::mf_static, 289, 377},	//377 QGlobalSpace::operator+(const QByteArray&, const char*)
    {26, 205, 848, 2, Smoke::mf_static, 18, 378},	//378 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {26, 180, 109, 2, Smoke::mf_static, 284, 379},	//379 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {26, 209, 317, 2, Smoke::mf_static, 284, 380},	//380 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {26, 205, 851, 2, Smoke::mf_static, 18, 381},	//381 QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    {26, 231, 854, 2, Smoke::mf_static, 62, 382},	//382 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {26, 205, 857, 2, Smoke::mf_static, 21, 383},	//383 QGlobalSpace::operator<<(QDebug, const QMatrix&)
    {26, 213, 639, 2, Smoke::mf_static, 284, 384},	//384 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {26, 231, 860, 2, Smoke::mf_static, 44, 385},	//385 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {26, 205, 863, 2, Smoke::mf_static, 18, 386},	//386 QGlobalSpace::operator<<(QDataStream&, const QColor&)
    {26, 231, 866, 2, Smoke::mf_static, 76, 387},	//387 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {26, 186, 869, 2, Smoke::mf_static, 333, 388},	//388 QGlobalSpace::operator*(const QSize&, double)
    {26, 213, 872, 2, Smoke::mf_static, 284, 389},	//389 QGlobalSpace::operator==(QString::Null, const QString&)
    {26, 205, 875, 2, Smoke::mf_static, 21, 390},	//390 QGlobalSpace::operator<<(QDebug, const QBrush&)
    {26, 231, 878, 2, Smoke::mf_static, 37, 391},	//391 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {26, 231, 881, 2, Smoke::mf_static, 66, 392},	//392 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {26, 225, 884, 2, Smoke::mf_static, 18, 393},	//393 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {26, 205, 887, 2, Smoke::mf_static, 21, 394},	//394 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {26, 213, 250, 2, Smoke::mf_static, 284, 395},	//395 QGlobalSpace::operator==(const QByteArray&, const char*)
    {26, 414, 890, 5, Smoke::mf_static, 0, 396},	//396 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {26, 231, 896, 2, Smoke::mf_static, 51, 397},	//397 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    {26, 225, 899, 2, Smoke::mf_static, 18, 398},	//398 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {26, 205, 902, 2, Smoke::mf_static, 18, 399},	//399 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {26, 225, 905, 2, Smoke::mf_static, 18, 400},	//400 QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    {26, 217, 250, 2, Smoke::mf_static, 284, 401},	//401 QGlobalSpace::operator>(const QByteArray&, const char*)
    {26, 190, 537, 2, Smoke::mf_static, 322, 402},	//402 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {26, 205, 908, 2, Smoke::mf_static, 18, 403},	//403 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {26, 280, 442, 1, Smoke::mf_static, 0, 404},	//404 QGlobalSpace::qFree(void*)
    {26, 209, 359, 2, Smoke::mf_static, 284, 405},	//405 QGlobalSpace::operator<=(QChar, QChar)
    {26, 205, 911, 2, Smoke::mf_static, 170, 406},	//406 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {26, 294, 107, 1, Smoke::mf_static, 369, 407},	//407 QGlobalSpace::qHash(unsigned int)
    {26, 186, 914, 2, Smoke::mf_static, 138, 408},	//408 QGlobalSpace::operator*(const QRegion&, const QTransform&)
    {26, 180, 872, 2, Smoke::mf_static, 284, 409},	//409 QGlobalSpace::operator!=(QString::Null, const QString&)
    {26, 341, 16, 1, Smoke::mf_static, 363, 410},	//410 QGlobalSpace::qRound64(double)
    {26, 231, 917, 2, Smoke::mf_static, 47, 411},	//411 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {26, 316, 920, 2, Smoke::mf_static, 376, 412},	//412 QGlobalSpace::qMallocAligned(size_t, size_t)
    {26, 231, 923, 2, Smoke::mf_static, 95, 413},	//413 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {26, 180, 447, 2, Smoke::mf_static, 284, 414},	//414 QGlobalSpace::operator!=(const QString&, QString::Null)
    {26, 259, 926, 3, Smoke::mf_static, 9, 415},	//415 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {26, 259, 930, 2, Smoke::mf_static, 9, 416},	//416 QGlobalSpace::qCompress(const unsigned char*, int)
    {26, 231, 933, 2, Smoke::mf_static, 95, 417},	//417 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {26, 186, 936, 2, Smoke::mf_static, 322, 418},	//418 QGlobalSpace::operator*(int, const QPoint&)
    {26, 205, 939, 2, Smoke::mf_static, 21, 419},	//419 QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    {26, 380, 576, 1, Smoke::mf_static, 286, 420},	//420 QGlobalSpace::qstrdup(const char*)
    {26, 231, 942, 2, Smoke::mf_static, 64, 421},	//421 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {26, 186, 945, 2, Smoke::mf_static, 133, 422},	//422 QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    {26, 267, 0, 0, Smoke::mf_static, 21, 423},	//423 QGlobalSpace::qDebug()
    {26, 195, 948, 1, Smoke::mf_static, 322, 424},	//424 QGlobalSpace::operator-(const QPoint&)
    {26, 225, 950, 2, Smoke::mf_static, 18, 425},	//425 QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    {26, 231, 953, 2, Smoke::mf_static, 46, 426},	//426 QGlobalSpace::operator|(QSql::ParamTypeFlag, QFlags<QSql::ParamTypeFlag>)
    {26, 373, 317, 2, Smoke::mf_static, 361, 427},	//427 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {26, 357, 16, 1, Smoke::mf_static, 359, 428},	//428 QGlobalSpace::qTan(double)
    {26, 225, 956, 2, Smoke::mf_static, 18, 429},	//429 QGlobalSpace::operator>>(QDataStream&, QString&)
    {26, 213, 112, 2, Smoke::mf_static, 284, 430},	//430 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {26, 231, 959, 2, Smoke::mf_static, 42, 431},	//431 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    {26, 205, 962, 2, Smoke::mf_static, 18, 432},	//432 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {26, 294, 617, 1, Smoke::mf_static, 369, 433},	//433 QGlobalSpace::qHash(int)
    {26, 195, 335, 2, Smoke::mf_static, 324, 434},	//434 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {26, 205, 965, 2, Smoke::mf_static, 18, 435},	//435 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {26, 225, 968, 2, Smoke::mf_static, 18, 436},	//436 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {26, 190, 338, 2, Smoke::mf_static, 176, 437},	//437 QGlobalSpace::operator+(const QTransform&, double)
    {26, 231, 971, 2, Smoke::mf_static, 48, 438},	//438 QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    {26, 294, 974, 1, Smoke::mf_static, 369, 439},	//439 QGlobalSpace::qHash(const QItemSelectionRange&)
    {26, 231, 976, 2, Smoke::mf_static, 72, 440},	//440 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {26, 322, 323, 2, Smoke::mf_static, 359, 441},	//441 QGlobalSpace::qPow(double, double)
    {26, 213, 462, 2, Smoke::mf_static, 284, 442},	//442 QGlobalSpace::operator==(const QStringRef&, const char*)
    {26, 180, 651, 2, Smoke::mf_static, 284, 443},	//443 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {26, 225, 979, 2, Smoke::mf_static, 18, 444},	//444 QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    {26, 190, 112, 2, Smoke::mf_static, 289, 445},	//445 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {26, 231, 982, 2, Smoke::mf_static, 39, 446},	//446 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {26, 225, 985, 2, Smoke::mf_static, 18, 447},	//447 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {26, 231, 988, 2, Smoke::mf_static, 95, 448},	//448 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {26, 405, 991, 2, Smoke::mf_static, 0, 449},	//449 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {26, 205, 994, 2, Smoke::mf_static, 21, 450},	//450 QGlobalSpace::operator<<(QDebug, const QSqlError&)
    {26, 231, 997, 2, Smoke::mf_static, 95, 451},	//451 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {26, 231, 1000, 2, Smoke::mf_static, 50, 452},	//452 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    {26, 205, 1003, 2, Smoke::mf_static, 21, 453},	//453 QGlobalSpace::operator<<(QDebug, const QRect&)
    {26, 272, 16, 1, Smoke::mf_static, 359, 454},	//454 QGlobalSpace::qFastCos(double)
    {26, 205, 1006, 2, Smoke::mf_static, 18, 455},	//455 QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    {26, 205, 1009, 2, Smoke::mf_static, 18, 456},	//456 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {26, 231, 1012, 2, Smoke::mf_static, 95, 457},	//457 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    {26, 199, 869, 2, Smoke::mf_static, 333, 458},	//458 QGlobalSpace::operator/(const QSize&, double)
    {26, 225, 1015, 2, Smoke::mf_static, 18, 459},	//459 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {26, 225, 1018, 2, Smoke::mf_static, 18, 460},	//460 QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    {26, 213, 825, 2, Smoke::mf_static, 284, 461},	//461 QGlobalSpace::operator==(bool, QBool)
    {26, 231, 1021, 2, Smoke::mf_static, 74, 462},	//462 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {26, 231, 1024, 2, Smoke::mf_static, 95, 463},	//463 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {26, 186, 1027, 2, Smoke::mf_static, 127, 464},	//464 QGlobalSpace::operator*(const QPoint&, const QTransform&)
    {26, 231, 1030, 2, Smoke::mf_static, 95, 465},	//465 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    {26, 231, 1033, 2, Smoke::mf_static, 54, 466},	//466 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    {26, 294, 1036, 1, Smoke::mf_static, 369, 467},	//467 QGlobalSpace::qHash(char)
    {26, 205, 1038, 2, Smoke::mf_static, 18, 468},	//468 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {26, 253, 107, 1, Smoke::mf_static, 361, 469},	//469 QGlobalSpace::qBlue(unsigned int)
    {26, 225, 1041, 2, Smoke::mf_static, 18, 470},	//470 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {26, 180, 335, 2, Smoke::mf_static, 284, 471},	//471 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {26, 302, 16, 1, Smoke::mf_static, 284, 472},	//472 QGlobalSpace::qIsFinite(double)
    {26, 186, 1044, 2, Smoke::mf_static, 322, 473},	//473 QGlobalSpace::operator*(const QPoint&, int)
    {26, 231, 1047, 2, Smoke::mf_static, 65, 474},	//474 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {26, 195, 66, 2, Smoke::mf_static, 333, 475},	//475 QGlobalSpace::operator-(const QSize&, const QSize&)
    {26, 343, 0, 0, Smoke::mf_static, 359, 476},	//476 QGlobalSpace::qSNaN()
    {26, 231, 1050, 2, Smoke::mf_static, 51, 477},	//477 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    {26, 287, 230, 1, Smoke::mf_static, 284, 478},	//478 QGlobalSpace::qFuzzyIsNull(float)
    {26, 231, 1053, 2, Smoke::mf_static, 63, 479},	//479 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {26, 359, 930, 2, Smoke::mf_static, 9, 480},	//480 QGlobalSpace::qUncompress(const unsigned char*, int)
    {26, 231, 1056, 2, Smoke::mf_static, 63, 481},	//481 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {26, 231, 1059, 2, Smoke::mf_static, 95, 482},	//482 QGlobalSpace::operator|(Qt::Orientation, int)
    {26, 274, 16, 1, Smoke::mf_static, 359, 483},	//483 QGlobalSpace::qFastSin(double)
    {26, 205, 1062, 2, Smoke::mf_static, 21, 484},	//484 QGlobalSpace::operator<<(QDebug, const QDir&)
    {26, 190, 335, 2, Smoke::mf_static, 324, 485},	//485 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {26, 186, 1065, 2, Smoke::mf_static, 138, 486},	//486 QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    {26, 213, 836, 2, Smoke::mf_static, 284, 487},	//487 QGlobalSpace::operator==(QBool, bool)
    {26, 213, 63, 2, Smoke::mf_static, 284, 488},	//488 QGlobalSpace::operator==(const QRect&, const QRect&)
    {26, 205, 1068, 2, Smoke::mf_static, 21, 489},	//489 QGlobalSpace::operator<<(QDebug, const QRegion&)
    {26, 186, 1071, 2, Smoke::mf_static, 322, 490},	//490 QGlobalSpace::operator*(float, const QPoint&)
    {26, 394, 383, 2, Smoke::mf_static, 151, 491},	//491 QGlobalSpace::qtTrId(const char*, int)
    {26, 394, 576, 1, Smoke::mf_static, 151, 492},	//492 QGlobalSpace::qtTrId(const char*)
    {26, 225, 1074, 2, Smoke::mf_static, 18, 493},	//493 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {26, 231, 1077, 2, Smoke::mf_static, 43, 494},	//494 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {26, 190, 1080, 2, Smoke::mf_static, 342, 495},	//495 QGlobalSpace::operator+(const QString&, QChar)
    {26, 252, 0, 0, Smoke::mf_static, 0, 496},	//496 QGlobalSpace::qBadAlloc()
    {26, 180, 141, 2, Smoke::mf_static, 284, 497},	//497 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {26, 337, 1083, 4, Smoke::mf_static, 369, 498},	//498 QGlobalSpace::qRgba(int, int, int, int)
    {26, 231, 1088, 2, Smoke::mf_static, 71, 499},	//499 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {26, 231, 1091, 2, Smoke::mf_static, 54, 500},	//500 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    {26, 180, 127, 2, Smoke::mf_static, 284, 501},	//501 QGlobalSpace::operator!=(QBool, QBool)
    {26, 205, 581, 2, Smoke::mf_static, 170, 502},	//502 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {26, 314, 1094, 1, Smoke::mf_static, 376, 503},	//503 QGlobalSpace::qMalloc(size_t)
    {26, 205, 1096, 2, Smoke::mf_static, 21, 504},	//504 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {26, 213, 684, 2, Smoke::mf_static, 284, 505},	//505 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {26, 195, 338, 2, Smoke::mf_static, 176, 506},	//506 QGlobalSpace::operator-(const QTransform&, double)
    {26, 231, 1099, 2, Smoke::mf_static, 44, 507},	//507 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {26, 205, 1102, 2, Smoke::mf_static, 18, 508},	//508 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {26, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 362, 509},	//509 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {26, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 362, 510},	//510 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {26, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 362, 511},	//511 QGlobalSpace::Q_STATIC_TYPE (enum)
    {26, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 362, 512},	//512 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {26, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 362, 513},	//513 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {26, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 281, 514},	//514 QGlobalSpace::LicensedXml (enum)
    {26, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 263, 515},	//515 QGlobalSpace::QtDebugMsg (enum)
    {26, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 263, 516},	//516 QGlobalSpace::QtWarningMsg (enum)
    {26, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 263, 517},	//517 QGlobalSpace::QtCriticalMsg (enum)
    {26, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 263, 518},	//518 QGlobalSpace::QtFatalMsg (enum)
    {26, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 263, 519},	//519 QGlobalSpace::QtSystemMsg (enum)
    {26, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 272, 520},	//520 QGlobalSpace::LicensedOpenGL (enum)
    {26, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 275, 521},	//521 QGlobalSpace::LicensedQt3Support (enum)
    {26, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 273, 522},	//522 QGlobalSpace::LicensedOpenVG (enum)
    {26, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 271, 523},	//523 QGlobalSpace::LicensedNetwork (enum)
    {26, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 278, 524},	//524 QGlobalSpace::LicensedSql (enum)
    {26, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 265, 525},	//525 QGlobalSpace::LicensedCore (enum)
    {26, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 279, 526},	//526 QGlobalSpace::LicensedSvg (enum)
    {26, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 282, 527},	//527 QGlobalSpace::LicensedXmlPatterns (enum)
    {26, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 268, 528},	//528 QGlobalSpace::LicensedGui (enum)
    {26, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 267, 529},	//529 QGlobalSpace::LicensedDeclarative (enum)
    {26, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 264, 530},	//530 QGlobalSpace::LicensedActiveQt (enum)
    {26, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 266, 531},	//531 QGlobalSpace::LicensedDBus (enum)
    {26, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 280, 532},	//532 QGlobalSpace::LicensedTest (enum)
    {26, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 277, 533},	//533 QGlobalSpace::LicensedScriptTools (enum)
    {26, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 274, 534},	//534 QGlobalSpace::LicensedQt3SupportLight (enum)
    {26, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 276, 535},	//535 QGlobalSpace::LicensedScript (enum)
    {26, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 270, 536},	//536 QGlobalSpace::LicensedMultimedia (enum)
    {26, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 269, 537},	//537 QGlobalSpace::LicensedHelp (enum)
    {28, 62, 617, 1, Smoke::mf_const, 79, 1},	//538 QHelpContentItem::child(int) const
    {28, 64, 0, 0, Smoke::mf_const, 361, 2},	//539 QHelpContentItem::childCount() const
    {28, 468, 0, 0, Smoke::mf_const, 151, 3},	//540 QHelpContentItem::title() const
    {28, 479, 0, 0, Smoke::mf_const, 178, 4},	//541 QHelpContentItem::url() const
    {28, 435, 0, 0, Smoke::mf_const, 361, 5},	//542 QHelpContentItem::row() const
    {28, 237, 0, 0, Smoke::mf_const, 79, 6},	//543 QHelpContentItem::parent() const
    {28, 66, 1105, 1, Smoke::mf_const, 361, 7},	//544 QHelpContentItem::childPosition(QHelpContentItem*) const
    {28, 28, 1107, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 79, 8},	//545 QHelpContentItem::QHelpContentItem(const QHelpContentItem&)
    {28, 486, 0, 0, Smoke::mf_dtor, 0, 9 },	//546 QHelpContentItem::~QHelpContentItem()
    {29, 170, 0, 0, Smoke::mf_const, 315, 1},	//547 QHelpContentModel::metaObject() const
    {29, 409, 576, 1, 0, 376, 2},	//548 QHelpContentModel::qt_metacast(const char*)
    {29, 469, 701, 2, Smoke::mf_static, 151, 3},	//549 QHelpContentModel::tr(const char*, const char*)
    {29, 473, 701, 2, Smoke::mf_static, 151, 4},	//550 QHelpContentModel::trUtf8(const char*, const char*)
    {29, 469, 9, 3, Smoke::mf_static, 151, 5},	//551 QHelpContentModel::tr(const char*, const char*, int)
    {29, 473, 9, 3, Smoke::mf_static, 151, 6},	//552 QHelpContentModel::trUtf8(const char*, const char*, int)
    {29, 407, 1109, 3, 0, 361, 7},	//553 QHelpContentModel::qt_metacall(QMetaObject::Call, int, void**)
    {29, 83, 199, 1, 0, 0, 8},	//554 QHelpContentModel::createContents(const QString&)
    {29, 74, 740, 1, Smoke::mf_const, 79, 9},	//555 QHelpContentModel::contentItemAt(const QModelIndex&) const
    {29, 95, 1113, 2, Smoke::mf_const, 182, 10},	//556 QHelpContentModel::data(const QModelIndex&, int) const
    {29, 138, 1116, 3, Smoke::mf_const, 115, 11},	//557 QHelpContentModel::index(int, int, const QModelIndex&) const
    {29, 237, 740, 1, Smoke::mf_const, 115, 12},	//558 QHelpContentModel::parent(const QModelIndex&) const
    {29, 436, 740, 1, Smoke::mf_const, 361, 13},	//559 QHelpContentModel::rowCount(const QModelIndex&) const
    {29, 71, 740, 1, Smoke::mf_const, 361, 14},	//560 QHelpContentModel::columnCount(const QModelIndex&) const
    {29, 151, 0, 0, Smoke::mf_const, 284, 15},	//561 QHelpContentModel::isCreatingContents() const
    {29, 79, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 16},	//562 QHelpContentModel::contentsCreationStarted()
    {29, 78, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 17},	//563 QHelpContentModel::contentsCreated()
    {29, 469, 576, 1, Smoke::mf_static, 151, 18},	//564 QHelpContentModel::tr(const char*)
    {29, 473, 576, 1, Smoke::mf_static, 151, 19},	//565 QHelpContentModel::trUtf8(const char*)
    {29, 138, 1120, 2, Smoke::mf_const, 115, 20},	//566 QHelpContentModel::index(int, int) const
    {29, 436, 0, 0, Smoke::mf_const, 361, 21},	//567 QHelpContentModel::rowCount() const
    {29, 71, 0, 0, Smoke::mf_const, 361, 22},	//568 QHelpContentModel::columnCount() const
    {29, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 23},	//569 QHelpContentModel::staticMetaObject() const
    {29, 487, 0, 0, Smoke::mf_dtor, 0, 24 },	//570 QHelpContentModel::~QHelpContentModel()
    {30, 170, 0, 0, Smoke::mf_const, 315, 1},	//571 QHelpContentWidget::metaObject() const
    {30, 409, 576, 1, 0, 376, 2},	//572 QHelpContentWidget::qt_metacast(const char*)
    {30, 469, 701, 2, Smoke::mf_static, 151, 3},	//573 QHelpContentWidget::tr(const char*, const char*)
    {30, 473, 701, 2, Smoke::mf_static, 151, 4},	//574 QHelpContentWidget::trUtf8(const char*, const char*)
    {30, 469, 9, 3, Smoke::mf_static, 151, 5},	//575 QHelpContentWidget::tr(const char*, const char*, int)
    {30, 473, 9, 3, Smoke::mf_static, 151, 6},	//576 QHelpContentWidget::trUtf8(const char*, const char*, int)
    {30, 407, 1109, 3, 0, 361, 7},	//577 QHelpContentWidget::qt_metacall(QMetaObject::Call, int, void**)
    {30, 144, 615, 1, 0, 115, 8},	//578 QHelpContentWidget::indexOf(const QUrl&)
    {30, 157, 615, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 9},	//579 QHelpContentWidget::linkActivated(const QUrl&)
    {30, 469, 576, 1, Smoke::mf_static, 151, 10},	//580 QHelpContentWidget::tr(const char*)
    {30, 473, 576, 1, Smoke::mf_static, 151, 11},	//581 QHelpContentWidget::trUtf8(const char*)
    {30, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 12},	//582 QHelpContentWidget::staticMetaObject() const
    {30, 488, 0, 0, Smoke::mf_dtor, 0, 13 },	//583 QHelpContentWidget::~QHelpContentWidget()
    {31, 170, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 315, 1},	//584 QHelpEngine::metaObject() const
    {31, 409, 576, 1, Smoke::mf_virtual, 376, 2},	//585 QHelpEngine::qt_metacast(const char*)
    {31, 469, 701, 2, Smoke::mf_static, 151, 3},	//586 QHelpEngine::tr(const char*, const char*)
    {31, 473, 701, 2, Smoke::mf_static, 151, 4},	//587 QHelpEngine::trUtf8(const char*, const char*)
    {31, 469, 9, 3, Smoke::mf_static, 151, 5},	//588 QHelpEngine::tr(const char*, const char*, int)
    {31, 473, 9, 3, Smoke::mf_static, 151, 6},	//589 QHelpEngine::trUtf8(const char*, const char*, int)
    {31, 407, 1109, 3, Smoke::mf_virtual, 361, 7},	//590 QHelpEngine::qt_metacall(QMetaObject::Call, int, void**)
    {31, 30, 1123, 2, Smoke::mf_ctor, 82, 8},	//591 QHelpEngine::QHelpEngine(const QString&, QObject*)
    {31, 76, 0, 0, Smoke::mf_const, 80, 9},	//592 QHelpEngine::contentModel() const
    {31, 143, 0, 0, Smoke::mf_const, 84, 10},	//593 QHelpEngine::indexModel() const
    {31, 77, 0, 0, 0, 81, 11},	//594 QHelpEngine::contentWidget()
    {31, 146, 0, 0, 0, 85, 12},	//595 QHelpEngine::indexWidget()
    {31, 440, 0, 0, 0, 86, 13},	//596 QHelpEngine::searchEngine()
    {31, 469, 576, 1, Smoke::mf_static, 151, 14},	//597 QHelpEngine::tr(const char*)
    {31, 473, 576, 1, Smoke::mf_static, 151, 15},	//598 QHelpEngine::trUtf8(const char*)
    {31, 30, 199, 1, Smoke::mf_ctor, 82, 16},	//599 QHelpEngine::QHelpEngine(const QString&)
    {31, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 17},	//600 QHelpEngine::staticMetaObject() const
    {31, 489, 0, 0, Smoke::mf_dtor, 0, 18 },	//601 QHelpEngine::~QHelpEngine()
    {32, 170, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 315, 1},	//602 QHelpEngineCore::metaObject() const
    {32, 409, 576, 1, Smoke::mf_virtual, 376, 2},	//603 QHelpEngineCore::qt_metacast(const char*)
    {32, 469, 701, 2, Smoke::mf_static, 151, 3},	//604 QHelpEngineCore::tr(const char*, const char*)
    {32, 473, 701, 2, Smoke::mf_static, 151, 4},	//605 QHelpEngineCore::trUtf8(const char*, const char*)
    {32, 469, 9, 3, Smoke::mf_static, 151, 5},	//606 QHelpEngineCore::tr(const char*, const char*, int)
    {32, 473, 9, 3, Smoke::mf_static, 151, 6},	//607 QHelpEngineCore::trUtf8(const char*, const char*, int)
    {32, 407, 1109, 3, Smoke::mf_virtual, 361, 7},	//608 QHelpEngineCore::qt_metacall(QMetaObject::Call, int, void**)
    {32, 33, 1123, 2, Smoke::mf_ctor, 83, 8},	//609 QHelpEngineCore::QHelpEngineCore(const QString&, QObject*)
    {32, 459, 0, 0, 0, 284, 9},	//610 QHelpEngineCore::setupData()
    {32, 70, 0, 0, Smoke::mf_const|Smoke::mf_property, 151, 10},	//611 QHelpEngineCore::collectionFile() const
    {32, 446, 199, 1, Smoke::mf_property, 0, 11},	//612 QHelpEngineCore::setCollectionFile(const QString&)
    {32, 81, 199, 1, 0, 284, 12},	//613 QHelpEngineCore::copyCollectionFile(const QString&)
    {32, 178, 199, 1, Smoke::mf_static, 151, 13},	//614 QHelpEngineCore::namespaceName(const QString&)
    {32, 423, 199, 1, 0, 284, 14},	//615 QHelpEngineCore::registerDocumentation(const QString&)
    {32, 477, 199, 1, 0, 284, 15},	//616 QHelpEngineCore::unregisterDocumentation(const QString&)
    {32, 99, 199, 1, 0, 151, 16},	//617 QHelpEngineCore::documentationFileName(const QString&)
    {32, 91, 0, 0, Smoke::mf_const, 155, 17},	//618 QHelpEngineCore::customFilters() const
    {32, 427, 199, 1, 0, 284, 18},	//619 QHelpEngineCore::removeCustomFilter(const QString&)
    {32, 57, 1126, 2, 0, 284, 19},	//620 QHelpEngineCore::addCustomFilter(const QString&, const QStringList&)
    {32, 122, 0, 0, Smoke::mf_const, 155, 20},	//621 QHelpEngineCore::filterAttributes() const
    {32, 122, 199, 1, Smoke::mf_const, 155, 21},	//622 QHelpEngineCore::filterAttributes(const QString&) const
    {32, 87, 0, 0, Smoke::mf_const|Smoke::mf_property, 151, 22},	//623 QHelpEngineCore::currentFilter() const
    {32, 448, 199, 1, Smoke::mf_property, 0, 23},	//624 QHelpEngineCore::setCurrentFilter(const QString&)
    {32, 425, 0, 0, Smoke::mf_const, 155, 24},	//625 QHelpEngineCore::registeredDocumentations() const
    {32, 120, 199, 1, Smoke::mf_const, 107, 25},	//626 QHelpEngineCore::filterAttributeSets(const QString&) const
    {32, 114, 1129, 3, 0, 108, 26},	//627 QHelpEngineCore::files(const QString, const QStringList&, const QString&)
    {32, 127, 615, 1, Smoke::mf_const, 178, 27},	//628 QHelpEngineCore::findFile(const QUrl&) const
    {32, 112, 615, 1, Smoke::mf_const, 9, 28},	//629 QHelpEngineCore::fileData(const QUrl&) const
    {32, 164, 199, 1, Smoke::mf_const, 112, 29},	//630 QHelpEngineCore::linksForIdentifier(const QString&) const
    {32, 429, 199, 1, 0, 284, 30},	//631 QHelpEngineCore::removeCustomValue(const QString&)
    {32, 92, 1133, 2, Smoke::mf_const, 182, 31},	//632 QHelpEngineCore::customValue(const QString&, const QVariant&) const
    {32, 450, 1133, 2, 0, 284, 32},	//633 QHelpEngineCore::setCustomValue(const QString&, const QVariant&)
    {32, 168, 628, 2, Smoke::mf_static, 182, 33},	//634 QHelpEngineCore::metaData(const QString&, const QString&)
    {32, 107, 0, 0, Smoke::mf_const, 151, 34},	//635 QHelpEngineCore::error() const
    {32, 444, 1136, 1, Smoke::mf_property, 0, 35},	//636 QHelpEngineCore::setAutoSaveFilter(bool)
    {32, 59, 0, 0, Smoke::mf_const|Smoke::mf_property, 284, 36},	//637 QHelpEngineCore::autoSaveFilter() const
    {32, 461, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 37},	//638 QHelpEngineCore::setupStarted()
    {32, 460, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 38},	//639 QHelpEngineCore::setupFinished()
    {32, 88, 199, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 39},	//640 QHelpEngineCore::currentFilterChanged(const QString&)
    {32, 480, 199, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 40},	//641 QHelpEngineCore::warning(const QString&)
    {32, 422, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 41},	//642 QHelpEngineCore::readersAboutToBeInvalidated()
    {32, 469, 576, 1, Smoke::mf_static, 151, 42},	//643 QHelpEngineCore::tr(const char*)
    {32, 473, 576, 1, Smoke::mf_static, 151, 43},	//644 QHelpEngineCore::trUtf8(const char*)
    {32, 33, 199, 1, Smoke::mf_ctor, 83, 44},	//645 QHelpEngineCore::QHelpEngineCore(const QString&)
    {32, 114, 1138, 2, 0, 108, 45},	//646 QHelpEngineCore::files(const QString, const QStringList&)
    {32, 92, 199, 1, Smoke::mf_const, 182, 46},	//647 QHelpEngineCore::customValue(const QString&) const
    {32, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 47},	//648 QHelpEngineCore::staticMetaObject() const
    {32, 490, 0, 0, Smoke::mf_dtor, 0, 48 },	//649 QHelpEngineCore::~QHelpEngineCore()
    {33, 170, 0, 0, Smoke::mf_const, 315, 1},	//650 QHelpIndexModel::metaObject() const
    {33, 409, 576, 1, 0, 376, 2},	//651 QHelpIndexModel::qt_metacast(const char*)
    {33, 469, 701, 2, Smoke::mf_static, 151, 3},	//652 QHelpIndexModel::tr(const char*, const char*)
    {33, 473, 701, 2, Smoke::mf_static, 151, 4},	//653 QHelpIndexModel::trUtf8(const char*, const char*)
    {33, 469, 9, 3, Smoke::mf_static, 151, 5},	//654 QHelpIndexModel::tr(const char*, const char*, int)
    {33, 473, 9, 3, Smoke::mf_static, 151, 6},	//655 QHelpIndexModel::trUtf8(const char*, const char*, int)
    {33, 407, 1109, 3, 0, 361, 7},	//656 QHelpIndexModel::qt_metacall(QMetaObject::Call, int, void**)
    {33, 85, 199, 1, 0, 0, 8},	//657 QHelpIndexModel::createIndex(const QString&)
    {33, 117, 628, 2, 0, 115, 9},	//658 QHelpIndexModel::filter(const QString&, const QString&)
    {33, 166, 199, 1, Smoke::mf_const, 112, 10},	//659 QHelpIndexModel::linksForKeyword(const QString&) const
    {33, 152, 0, 0, Smoke::mf_const, 284, 11},	//660 QHelpIndexModel::isCreatingIndex() const
    {33, 142, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 12},	//661 QHelpIndexModel::indexCreationStarted()
    {33, 141, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 13},	//662 QHelpIndexModel::indexCreated()
    {33, 469, 576, 1, Smoke::mf_static, 151, 14},	//663 QHelpIndexModel::tr(const char*)
    {33, 473, 576, 1, Smoke::mf_static, 151, 15},	//664 QHelpIndexModel::trUtf8(const char*)
    {33, 117, 199, 1, 0, 115, 16},	//665 QHelpIndexModel::filter(const QString&)
    {33, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 17},	//666 QHelpIndexModel::staticMetaObject() const
    {34, 170, 0, 0, Smoke::mf_const, 315, 1},	//667 QHelpIndexWidget::metaObject() const
    {34, 409, 576, 1, 0, 376, 2},	//668 QHelpIndexWidget::qt_metacast(const char*)
    {34, 469, 701, 2, Smoke::mf_static, 151, 3},	//669 QHelpIndexWidget::tr(const char*, const char*)
    {34, 473, 701, 2, Smoke::mf_static, 151, 4},	//670 QHelpIndexWidget::trUtf8(const char*, const char*)
    {34, 469, 9, 3, Smoke::mf_static, 151, 5},	//671 QHelpIndexWidget::tr(const char*, const char*, int)
    {34, 473, 9, 3, Smoke::mf_static, 151, 6},	//672 QHelpIndexWidget::trUtf8(const char*, const char*, int)
    {34, 407, 1109, 3, 0, 361, 7},	//673 QHelpIndexWidget::qt_metacall(QMetaObject::Call, int, void**)
    {34, 157, 1141, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 8},	//674 QHelpIndexWidget::linkActivated(const QUrl&, const QString&)
    {34, 162, 1144, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 9},	//675 QHelpIndexWidget::linksActivated(const QMap<QString,QUrl>&, const QString&)
    {34, 124, 628, 2, Smoke::mf_slot, 0, 10},	//676 QHelpIndexWidget::filterIndices(const QString&, const QString&)
    {34, 56, 0, 0, Smoke::mf_slot, 0, 11},	//677 QHelpIndexWidget::activateCurrentItem()
    {34, 469, 576, 1, Smoke::mf_static, 151, 12},	//678 QHelpIndexWidget::tr(const char*)
    {34, 473, 576, 1, Smoke::mf_static, 151, 13},	//679 QHelpIndexWidget::trUtf8(const char*)
    {34, 124, 199, 1, Smoke::mf_slot, 0, 14},	//680 QHelpIndexWidget::filterIndices(const QString&)
    {34, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 15},	//681 QHelpIndexWidget::staticMetaObject() const
    {34, 491, 0, 0, Smoke::mf_dtor, 0, 16 },	//682 QHelpIndexWidget::~QHelpIndexWidget()
    {35, 170, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 315, 1},	//683 QHelpSearchEngine::metaObject() const
    {35, 409, 576, 1, Smoke::mf_virtual, 376, 2},	//684 QHelpSearchEngine::qt_metacast(const char*)
    {35, 469, 701, 2, Smoke::mf_static, 151, 3},	//685 QHelpSearchEngine::tr(const char*, const char*)
    {35, 473, 701, 2, Smoke::mf_static, 151, 4},	//686 QHelpSearchEngine::trUtf8(const char*, const char*)
    {35, 469, 9, 3, Smoke::mf_static, 151, 5},	//687 QHelpSearchEngine::tr(const char*, const char*, int)
    {35, 473, 9, 3, Smoke::mf_static, 151, 6},	//688 QHelpSearchEngine::trUtf8(const char*, const char*, int)
    {35, 407, 1109, 3, Smoke::mf_virtual, 361, 7},	//689 QHelpSearchEngine::qt_metacall(QMetaObject::Call, int, void**)
    {35, 36, 1147, 2, Smoke::mf_ctor, 86, 8},	//690 QHelpSearchEngine::QHelpSearchEngine(QHelpEngineCore*, QObject*)
    {35, 417, 0, 0, 0, 89, 9},	//691 QHelpSearchEngine::queryWidget()
    {35, 434, 0, 0, 0, 90, 10},	//692 QHelpSearchEngine::resultWidget()
    {35, 137, 0, 0, Smoke::mf_const, 361, 11},	//693 QHelpSearchEngine::hitsCount() const
    {35, 134, 0, 0, Smoke::mf_const, 361, 12},	//694 QHelpSearchEngine::hitCount() const
    {35, 135, 1120, 2, Smoke::mf_const, 106, 13},	//695 QHelpSearchEngine::hits(int, int) const
    {35, 416, 0, 0, Smoke::mf_const, 105, 14},	//696 QHelpSearchEngine::query() const
    {35, 426, 0, 0, Smoke::mf_slot, 0, 15},	//697 QHelpSearchEngine::reindexDocumentation()
    {35, 60, 0, 0, Smoke::mf_slot, 0, 16},	//698 QHelpSearchEngine::cancelIndexing()
    {35, 438, 1150, 1, Smoke::mf_slot, 0, 17},	//699 QHelpSearchEngine::search(const QList<QHelpSearchQuery>&)
    {35, 61, 0, 0, Smoke::mf_slot, 0, 18},	//700 QHelpSearchEngine::cancelSearching()
    {35, 148, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 19},	//701 QHelpSearchEngine::indexingStarted()
    {35, 147, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 20},	//702 QHelpSearchEngine::indexingFinished()
    {35, 443, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 21},	//703 QHelpSearchEngine::searchingStarted()
    {35, 441, 617, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 22},	//704 QHelpSearchEngine::searchingFinished(int)
    {35, 469, 576, 1, Smoke::mf_static, 151, 23},	//705 QHelpSearchEngine::tr(const char*)
    {35, 473, 576, 1, Smoke::mf_static, 151, 24},	//706 QHelpSearchEngine::trUtf8(const char*)
    {35, 36, 1152, 1, Smoke::mf_ctor, 86, 25},	//707 QHelpSearchEngine::QHelpSearchEngine(QHelpEngineCore*)
    {35, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 26},	//708 QHelpSearchEngine::staticMetaObject() const
    {35, 492, 0, 0, Smoke::mf_dtor, 0, 27 },	//709 QHelpSearchEngine::~QHelpSearchEngine()
    {36, 39, 0, 0, Smoke::mf_ctor, 87, 1},	//710 QHelpSearchQuery::QHelpSearchQuery()
    {36, 39, 1154, 2, Smoke::mf_ctor, 87, 2},	//711 QHelpSearchQuery::QHelpSearchQuery(QHelpSearchQuery::FieldName, const QStringList&)
    {36, 39, 1157, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 87, 3},	//712 QHelpSearchQuery::QHelpSearchQuery(const QHelpSearchQuery&)
    {36, 111, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 88, 4},	//713 QHelpSearchQuery::fieldName() const
    {36, 452, 1159, 1, Smoke::mf_attribute, 0, 5},	//714 QHelpSearchQuery::setFieldName(QHelpSearchQuery::FieldName)
    {36, 484, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 156, 6},	//715 QHelpSearchQuery::wordList() const
    {36, 457, 1161, 1, Smoke::mf_attribute, 0, 7},	//716 QHelpSearchQuery::setWordList(const QStringList&)
    {36, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 8},	//717 QHelpSearchQuery::DEFAULT (enum)
    {36, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 9},	//718 QHelpSearchQuery::FUZZY (enum)
    {36, 54, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 10},	//719 QHelpSearchQuery::WITHOUT (enum)
    {36, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 11},	//720 QHelpSearchQuery::PHRASE (enum)
    {36, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 12},	//721 QHelpSearchQuery::ALL (enum)
    {36, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 13},	//722 QHelpSearchQuery::ATLEAST (enum)
    {36, 493, 0, 0, Smoke::mf_dtor, 0, 14 },	//723 QHelpSearchQuery::~QHelpSearchQuery()
    {37, 170, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 315, 1},	//724 QHelpSearchQueryWidget::metaObject() const
    {37, 409, 576, 1, Smoke::mf_virtual, 376, 2},	//725 QHelpSearchQueryWidget::qt_metacast(const char*)
    {37, 469, 701, 2, Smoke::mf_static, 151, 3},	//726 QHelpSearchQueryWidget::tr(const char*, const char*)
    {37, 473, 701, 2, Smoke::mf_static, 151, 4},	//727 QHelpSearchQueryWidget::trUtf8(const char*, const char*)
    {37, 469, 9, 3, Smoke::mf_static, 151, 5},	//728 QHelpSearchQueryWidget::tr(const char*, const char*, int)
    {37, 473, 9, 3, Smoke::mf_static, 151, 6},	//729 QHelpSearchQueryWidget::trUtf8(const char*, const char*, int)
    {37, 407, 1109, 3, Smoke::mf_virtual, 361, 7},	//730 QHelpSearchQueryWidget::qt_metacall(QMetaObject::Call, int, void**)
    {37, 42, 1163, 1, Smoke::mf_ctor, 89, 8},	//731 QHelpSearchQueryWidget::QHelpSearchQueryWidget(QWidget*)
    {37, 110, 0, 0, 0, 0, 9},	//732 QHelpSearchQueryWidget::expandExtendedSearch()
    {37, 69, 0, 0, 0, 0, 10},	//733 QHelpSearchQueryWidget::collapseExtendedSearch()
    {37, 416, 0, 0, Smoke::mf_const, 105, 11},	//734 QHelpSearchQueryWidget::query() const
    {37, 454, 1150, 1, 0, 0, 12},	//735 QHelpSearchQueryWidget::setQuery(const QList<QHelpSearchQuery>&)
    {37, 438, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 13},	//736 QHelpSearchQueryWidget::search()
    {37, 469, 576, 1, Smoke::mf_static, 151, 14},	//737 QHelpSearchQueryWidget::tr(const char*)
    {37, 473, 576, 1, Smoke::mf_static, 151, 15},	//738 QHelpSearchQueryWidget::trUtf8(const char*)
    {37, 42, 0, 0, Smoke::mf_ctor, 89, 16},	//739 QHelpSearchQueryWidget::QHelpSearchQueryWidget()
    {37, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 17},	//740 QHelpSearchQueryWidget::staticMetaObject() const
    {37, 494, 0, 0, Smoke::mf_dtor, 0, 18 },	//741 QHelpSearchQueryWidget::~QHelpSearchQueryWidget()
    {38, 170, 0, 0, Smoke::mf_const, 315, 1},	//742 QHelpSearchResultWidget::metaObject() const
    {38, 409, 576, 1, 0, 376, 2},	//743 QHelpSearchResultWidget::qt_metacast(const char*)
    {38, 469, 701, 2, Smoke::mf_static, 151, 3},	//744 QHelpSearchResultWidget::tr(const char*, const char*)
    {38, 473, 701, 2, Smoke::mf_static, 151, 4},	//745 QHelpSearchResultWidget::trUtf8(const char*, const char*)
    {38, 469, 9, 3, Smoke::mf_static, 151, 5},	//746 QHelpSearchResultWidget::tr(const char*, const char*, int)
    {38, 473, 9, 3, Smoke::mf_static, 151, 6},	//747 QHelpSearchResultWidget::trUtf8(const char*, const char*, int)
    {38, 407, 1109, 3, 0, 361, 7},	//748 QHelpSearchResultWidget::qt_metacall(QMetaObject::Call, int, void**)
    {38, 160, 948, 1, 0, 178, 8},	//749 QHelpSearchResultWidget::linkAt(const QPoint&)
    {38, 431, 615, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 9},	//750 QHelpSearchResultWidget::requestShowLink(const QUrl&)
    {38, 469, 576, 1, Smoke::mf_static, 151, 10},	//751 QHelpSearchResultWidget::tr(const char*)
    {38, 473, 576, 1, Smoke::mf_static, 151, 11},	//752 QHelpSearchResultWidget::trUtf8(const char*)
    {38, 464, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 314, 12},	//753 QHelpSearchResultWidget::staticMetaObject() const
    {38, 495, 0, 0, Smoke::mf_dtor, 0, 13 },	//754 QHelpSearchResultWidget::~QHelpSearchResultWidget()
    {58, 108, 1165, 1, Smoke::mf_virtual, 284, 0},	//755 QObject::event(QEvent*)
    {58, 109, 1167, 2, Smoke::mf_virtual, 284, 0},	//756 QObject::eventFilter(QObject*, QEvent*)
    {58, 467, 1170, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//757 QObject::timerEvent(QTimerEvent*)
    {58, 65, 1172, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//758 QObject::childEvent(QChildEvent*)
    {58, 90, 1165, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//759 QObject::customEvent(QEvent*)
    {58, 73, 576, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//760 QObject::connectNotify(const char*)
    {58, 98, 576, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//761 QObject::disconnectNotify(const char*)
    {99, 97, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 361, 0},	//762 QWidget::devType() const
    {99, 456, 1136, 1, Smoke::mf_property|Smoke::mf_virtual|Smoke::mf_slot, 0, 0},	//763 QWidget::setVisible(bool)
    {99, 463, 0, 0, Smoke::mf_const|Smoke::mf_property|Smoke::mf_virtual, 142, 0},	//764 QWidget::sizeHint() const
    {99, 172, 0, 0, Smoke::mf_const|Smoke::mf_property|Smoke::mf_virtual, 142, 0},	//765 QWidget::minimumSizeHint() const
    {99, 132, 617, 1, Smoke::mf_const|Smoke::mf_virtual, 361, 0},	//766 QWidget::heightForWidth(int) const
    {99, 234, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 121, 0},	//767 QWidget::paintEngine() const
    {99, 108, 1165, 1, Smoke::mf_protected|Smoke::mf_virtual, 284, 0},	//768 QWidget::event(QEvent*)
    {99, 175, 1174, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//769 QWidget::mousePressEvent(QMouseEvent*)
    {99, 176, 1174, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//770 QWidget::mouseReleaseEvent(QMouseEvent*)
    {99, 173, 1174, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//771 QWidget::mouseDoubleClickEvent(QMouseEvent*)
    {99, 174, 1174, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//772 QWidget::mouseMoveEvent(QMouseEvent*)
    {99, 482, 1176, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//773 QWidget::wheelEvent(QWheelEvent*)
    {99, 153, 1178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//774 QWidget::keyPressEvent(QKeyEvent*)
    {99, 154, 1178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//775 QWidget::keyReleaseEvent(QKeyEvent*)
    {99, 130, 1180, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//776 QWidget::focusOutEvent(QFocusEvent*)
    {99, 106, 1165, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//777 QWidget::enterEvent(QEvent*)
    {99, 156, 1165, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//778 QWidget::leaveEvent(QEvent*)
    {99, 235, 1182, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//779 QWidget::paintEvent(QPaintEvent*)
    {99, 177, 1184, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//780 QWidget::moveEvent(QMoveEvent*)
    {99, 433, 1186, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//781 QWidget::resizeEvent(QResizeEvent*)
    {99, 68, 1188, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//782 QWidget::closeEvent(QCloseEvent*)
    {99, 80, 1190, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//783 QWidget::contextMenuEvent(QContextMenuEvent*)
    {99, 466, 1192, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//784 QWidget::tabletEvent(QTabletEvent*)
    {99, 55, 1194, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//785 QWidget::actionEvent(QActionEvent*)
    {99, 101, 1196, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//786 QWidget::dragEnterEvent(QDragEnterEvent*)
    {99, 103, 1198, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//787 QWidget::dragMoveEvent(QDragMoveEvent*)
    {99, 102, 1200, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//788 QWidget::dragLeaveEvent(QDragLeaveEvent*)
    {99, 104, 1202, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//789 QWidget::dropEvent(QDropEvent*)
    {99, 462, 1204, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//790 QWidget::showEvent(QShowEvent*)
    {99, 133, 1206, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//791 QWidget::hideEvent(QHideEvent*)
    {99, 485, 1208, 1, Smoke::mf_protected|Smoke::mf_virtual, 284, 0},	//792 QWidget::x11Event(_XEvent*)
    {99, 171, 1210, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 361, 0},	//793 QWidget::metric(QPaintDevice::PaintDeviceMetric) const
    {99, 149, 1212, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//794 QWidget::inputMethodEvent(QInputMethodEvent*)
    {99, 150, 1214, 1, Smoke::mf_const|Smoke::mf_virtual, 182, 0},	//795 QWidget::inputMethodQuery(Qt::InputMethodQuery) const
    {99, 129, 1136, 1, Smoke::mf_protected|Smoke::mf_virtual, 284, 0},	//796 QWidget::focusNextPrevChild(bool)
    {99, 465, 1216, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//797 QWidget::styleChange(QStyle&)
    {99, 105, 1136, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//798 QWidget::enabledChange(bool)
    {99, 236, 1218, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//799 QWidget::paletteChange(const QPalette&)
    {99, 131, 1220, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//800 QWidget::fontChange(const QFont&)
    {99, 483, 1136, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//801 QWidget::windowActivationChange(bool)
    {99, 155, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//802 QWidget::languageChange()
    {99, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 188, 42},	//803 QWidget::DrawWindowBackground (enum)
    {99, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 188, 43},	//804 QWidget::DrawChildren (enum)
    {99, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 188, 44},	//805 QWidget::IgnoreMask (enum)
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    11,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    23,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    51,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    137,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    166,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    221,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    224,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    294,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    304,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    305,  // QGlobalSpace::operator!=(QChar, QChar)
    318,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    379,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    471,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    497,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    501,  // QGlobalSpace::operator!=(QBool, QBool)
    0,
    244,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    269,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    292,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    370,  // QGlobalSpace::operator!=(QBool, bool)
    409,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    0,
    246,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    270,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    366,  // QGlobalSpace::operator!=(bool, QBool)
    414,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    443,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    0,
    32,  // QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    33,  // QGlobalSpace::operator*(const QLine&, const QTransform&)
    77,  // QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    105,  // QGlobalSpace::operator*(const QLine&, const QMatrix&)
    108,  // QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    110,  // QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    142,  // QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    174,  // QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    196,  // QGlobalSpace::operator*(const QPointF&, const QTransform&)
    217,  // QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    293,  // QGlobalSpace::operator*(const QLineF&, const QTransform&)
    369,  // QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    408,  // QGlobalSpace::operator*(const QRegion&, const QTransform&)
    422,  // QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    464,  // QGlobalSpace::operator*(const QPoint&, const QTransform&)
    486,  // QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    0,
    6,  // QGlobalSpace::operator*(const QPoint&, double)
    38,  // QGlobalSpace::operator*(const QSizeF&, double)
    154,  // QGlobalSpace::operator*(const QPointF&, double)
    237,  // QGlobalSpace::operator*(const QTransform&, double)
    263,  // QGlobalSpace::operator*(const QPoint&, float)
    388,  // QGlobalSpace::operator*(const QSize&, double)
    473,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    9,  // QGlobalSpace::operator*(double, const QPointF&)
    13,  // QGlobalSpace::operator*(double, const QSizeF&)
    319,  // QGlobalSpace::operator*(double, const QSize&)
    332,  // QGlobalSpace::operator*(double, const QPoint&)
    418,  // QGlobalSpace::operator*(int, const QPoint&)
    490,  // QGlobalSpace::operator*(float, const QPoint&)
    0,
    24,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    86,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    402,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    445,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    485,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    0,
    66,  // QGlobalSpace::operator+(QChar, const QString&)
    340,  // QGlobalSpace::operator+(const QByteArray&, char)
    377,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    437,  // QGlobalSpace::operator+(const QTransform&, double)
    0,
    122,  // QGlobalSpace::operator+(char, const QByteArray&)
    279,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    495,  // QGlobalSpace::operator+(const QString&, QChar)
    0,
    189,  // QGlobalSpace::operator-(const QPointF&)
    424,  // QGlobalSpace::operator-(const QPoint&)
    0,
    45,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    373,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    434,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    475,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    0,
    123,  // QGlobalSpace::operator/(const QPoint&, double)
    134,  // QGlobalSpace::operator/(const QTransform&, double)
    171,  // QGlobalSpace::operator/(const QSizeF&, double)
    342,  // QGlobalSpace::operator/(const QPointF&, double)
    458,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    141,  // QGlobalSpace::operator<(QChar, QChar)
    181,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    240,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    0,
    8,  // QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    12,  // QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    16,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    18,  // QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    21,  // QGlobalSpace::operator<<(QDebug, const QTransform&)
    26,  // QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    28,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    39,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    58,  // QGlobalSpace::operator<<(QDebug, const QFont&)
    60,  // QGlobalSpace::operator<<(QDebug, const QPolygon&)
    61,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    70,  // QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    71,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    72,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    73,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    85,  // QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    88,  // QGlobalSpace::operator<<(QDebug, const QColor&)
    98,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    102,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    113,  // QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    115,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    117,  // QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    140,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    143,  // QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    162,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    183,  // QGlobalSpace::operator<<(QDebug, const QSqlField&)
    192,  // QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    195,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    204,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    208,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    236,  // QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    241,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    252,  // QGlobalSpace::operator<<(QDebug, const QSqlDatabase&)
    253,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    255,  // QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    258,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    276,  // QGlobalSpace::operator<<(QDebug, const QSqlRecord&)
    296,  // QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    297,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    300,  // QGlobalSpace::operator<<(QDataStream&, const QFont&)
    303,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    311,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    316,  // QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    323,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    326,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    334,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    337,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    338,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    339,  // QGlobalSpace::operator<<(QDataStream&, const QImage&)
    341,  // QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    347,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    356,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    364,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    368,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    378,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    381,  // QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    383,  // QGlobalSpace::operator<<(QDebug, const QMatrix&)
    386,  // QGlobalSpace::operator<<(QDataStream&, const QColor&)
    390,  // QGlobalSpace::operator<<(QDebug, const QBrush&)
    394,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    399,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    403,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    406,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    435,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    450,  // QGlobalSpace::operator<<(QDebug, const QSqlError&)
    453,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    455,  // QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    468,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    484,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    489,  // QGlobalSpace::operator<<(QDebug, const QRegion&)
    502,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    504,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    508,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    0,
    49,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    124,  // QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    148,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    363,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    419,  // QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    432,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    456,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    0,
    283,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    345,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    405,  // QGlobalSpace::operator<=(QChar, QChar)
    0,
    36,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    47,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    52,  // QGlobalSpace::operator==(QBool, QBool)
    57,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    133,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    158,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    202,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    230,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    275,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    290,  // QGlobalSpace::operator==(QChar, QChar)
    313,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    317,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    365,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    430,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    488,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    505,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    0,
    228,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    389,  // QGlobalSpace::operator==(QString::Null, const QString&)
    395,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    442,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    487,  // QGlobalSpace::operator==(QBool, bool)
    0,
    125,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    179,  // QGlobalSpace::operator==(const QString&, QString::Null)
    278,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    384,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    461,  // QGlobalSpace::operator==(bool, QBool)
    0,
    175,  // QGlobalSpace::operator>(QChar, QChar)
    249,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    273,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    46,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    200,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    344,  // QGlobalSpace::operator>=(QChar, QChar)
    0,
    17,  // QGlobalSpace::operator>>(QDataStream&, QImage&)
    63,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    96,  // QGlobalSpace::operator>>(QDataStream&, QColor&)
    112,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    119,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    126,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    130,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    131,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    132,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    150,  // QGlobalSpace::operator>>(QDataStream&, QRegion&)
    153,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    169,  // QGlobalSpace::operator>>(QDataStream&, QCursor&)
    173,  // QGlobalSpace::operator>>(QDataStream&, QTransform&)
    186,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    209,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    235,  // QGlobalSpace::operator>>(QDataStream&, QIcon&)
    245,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    251,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    257,  // QGlobalSpace::operator>>(QDataStream&, QBrush&)
    272,  // QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    280,  // QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    284,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    314,  // QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    315,  // QGlobalSpace::operator>>(QDataStream&, QPalette&)
    352,  // QGlobalSpace::operator>>(QDataStream&, QFont&)
    360,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    393,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    398,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    400,  // QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    425,  // QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    436,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    444,  // QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    447,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    459,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    460,  // QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    470,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    493,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    0,
    289,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    429,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    0,
    4,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    10,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    14,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    15,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    19,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    20,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    27,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    31,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    35,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    37,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    40,  // QGlobalSpace::operator|(QDir::Filter, int)
    48,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    53,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    54,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    55,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    59,  // QGlobalSpace::operator|(QSql::ParamTypeFlag, int)
    62,  // QGlobalSpace::operator|(QSql::ParamTypeFlag, QSql::ParamTypeFlag)
    65,  // QGlobalSpace::operator|(QStyle::SubControl, int)
    68,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    69,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    83,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    87,  // QGlobalSpace::operator|(QWidget::RenderFlag, int)
    89,  // QGlobalSpace::operator|(Qt::DropAction, int)
    92,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    95,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    97,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    99,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    100,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    103,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    104,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    109,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    111,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    114,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    116,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    118,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    120,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    121,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    135,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    136,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    138,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    139,  // QGlobalSpace::operator|(QFile::Permission, int)
    146,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    147,  // QGlobalSpace::operator|(QStyle::StateFlag, int)
    151,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    152,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    160,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    164,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    165,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    167,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    168,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    170,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    172,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    178,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    182,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    185,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    191,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    194,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    197,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    198,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    207,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    212,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    213,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    216,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    218,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    219,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    222,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    225,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    226,  // QGlobalSpace::operator|(Qt::WindowType, int)
    227,  // QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    234,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    238,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    239,  // QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    243,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    248,  // QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    250,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    254,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    264,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    267,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    271,  // QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    281,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    282,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    285,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    286,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    288,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    291,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    298,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    302,  // QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    306,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    310,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    312,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    320,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    322,  // QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    324,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    328,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    353,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    355,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    358,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    362,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    371,  // QGlobalSpace::operator|(Qt::WindowState, int)
    372,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    382,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    385,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    387,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    391,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    392,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    397,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    411,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    413,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    417,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    421,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    426,  // QGlobalSpace::operator|(QSql::ParamTypeFlag, QFlags<QSql::ParamTypeFlag>)
    431,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    438,  // QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    440,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    446,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    448,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    451,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    452,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    457,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    462,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    463,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    465,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    466,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    474,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    477,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    479,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    481,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    482,  // QGlobalSpace::operator|(Qt::Orientation, int)
    494,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    499,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    500,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    507,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    0,
    41,  // QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    327,  // QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    0,
    128,  // QGlobalSpace::qFuzzyCompare(double, double)
    351,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    203,  // QGlobalSpace::qFuzzyIsNull(double)
    478,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    3,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    56,  // QGlobalSpace::qHash(const QStringRef&)
    74,  // QGlobalSpace::qHash(const QBitArray&)
    145,  // QGlobalSpace::qHash(const QByteArray&)
    201,  // QGlobalSpace::qHash(QChar)
    259,  // QGlobalSpace::qHash(const QUrl&)
    321,  // QGlobalSpace::qHash(const QModelIndex&)
    439,  // QGlobalSpace::qHash(const QItemSelectionRange&)
    0,
    30,  // QGlobalSpace::qHash(unsigned char)
    79,  // QGlobalSpace::qHash(const QString&)
    80,  // QGlobalSpace::qHash(unsigned short)
    82,  // QGlobalSpace::qHash(long)
    84,  // QGlobalSpace::qHash(long long)
    193,  // QGlobalSpace::qHash(unsigned long long)
    295,  // QGlobalSpace::qHash(signed char)
    335,  // QGlobalSpace::qHash(short)
    367,  // QGlobalSpace::qHash(unsigned long)
    407,  // QGlobalSpace::qHash(unsigned int)
    433,  // QGlobalSpace::qHash(int)
    467,  // QGlobalSpace::qHash(char)
    0,
    180,  // QGlobalSpace::qIntCast(float)
    231,  // QGlobalSpace::qIntCast(double)
    0,
    260,  // QGlobalSpace::qIsFinite(float)
    472,  // QGlobalSpace::qIsFinite(double)
    0,
    7,  // QGlobalSpace::qIsInf(double)
    94,  // QGlobalSpace::qIsInf(float)
    0,
    127,  // QGlobalSpace::qIsNaN(float)
    333,  // QGlobalSpace::qIsNaN(double)
    0,
    129,  // QGlobalSpace::qIsNull(float)
    229,  // QGlobalSpace::qIsNull(double)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {26, 8, 530},	// QGlobalSpace::LicensedActiveQt
    {26, 9, 525},	// QGlobalSpace::LicensedCore
    {26, 10, 531},	// QGlobalSpace::LicensedDBus
    {26, 11, 529},	// QGlobalSpace::LicensedDeclarative
    {26, 12, 528},	// QGlobalSpace::LicensedGui
    {26, 13, 537},	// QGlobalSpace::LicensedHelp
    {26, 14, 536},	// QGlobalSpace::LicensedMultimedia
    {26, 15, 523},	// QGlobalSpace::LicensedNetwork
    {26, 16, 520},	// QGlobalSpace::LicensedOpenGL
    {26, 17, 522},	// QGlobalSpace::LicensedOpenVG
    {26, 18, 521},	// QGlobalSpace::LicensedQt3Support
    {26, 19, 534},	// QGlobalSpace::LicensedQt3SupportLight
    {26, 20, 535},	// QGlobalSpace::LicensedScript
    {26, 21, 533},	// QGlobalSpace::LicensedScriptTools
    {26, 22, 524},	// QGlobalSpace::LicensedSql
    {26, 23, 526},	// QGlobalSpace::LicensedSvg
    {26, 24, 532},	// QGlobalSpace::LicensedTest
    {26, 25, 514},	// QGlobalSpace::LicensedXml
    {26, 26, 527},	// QGlobalSpace::LicensedXmlPatterns
    {26, 44, 509},	// QGlobalSpace::Q_COMPLEX_TYPE
    {26, 45, 513},	// QGlobalSpace::Q_DUMMY_TYPE
    {26, 46, 512},	// QGlobalSpace::Q_MOVABLE_TYPE
    {26, 47, 510},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {26, 48, 511},	// QGlobalSpace::Q_STATIC_TYPE
    {26, 49, 517},	// QGlobalSpace::QtCriticalMsg
    {26, 50, 515},	// QGlobalSpace::QtDebugMsg
    {26, 51, 518},	// QGlobalSpace::QtFatalMsg
    {26, 52, 519},	// QGlobalSpace::QtSystemMsg
    {26, 53, 516},	// QGlobalSpace::QtWarningMsg
    {26, 181, -1},	// QGlobalSpace::operator!=##
    {26, 182, -17},	// QGlobalSpace::operator!=#$
    {26, 183, -23},	// QGlobalSpace::operator!=$#
    {26, 185, 1},	// QGlobalSpace::operator&##
    {26, 187, -29},	// QGlobalSpace::operator*##
    {26, 188, -46},	// QGlobalSpace::operator*#$
    {26, 189, -54},	// QGlobalSpace::operator*$#
    {26, 191, -61},	// QGlobalSpace::operator+##
    {26, 192, -67},	// QGlobalSpace::operator+#$
    {26, 193, -72},	// QGlobalSpace::operator+$#
    {26, 194, 266},	// QGlobalSpace::operator+$$
    {26, 196, -76},	// QGlobalSpace::operator-#
    {26, 197, -79},	// QGlobalSpace::operator-##
    {26, 198, 506},	// QGlobalSpace::operator-#$
    {26, 200, -84},	// QGlobalSpace::operator/#$
    {26, 202, -90},	// QGlobalSpace::operator<##
    {26, 203, 101},	// QGlobalSpace::operator<#$
    {26, 204, 214},	// QGlobalSpace::operator<$#
    {26, 206, -94},	// QGlobalSpace::operator<<##
    {26, 207, -168},	// QGlobalSpace::operator<<#$
    {26, 208, 91},	// QGlobalSpace::operator<<#?
    {26, 210, -176},	// QGlobalSpace::operator<=##
    {26, 211, 223},	// QGlobalSpace::operator<=#$
    {26, 212, 380},	// QGlobalSpace::operator<=$#
    {26, 214, -180},	// QGlobalSpace::operator==##
    {26, 215, -197},	// QGlobalSpace::operator==#$
    {26, 216, -203},	// QGlobalSpace::operator==$#
    {26, 218, -209},	// QGlobalSpace::operator>##
    {26, 219, 401},	// QGlobalSpace::operator>#$
    {26, 220, 359},	// QGlobalSpace::operator>$#
    {26, 222, -213},	// QGlobalSpace::operator>=##
    {26, 223, 331},	// QGlobalSpace::operator>=#$
    {26, 224, 176},	// QGlobalSpace::operator>=$#
    {26, 226, -217},	// QGlobalSpace::operator>>##
    {26, 227, -255},	// QGlobalSpace::operator>>#$
    {26, 228, 375},	// QGlobalSpace::operator>>#?
    {26, 230, 232},	// QGlobalSpace::operator^##
    {26, 232, 277},	// QGlobalSpace::operator|##
    {26, 233, -258},	// QGlobalSpace::operator|$$
    {26, 240, 247},	// QGlobalSpace::qAcos$
    {26, 242, 215},	// QGlobalSpace::qAddPostRoutine$
    {26, 244, 64},	// QGlobalSpace::qAlpha$
    {26, 245, 199},	// QGlobalSpace::qAppName
    {26, 247, 349},	// QGlobalSpace::qAsin$
    {26, 249, 75},	// QGlobalSpace::qAtan$
    {26, 251, 206},	// QGlobalSpace::qAtan2$$
    {26, 252, 496},	// QGlobalSpace::qBadAlloc
    {26, 254, 469},	// QGlobalSpace::qBlue$
    {26, 256, 42},	// QGlobalSpace::qCeil$
    {26, 258, 233},	// QGlobalSpace::qChecksum$$
    {26, 260, 211},	// QGlobalSpace::qCompress#
    {26, 261, 210},	// QGlobalSpace::qCompress#$
    {26, 262, 416},	// QGlobalSpace::qCompress$$
    {26, 263, 415},	// QGlobalSpace::qCompress$$$
    {26, 265, 90},	// QGlobalSpace::qCos$
    {26, 266, 2},	// QGlobalSpace::qCritical
    {26, 267, 423},	// QGlobalSpace::qDebug
    {26, 269, 220},	// QGlobalSpace::qExp$
    {26, 271, 25},	// QGlobalSpace::qFabs$
    {26, 273, 454},	// QGlobalSpace::qFastCos$
    {26, 275, 483},	// QGlobalSpace::qFastSin$
    {26, 277, 329},	// QGlobalSpace::qFlagLocation$
    {26, 279, 309},	// QGlobalSpace::qFloor$
    {26, 281, 404},	// QGlobalSpace::qFree$
    {26, 283, 177},	// QGlobalSpace::qFreeAligned$
    {26, 285, -391},	// QGlobalSpace::qFuzzyCompare##
    {26, 286, -394},	// QGlobalSpace::qFuzzyCompare$$
    {26, 288, -397},	// QGlobalSpace::qFuzzyIsNull$
    {26, 290, 44},	// QGlobalSpace::qGray$
    {26, 291, 107},	// QGlobalSpace::qGray$$$
    {26, 293, 67},	// QGlobalSpace::qGreen$
    {26, 295, -400},	// QGlobalSpace::qHash#
    {26, 296, -409},	// QGlobalSpace::qHash$
    {26, 297, 336},	// QGlobalSpace::qInf
    {26, 299, 161},	// QGlobalSpace::qInstallMsgHandler$
    {26, 301, -422},	// QGlobalSpace::qIntCast$
    {26, 303, -425},	// QGlobalSpace::qIsFinite$
    {26, 305, 287},	// QGlobalSpace::qIsGray$
    {26, 307, -428},	// QGlobalSpace::qIsInf$
    {26, 309, -431},	// QGlobalSpace::qIsNaN$
    {26, 311, -434},	// QGlobalSpace::qIsNull$
    {26, 313, 374},	// QGlobalSpace::qLn$
    {26, 315, 503},	// QGlobalSpace::qMalloc$
    {26, 317, 412},	// QGlobalSpace::qMallocAligned$$
    {26, 319, 330},	// QGlobalSpace::qMemCopy$$$
    {26, 321, 205},	// QGlobalSpace::qMemSet$$$
    {26, 323, 441},	// QGlobalSpace::qPow$$
    {26, 324, 29},	// QGlobalSpace::qQNaN
    {26, 326, 265},	// QGlobalSpace::qRealloc$$
    {26, 328, 190},	// QGlobalSpace::qReallocAligned$$$$
    {26, 330, 50},	// QGlobalSpace::qRed$
    {26, 332, 81},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {26, 334, 325},	// QGlobalSpace::qRemovePostRoutine$
    {26, 336, 308},	// QGlobalSpace::qRgb$$$
    {26, 338, 498},	// QGlobalSpace::qRgba$$$$
    {26, 340, 274},	// QGlobalSpace::qRound$
    {26, 342, 410},	// QGlobalSpace::qRound64$
    {26, 343, 476},	// QGlobalSpace::qSNaN
    {26, 345, 361},	// QGlobalSpace::qSetFieldWidth$
    {26, 347, 156},	// QGlobalSpace::qSetPadChar#
    {26, 349, 346},	// QGlobalSpace::qSetRealNumberPrecision$
    {26, 350, 159},	// QGlobalSpace::qSharedBuild
    {26, 352, 348},	// QGlobalSpace::qSin$
    {26, 354, 299},	// QGlobalSpace::qSqrt$
    {26, 356, 187},	// QGlobalSpace::qStringComparisonHelper#$
    {26, 358, 428},	// QGlobalSpace::qTan$
    {26, 360, 343},	// QGlobalSpace::qUncompress#
    {26, 361, 480},	// QGlobalSpace::qUncompress$$
    {26, 362, 34},	// QGlobalSpace::qVersion
    {26, 363, 106},	// QGlobalSpace::qWarning
    {26, 365, 76},	// QGlobalSpace::qbswap_helper$$$
    {26, 367, 242},	// QGlobalSpace::qgetenv$
    {26, 369, 184},	// QGlobalSpace::qputenv$#
    {26, 370, 43},	// QGlobalSpace::qrand
    {26, 372, 93},	// QGlobalSpace::qsrand$
    {26, 374, 155},	// QGlobalSpace::qstrcmp##
    {26, 375, 157},	// QGlobalSpace::qstrcmp#$
    {26, 376, 427},	// QGlobalSpace::qstrcmp$#
    {26, 377, 301},	// QGlobalSpace::qstrcmp$$
    {26, 379, 22},	// QGlobalSpace::qstrcpy$$
    {26, 381, 420},	// QGlobalSpace::qstrdup$
    {26, 383, 350},	// QGlobalSpace::qstricmp$$
    {26, 385, 376},	// QGlobalSpace::qstrlen$
    {26, 387, 188},	// QGlobalSpace::qstrncmp$$$
    {26, 389, 256},	// QGlobalSpace::qstrncpy$$$
    {26, 391, 144},	// QGlobalSpace::qstrnicmp$$$
    {26, 393, 307},	// QGlobalSpace::qstrnlen$$
    {26, 395, 492},	// QGlobalSpace::qtTrId$
    {26, 396, 491},	// QGlobalSpace::qtTrId$$
    {26, 398, 5},	// QGlobalSpace::qt_assert$$$
    {26, 400, 268},	// QGlobalSpace::qt_assert_x$$$$
    {26, 402, 149},	// QGlobalSpace::qt_check_pointer$$
    {26, 403, 262},	// QGlobalSpace::qt_error_string
    {26, 404, 261},	// QGlobalSpace::qt_error_string$
    {26, 406, 449},	// QGlobalSpace::qt_message_output$$
    {26, 411, 357},	// QGlobalSpace::qt_noop
    {26, 413, 163},	// QGlobalSpace::qt_qFindChild_helper#$#
    {26, 415, 396},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {26, 419, 78},	// QGlobalSpace::qvariant_cast_helper#$$
    {26, 421, 354},	// QGlobalSpace::qvsnprintf$$$?
    {28, 29, 545},	// QHelpContentItem::QHelpContentItem#
    {28, 63, 538},	// QHelpContentItem::child$
    {28, 64, 539},	// QHelpContentItem::childCount
    {28, 67, 544},	// QHelpContentItem::childPosition#
    {28, 237, 543},	// QHelpContentItem::parent
    {28, 435, 542},	// QHelpContentItem::row
    {28, 468, 540},	// QHelpContentItem::title
    {28, 479, 541},	// QHelpContentItem::url
    {28, 486, 546},	// QHelpContentItem::~QHelpContentItem
    {29, 71, 568},	// QHelpContentModel::columnCount
    {29, 72, 560},	// QHelpContentModel::columnCount#
    {29, 75, 555},	// QHelpContentModel::contentItemAt#
    {29, 78, 563},	// QHelpContentModel::contentsCreated
    {29, 79, 562},	// QHelpContentModel::contentsCreationStarted
    {29, 84, 554},	// QHelpContentModel::createContents$
    {29, 96, 556},	// QHelpContentModel::data#$
    {29, 139, 566},	// QHelpContentModel::index$$
    {29, 140, 557},	// QHelpContentModel::index$$#
    {29, 151, 561},	// QHelpContentModel::isCreatingContents
    {29, 170, 547},	// QHelpContentModel::metaObject
    {29, 238, 558},	// QHelpContentModel::parent#
    {29, 408, 553},	// QHelpContentModel::qt_metacall$$?
    {29, 410, 548},	// QHelpContentModel::qt_metacast$
    {29, 436, 567},	// QHelpContentModel::rowCount
    {29, 437, 559},	// QHelpContentModel::rowCount#
    {29, 464, 569},	// QHelpContentModel::staticMetaObject
    {29, 470, 564},	// QHelpContentModel::tr$
    {29, 471, 549},	// QHelpContentModel::tr$$
    {29, 472, 551},	// QHelpContentModel::tr$$$
    {29, 474, 565},	// QHelpContentModel::trUtf8$
    {29, 475, 550},	// QHelpContentModel::trUtf8$$
    {29, 476, 552},	// QHelpContentModel::trUtf8$$$
    {29, 487, 570},	// QHelpContentModel::~QHelpContentModel
    {30, 145, 578},	// QHelpContentWidget::indexOf#
    {30, 158, 579},	// QHelpContentWidget::linkActivated#
    {30, 170, 571},	// QHelpContentWidget::metaObject
    {30, 408, 577},	// QHelpContentWidget::qt_metacall$$?
    {30, 410, 572},	// QHelpContentWidget::qt_metacast$
    {30, 464, 582},	// QHelpContentWidget::staticMetaObject
    {30, 470, 580},	// QHelpContentWidget::tr$
    {30, 471, 573},	// QHelpContentWidget::tr$$
    {30, 472, 575},	// QHelpContentWidget::tr$$$
    {30, 474, 581},	// QHelpContentWidget::trUtf8$
    {30, 475, 574},	// QHelpContentWidget::trUtf8$$
    {30, 476, 576},	// QHelpContentWidget::trUtf8$$$
    {30, 488, 583},	// QHelpContentWidget::~QHelpContentWidget
    {31, 31, 599},	// QHelpEngine::QHelpEngine$
    {31, 32, 591},	// QHelpEngine::QHelpEngine$#
    {31, 76, 592},	// QHelpEngine::contentModel
    {31, 77, 594},	// QHelpEngine::contentWidget
    {31, 143, 593},	// QHelpEngine::indexModel
    {31, 146, 595},	// QHelpEngine::indexWidget
    {31, 170, 584},	// QHelpEngine::metaObject
    {31, 408, 590},	// QHelpEngine::qt_metacall$$?
    {31, 410, 585},	// QHelpEngine::qt_metacast$
    {31, 440, 596},	// QHelpEngine::searchEngine
    {31, 464, 600},	// QHelpEngine::staticMetaObject
    {31, 470, 597},	// QHelpEngine::tr$
    {31, 471, 586},	// QHelpEngine::tr$$
    {31, 472, 588},	// QHelpEngine::tr$$$
    {31, 474, 598},	// QHelpEngine::trUtf8$
    {31, 475, 587},	// QHelpEngine::trUtf8$$
    {31, 476, 589},	// QHelpEngine::trUtf8$$$
    {31, 489, 601},	// QHelpEngine::~QHelpEngine
    {32, 34, 645},	// QHelpEngineCore::QHelpEngineCore$
    {32, 35, 609},	// QHelpEngineCore::QHelpEngineCore$#
    {32, 58, 620},	// QHelpEngineCore::addCustomFilter$?
    {32, 59, 637},	// QHelpEngineCore::autoSaveFilter
    {32, 70, 611},	// QHelpEngineCore::collectionFile
    {32, 82, 613},	// QHelpEngineCore::copyCollectionFile$
    {32, 87, 623},	// QHelpEngineCore::currentFilter
    {32, 89, 640},	// QHelpEngineCore::currentFilterChanged$
    {32, 91, 618},	// QHelpEngineCore::customFilters
    {32, 93, 647},	// QHelpEngineCore::customValue$
    {32, 94, 632},	// QHelpEngineCore::customValue$#
    {32, 100, 617},	// QHelpEngineCore::documentationFileName$
    {32, 107, 635},	// QHelpEngineCore::error
    {32, 113, 629},	// QHelpEngineCore::fileData#
    {32, 115, 646},	// QHelpEngineCore::files$?
    {32, 116, 627},	// QHelpEngineCore::files$?$
    {32, 121, 626},	// QHelpEngineCore::filterAttributeSets$
    {32, 122, 621},	// QHelpEngineCore::filterAttributes
    {32, 123, 622},	// QHelpEngineCore::filterAttributes$
    {32, 128, 628},	// QHelpEngineCore::findFile#
    {32, 165, 630},	// QHelpEngineCore::linksForIdentifier$
    {32, 169, 634},	// QHelpEngineCore::metaData$$
    {32, 170, 602},	// QHelpEngineCore::metaObject
    {32, 179, 614},	// QHelpEngineCore::namespaceName$
    {32, 408, 608},	// QHelpEngineCore::qt_metacall$$?
    {32, 410, 603},	// QHelpEngineCore::qt_metacast$
    {32, 422, 642},	// QHelpEngineCore::readersAboutToBeInvalidated
    {32, 424, 615},	// QHelpEngineCore::registerDocumentation$
    {32, 425, 625},	// QHelpEngineCore::registeredDocumentations
    {32, 428, 619},	// QHelpEngineCore::removeCustomFilter$
    {32, 430, 631},	// QHelpEngineCore::removeCustomValue$
    {32, 445, 636},	// QHelpEngineCore::setAutoSaveFilter$
    {32, 447, 612},	// QHelpEngineCore::setCollectionFile$
    {32, 449, 624},	// QHelpEngineCore::setCurrentFilter$
    {32, 451, 633},	// QHelpEngineCore::setCustomValue$#
    {32, 459, 610},	// QHelpEngineCore::setupData
    {32, 460, 639},	// QHelpEngineCore::setupFinished
    {32, 461, 638},	// QHelpEngineCore::setupStarted
    {32, 464, 648},	// QHelpEngineCore::staticMetaObject
    {32, 470, 643},	// QHelpEngineCore::tr$
    {32, 471, 604},	// QHelpEngineCore::tr$$
    {32, 472, 606},	// QHelpEngineCore::tr$$$
    {32, 474, 644},	// QHelpEngineCore::trUtf8$
    {32, 475, 605},	// QHelpEngineCore::trUtf8$$
    {32, 476, 607},	// QHelpEngineCore::trUtf8$$$
    {32, 478, 616},	// QHelpEngineCore::unregisterDocumentation$
    {32, 481, 641},	// QHelpEngineCore::warning$
    {32, 490, 649},	// QHelpEngineCore::~QHelpEngineCore
    {33, 86, 657},	// QHelpIndexModel::createIndex$
    {33, 118, 665},	// QHelpIndexModel::filter$
    {33, 119, 658},	// QHelpIndexModel::filter$$
    {33, 141, 662},	// QHelpIndexModel::indexCreated
    {33, 142, 661},	// QHelpIndexModel::indexCreationStarted
    {33, 152, 660},	// QHelpIndexModel::isCreatingIndex
    {33, 167, 659},	// QHelpIndexModel::linksForKeyword$
    {33, 170, 650},	// QHelpIndexModel::metaObject
    {33, 408, 656},	// QHelpIndexModel::qt_metacall$$?
    {33, 410, 651},	// QHelpIndexModel::qt_metacast$
    {33, 464, 666},	// QHelpIndexModel::staticMetaObject
    {33, 470, 663},	// QHelpIndexModel::tr$
    {33, 471, 652},	// QHelpIndexModel::tr$$
    {33, 472, 654},	// QHelpIndexModel::tr$$$
    {33, 474, 664},	// QHelpIndexModel::trUtf8$
    {33, 475, 653},	// QHelpIndexModel::trUtf8$$
    {33, 476, 655},	// QHelpIndexModel::trUtf8$$$
    {34, 56, 677},	// QHelpIndexWidget::activateCurrentItem
    {34, 125, 680},	// QHelpIndexWidget::filterIndices$
    {34, 126, 676},	// QHelpIndexWidget::filterIndices$$
    {34, 159, 674},	// QHelpIndexWidget::linkActivated#$
    {34, 163, 675},	// QHelpIndexWidget::linksActivated?$
    {34, 170, 667},	// QHelpIndexWidget::metaObject
    {34, 408, 673},	// QHelpIndexWidget::qt_metacall$$?
    {34, 410, 668},	// QHelpIndexWidget::qt_metacast$
    {34, 464, 681},	// QHelpIndexWidget::staticMetaObject
    {34, 470, 678},	// QHelpIndexWidget::tr$
    {34, 471, 669},	// QHelpIndexWidget::tr$$
    {34, 472, 671},	// QHelpIndexWidget::tr$$$
    {34, 474, 679},	// QHelpIndexWidget::trUtf8$
    {34, 475, 670},	// QHelpIndexWidget::trUtf8$$
    {34, 476, 672},	// QHelpIndexWidget::trUtf8$$$
    {34, 491, 682},	// QHelpIndexWidget::~QHelpIndexWidget
    {35, 37, 707},	// QHelpSearchEngine::QHelpSearchEngine#
    {35, 38, 690},	// QHelpSearchEngine::QHelpSearchEngine##
    {35, 60, 698},	// QHelpSearchEngine::cancelIndexing
    {35, 61, 700},	// QHelpSearchEngine::cancelSearching
    {35, 134, 694},	// QHelpSearchEngine::hitCount
    {35, 136, 695},	// QHelpSearchEngine::hits$$
    {35, 137, 693},	// QHelpSearchEngine::hitsCount
    {35, 147, 702},	// QHelpSearchEngine::indexingFinished
    {35, 148, 701},	// QHelpSearchEngine::indexingStarted
    {35, 170, 683},	// QHelpSearchEngine::metaObject
    {35, 408, 689},	// QHelpSearchEngine::qt_metacall$$?
    {35, 410, 684},	// QHelpSearchEngine::qt_metacast$
    {35, 416, 696},	// QHelpSearchEngine::query
    {35, 417, 691},	// QHelpSearchEngine::queryWidget
    {35, 426, 697},	// QHelpSearchEngine::reindexDocumentation
    {35, 434, 692},	// QHelpSearchEngine::resultWidget
    {35, 439, 699},	// QHelpSearchEngine::search?
    {35, 442, 704},	// QHelpSearchEngine::searchingFinished$
    {35, 443, 703},	// QHelpSearchEngine::searchingStarted
    {35, 464, 708},	// QHelpSearchEngine::staticMetaObject
    {35, 470, 705},	// QHelpSearchEngine::tr$
    {35, 471, 685},	// QHelpSearchEngine::tr$$
    {35, 472, 687},	// QHelpSearchEngine::tr$$$
    {35, 474, 706},	// QHelpSearchEngine::trUtf8$
    {35, 475, 686},	// QHelpSearchEngine::trUtf8$$
    {35, 476, 688},	// QHelpSearchEngine::trUtf8$$$
    {35, 492, 709},	// QHelpSearchEngine::~QHelpSearchEngine
    {36, 1, 721},	// QHelpSearchQuery::ALL
    {36, 2, 722},	// QHelpSearchQuery::ATLEAST
    {36, 3, 717},	// QHelpSearchQuery::DEFAULT
    {36, 6, 718},	// QHelpSearchQuery::FUZZY
    {36, 27, 720},	// QHelpSearchQuery::PHRASE
    {36, 39, 710},	// QHelpSearchQuery::QHelpSearchQuery
    {36, 40, 712},	// QHelpSearchQuery::QHelpSearchQuery#
    {36, 41, 711},	// QHelpSearchQuery::QHelpSearchQuery$?
    {36, 54, 719},	// QHelpSearchQuery::WITHOUT
    {36, 111, 713},	// QHelpSearchQuery::fieldName
    {36, 453, 714},	// QHelpSearchQuery::setFieldName$
    {36, 458, 716},	// QHelpSearchQuery::setWordList?
    {36, 484, 715},	// QHelpSearchQuery::wordList
    {36, 493, 723},	// QHelpSearchQuery::~QHelpSearchQuery
    {37, 42, 739},	// QHelpSearchQueryWidget::QHelpSearchQueryWidget
    {37, 43, 731},	// QHelpSearchQueryWidget::QHelpSearchQueryWidget#
    {37, 69, 733},	// QHelpSearchQueryWidget::collapseExtendedSearch
    {37, 110, 732},	// QHelpSearchQueryWidget::expandExtendedSearch
    {37, 170, 724},	// QHelpSearchQueryWidget::metaObject
    {37, 408, 730},	// QHelpSearchQueryWidget::qt_metacall$$?
    {37, 410, 725},	// QHelpSearchQueryWidget::qt_metacast$
    {37, 416, 734},	// QHelpSearchQueryWidget::query
    {37, 438, 736},	// QHelpSearchQueryWidget::search
    {37, 455, 735},	// QHelpSearchQueryWidget::setQuery?
    {37, 464, 740},	// QHelpSearchQueryWidget::staticMetaObject
    {37, 470, 737},	// QHelpSearchQueryWidget::tr$
    {37, 471, 726},	// QHelpSearchQueryWidget::tr$$
    {37, 472, 728},	// QHelpSearchQueryWidget::tr$$$
    {37, 474, 738},	// QHelpSearchQueryWidget::trUtf8$
    {37, 475, 727},	// QHelpSearchQueryWidget::trUtf8$$
    {37, 476, 729},	// QHelpSearchQueryWidget::trUtf8$$$
    {37, 494, 741},	// QHelpSearchQueryWidget::~QHelpSearchQueryWidget
    {38, 161, 749},	// QHelpSearchResultWidget::linkAt#
    {38, 170, 742},	// QHelpSearchResultWidget::metaObject
    {38, 408, 748},	// QHelpSearchResultWidget::qt_metacall$$?
    {38, 410, 743},	// QHelpSearchResultWidget::qt_metacast$
    {38, 432, 750},	// QHelpSearchResultWidget::requestShowLink#
    {38, 464, 753},	// QHelpSearchResultWidget::staticMetaObject
    {38, 470, 751},	// QHelpSearchResultWidget::tr$
    {38, 471, 744},	// QHelpSearchResultWidget::tr$$
    {38, 472, 746},	// QHelpSearchResultWidget::tr$$$
    {38, 474, 752},	// QHelpSearchResultWidget::trUtf8$
    {38, 475, 745},	// QHelpSearchResultWidget::trUtf8$$
    {38, 476, 747},	// QHelpSearchResultWidget::trUtf8$$$
    {38, 495, 754},	// QHelpSearchResultWidget::~QHelpSearchResultWidget
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();
SMOKE_IMPORT void init_qtgui_Smoke();
SMOKE_IMPORT void init_qtsql_Smoke();

static bool initialized = false;
Smoke *qthelp_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qthelp_Smoke() {
    init_qtcore_Smoke();
    init_qtgui_Smoke();
    init_qtsql_Smoke();
    if (initialized) return;
    qthelp_Smoke = new Smoke(
        "qthelp",
        __smokeqthelp::classes, 99,
        __smokeqthelp::methods, 806,
        __smokeqthelp::methodMaps, 387,
        __smokeqthelp::methodNames, 495,
        __smokeqthelp::types, 378,
        __smokeqthelp::inheritanceList,
        __smokeqthelp::argumentList,
        __smokeqthelp::ambiguousMethodList,
        __smokeqthelp::cast );
    initialized = true;
}

void delete_qthelp_Smoke() { delete qthelp_Smoke; }

}
