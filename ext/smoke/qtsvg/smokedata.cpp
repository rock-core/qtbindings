#include <qtsvg_includes.h>

#include <smoke.h>
#include <qtsvg_smoke.h>

namespace __smokeqtsvg {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QAccessible2Interface
      switch(to) {
        case 1: return (void*)(QAccessible2Interface*)xptr;
        default: return xptr;
      }
    case 2:   //QActionEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QActionEvent*)xptr;
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
        case 23: return (void*)(QEvent*)(QCloseEvent*)xptr;
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
        case 23: return (void*)(QEvent*)(QContextMenuEvent*)xptr;
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
        case 20: return (void*)(QDragMoveEvent*)(QDragEnterEvent*)xptr;
        case 21: return (void*)(QDropEvent*)(QDragEnterEvent*)xptr;
        case 23: return (void*)(QEvent*)(QDragEnterEvent*)xptr;
        case 18: return (void*)(QDragEnterEvent*)xptr;
        default: return xptr;
      }
    case 19:   //QDragLeaveEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QDragLeaveEvent*)xptr;
        case 19: return (void*)(QDragLeaveEvent*)xptr;
        default: return xptr;
      }
    case 20:   //QDragMoveEvent
      switch(to) {
        case 21: return (void*)(QDropEvent*)(QDragMoveEvent*)xptr;
        case 23: return (void*)(QEvent*)(QDragMoveEvent*)xptr;
        case 20: return (void*)(QDragMoveEvent*)xptr;
        default: return xptr;
      }
    case 21:   //QDropEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QDropEvent*)xptr;
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
        case 23: return (void*)(QEvent*)(QFocusEvent*)xptr;
        case 24: return (void*)(QFocusEvent*)xptr;
        default: return xptr;
      }
    case 25:   //QFont
      switch(to) {
        case 25: return (void*)(QFont*)xptr;
        default: return xptr;
      }
    case 27:   //QGraphicsItem
      switch(to) {
        case 27: return (void*)(QGraphicsItem*)xptr;
        case 34: return (void*)(QGraphicsSvgItem*)(QGraphicsItem*)xptr;
        default: return xptr;
      }
    case 28:   //QGraphicsObject
      switch(to) {
        case 57: return (void*)(QObject*)(QGraphicsObject*)xptr;
        case 27: return (void*)(QGraphicsItem*)(QGraphicsObject*)xptr;
        case 28: return (void*)(QGraphicsObject*)xptr;
        case 34: return (void*)(QGraphicsSvgItem*)(QGraphicsObject*)xptr;
        default: return xptr;
      }
    case 29:   //QGraphicsSceneContextMenuEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QGraphicsSceneContextMenuEvent*)xptr;
        case 29: return (void*)(QGraphicsSceneContextMenuEvent*)xptr;
        default: return xptr;
      }
    case 30:   //QGraphicsSceneDragDropEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QGraphicsSceneDragDropEvent*)xptr;
        case 30: return (void*)(QGraphicsSceneDragDropEvent*)xptr;
        default: return xptr;
      }
    case 31:   //QGraphicsSceneHoverEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QGraphicsSceneHoverEvent*)xptr;
        case 31: return (void*)(QGraphicsSceneHoverEvent*)xptr;
        default: return xptr;
      }
    case 32:   //QGraphicsSceneMouseEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QGraphicsSceneMouseEvent*)xptr;
        case 32: return (void*)(QGraphicsSceneMouseEvent*)xptr;
        default: return xptr;
      }
    case 33:   //QGraphicsSceneWheelEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QGraphicsSceneWheelEvent*)xptr;
        case 33: return (void*)(QGraphicsSceneWheelEvent*)xptr;
        default: return xptr;
      }
    case 34:   //QGraphicsSvgItem
      switch(to) {
        case 28: return (void*)(QGraphicsObject*)(QGraphicsSvgItem*)xptr;
        case 57: return (void*)(QObject*)(QGraphicsSvgItem*)xptr;
        case 27: return (void*)(QGraphicsItem*)(QGraphicsSvgItem*)xptr;
        case 34: return (void*)(QGraphicsSvgItem*)xptr;
        default: return xptr;
      }
    case 35:   //QHashDummyValue
      switch(to) {
        case 35: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 36:   //QHideEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QHideEvent*)xptr;
        case 36: return (void*)(QHideEvent*)xptr;
        default: return xptr;
      }
    case 37:   //QIODevice
      switch(to) {
        case 57: return (void*)(QObject*)(QIODevice*)xptr;
        case 37: return (void*)(QIODevice*)xptr;
        default: return xptr;
      }
    case 38:   //QIcon
      switch(to) {
        case 38: return (void*)(QIcon*)xptr;
        default: return xptr;
      }
    case 39:   //QImage
      switch(to) {
        case 58: return (void*)(QPaintDevice*)(QImage*)xptr;
        case 39: return (void*)(QImage*)xptr;
        default: return xptr;
      }
    case 40:   //QIncompatibleFlag
      switch(to) {
        case 40: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 41:   //QInputMethodEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QInputMethodEvent*)xptr;
        case 41: return (void*)(QInputMethodEvent*)xptr;
        default: return xptr;
      }
    case 42:   //QItemSelectionRange
      switch(to) {
        case 42: return (void*)(QItemSelectionRange*)xptr;
        default: return xptr;
      }
    case 43:   //QKeyEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QKeyEvent*)xptr;
        case 43: return (void*)(QKeyEvent*)xptr;
        default: return xptr;
      }
    case 44:   //QKeySequence
      switch(to) {
        case 44: return (void*)(QKeySequence*)xptr;
        default: return xptr;
      }
    case 45:   //QLatin1String
      switch(to) {
        case 45: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 46:   //QLine
      switch(to) {
        case 46: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 47:   //QLineF
      switch(to) {
        case 47: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 48:   //QListWidgetItem
      switch(to) {
        case 48: return (void*)(QListWidgetItem*)xptr;
        default: return xptr;
      }
    case 49:   //QLocale
      switch(to) {
        case 49: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 50:   //QMargins
      switch(to) {
        case 50: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 51:   //QMatrix
      switch(to) {
        case 51: return (void*)(QMatrix*)xptr;
        default: return xptr;
      }
    case 52:   //QMatrix4x4
      switch(to) {
        case 52: return (void*)(QMatrix4x4*)xptr;
        default: return xptr;
      }
    case 53:   //QMetaObject
      switch(to) {
        case 53: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 54:   //QModelIndex
      switch(to) {
        case 54: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 55:   //QMouseEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QMouseEvent*)xptr;
        case 55: return (void*)(QMouseEvent*)xptr;
        default: return xptr;
      }
    case 56:   //QMoveEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QMoveEvent*)xptr;
        case 56: return (void*)(QMoveEvent*)xptr;
        default: return xptr;
      }
    case 57:   //QObject
      switch(to) {
        case 57: return (void*)(QObject*)xptr;
        case 34: return (void*)(QGraphicsSvgItem*)(QObject*)xptr;
        case 90: return (void*)(QSvgRenderer*)(QObject*)xptr;
        case 91: return (void*)(QSvgWidget*)(QObject*)xptr;
        default: return xptr;
      }
    case 58:   //QPaintDevice
      switch(to) {
        case 58: return (void*)(QPaintDevice*)xptr;
        case 89: return (void*)(QSvgGenerator*)(QPaintDevice*)xptr;
        case 91: return (void*)(QSvgWidget*)(QPaintDevice*)xptr;
        default: return xptr;
      }
    case 59:   //QPaintEngine
      switch(to) {
        case 59: return (void*)(QPaintEngine*)xptr;
        default: return xptr;
      }
    case 60:   //QPaintEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QPaintEvent*)xptr;
        case 60: return (void*)(QPaintEvent*)xptr;
        default: return xptr;
      }
    case 61:   //QPainter
      switch(to) {
        case 61: return (void*)(QPainter*)xptr;
        default: return xptr;
      }
    case 62:   //QPainterPath
      switch(to) {
        case 62: return (void*)(QPainterPath*)xptr;
        default: return xptr;
      }
    case 63:   //QPalette
      switch(to) {
        case 63: return (void*)(QPalette*)xptr;
        default: return xptr;
      }
    case 64:   //QPen
      switch(to) {
        case 64: return (void*)(QPen*)xptr;
        default: return xptr;
      }
    case 65:   //QPersistentModelIndex
      switch(to) {
        case 65: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 66:   //QPicture
      switch(to) {
        case 58: return (void*)(QPaintDevice*)(QPicture*)xptr;
        case 66: return (void*)(QPicture*)xptr;
        default: return xptr;
      }
    case 67:   //QPixmap
      switch(to) {
        case 58: return (void*)(QPaintDevice*)(QPixmap*)xptr;
        case 67: return (void*)(QPixmap*)xptr;
        default: return xptr;
      }
    case 68:   //QPoint
      switch(to) {
        case 68: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 69:   //QPointF
      switch(to) {
        case 69: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 70:   //QPolygon
      switch(to) {
        case 70: return (void*)(QPolygon*)xptr;
        default: return xptr;
      }
    case 71:   //QPolygonF
      switch(to) {
        case 71: return (void*)(QPolygonF*)xptr;
        default: return xptr;
      }
    case 72:   //QQuaternion
      switch(to) {
        case 72: return (void*)(QQuaternion*)xptr;
        default: return xptr;
      }
    case 73:   //QRect
      switch(to) {
        case 73: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 74:   //QRectF
      switch(to) {
        case 74: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 75:   //QRegExp
      switch(to) {
        case 75: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 76:   //QRegion
      switch(to) {
        case 76: return (void*)(QRegion*)xptr;
        default: return xptr;
      }
    case 77:   //QResizeEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QResizeEvent*)xptr;
        case 77: return (void*)(QResizeEvent*)xptr;
        default: return xptr;
      }
    case 78:   //QShowEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QShowEvent*)xptr;
        case 78: return (void*)(QShowEvent*)xptr;
        default: return xptr;
      }
    case 79:   //QSize
      switch(to) {
        case 79: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 80:   //QSizeF
      switch(to) {
        case 80: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 81:   //QSizePolicy
      switch(to) {
        case 81: return (void*)(QSizePolicy*)xptr;
        default: return xptr;
      }
    case 82:   //QSplitter
      switch(to) {
        case 112: return (void*)(QWidget*)(QSplitter*)xptr;
        case 57: return (void*)(QObject*)(QSplitter*)xptr;
        case 58: return (void*)(QPaintDevice*)(QSplitter*)xptr;
        case 82: return (void*)(QSplitter*)xptr;
        default: return xptr;
      }
    case 83:   //QStandardItem
      switch(to) {
        case 83: return (void*)(QStandardItem*)xptr;
        default: return xptr;
      }
    case 84:   //QString::Null
      switch(to) {
        case 84: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 85:   //QStringRef
      switch(to) {
        case 85: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 86:   //QStyle
      switch(to) {
        case 57: return (void*)(QObject*)(QStyle*)xptr;
        case 86: return (void*)(QStyle*)xptr;
        default: return xptr;
      }
    case 87:   //QStyleOption
      switch(to) {
        case 87: return (void*)(QStyleOption*)xptr;
        default: return xptr;
      }
    case 88:   //QStyleOptionGraphicsItem
      switch(to) {
        case 87: return (void*)(QStyleOption*)(QStyleOptionGraphicsItem*)xptr;
        case 88: return (void*)(QStyleOptionGraphicsItem*)xptr;
        default: return xptr;
      }
    case 89:   //QSvgGenerator
      switch(to) {
        case 58: return (void*)(QPaintDevice*)(QSvgGenerator*)xptr;
        case 89: return (void*)(QSvgGenerator*)xptr;
        default: return xptr;
      }
    case 90:   //QSvgRenderer
      switch(to) {
        case 57: return (void*)(QObject*)(QSvgRenderer*)xptr;
        case 90: return (void*)(QSvgRenderer*)xptr;
        default: return xptr;
      }
    case 91:   //QSvgWidget
      switch(to) {
        case 112: return (void*)(QWidget*)(QSvgWidget*)xptr;
        case 57: return (void*)(QObject*)(QSvgWidget*)xptr;
        case 58: return (void*)(QPaintDevice*)(QSvgWidget*)xptr;
        case 91: return (void*)(QSvgWidget*)xptr;
        default: return xptr;
      }
    case 92:   //QTableWidgetItem
      switch(to) {
        case 92: return (void*)(QTableWidgetItem*)xptr;
        default: return xptr;
      }
    case 93:   //QTabletEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QTabletEvent*)xptr;
        case 93: return (void*)(QTabletEvent*)xptr;
        default: return xptr;
      }
    case 94:   //QTextCodec
      switch(to) {
        case 94: return (void*)(QTextCodec*)xptr;
        default: return xptr;
      }
    case 95:   //QTextFormat
      switch(to) {
        case 95: return (void*)(QTextFormat*)xptr;
        default: return xptr;
      }
    case 96:   //QTextLength
      switch(to) {
        case 96: return (void*)(QTextLength*)xptr;
        default: return xptr;
      }
    case 97:   //QTextStream
      switch(to) {
        case 97: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 98:   //QTextStreamManipulator
      switch(to) {
        case 98: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 99:   //QTileRules
      switch(to) {
        case 99: return (void*)(QTileRules*)xptr;
        default: return xptr;
      }
    case 100:   //QTime
      switch(to) {
        case 100: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 101:   //QTimerEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 101: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 102:   //QTransform
      switch(to) {
        case 102: return (void*)(QTransform*)xptr;
        default: return xptr;
      }
    case 103:   //QTreeWidgetItem
      switch(to) {
        case 103: return (void*)(QTreeWidgetItem*)xptr;
        default: return xptr;
      }
    case 104:   //QUrl
      switch(to) {
        case 104: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 105:   //QUuid
      switch(to) {
        case 105: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 106:   //QVariant
      switch(to) {
        case 106: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 107:   //QVariantComparisonHelper
      switch(to) {
        case 107: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    case 108:   //QVector2D
      switch(to) {
        case 108: return (void*)(QVector2D*)xptr;
        default: return xptr;
      }
    case 109:   //QVector3D
      switch(to) {
        case 109: return (void*)(QVector3D*)xptr;
        default: return xptr;
      }
    case 110:   //QVector4D
      switch(to) {
        case 110: return (void*)(QVector4D*)xptr;
        default: return xptr;
      }
    case 111:   //QWheelEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QWheelEvent*)xptr;
        case 111: return (void*)(QWheelEvent*)xptr;
        default: return xptr;
      }
    case 112:   //QWidget
      switch(to) {
        case 57: return (void*)(QObject*)(QWidget*)xptr;
        case 58: return (void*)(QPaintDevice*)(QWidget*)xptr;
        case 112: return (void*)(QWidget*)xptr;
        case 91: return (void*)(QSvgWidget*)(QWidget*)xptr;
        default: return xptr;
      }
    case 113:   //QXmlStreamReader
      switch(to) {
        case 113: return (void*)(QXmlStreamReader*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    28, 0,	// 1: QGraphicsObject
    58, 0,	// 3: QPaintDevice
    57, 0,	// 5: QObject
    112, 0,	// 7: QWidget
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QGraphicsSvgItem(Smoke::Index, void*, Smoke::Stack);
void xcall_QSvgGenerator(Smoke::Index, void*, Smoke::Stack);
void xcall_QSvgRenderer(Smoke::Index, void*, Smoke::Stack);
void xcall_QSvgWidget(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QAccessible2Interface", true, 0, 0, 0, 0, 0 },	//1
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
    { "QGraphicsItem", true, 0, 0, 0, 0, 0 },	//27
    { "QGraphicsObject", true, 0, 0, 0, 0, 0 },	//28
    { "QGraphicsSceneContextMenuEvent", true, 0, 0, 0, 0, 0 },	//29
    { "QGraphicsSceneDragDropEvent", true, 0, 0, 0, 0, 0 },	//30
    { "QGraphicsSceneHoverEvent", true, 0, 0, 0, 0, 0 },	//31
    { "QGraphicsSceneMouseEvent", true, 0, 0, 0, 0, 0 },	//32
    { "QGraphicsSceneWheelEvent", true, 0, 0, 0, 0, 0 },	//33
    { "QGraphicsSvgItem", false, 1, xcall_QGraphicsSvgItem, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QGraphicsSvgItem) },	//34
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//35
    { "QHideEvent", true, 0, 0, 0, 0, 0 },	//36
    { "QIODevice", true, 0, 0, 0, 0, 0 },	//37
    { "QIcon", true, 0, 0, 0, 0, 0 },	//38
    { "QImage", true, 0, 0, 0, 0, 0 },	//39
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//40
    { "QInputMethodEvent", true, 0, 0, 0, 0, 0 },	//41
    { "QItemSelectionRange", true, 0, 0, 0, 0, 0 },	//42
    { "QKeyEvent", true, 0, 0, 0, 0, 0 },	//43
    { "QKeySequence", true, 0, 0, 0, 0, 0 },	//44
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//45
    { "QLine", true, 0, 0, 0, 0, 0 },	//46
    { "QLineF", true, 0, 0, 0, 0, 0 },	//47
    { "QListWidgetItem", true, 0, 0, 0, 0, 0 },	//48
    { "QLocale", true, 0, 0, 0, 0, 0 },	//49
    { "QMargins", true, 0, 0, 0, 0, 0 },	//50
    { "QMatrix", true, 0, 0, 0, 0, 0 },	//51
    { "QMatrix4x4", true, 0, 0, 0, 0, 0 },	//52
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//53
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//54
    { "QMouseEvent", true, 0, 0, 0, 0, 0 },	//55
    { "QMoveEvent", true, 0, 0, 0, 0, 0 },	//56
    { "QObject", true, 0, 0, 0, 0, 0 },	//57
    { "QPaintDevice", true, 0, 0, 0, 0, 0 },	//58
    { "QPaintEngine", true, 0, 0, 0, 0, 0 },	//59
    { "QPaintEvent", true, 0, 0, 0, 0, 0 },	//60
    { "QPainter", true, 0, 0, 0, 0, 0 },	//61
    { "QPainterPath", true, 0, 0, 0, 0, 0 },	//62
    { "QPalette", true, 0, 0, 0, 0, 0 },	//63
    { "QPen", true, 0, 0, 0, 0, 0 },	//64
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//65
    { "QPicture", true, 0, 0, 0, 0, 0 },	//66
    { "QPixmap", true, 0, 0, 0, 0, 0 },	//67
    { "QPoint", true, 0, 0, 0, 0, 0 },	//68
    { "QPointF", true, 0, 0, 0, 0, 0 },	//69
    { "QPolygon", true, 0, 0, 0, 0, 0 },	//70
    { "QPolygonF", true, 0, 0, 0, 0, 0 },	//71
    { "QQuaternion", true, 0, 0, 0, 0, 0 },	//72
    { "QRect", true, 0, 0, 0, 0, 0 },	//73
    { "QRectF", true, 0, 0, 0, 0, 0 },	//74
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//75
    { "QRegion", true, 0, 0, 0, 0, 0 },	//76
    { "QResizeEvent", true, 0, 0, 0, 0, 0 },	//77
    { "QShowEvent", true, 0, 0, 0, 0, 0 },	//78
    { "QSize", true, 0, 0, 0, 0, 0 },	//79
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//80
    { "QSizePolicy", true, 0, 0, 0, 0, 0 },	//81
    { "QSplitter", true, 0, 0, 0, 0, 0 },	//82
    { "QStandardItem", true, 0, 0, 0, 0, 0 },	//83
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//84
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//85
    { "QStyle", true, 0, 0, 0, 0, 0 },	//86
    { "QStyleOption", true, 0, 0, 0, 0, 0 },	//87
    { "QStyleOptionGraphicsItem", true, 0, 0, 0, 0, 0 },	//88
    { "QSvgGenerator", false, 3, xcall_QSvgGenerator, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSvgGenerator) },	//89
    { "QSvgRenderer", false, 5, xcall_QSvgRenderer, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSvgRenderer) },	//90
    { "QSvgWidget", false, 7, xcall_QSvgWidget, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSvgWidget) },	//91
    { "QTableWidgetItem", true, 0, 0, 0, 0, 0 },	//92
    { "QTabletEvent", true, 0, 0, 0, 0, 0 },	//93
    { "QTextCodec", true, 0, 0, 0, 0, 0 },	//94
    { "QTextFormat", true, 0, 0, 0, 0, 0 },	//95
    { "QTextLength", true, 0, 0, 0, 0, 0 },	//96
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//97
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//98
    { "QTileRules", true, 0, 0, 0, 0, 0 },	//99
    { "QTime", true, 0, 0, 0, 0, 0 },	//100
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//101
    { "QTransform", true, 0, 0, 0, 0, 0 },	//102
    { "QTreeWidgetItem", true, 0, 0, 0, 0, 0 },	//103
    { "QUrl", true, 0, 0, 0, 0, 0 },	//104
    { "QUuid", true, 0, 0, 0, 0, 0 },	//105
    { "QVariant", true, 0, 0, 0, 0, 0 },	//106
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//107
    { "QVector2D", true, 0, 0, 0, 0, 0 },	//108
    { "QVector3D", true, 0, 0, 0, 0, 0 },	//109
    { "QVector4D", true, 0, 0, 0, 0, 0 },	//110
    { "QWheelEvent", true, 0, 0, 0, 0, 0 },	//111
    { "QWidget", true, 0, 0, 0, 0, 0 },	//112
    { "QXmlStreamReader", true, 0, 0, 0, 0, 0 },	//113
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QAbstractItemView::EditTrigger", 0, Smoke::t_enum|Smoke::tf_stack },	//2
    { "QAbstractPrintDialog::PrintDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//3
    { "QAbstractSpinBox::StepEnabledFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//4
    { "QAccessible2::BoundaryType", 0, Smoke::t_enum|Smoke::tf_stack },	//5
    { "QAccessible2::CoordinateType", 0, Smoke::t_enum|Smoke::tf_stack },	//6
    { "QAccessible2::InterfaceType", 0, Smoke::t_enum|Smoke::tf_stack },	//7
    { "QAccessible2::TableModelChangeType", 0, Smoke::t_enum|Smoke::tf_stack },	//8
    { "QAccessible2Interface*", 1, Smoke::t_class|Smoke::tf_ptr },	//9
    { "QAccessible::RelationFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//10
    { "QAccessible::StateFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//11
    { "QActionEvent*", 2, Smoke::t_class|Smoke::tf_ptr },	//12
    { "QBitArray", 3, Smoke::t_class|Smoke::tf_stack },	//13
    { "QBitArray&", 3, Smoke::t_class|Smoke::tf_ref },	//14
    { "QBool", 4, Smoke::t_class|Smoke::tf_stack },	//15
    { "QBrush&", 5, Smoke::t_class|Smoke::tf_ref },	//16
    { "QByteArray", 6, Smoke::t_class|Smoke::tf_stack },	//17
    { "QByteArray&", 6, Smoke::t_class|Smoke::tf_ref },	//18
    { "QChar", 7, Smoke::t_class|Smoke::tf_stack },	//19
    { "QChar&", 7, Smoke::t_class|Smoke::tf_ref },	//20
    { "QChildEvent*", 8, Smoke::t_class|Smoke::tf_ptr },	//21
    { "QCloseEvent*", 9, Smoke::t_class|Smoke::tf_ptr },	//22
    { "QColor&", 10, Smoke::t_class|Smoke::tf_ref },	//23
    { "QColorDialog::ColorDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//24
    { "QContextMenuEvent*", 11, Smoke::t_class|Smoke::tf_ptr },	//25
    { "QCursor&", 12, Smoke::t_class|Smoke::tf_ref },	//26
    { "QDataStream&", 13, Smoke::t_class|Smoke::tf_ref },	//27
    { "QDate&", 14, Smoke::t_class|Smoke::tf_ref },	//28
    { "QDateTime&", 15, Smoke::t_class|Smoke::tf_ref },	//29
    { "QDateTimeEdit::Section", 0, Smoke::t_enum|Smoke::tf_stack },	//30
    { "QDebug", 16, Smoke::t_class|Smoke::tf_stack },	//31
    { "QDialogButtonBox::StandardButton", 0, Smoke::t_enum|Smoke::tf_stack },	//32
    { "QDir::Filter", 17, Smoke::t_enum|Smoke::tf_stack },	//33
    { "QDir::SortFlag", 17, Smoke::t_enum|Smoke::tf_stack },	//34
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//35
    { "QDockWidget::DockWidgetFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//36
    { "QDragEnterEvent*", 18, Smoke::t_class|Smoke::tf_ptr },	//37
    { "QDragLeaveEvent*", 19, Smoke::t_class|Smoke::tf_ptr },	//38
    { "QDragMoveEvent*", 20, Smoke::t_class|Smoke::tf_ptr },	//39
    { "QDrawBorderPixmap::DrawingHint", 0, Smoke::t_enum|Smoke::tf_stack },	//40
    { "QDropEvent*", 21, Smoke::t_class|Smoke::tf_ptr },	//41
    { "QEasingCurve&", 22, Smoke::t_class|Smoke::tf_ref },	//42
    { "QEvent*", 23, Smoke::t_class|Smoke::tf_ptr },	//43
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//44
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//45
    { "QFileDialog::Option", 0, Smoke::t_enum|Smoke::tf_stack },	//46
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//47
    { "QFlags<QAbstractItemView::EditTrigger>", 0, Smoke::t_uint|Smoke::tf_stack },	//48
    { "QFlags<QAbstractPrintDialog::PrintDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//49
    { "QFlags<QAbstractSpinBox::StepEnabledFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//50
    { "QFlags<QAccessible::RelationFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//51
    { "QFlags<QAccessible::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//52
    { "QFlags<QColorDialog::ColorDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//53
    { "QFlags<QDateTimeEdit::Section>", 0, Smoke::t_uint|Smoke::tf_stack },	//54
    { "QFlags<QDialogButtonBox::StandardButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//55
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//56
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//57
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//58
    { "QFlags<QDockWidget::DockWidgetFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//59
    { "QFlags<QDrawBorderPixmap::DrawingHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//60
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//61
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//62
    { "QFlags<QFileDialog::Option>", 0, Smoke::t_uint|Smoke::tf_stack },	//63
    { "QFlags<QFontComboBox::FontFilter>", 0, Smoke::t_uint|Smoke::tf_stack },	//64
    { "QFlags<QFontDialog::FontDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//65
    { "QFlags<QGestureRecognizer::ResultFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//66
    { "QFlags<QGraphicsBlurEffect::BlurHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//67
    { "QFlags<QGraphicsEffect::ChangeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//68
    { "QFlags<QGraphicsItem::GraphicsItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//69
    { "QFlags<QGraphicsScene::SceneLayer>", 0, Smoke::t_uint|Smoke::tf_stack },	//70
    { "QFlags<QGraphicsView::CacheModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//71
    { "QFlags<QGraphicsView::OptimizationFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//72
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//73
    { "QFlags<QImageIOPlugin::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//74
    { "QFlags<QInputDialog::InputDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//75
    { "QFlags<QItemSelectionModel::SelectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//76
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//77
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//78
    { "QFlags<QMainWindow::DockOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//79
    { "QFlags<QMdiArea::AreaOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//80
    { "QFlags<QMdiSubWindow::SubWindowOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//81
    { "QFlags<QMessageBox::StandardButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//82
    { "QFlags<QPaintEngine::DirtyFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//83
    { "QFlags<QPaintEngine::PaintEngineFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//84
    { "QFlags<QPainter::RenderHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//85
    { "QFlags<QPinchGesture::ChangeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//86
    { "QFlags<QSizePolicy::ControlType>", 0, Smoke::t_uint|Smoke::tf_stack },	//87
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//88
    { "QFlags<QStyle::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//89
    { "QFlags<QStyle::SubControl>", 0, Smoke::t_uint|Smoke::tf_stack },	//90
    { "QFlags<QStyleOptionButton::ButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//91
    { "QFlags<QStyleOptionFrameV2::FrameFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//92
    { "QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//93
    { "QFlags<QStyleOptionTab::CornerWidget>", 0, Smoke::t_uint|Smoke::tf_stack },	//94
    { "QFlags<QStyleOptionToolBar::ToolBarFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//95
    { "QFlags<QStyleOptionToolButton::ToolButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//96
    { "QFlags<QStyleOptionViewItemV2::ViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//97
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//98
    { "QFlags<QTextDocument::FindFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//99
    { "QFlags<QTextEdit::AutoFormattingFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//100
    { "QFlags<QTextFormat::PageBreakFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//101
    { "QFlags<QTextItem::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//102
    { "QFlags<QTextOption::Flag>", 0, Smoke::t_uint|Smoke::tf_stack },	//103
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//104
    { "QFlags<QTreeWidgetItemIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//105
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//106
    { "QFlags<QWidget::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//107
    { "QFlags<QWizard::WizardOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//108
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//109
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//110
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//111
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//112
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//113
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//114
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//115
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//116
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//117
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//118
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//119
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//120
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//121
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//122
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//123
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//124
    { "QFocusEvent*", 24, Smoke::t_class|Smoke::tf_ptr },	//125
    { "QFont&", 25, Smoke::t_class|Smoke::tf_ref },	//126
    { "QFontComboBox::FontFilter", 0, Smoke::t_enum|Smoke::tf_stack },	//127
    { "QFontDialog::FontDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//128
    { "QGestureRecognizer::ResultFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//129
    { "QGraphicsBlurEffect::BlurHint", 0, Smoke::t_enum|Smoke::tf_stack },	//130
    { "QGraphicsEffect::ChangeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//131
    { "QGraphicsItem*", 27, Smoke::t_class|Smoke::tf_ptr },	//132
    { "QGraphicsItem::Extension", 27, Smoke::t_enum|Smoke::tf_stack },	//133
    { "QGraphicsItem::GraphicsItemChange", 27, Smoke::t_enum|Smoke::tf_stack },	//134
    { "QGraphicsItem::GraphicsItemFlag", 27, Smoke::t_enum|Smoke::tf_stack },	//135
    { "QGraphicsObject*", 28, Smoke::t_class|Smoke::tf_ptr },	//136
    { "QGraphicsScene::SceneLayer", 0, Smoke::t_enum|Smoke::tf_stack },	//137
    { "QGraphicsSceneContextMenuEvent*", 29, Smoke::t_class|Smoke::tf_ptr },	//138
    { "QGraphicsSceneDragDropEvent*", 30, Smoke::t_class|Smoke::tf_ptr },	//139
    { "QGraphicsSceneHoverEvent*", 31, Smoke::t_class|Smoke::tf_ptr },	//140
    { "QGraphicsSceneMouseEvent*", 32, Smoke::t_class|Smoke::tf_ptr },	//141
    { "QGraphicsSceneWheelEvent*", 33, Smoke::t_class|Smoke::tf_ptr },	//142
    { "QGraphicsSvgItem*", 34, Smoke::t_class|Smoke::tf_ptr },	//143
    { "QGraphicsView::CacheModeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//144
    { "QGraphicsView::OptimizationFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//145
    { "QHideEvent*", 36, Smoke::t_class|Smoke::tf_ptr },	//146
    { "QIODevice*", 37, Smoke::t_class|Smoke::tf_ptr },	//147
    { "QIODevice::OpenModeFlag", 37, Smoke::t_enum|Smoke::tf_stack },	//148
    { "QIcon&", 38, Smoke::t_class|Smoke::tf_ref },	//149
    { "QImage&", 39, Smoke::t_class|Smoke::tf_ref },	//150
    { "QImageIOPlugin::Capability", 0, Smoke::t_enum|Smoke::tf_stack },	//151
    { "QIncompatibleFlag", 40, Smoke::t_class|Smoke::tf_stack },	//152
    { "QInputDialog::InputDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//153
    { "QInputMethodEvent*", 41, Smoke::t_class|Smoke::tf_ptr },	//154
    { "QItemSelectionModel::SelectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//155
    { "QKeyEvent*", 43, Smoke::t_class|Smoke::tf_ptr },	//156
    { "QKeySequence&", 44, Smoke::t_class|Smoke::tf_ref },	//157
    { "QKeySequence::StandardKey", 44, Smoke::t_enum|Smoke::tf_stack },	//158
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//159
    { "QLine", 46, Smoke::t_class|Smoke::tf_stack },	//160
    { "QLine&", 46, Smoke::t_class|Smoke::tf_ref },	//161
    { "QLineF", 47, Smoke::t_class|Smoke::tf_stack },	//162
    { "QLineF&", 47, Smoke::t_class|Smoke::tf_ref },	//163
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//164
    { "QListWidgetItem&", 48, Smoke::t_class|Smoke::tf_ref },	//165
    { "QLocale&", 49, Smoke::t_class|Smoke::tf_ref },	//166
    { "QLocale::NumberOption", 49, Smoke::t_enum|Smoke::tf_stack },	//167
    { "QMainWindow::DockOption", 0, Smoke::t_enum|Smoke::tf_stack },	//168
    { "QMatrix", 51, Smoke::t_class|Smoke::tf_stack },	//169
    { "QMatrix&", 51, Smoke::t_class|Smoke::tf_ref },	//170
    { "QMatrix4x4", 52, Smoke::t_class|Smoke::tf_stack },	//171
    { "QMatrix4x4&", 52, Smoke::t_class|Smoke::tf_ref },	//172
    { "QMdiArea::AreaOption", 0, Smoke::t_enum|Smoke::tf_stack },	//173
    { "QMdiSubWindow::SubWindowOption", 0, Smoke::t_enum|Smoke::tf_stack },	//174
    { "QMessageBox::StandardButton", 0, Smoke::t_enum|Smoke::tf_stack },	//175
    { "QMetaObject::Call", 53, Smoke::t_enum|Smoke::tf_stack },	//176
    { "QMouseEvent*", 55, Smoke::t_class|Smoke::tf_ptr },	//177
    { "QMoveEvent*", 56, Smoke::t_class|Smoke::tf_ptr },	//178
    { "QObject*", 57, Smoke::t_class|Smoke::tf_ptr },	//179
    { "QObject*(*)()", 57, Smoke::t_class|Smoke::tf_ptr },	//180
    { "QPaintDevice::PaintDeviceMetric", 58, Smoke::t_enum|Smoke::tf_stack },	//181
    { "QPaintEngine*", 59, Smoke::t_class|Smoke::tf_ptr },	//182
    { "QPaintEngine::DirtyFlag", 59, Smoke::t_enum|Smoke::tf_stack },	//183
    { "QPaintEngine::PaintEngineFeature", 59, Smoke::t_enum|Smoke::tf_stack },	//184
    { "QPaintEvent*", 60, Smoke::t_class|Smoke::tf_ptr },	//185
    { "QPainter*", 61, Smoke::t_class|Smoke::tf_ptr },	//186
    { "QPainter::RenderHint", 61, Smoke::t_enum|Smoke::tf_stack },	//187
    { "QPainterPath", 62, Smoke::t_class|Smoke::tf_stack },	//188
    { "QPainterPath&", 62, Smoke::t_class|Smoke::tf_ref },	//189
    { "QPalette&", 63, Smoke::t_class|Smoke::tf_ref },	//190
    { "QPen&", 64, Smoke::t_class|Smoke::tf_ref },	//191
    { "QPicture&", 66, Smoke::t_class|Smoke::tf_ref },	//192
    { "QPinchGesture::ChangeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//193
    { "QPixmap&", 67, Smoke::t_class|Smoke::tf_ref },	//194
    { "QPoint", 68, Smoke::t_class|Smoke::tf_stack },	//195
    { "QPoint&", 68, Smoke::t_class|Smoke::tf_ref },	//196
    { "QPointF", 69, Smoke::t_class|Smoke::tf_stack },	//197
    { "QPointF&", 69, Smoke::t_class|Smoke::tf_ref },	//198
    { "QPolygon", 70, Smoke::t_class|Smoke::tf_stack },	//199
    { "QPolygon&", 70, Smoke::t_class|Smoke::tf_ref },	//200
    { "QPolygonF", 71, Smoke::t_class|Smoke::tf_stack },	//201
    { "QPolygonF&", 71, Smoke::t_class|Smoke::tf_ref },	//202
    { "QQuaternion&", 72, Smoke::t_class|Smoke::tf_ref },	//203
    { "QRect", 73, Smoke::t_class|Smoke::tf_stack },	//204
    { "QRect&", 73, Smoke::t_class|Smoke::tf_ref },	//205
    { "QRectF", 74, Smoke::t_class|Smoke::tf_stack },	//206
    { "QRectF&", 74, Smoke::t_class|Smoke::tf_ref },	//207
    { "QRegExp&", 75, Smoke::t_class|Smoke::tf_ref },	//208
    { "QRegion", 76, Smoke::t_class|Smoke::tf_stack },	//209
    { "QRegion&", 76, Smoke::t_class|Smoke::tf_ref },	//210
    { "QResizeEvent*", 77, Smoke::t_class|Smoke::tf_ptr },	//211
    { "QShowEvent*", 78, Smoke::t_class|Smoke::tf_ptr },	//212
    { "QSize", 79, Smoke::t_class|Smoke::tf_stack },	//213
    { "QSize&", 79, Smoke::t_class|Smoke::tf_ref },	//214
    { "QSizeF&", 80, Smoke::t_class|Smoke::tf_ref },	//215
    { "QSizePolicy&", 81, Smoke::t_class|Smoke::tf_ref },	//216
    { "QSizePolicy::ControlType", 81, Smoke::t_enum|Smoke::tf_stack },	//217
    { "QSplitter&", 82, Smoke::t_class|Smoke::tf_ref },	//218
    { "QStandardItem&", 83, Smoke::t_class|Smoke::tf_ref },	//219
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//220
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//221
    { "QString::Null", 84, Smoke::t_class|Smoke::tf_stack },	//222
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//223
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//224
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//225
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//226
    { "QStyle&", 86, Smoke::t_class|Smoke::tf_ref },	//227
    { "QStyle::StateFlag", 86, Smoke::t_enum|Smoke::tf_stack },	//228
    { "QStyle::SubControl", 86, Smoke::t_enum|Smoke::tf_stack },	//229
    { "QStyleOptionButton::ButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//230
    { "QStyleOptionFrameV2::FrameFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//231
    { "QStyleOptionQ3ListViewItem::Q3ListViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//232
    { "QStyleOptionTab::CornerWidget", 0, Smoke::t_enum|Smoke::tf_stack },	//233
    { "QStyleOptionToolBar::ToolBarFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//234
    { "QStyleOptionToolButton::ToolButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//235
    { "QStyleOptionViewItemV2::ViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//236
    { "QSvgGenerator*", 89, Smoke::t_class|Smoke::tf_ptr },	//237
    { "QSvgRenderer*", 90, Smoke::t_class|Smoke::tf_ptr },	//238
    { "QSvgWidget*", 91, Smoke::t_class|Smoke::tf_ptr },	//239
    { "QTableWidgetItem&", 92, Smoke::t_class|Smoke::tf_ref },	//240
    { "QTabletEvent*", 93, Smoke::t_class|Smoke::tf_ptr },	//241
    { "QTextCodec*", 94, Smoke::t_class|Smoke::tf_ptr },	//242
    { "QTextCodec::ConversionFlag", 94, Smoke::t_enum|Smoke::tf_stack },	//243
    { "QTextDocument::FindFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//244
    { "QTextEdit::AutoFormattingFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//245
    { "QTextFormat&", 95, Smoke::t_class|Smoke::tf_ref },	//246
    { "QTextFormat::PageBreakFlag", 95, Smoke::t_enum|Smoke::tf_stack },	//247
    { "QTextItem::RenderFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//248
    { "QTextLength&", 96, Smoke::t_class|Smoke::tf_ref },	//249
    { "QTextOption::Flag", 0, Smoke::t_enum|Smoke::tf_stack },	//250
    { "QTextStream&", 97, Smoke::t_class|Smoke::tf_ref },	//251
    { "QTextStream&(*)(QTextStream&)", 97, Smoke::t_class|Smoke::tf_ref },	//252
    { "QTextStream::NumberFlag", 97, Smoke::t_enum|Smoke::tf_stack },	//253
    { "QTextStreamManipulator", 98, Smoke::t_class|Smoke::tf_stack },	//254
    { "QTime&", 100, Smoke::t_class|Smoke::tf_ref },	//255
    { "QTimerEvent*", 101, Smoke::t_class|Smoke::tf_ptr },	//256
    { "QTransform", 102, Smoke::t_class|Smoke::tf_stack },	//257
    { "QTransform&", 102, Smoke::t_class|Smoke::tf_ref },	//258
    { "QTreeWidgetItem&", 103, Smoke::t_class|Smoke::tf_ref },	//259
    { "QTreeWidgetItemIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//260
    { "QUrl&", 104, Smoke::t_class|Smoke::tf_ref },	//261
    { "QUrl::FormattingOption", 104, Smoke::t_enum|Smoke::tf_stack },	//262
    { "QUuid&", 105, Smoke::t_class|Smoke::tf_ref },	//263
    { "QVariant", 106, Smoke::t_class|Smoke::tf_stack },	//264
    { "QVariant&", 106, Smoke::t_class|Smoke::tf_ref },	//265
    { "QVariant::Type", 106, Smoke::t_enum|Smoke::tf_stack },	//266
    { "QVariant::Type&", 106, Smoke::t_enum|Smoke::tf_ref },	//267
    { "QVector2D&", 108, Smoke::t_class|Smoke::tf_ref },	//268
    { "QVector3D", 109, Smoke::t_class|Smoke::tf_stack },	//269
    { "QVector3D&", 109, Smoke::t_class|Smoke::tf_ref },	//270
    { "QVector4D", 110, Smoke::t_class|Smoke::tf_stack },	//271
    { "QVector4D&", 110, Smoke::t_class|Smoke::tf_ref },	//272
    { "QWheelEvent*", 111, Smoke::t_class|Smoke::tf_ptr },	//273
    { "QWidget*", 112, Smoke::t_class|Smoke::tf_ptr },	//274
    { "QWidget::RenderFlag", 112, Smoke::t_enum|Smoke::tf_stack },	//275
    { "QWizard::WizardOption", 0, Smoke::t_enum|Smoke::tf_stack },	//276
    { "QXmlStreamReader*", 113, Smoke::t_class|Smoke::tf_ptr },	//277
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//278
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//279
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//280
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//281
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//282
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//283
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//284
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//285
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//286
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//287
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//288
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//289
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//290
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//291
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//292
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//293
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//294
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//295
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//296
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//297
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//298
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//299
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//300
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//301
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//302
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//303
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//304
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//305
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//306
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//307
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//308
    { "Qt::HitTestAccuracy", 0, Smoke::t_enum|Smoke::tf_stack },	//309
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//310
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//311
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//312
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//313
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//314
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//315
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//316
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//317
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//318
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//319
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//320
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//321
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//322
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//323
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//324
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//325
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//326
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//327
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//328
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//329
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//330
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//331
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//332
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//333
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//334
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//335
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//336
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//337
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//338
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//339
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//340
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//341
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//342
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//343
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//344
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//345
    { "Qt::WhiteSpaceMode", 0, Smoke::t_enum|Smoke::tf_stack },	//346
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//347
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//348
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//349
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//350
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//351
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//352
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//353
    { "QtMsgType", 26, Smoke::t_enum|Smoke::tf_stack },	//354
    { "QtValidLicenseForActiveQtModule", 26, Smoke::t_enum|Smoke::tf_stack },	//355
    { "QtValidLicenseForCoreModule", 26, Smoke::t_enum|Smoke::tf_stack },	//356
    { "QtValidLicenseForDBusModule", 26, Smoke::t_enum|Smoke::tf_stack },	//357
    { "QtValidLicenseForDeclarativeModule", 26, Smoke::t_enum|Smoke::tf_stack },	//358
    { "QtValidLicenseForGuiModule", 26, Smoke::t_enum|Smoke::tf_stack },	//359
    { "QtValidLicenseForHelpModule", 26, Smoke::t_enum|Smoke::tf_stack },	//360
    { "QtValidLicenseForMultimediaModule", 26, Smoke::t_enum|Smoke::tf_stack },	//361
    { "QtValidLicenseForNetworkModule", 26, Smoke::t_enum|Smoke::tf_stack },	//362
    { "QtValidLicenseForOpenGLModule", 26, Smoke::t_enum|Smoke::tf_stack },	//363
    { "QtValidLicenseForOpenVGModule", 26, Smoke::t_enum|Smoke::tf_stack },	//364
    { "QtValidLicenseForQt3SupportLightModule", 26, Smoke::t_enum|Smoke::tf_stack },	//365
    { "QtValidLicenseForQt3SupportModule", 26, Smoke::t_enum|Smoke::tf_stack },	//366
    { "QtValidLicenseForScriptModule", 26, Smoke::t_enum|Smoke::tf_stack },	//367
    { "QtValidLicenseForScriptToolsModule", 26, Smoke::t_enum|Smoke::tf_stack },	//368
    { "QtValidLicenseForSqlModule", 26, Smoke::t_enum|Smoke::tf_stack },	//369
    { "QtValidLicenseForSvgModule", 26, Smoke::t_enum|Smoke::tf_stack },	//370
    { "QtValidLicenseForTestModule", 26, Smoke::t_enum|Smoke::tf_stack },	//371
    { "QtValidLicenseForXmlModule", 26, Smoke::t_enum|Smoke::tf_stack },	//372
    { "QtValidLicenseForXmlPatternsModule", 26, Smoke::t_enum|Smoke::tf_stack },	//373
    { "_XEvent*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//374
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//375
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//376
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//377
    { "const QBitArray&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//378
    { "const QBrush&", 5, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//379
    { "const QBrush*", 5, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//380
    { "const QByteArray", 6, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//381
    { "const QByteArray&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//382
    { "const QChar&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//383
    { "const QColor&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//384
    { "const QCursor&", 12, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//385
    { "const QDate&", 14, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//386
    { "const QDateTime&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//387
    { "const QDir&", 17, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//388
    { "const QEasingCurve&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//389
    { "const QEvent*", 23, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//390
    { "const QFont&", 25, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//391
    { "const QGraphicsItem*", 27, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//392
    { "const QHashDummyValue&", 35, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//393
    { "const QIcon&", 38, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//394
    { "const QImage&", 39, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//395
    { "const QItemSelectionRange&", 42, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//396
    { "const QKeySequence&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//397
    { "const QLatin1String&", 45, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//398
    { "const QLine&", 46, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//399
    { "const QLineF&", 47, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//400
    { "const QListWidgetItem&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//401
    { "const QLocale&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//402
    { "const QMargins&", 50, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//403
    { "const QMatrix&", 51, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//404
    { "const QMatrix4x4&", 52, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//405
    { "const QMetaObject&", 53, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//406
    { "const QMetaObject*", 53, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//407
    { "const QModelIndex&", 54, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//408
    { "const QObject*", 57, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//409
    { "const QPainterPath&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//410
    { "const QPalette&", 63, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//411
    { "const QPen&", 64, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//412
    { "const QPersistentModelIndex&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//413
    { "const QPicture&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//414
    { "const QPixmap&", 67, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//415
    { "const QPoint", 68, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//416
    { "const QPoint&", 68, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//417
    { "const QPointF", 69, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//418
    { "const QPointF&", 69, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//419
    { "const QPolygon&", 70, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//420
    { "const QPolygonF&", 71, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//421
    { "const QQuaternion", 72, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//422
    { "const QQuaternion&", 72, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//423
    { "const QRect&", 73, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//424
    { "const QRectF&", 74, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//425
    { "const QRegExp&", 75, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//426
    { "const QRegExp*", 75, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//427
    { "const QRegion&", 76, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//428
    { "const QSize", 79, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//429
    { "const QSize&", 79, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//430
    { "const QSizeF", 80, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//431
    { "const QSizeF&", 80, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//432
    { "const QSizePolicy&", 81, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//433
    { "const QSplitter&", 82, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//434
    { "const QStandardItem&", 83, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//435
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//436
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//437
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//438
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//439
    { "const QStringRef&", 85, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//440
    { "const QStyleOption&", 87, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//441
    { "const QStyleOption::OptionType&", 87, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//442
    { "const QStyleOptionGraphicsItem*", 88, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//443
    { "const QTableWidgetItem&", 92, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//444
    { "const QTextFormat&", 95, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//445
    { "const QTextLength&", 96, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//446
    { "const QTileRules&", 99, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//447
    { "const QTime&", 100, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//448
    { "const QTransform&", 102, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//449
    { "const QTreeWidgetItem&", 103, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//450
    { "const QUrl&", 104, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//451
    { "const QUuid&", 105, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//452
    { "const QVariant&", 106, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//453
    { "const QVariant::Type", 106, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//454
    { "const QVariantComparisonHelper&", 107, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//455
    { "const QVector2D", 108, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//456
    { "const QVector2D&", 108, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//457
    { "const QVector3D", 109, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//458
    { "const QVector3D&", 109, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//459
    { "const QVector4D", 110, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//460
    { "const QVector4D&", 110, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//461
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//462
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//463
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//464
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//465
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//466
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//467
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//468
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//469
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//470
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//471
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//472
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//473
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//474
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//475
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//476
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//477
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//478
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//479
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//480
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//481
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//482
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//483
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//484
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    378, 378, 0,	//1  const QBitArray&, const QBitArray&
    413, 0,	//4  const QPersistentModelIndex&
    298, 467, 0,	//6  Qt::DockWidgetArea, int
    462, 462, 467, 0,	//9  const char*, const char*, int
    129, 129, 0,	//13  QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag
    417, 465, 0,	//16  const QPoint&, double
    465, 0,	//19  double
    31, 396, 0,	//21  QDebug, const QItemSelectionRange&
    465, 419, 0,	//24  double, const QPointF&
    323, 118, 0,	//27  Qt::MouseButton, QFlags<Qt::MouseButton>
    403, 403, 0,	//30  const QMargins&, const QMargins&
    31, 441, 0,	//33  QDebug, const QStyleOption&
    465, 432, 0,	//36  double, const QSizeF&
    34, 467, 0,	//39  QDir::SortFlag, int
    2, 2, 0,	//42  QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger
    31, 413, 0,	//45  QDebug, const QPersistentModelIndex&
    27, 150, 0,	//48  QDataStream&, QImage&
    27, 433, 0,	//51  QDataStream&, const QSizePolicy&
    312, 467, 0,	//54  Qt::InputMethodHint, int
    234, 467, 0,	//57  QStyleOptionToolBar::ToolBarFeature, int
    31, 449, 0,	//60  QDebug, const QTransform&
    377, 462, 0,	//63  char*, const char*
    424, 424, 0,	//66  const QRect&, const QRect&
    430, 430, 0,	//69  const QSize&, const QSize&
    27, 449, 0,	//72  QDataStream&, const QTransform&
    243, 243, 0,	//75  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    31, 417, 0,	//78  QDebug, const QPoint&
    405, 405, 0,	//81  const QMatrix4x4&, const QMatrix4x4&
    473, 0,	//84  unsigned char
    33, 56, 0,	//86  QDir::Filter, QFlags<QDir::Filter>
    461, 461, 0,	//89  const QVector4D&, const QVector4D&
    419, 404, 0,	//92  const QPointF&, const QMatrix&
    184, 184, 0,	//95  QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature
    399, 449, 0,	//98  const QLine&, const QTransform&
    457, 457, 0,	//101  const QVector2D&, const QVector2D&
    44, 61, 0,	//104  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    350, 123, 0,	//107  Qt::WindowState, QFlags<Qt::WindowState>
    432, 465, 0,	//110  const QSizeF&, double
    27, 399, 0,	//113  QDataStream&, const QLine&
    33, 467, 0,	//116  QDir::Filter, int
    449, 449, 0,	//119  const QTransform&, const QTransform&
    475, 0,	//122  unsigned int
    46, 63, 0,	//124  QFileDialog::Option, QFlags<QFileDialog::Option>
    432, 432, 0,	//127  const QSizeF&, const QSizeF&
    382, 382, 0,	//130  const QByteArray&, const QByteArray&
    398, 440, 0,	//133  const QLatin1String&, const QStringRef&
    423, 0,	//136  const QQuaternion&
    3, 3, 0,	//138  QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption
    323, 323, 0,	//141  Qt::MouseButton, Qt::MouseButton
    31, 454, 0,	//144  QDebug, const QVariant::Type
    453, 455, 0,	//147  const QVariant&, const QVariantComparisonHelper&
    423, 465, 0,	//150  const QQuaternion&, double
    15, 15, 0,	//153  QBool, QBool
    233, 233, 0,	//156  QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget
    232, 232, 0,	//159  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature
    127, 127, 0,	//162  QFontComboBox::FontFilter, QFontComboBox::FontFilter
    278, 109, 0,	//165  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    440, 0,	//168  const QStringRef&
    247, 247, 0,	//170  QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag
    222, 222, 0,	//173  QString::Null, QString::Null
    31, 391, 0,	//176  QDebug, const QFont&
    31, 420, 0,	//179  QDebug, const QPolygon&
    27, 425, 0,	//182  QDataStream&, const QRectF&
    27, 166, 0,	//185  QDataStream&, QLocale&
    229, 467, 0,	//188  QStyle::SubControl, int
    36, 36, 0,	//191  QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature
    19, 437, 0,	//194  QChar, const QString&
    148, 73, 0,	//197  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    186, 424, 411, 375, 467, 380, 0,	//200  QPainter*, const QRect&, const QPalette&, bool, int, const QBrush*
    186, 424, 411, 0,	//207  QPainter*, const QRect&, const QPalette&
    186, 424, 411, 375, 0,	//211  QPainter*, const QRect&, const QPalette&, bool
    186, 424, 411, 375, 467, 0,	//216  QPainter*, const QRect&, const QPalette&, bool, int
    457, 0,	//222  const QVector2D&
    33, 33, 0,	//224  QDir::Filter, QDir::Filter
    27, 411, 0,	//227  QDataStream&, const QPalette&
    31, 448, 0,	//230  QDebug, const QTime&
    244, 99, 0,	//233  QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>
    423, 423, 0,	//236  const QQuaternion&, const QQuaternion&
    27, 382, 0,	//239  QDataStream&, const QByteArray&
    31, 386, 0,	//242  QDebug, const QDate&
    378, 0,	//245  const QBitArray&
    245, 100, 0,	//247  QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>
    463, 474, 467, 0,	//250  const unsigned char*, unsigned char*, int
    11, 52, 0,	//254  QAccessible::StateFlag, QFlags<QAccessible::StateFlag>
    421, 449, 0,	//257  const QPolygonF&, const QTransform&
    453, 266, 482, 0,	//260  const QVariant&, QVariant::Type, void*
    437, 0,	//264  const QString&
    478, 0,	//266  unsigned short
    180, 0,	//268  QObject*(*)()
    468, 0,	//270  long
    340, 340, 0,	//272  Qt::ToolBarArea, Qt::ToolBarArea
    469, 0,	//275  long long
    31, 421, 0,	//277  QDebug, const QPolygonF&
    193, 86, 0,	//280  QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>
    186, 467, 467, 467, 467, 411, 375, 380, 0,	//283  QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*
    186, 467, 467, 467, 467, 411, 0,	//292  QPainter*, int, int, int, int, const QPalette&
    186, 467, 467, 467, 467, 411, 375, 0,	//299  QPainter*, int, int, int, int, const QPalette&, bool
    275, 467, 0,	//307  QWidget::RenderFlag, int
    31, 384, 0,	//310  QDebug, const QColor&
    260, 467, 0,	//313  QTreeWidgetItemIterator::IteratorFlag, int
    300, 467, 0,	//316  Qt::DropAction, int
    186, 467, 467, 467, 467, 411, 375, 467, 467, 380, 0,	//319  QPainter*, int, int, int, int, const QPalette&, bool, int, int, const QBrush*
    186, 467, 467, 467, 467, 411, 375, 467, 0,	//330  QPainter*, int, int, int, int, const QPalette&, bool, int
    186, 467, 467, 467, 467, 411, 375, 467, 467, 0,	//339  QPainter*, int, int, int, int, const QPalette&, bool, int, int
    27, 438, 0,	//349  QDataStream&, const QStringList&
    1, 1, 0,	//352  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    27, 191, 0,	//355  QDataStream&, QPen&
    466, 0,	//358  float
    129, 66, 0,	//360  QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>
    278, 278, 0,	//363  Qt::AlignmentFlag, Qt::AlignmentFlag
    27, 23, 0,	//366  QDataStream&, QColor&
    35, 467, 0,	//369  QDirIterator::IteratorFlag, int
    27, 426, 0,	//372  QDataStream&, const QRegExp&
    262, 467, 0,	//375  QUrl::FormattingOption, int
    35, 58, 0,	//378  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    382, 462, 0,	//381  const QByteArray&, const char*
    131, 131, 0,	//384  QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag
    128, 467, 0,	//387  QFontDialog::FontDialogOption, int
    31, 432, 0,	//390  QDebug, const QSizeF&
    298, 110, 0,	//393  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    232, 467, 0,	//396  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int
    399, 404, 0,	//399  const QLine&, const QMatrix&
    183, 183, 0,	//402  QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag
    467, 467, 467, 0,	//405  int, int, int
    400, 404, 0,	//409  const QLineF&, const QMatrix&
    325, 325, 0,	//412  Qt::Orientation, Qt::Orientation
    410, 404, 0,	//415  const QPainterPath&, const QMatrix&
    340, 467, 0,	//418  Qt::ToolBarArea, int
    459, 459, 0,	//421  const QVector3D&, const QVector3D&
    27, 198, 0,	//424  QDataStream&, QPointF&
    27, 397, 0,	//427  QDataStream&, const QKeySequence&
    321, 467, 0,	//430  Qt::MatchFlag, int
    27, 444, 0,	//433  QDataStream&, const QTableWidgetItem&
    31, 134, 0,	//436  QDebug, QGraphicsItem::GraphicsItemChange
    31, 389, 0,	//439  QDebug, const QEasingCurve&
    155, 467, 0,	//442  QItemSelectionModel::SelectionFlag, int
    27, 385, 0,	//445  QDataStream&, const QCursor&
    175, 82, 0,	//448  QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>
    305, 305, 0,	//451  Qt::GestureFlag, Qt::GestureFlag
    27, 28, 0,	//454  QDataStream&, QDate&
    27, 414, 0,	//457  QDataStream&, const QPicture&
    148, 148, 0,	//460  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    175, 175, 0,	//463  QMessageBox::StandardButton, QMessageBox::StandardButton
    44, 467, 0,	//466  QEventLoop::ProcessEventsFlag, int
    376, 382, 0,	//469  char, const QByteArray&
    27, 272, 0,	//472  QDataStream&, QVector4D&
    174, 81, 0,	//475  QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>
    31, 89, 0,	//478  QDebug, QFlags<QStyle::StateFlag>
    462, 382, 0,	//481  const char*, const QByteArray&
    128, 128, 0,	//484  QFontDialog::FontDialogOption, QFontDialog::FontDialogOption
    27, 263, 0,	//487  QDataStream&, QUuid&
    465, 465, 0,	//490  double, double
    27, 18, 0,	//493  QDataStream&, QByteArray&
    27, 265, 0,	//496  QDataStream&, QVariant&
    27, 450, 0,	//499  QDataStream&, const QTreeWidgetItem&
    27, 208, 0,	//502  QDataStream&, QRegExp&
    187, 187, 0,	//505  QPainter::RenderHint, QPainter::RenderHint
    419, 419, 0,	//508  const QPointF&, const QPointF&
    449, 465, 0,	//511  const QTransform&, double
    251, 434, 0,	//514  QTextStream&, const QSplitter&
    4, 50, 0,	//517  QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>
    457, 465, 0,	//520  const QVector2D&, double
    260, 260, 0,	//523  QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag
    230, 230, 0,	//526  QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature
    440, 440, 0,	//529  const QStringRef&, const QStringRef&
    461, 465, 0,	//532  const QVector4D&, double
    230, 467, 0,	//535  QStyleOptionButton::ButtonFeature, int
    45, 467, 0,	//538  QFile::Permission, int
    31, 400, 0,	//541  QDebug, const QLineF&
    19, 19, 0,	//544  QChar, QChar
    405, 465, 0,	//547  const QMatrix4x4&, double
    410, 449, 0,	//550  const QPainterPath&, const QTransform&
    27, 379, 0,	//553  QDataStream&, const QBrush&
    173, 80, 0,	//556  QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>
    462, 462, 475, 0,	//559  const char*, const char*, unsigned int
    382, 0,	//563  const QByteArray&
    4, 4, 0,	//565  QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag
    153, 467, 0,	//568  QInputDialog::InputDialogOption, int
    228, 467, 0,	//571  QStyle::StateFlag, int
    31, 56, 0,	//574  QDebug, QFlags<QDir::Filter>
    462, 467, 0,	//577  const char*, int
    27, 210, 0,	//580  QDataStream&, QRegion&
    187, 467, 0,	//583  QPainter::RenderHint, int
    233, 467, 0,	//586  QStyleOptionTab::CornerWidget, int
    276, 276, 0,	//589  QWizard::WizardOption, QWizard::WizardOption
    253, 104, 0,	//592  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    27, 14, 0,	//595  QDataStream&, QBitArray&
    276, 108, 0,	//598  QWizard::WizardOption, QFlags<QWizard::WizardOption>
    419, 465, 0,	//601  const QPointF&, double
    184, 84, 0,	//604  QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>
    135, 135, 0,	//607  QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag
    19, 0,	//610  QChar
    186, 467, 467, 467, 467, 411, 375, 467, 380, 0,	//612  QPainter*, int, int, int, int, const QPalette&, bool, int, const QBrush*
    1, 47, 0,	//622  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    481, 0,	//625  void(*)(QtMsgType,const char*)
    27, 386, 0,	//627  QDataStream&, const QDate&
    409, 437, 406, 0,	//630  const QObject*, const QString&, const QMetaObject&
    321, 117, 0,	//634  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    459, 405, 0,	//637  const QVector3D&, const QMatrix4x4&
    305, 467, 0,	//640  Qt::GestureFlag, int
    186, 424, 411, 375, 380, 0,	//643  QPainter*, const QRect&, const QPalette&, bool, const QBrush*
    243, 467, 0,	//649  QTextCodec::ConversionFlag, int
    217, 217, 0,	//652  QSizePolicy::ControlType, QSizePolicy::ControlType
    127, 467, 0,	//655  QFontComboBox::FontFilter, int
    244, 467, 0,	//658  QTextDocument::FindFlag, int
    27, 26, 0,	//661  QDataStream&, QCursor&
    318, 116, 0,	//664  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    459, 465, 0,	//667  const QVector3D&, double
    321, 321, 0,	//670  Qt::MatchFlag, Qt::MatchFlag
    27, 258, 0,	//673  QDataStream&, QTransform&
    420, 404, 0,	//676  const QPolygon&, const QMatrix&
    482, 0,	//679  void*
    233, 94, 0,	//681  QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>
    437, 222, 0,	//684  const QString&, QString::Null
    31, 412, 0,	//687  QDebug, const QPen&
    235, 235, 0,	//690  QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature
    159, 467, 0,	//693  QLibrary::LoadHint, int
    27, 215, 0,	//696  QDataStream&, QSizeF&
    440, 462, 0,	//699  const QStringRef&, const char*
    186, 424, 411, 375, 467, 467, 380, 0,	//702  QPainter*, const QRect&, const QPalette&, bool, int, int, const QBrush*
    186, 424, 411, 375, 467, 467, 0,	//710  QPainter*, const QRect&, const QPalette&, bool, int, int
    245, 245, 0,	//717  QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag
    183, 467, 0,	//720  QPaintEngine::DirtyFlag, int
    135, 467, 0,	//723  QGraphicsItem::GraphicsItemFlag, int
    419, 0,	//726  const QPointF&
    482, 472, 472, 472, 0,	//728  void*, size_t, size_t, size_t
    315, 315, 0,	//733  Qt::ItemFlag, Qt::ItemFlag
    27, 415, 0,	//736  QDataStream&, const QPixmap&
    477, 0,	//739  unsigned long long
    351, 124, 0,	//741  Qt::WindowType, QFlags<Qt::WindowType>
    31, 430, 0,	//744  QDebug, const QSize&
    419, 449, 0,	//747  const QPointF&, const QTransform&
    315, 115, 0,	//750  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    31, 459, 0,	//753  QDebug, const QVector3D&
    343, 122, 0,	//756  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    36, 59, 0,	//759  QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>
    131, 467, 0,	//762  QGraphicsEffect::ChangeFlag, int
    186, 467, 467, 467, 467, 384, 467, 380, 0,	//765  QPainter*, int, int, int, int, const QColor&, int, const QBrush*
    186, 467, 467, 467, 467, 384, 0,	//774  QPainter*, int, int, int, int, const QColor&
    186, 467, 467, 467, 467, 384, 467, 0,	//781  QPainter*, int, int, int, int, const QColor&, int
    27, 451, 0,	//789  QDataStream&, const QUrl&
    482, 467, 472, 0,	//792  void*, int, size_t
    217, 87, 0,	//796  QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>
    27, 453, 0,	//799  QDataStream&, const QVariant&
    27, 161, 0,	//802  QDataStream&, QLine&
    382, 467, 0,	//805  const QByteArray&, int
    4, 467, 0,	//808  QAbstractSpinBox::StepEnabledFlag, int
    31, 457, 0,	//811  QDebug, const QVector2D&
    318, 318, 0,	//814  Qt::KeyboardModifier, Qt::KeyboardModifier
    405, 461, 0,	//817  const QMatrix4x4&, const QVector4D&
    11, 467, 0,	//820  QAccessible::StateFlag, int
    186, 424, 384, 467, 380, 0,	//823  QPainter*, const QRect&, const QColor&, int, const QBrush*
    186, 424, 384, 0,	//829  QPainter*, const QRect&, const QColor&
    186, 424, 384, 467, 0,	//833  QPainter*, const QRect&, const QColor&, int
    193, 193, 0,	//838  QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag
    30, 467, 0,	//841  QDateTimeEdit::Section, int
    480, 0,	//844  void(*)()
    278, 467, 0,	//846  Qt::AlignmentFlag, int
    417, 404, 0,	//849  const QPoint&, const QMatrix&
    318, 467, 0,	//852  Qt::KeyboardModifier, int
    315, 467, 0,	//855  Qt::ItemFlag, int
    310, 113, 0,	//858  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    27, 412, 0,	//861  QDataStream&, const QPen&
    417, 417, 0,	//864  const QPoint&, const QPoint&
    223, 467, 0,	//867  QString::SectionFlag, int
    351, 467, 0,	//870  Qt::WindowType, int
    275, 275, 0,	//873  QWidget::RenderFlag, QWidget::RenderFlag
    440, 437, 0,	//876  const QStringRef&, const QString&
    186, 424, 403, 415, 424, 403, 447, 60, 0,	//879  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&, QFlags<QDrawBorderPixmap::DrawingHint>
    186, 424, 403, 415, 424, 403, 0,	//888  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&
    186, 424, 403, 415, 424, 403, 447, 0,	//895  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&
    393, 393, 0,	//903  const QHashDummyValue&, const QHashDummyValue&
    462, 475, 0,	//906  const char*, unsigned int
    262, 262, 0,	//909  QUrl::FormattingOption, QUrl::FormattingOption
    24, 467, 0,	//912  QColorDialog::ColorDialogOption, int
    27, 149, 0,	//915  QDataStream&, QIcon&
    27, 420, 0,	//918  QDataStream&, const QPolygon&
    343, 467, 0,	//921  Qt::TouchPointState, int
    275, 107, 0,	//924  QWidget::RenderFlag, QFlags<QWidget::RenderFlag>
    31, 403, 0,	//927  QDebug, const QMargins&
    247, 467, 0,	//930  QTextFormat::PageBreakFlag, int
    462, 0,	//933  const char*
    151, 467, 0,	//935  QImageIOPlugin::Capability, int
    31, 69, 0,	//938  QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>
    144, 467, 0,	//941  QGraphicsView::CacheModeFlag, int
    2, 467, 0,	//944  QAbstractItemView::EditTrigger, int
    31, 461, 0,	//947  QDebug, const QVector4D&
    251, 252, 0,	//950  QTextStream&, QTextStream&(*)(QTextStream&)
    276, 467, 0,	//953  QWizard::WizardOption, int
    46, 467, 0,	//956  QFileDialog::Option, int
    228, 89, 0,	//959  QStyle::StateFlag, QFlags<QStyle::StateFlag>
    405, 417, 0,	//962  const QMatrix4x4&, const QPoint&
    235, 96, 0,	//965  QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>
    27, 42, 0,	//968  QDataStream&, QEasingCurve&
    137, 70, 0,	//971  QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>
    173, 173, 0,	//974  QMdiArea::AreaOption, QMdiArea::AreaOption
    27, 219, 0,	//977  QDataStream&, QStandardItem&
    27, 400, 0,	//980  QDataStream&, const QLineF&
    45, 62, 0,	//983  QFile::Permission, QFlags<QFile::Permission>
    184, 467, 0,	//986  QPaintEngine::PaintEngineFeature, int
    31, 410, 0,	//989  QDebug, const QPainterPath&
    377, 462, 475, 0,	//992  char*, const char*, unsigned int
    24, 53, 0,	//996  QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>
    27, 16, 0,	//999  QDataStream&, QBrush&
    27, 419, 0,	//1002  QDataStream&, const QPointF&
    27, 172, 0,	//1005  QDataStream&, QMatrix4x4&
    461, 0,	//1008  const QVector4D&
    31, 405, 0,	//1010  QDebug, const QMatrix4x4&
    451, 0,	//1013  const QUrl&
    145, 467, 0,	//1015  QGraphicsView::OptimizationFlag, int
    27, 246, 0,	//1018  QDataStream&, QTextFormat&
    467, 0,	//1021  int
    417, 466, 0,	//1023  const QPoint&, float
    167, 467, 0,	//1026  QLocale::NumberOption, int
    27, 165, 0,	//1029  QDataStream&, QListWidgetItem&
    482, 472, 0,	//1032  void*, size_t
    131, 68, 0,	//1035  QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>
    130, 67, 0,	//1038  QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>
    437, 437, 0,	//1041  const QString&, const QString&
    235, 467, 0,	//1044  QStyleOptionToolButton::ToolButtonFeature, int
    175, 467, 0,	//1047  QMessageBox::StandardButton, int
    462, 462, 462, 467, 0,	//1050  const char*, const char*, const char*, int
    437, 440, 0,	//1055  const QString&, const QStringRef&
    31, 135, 0,	//1058  QDebug, QGraphicsItem::GraphicsItemFlag
    10, 51, 0,	//1061  QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>
    158, 156, 0,	//1064  QKeySequence::StandardKey, QKeyEvent*
    217, 467, 0,	//1067  QSizePolicy::ControlType, int
    27, 216, 0,	//1070  QDataStream&, QSizePolicy&
    462, 440, 0,	//1073  const char*, const QStringRef&
    27, 170, 0,	//1076  QDataStream&, QMatrix&
    323, 467, 0,	//1079  Qt::MouseButton, int
    232, 93, 0,	//1082  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>
    27, 214, 0,	//1085  QDataStream&, QSize&
    35, 35, 0,	//1088  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    312, 312, 0,	//1091  Qt::InputMethodHint, Qt::InputMethodHint
    253, 253, 0,	//1094  QTextStream::NumberFlag, QTextStream::NumberFlag
    405, 419, 0,	//1097  const QMatrix4x4&, const QPointF&
    405, 0,	//1100  const QMatrix4x4&
    3, 49, 0,	//1102  QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>
    465, 457, 0,	//1105  double, const QVector2D&
    153, 153, 0,	//1108  QInputDialog::InputDialogOption, QInputDialog::InputDialogOption
    3, 467, 0,	//1111  QAbstractPrintDialog::PrintDialogOption, int
    27, 267, 0,	//1114  QDataStream&, QVariant::Type&
    337, 120, 0,	//1117  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    27, 459, 0,	//1120  QDataStream&, const QVector3D&
    400, 449, 0,	//1123  const QLineF&, const QTransform&
    440, 398, 0,	//1126  const QStringRef&, const QLatin1String&
    471, 0,	//1129  signed char
    27, 421, 0,	//1131  QDataStream&, const QPolygonF&
    27, 432, 0,	//1134  QDataStream&, const QSizeF&
    340, 121, 0,	//1137  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    465, 459, 0,	//1140  double, const QVector3D&
    27, 391, 0,	//1143  QDataStream&, const QFont&
    250, 103, 0,	//1146  QTextOption::Flag, QFlags<QTextOption::Flag>
    462, 462, 0,	//1149  const char*, const char*
    27, 240, 0,	//1152  QDataStream&, QTableWidgetItem&
    229, 90, 0,	//1155  QStyle::SubControl, QFlags<QStyle::SubControl>
    27, 457, 0,	//1158  QDataStream&, const QVector2D&
    27, 404, 0,	//1161  QDataStream&, const QMatrix&
    187, 85, 0,	//1164  QPainter::RenderHint, QFlags<QPainter::RenderHint>
    159, 159, 0,	//1167  QLibrary::LoadHint, QLibrary::LoadHint
    465, 405, 0,	//1170  double, const QMatrix4x4&
    145, 72, 0,	//1173  QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>
    350, 350, 0,	//1176  Qt::WindowState, Qt::WindowState
    248, 248, 0,	//1179  QTextItem::RenderFlag, QTextItem::RenderFlag
    31, 451, 0,	//1182  QDebug, const QUrl&
    144, 144, 0,	//1185  QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag
    262, 106, 0,	//1188  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    27, 202, 0,	//1191  QDataStream&, QPolygonF&
    260, 105, 0,	//1194  QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>
    27, 190, 0,	//1197  QDataStream&, QPalette&
    27, 410, 0,	//1200  QDataStream&, const QPainterPath&
    11, 11, 0,	//1203  QAccessible::StateFlag, QAccessible::StateFlag
    425, 425, 0,	//1206  const QRectF&, const QRectF&
    465, 430, 0,	//1209  double, const QSize&
    156, 158, 0,	//1212  QKeyEvent*, QKeySequence::StandardKey
    45, 45, 0,	//1215  QFile::Permission, QFile::Permission
    408, 0,	//1218  const QModelIndex&
    144, 71, 0,	//1220  QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>
    229, 229, 0,	//1223  QStyle::SubControl, QStyle::SubControl
    31, 399, 0,	//1226  QDebug, const QLine&
    2, 48, 0,	//1229  QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>
    193, 467, 0,	//1232  QPinchGesture::ChangeFlag, int
    27, 203, 0,	//1235  QDataStream&, QQuaternion&
    461, 405, 0,	//1238  const QVector4D&, const QMatrix4x4&
    27, 378, 0,	//1241  QDataStream&, const QBitArray&
    404, 404, 0,	//1244  const QMatrix&, const QMatrix&
    236, 236, 0,	//1247  QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature
    482, 464, 472, 0,	//1250  void*, const void*, size_t
    465, 417, 0,	//1254  double, const QPoint&
    168, 79, 0,	//1257  QMainWindow::DockOption, QFlags<QMainWindow::DockOption>
    31, 136, 0,	//1260  QDebug, QGraphicsObject*
    31, 408, 0,	//1263  QDebug, const QModelIndex&
    470, 0,	//1266  short
    31, 387, 0,	//1268  QDebug, const QDateTime&
    174, 174, 0,	//1271  QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption
    27, 417, 0,	//1274  QDataStream&, const QPoint&
    27, 395, 0,	//1277  QDataStream&, const QImage&
    465, 423, 0,	//1280  double, const QQuaternion&
    382, 376, 0,	//1283  const QByteArray&, char
    244, 244, 0,	//1286  QTextDocument::FindFlag, QTextDocument::FindFlag
    31, 397, 0,	//1289  QDebug, const QKeySequence&
    183, 83, 0,	//1292  QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>
    32, 32, 0,	//1295  QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton
    10, 10, 0,	//1298  QAccessible::RelationFlag, QAccessible::RelationFlag
    31, 409, 0,	//1301  QDebug, const QObject*
    137, 137, 0,	//1304  QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer
    31, 390, 0,	//1307  QDebug, const QEvent*
    466, 466, 0,	//1310  float, float
    27, 126, 0,	//1313  QDataStream&, QFont&
    34, 57, 0,	//1316  QDir::SortFlag, QFlags<QDir::SortFlag>
    377, 472, 462, 479, 0,	//1319  char*, size_t, const char*, va_list
    153, 75, 0,	//1324  QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>
    223, 88, 0,	//1327  QString::SectionFlag, QFlags<QString::SectionFlag>
    27, 430, 0,	//1330  QDataStream&, const QSize&
    155, 76, 0,	//1333  QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>
    27, 207, 0,	//1336  QDataStream&, QRectF&
    243, 98, 0,	//1339  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    31, 73, 0,	//1342  QDebug, QFlags<QIODevice::OpenModeFlag>
    27, 383, 0,	//1345  QDataStream&, const QChar&
    375, 15, 0,	//1348  bool, QBool
    476, 0,	//1351  unsigned long
    31, 425, 0,	//1353  QDebug, const QRectF&
    129, 467, 0,	//1356  QGestureRecognizer::ResultFlag, int
    420, 449, 0,	//1359  const QPolygon&, const QTransform&
    15, 375, 0,	//1362  QBool, bool
    350, 467, 0,	//1365  Qt::WindowState, int
    236, 97, 0,	//1368  QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>
    27, 249, 0,	//1371  QDataStream&, QTextLength&
    27, 225, 0,	//1374  QDataStream&, QStringList&
    27, 424, 0,	//1377  QDataStream&, const QRect&
    27, 428, 0,	//1380  QDataStream&, const QRegion&
    298, 298, 0,	//1383  Qt::DockWidgetArea, Qt::DockWidgetArea
    31, 404, 0,	//1386  QDebug, const QMatrix&
    130, 467, 0,	//1389  QGraphicsBlurEffect::BlurHint, int
    167, 78, 0,	//1392  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    250, 250, 0,	//1395  QTextOption::Flag, QTextOption::Flag
    27, 384, 0,	//1398  QDataStream&, const QColor&
    351, 351, 0,	//1401  Qt::WindowType, Qt::WindowType
    30, 30, 0,	//1404  QDateTimeEdit::Section, QDateTimeEdit::Section
    430, 465, 0,	//1407  const QSize&, double
    405, 459, 0,	//1410  const QMatrix4x4&, const QVector3D&
    222, 437, 0,	//1413  QString::Null, const QString&
    31, 379, 0,	//1416  QDebug, const QBrush&
    34, 34, 0,	//1419  QDir::SortFlag, QDir::SortFlag
    312, 114, 0,	//1422  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    27, 196, 0,	//1425  QDataStream&, QPoint&
    31, 419, 0,	//1428  QDebug, const QPointF&
    409, 437, 427, 406, 164, 0,	//1431  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    231, 231, 0,	//1437  QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature
    27, 29, 0,	//1440  QDataStream&, QDateTime&
    27, 448, 0,	//1443  QDataStream&, const QTime&
    27, 259, 0,	//1446  QDataStream&, QTreeWidgetItem&
    27, 157, 0,	//1449  QDataStream&, QKeySequence&
    245, 467, 0,	//1452  QTextEdit::AutoFormattingFlag, int
    27, 452, 0,	//1455  QDataStream&, const QUuid&
    251, 254, 0,	//1458  QTextStream&, QTextStreamManipulator
    151, 74, 0,	//1461  QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>
    27, 446, 0,	//1464  QDataStream&, const QTextLength&
    428, 449, 0,	//1467  const QRegion&, const QTransform&
    419, 405, 0,	//1470  const QPointF&, const QMatrix4x4&
    31, 132, 0,	//1473  QDebug, QGraphicsItem*
    36, 467, 0,	//1476  QDockWidget::DockWidgetFeature, int
    27, 401, 0,	//1479  QDataStream&, const QListWidgetItem&
    223, 223, 0,	//1482  QString::SectionFlag, QString::SectionFlag
    472, 472, 0,	//1485  size_t, size_t
    137, 467, 0,	//1488  QGraphicsScene::SceneLayer, int
    253, 467, 0,	//1491  QTextStream::NumberFlag, int
    463, 467, 467, 0,	//1494  const unsigned char*, int, int
    463, 467, 0,	//1498  const unsigned char*, int
    148, 467, 0,	//1501  QIODevice::OpenModeFlag, int
    467, 417, 0,	//1504  int, const QPoint&
    31, 442, 0,	//1507  QDebug, const QStyleOption::OptionType&
    305, 112, 0,	//1510  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    27, 435, 0,	//1513  QDataStream&, const QStandardItem&
    421, 404, 0,	//1516  const QPolygonF&, const QMatrix&
    10, 467, 0,	//1519  QAccessible::RelationFlag, int
    417, 0,	//1522  const QPoint&
    27, 200, 0,	//1524  QDataStream&, QPolygon&
    186, 424, 403, 415, 0,	//1527  QPainter*, const QRect&, const QMargins&, const QPixmap&
    127, 64, 0,	//1532  QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>
    46, 46, 0,	//1535  QFileDialog::Option, QFileDialog::Option
    173, 467, 0,	//1538  QMdiArea::AreaOption, int
    27, 221, 0,	//1541  QDataStream&, QString&
    30, 54, 0,	//1544  QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>
    32, 55, 0,	//1547  QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>
    186, 417, 417, 411, 375, 467, 467, 0,	//1550  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int, int
    186, 417, 417, 411, 0,	//1558  QPainter*, const QPoint&, const QPoint&, const QPalette&
    186, 417, 417, 411, 375, 0,	//1563  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool
    186, 417, 417, 411, 375, 467, 0,	//1569  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int
    155, 155, 0,	//1576  QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag
    27, 437, 0,	//1579  QDataStream&, const QString&
    27, 389, 0,	//1582  QDataStream&, const QEasingCurve&
    251, 218, 0,	//1585  QTextStream&, QSplitter&
    27, 405, 0,	//1588  QDataStream&, const QMatrix4x4&
    27, 20, 0,	//1591  QDataStream&, QChar&
    27, 461, 0,	//1594  QDataStream&, const QVector4D&
    228, 228, 0,	//1597  QStyle::StateFlag, QStyle::StateFlag
    396, 0,	//1600  const QItemSelectionRange&
    337, 337, 0,	//1602  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    27, 194, 0,	//1605  QDataStream&, QPixmap&
    44, 44, 0,	//1608  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    417, 405, 0,	//1611  const QPoint&, const QMatrix4x4&
    27, 205, 0,	//1614  QDataStream&, QRect&
    1, 467, 0,	//1617  QAbstractFileEngine::FileFlag, int
    128, 65, 0,	//1620  QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>
    145, 145, 0,	//1623  QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag
    354, 462, 0,	//1626  QtMsgType, const char*
    310, 467, 0,	//1629  Qt::ImageConversionFlag, int
    459, 0,	//1632  const QVector3D&
    230, 91, 0,	//1634  QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>
    24, 24, 0,	//1637  QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption
    31, 424, 0,	//1640  QDebug, const QRect&
    27, 394, 0,	//1643  QDataStream&, const QIcon&
    27, 454, 0,	//1646  QDataStream&, const QVariant::Type
    27, 270, 0,	//1649  QDataStream&, QVector3D&
    236, 467, 0,	//1652  QStyleOptionViewItemV2::ViewItemFeature, int
    465, 461, 0,	//1655  double, const QVector4D&
    27, 163, 0,	//1658  QDataStream&, QLineF&
    27, 189, 0,	//1661  QDataStream&, QPainterPath&
    135, 69, 0,	//1664  QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>
    27, 192, 0,	//1667  QDataStream&, QPicture&
    343, 343, 0,	//1670  Qt::TouchPointState, Qt::TouchPointState
    248, 102, 0,	//1673  QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>
    337, 467, 0,	//1676  Qt::TextInteractionFlag, int
    417, 449, 0,	//1679  const QPoint&, const QTransform&
    231, 467, 0,	//1682  QStyleOptionFrameV2::FrameFeature, int
    32, 467, 0,	//1685  QDialogButtonBox::StandardButton, int
    234, 234, 0,	//1688  QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature
    248, 467, 0,	//1691  QTextItem::RenderFlag, int
    27, 268, 0,	//1694  QDataStream&, QVector2D&
    376, 0,	//1697  char
    27, 387, 0,	//1699  QDataStream&, const QDateTime&
    168, 467, 0,	//1702  QMainWindow::DockOption, int
    27, 255, 0,	//1705  QDataStream&, QTime&
    247, 101, 0,	//1708  QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>
    417, 467, 0,	//1711  const QPoint&, int
    310, 310, 0,	//1714  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    31, 423, 0,	//1717  QDebug, const QQuaternion&
    231, 92, 0,	//1720  QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>
    27, 445, 0,	//1723  QDataStream&, const QTextFormat&
    300, 111, 0,	//1726  Qt::DropAction, QFlags<Qt::DropAction>
    174, 467, 0,	//1729  QMdiSubWindow::SubWindowOption, int
    300, 300, 0,	//1732  Qt::DropAction, Qt::DropAction
    130, 130, 0,	//1735  QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint
    325, 467, 0,	//1738  Qt::Orientation, int
    151, 151, 0,	//1741  QImageIOPlugin::Capability, QImageIOPlugin::Capability
    27, 423, 0,	//1744  QDataStream&, const QQuaternion&
    31, 388, 0,	//1747  QDebug, const QDir&
    428, 404, 0,	//1750  const QRegion&, const QMatrix&
    31, 428, 0,	//1753  QDebug, const QRegion&
    466, 417, 0,	//1756  float, const QPoint&
    27, 261, 0,	//1759  QDataStream&, QUrl&
    159, 77, 0,	//1762  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    250, 467, 0,	//1765  QTextOption::Flag, int
    437, 19, 0,	//1768  const QString&, QChar
    467, 467, 467, 467, 0,	//1771  int, int, int, int
    325, 119, 0,	//1776  Qt::Orientation, QFlags<Qt::Orientation>
    234, 95, 0,	//1779  QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>
    168, 168, 0,	//1782  QMainWindow::DockOption, QMainWindow::DockOption
    472, 0,	//1785  size_t
    31, 453, 0,	//1787  QDebug, const QVariant&
    167, 167, 0,	//1790  QLocale::NumberOption, QLocale::NumberOption
    27, 402, 0,	//1793  QDataStream&, const QLocale&
    392, 316, 0,	//1796  const QGraphicsItem*, Qt::ItemSelectionMode
    410, 316, 0,	//1799  const QPainterPath&, Qt::ItemSelectionMode
    392, 0,	//1802  const QGraphicsItem*
    132, 43, 0,	//1804  QGraphicsItem*, QEvent*
    43, 0,	//1807  QEvent*
    138, 0,	//1809  QGraphicsSceneContextMenuEvent*
    139, 0,	//1811  QGraphicsSceneDragDropEvent*
    125, 0,	//1813  QFocusEvent*
    140, 0,	//1815  QGraphicsSceneHoverEvent*
    156, 0,	//1817  QKeyEvent*
    141, 0,	//1819  QGraphicsSceneMouseEvent*
    142, 0,	//1821  QGraphicsSceneWheelEvent*
    154, 0,	//1823  QInputMethodEvent*
    313, 0,	//1825  Qt::InputMethodQuery
    134, 453, 0,	//1827  QGraphicsItem::GraphicsItemChange, const QVariant&
    133, 0,	//1830  QGraphicsItem::Extension
    133, 453, 0,	//1832  QGraphicsItem::Extension, const QVariant&
    453, 0,	//1835  const QVariant&
    176, 467, 483, 0,	//1837  QMetaObject::Call, int, void**
    132, 0,	//1841  QGraphicsItem*
    437, 132, 0,	//1843  const QString&, QGraphicsItem*
    238, 0,	//1846  QSvgRenderer*
    375, 0,	//1848  bool
    430, 0,	//1850  const QSize&
    186, 443, 274, 0,	//1852  QPainter*, const QStyleOptionGraphicsItem*, QWidget*
    186, 443, 0,	//1856  QPainter*, const QStyleOptionGraphicsItem*
    179, 43, 0,	//1859  QObject*, QEvent*
    256, 0,	//1862  QTimerEvent*
    21, 0,	//1864  QChildEvent*
    424, 0,	//1866  const QRect&
    425, 0,	//1868  const QRectF&
    147, 0,	//1870  QIODevice*
    181, 0,	//1872  QPaintDevice::PaintDeviceMetric
    179, 0,	//1874  QObject*
    437, 179, 0,	//1876  const QString&, QObject*
    382, 179, 0,	//1879  const QByteArray&, QObject*
    277, 179, 0,	//1882  QXmlStreamReader*, QObject*
    277, 0,	//1885  QXmlStreamReader*
    186, 0,	//1887  QPainter*
    186, 425, 0,	//1889  QPainter*, const QRectF&
    186, 437, 425, 0,	//1892  QPainter*, const QString&, const QRectF&
    186, 437, 0,	//1896  QPainter*, const QString&
    274, 0,	//1899  QWidget*
    437, 274, 0,	//1901  const QString&, QWidget*
    185, 0,	//1904  QPaintEvent*
    177, 0,	//1906  QMouseEvent*
    273, 0,	//1908  QWheelEvent*
    178, 0,	//1910  QMoveEvent*
    211, 0,	//1912  QResizeEvent*
    22, 0,	//1914  QCloseEvent*
    25, 0,	//1916  QContextMenuEvent*
    241, 0,	//1918  QTabletEvent*
    12, 0,	//1920  QActionEvent*
    37, 0,	//1922  QDragEnterEvent*
    39, 0,	//1924  QDragMoveEvent*
    38, 0,	//1926  QDragLeaveEvent*
    41, 0,	//1928  QDropEvent*
    212, 0,	//1930  QShowEvent*
    146, 0,	//1932  QHideEvent*
    374, 0,	//1934  _XEvent*
    227, 0,	//1936  QStyle&
    411, 0,	//1938  const QPalette&
    391, 0,	//1940  const QFont&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "DeviceCoordinateCache",	//1
    "DrawChildren",	//2
    "DrawWindowBackground",	//3
    "IgnoreMask",	//4
    "ItemAcceptsInputMethod",	//5
    "ItemChildAddedChange",	//6
    "ItemChildRemovedChange",	//7
    "ItemClipsChildrenToShape",	//8
    "ItemClipsToShape",	//9
    "ItemCoordinateCache",	//10
    "ItemCursorChange",	//11
    "ItemCursorHasChanged",	//12
    "ItemDoesntPropagateOpacityToChildren",	//13
    "ItemEnabledChange",	//14
    "ItemEnabledHasChanged",	//15
    "ItemFlagsChange",	//16
    "ItemFlagsHaveChanged",	//17
    "ItemHasNoContents",	//18
    "ItemIgnoresParentOpacity",	//19
    "ItemIgnoresTransformations",	//20
    "ItemIsFocusScope",	//21
    "ItemIsFocusable",	//22
    "ItemIsMovable",	//23
    "ItemIsPanel",	//24
    "ItemIsSelectable",	//25
    "ItemMatrixChange",	//26
    "ItemNegativeZStacksBehindParent",	//27
    "ItemOpacityChange",	//28
    "ItemOpacityHasChanged",	//29
    "ItemParentChange",	//30
    "ItemParentHasChanged",	//31
    "ItemPositionChange",	//32
    "ItemPositionHasChanged",	//33
    "ItemRotationChange",	//34
    "ItemRotationHasChanged",	//35
    "ItemScaleChange",	//36
    "ItemScaleHasChanged",	//37
    "ItemSceneChange",	//38
    "ItemSceneHasChanged",	//39
    "ItemScenePositionHasChanged",	//40
    "ItemSelectedChange",	//41
    "ItemSelectedHasChanged",	//42
    "ItemSendsGeometryChanges",	//43
    "ItemSendsScenePositionChanges",	//44
    "ItemStacksBehindParent",	//45
    "ItemStopsClickFocusPropagation",	//46
    "ItemStopsFocusHandling",	//47
    "ItemToolTipChange",	//48
    "ItemToolTipHasChanged",	//49
    "ItemTransformChange",	//50
    "ItemTransformHasChanged",	//51
    "ItemTransformOriginPointChange",	//52
    "ItemTransformOriginPointHasChanged",	//53
    "ItemUsesExtendedStyleOption",	//54
    "ItemVisibleChange",	//55
    "ItemVisibleHasChanged",	//56
    "ItemZValueChange",	//57
    "ItemZValueHasChanged",	//58
    "LicensedActiveQt",	//59
    "LicensedCore",	//60
    "LicensedDBus",	//61
    "LicensedDeclarative",	//62
    "LicensedGui",	//63
    "LicensedHelp",	//64
    "LicensedMultimedia",	//65
    "LicensedNetwork",	//66
    "LicensedOpenGL",	//67
    "LicensedOpenVG",	//68
    "LicensedQt3Support",	//69
    "LicensedQt3SupportLight",	//70
    "LicensedScript",	//71
    "LicensedScriptTools",	//72
    "LicensedSql",	//73
    "LicensedSvg",	//74
    "LicensedTest",	//75
    "LicensedXml",	//76
    "LicensedXmlPatterns",	//77
    "NoCache",	//78
    "NonModal",	//79
    "PanelModal",	//80
    "PdmDepth",	//81
    "PdmDpiX",	//82
    "PdmDpiY",	//83
    "PdmHeight",	//84
    "PdmHeightMM",	//85
    "PdmNumColors",	//86
    "PdmPhysicalDpiX",	//87
    "PdmPhysicalDpiY",	//88
    "PdmWidth",	//89
    "PdmWidthMM",	//90
    "QGraphicsSvgItem",	//91
    "QGraphicsSvgItem#",	//92
    "QGraphicsSvgItem$",	//93
    "QGraphicsSvgItem$#",	//94
    "QSvgGenerator",	//95
    "QSvgRenderer",	//96
    "QSvgRenderer#",	//97
    "QSvgRenderer##",	//98
    "QSvgRenderer$",	//99
    "QSvgRenderer$#",	//100
    "QSvgWidget",	//101
    "QSvgWidget#",	//102
    "QSvgWidget$",	//103
    "QSvgWidget$#",	//104
    "QtCriticalMsg",	//105
    "QtDebugMsg",	//106
    "QtFatalMsg",	//107
    "QtSystemMsg",	//108
    "QtWarningMsg",	//109
    "SP_CustomCameraCaptureButton",	//110
    "SP_CustomCameraCaptureButtonPressed",	//111
    "SP_CustomCameraPauseButton",	//112
    "SP_CustomCameraPauseButtonPressed",	//113
    "SP_CustomCameraPlayButton",	//114
    "SP_CustomCameraPlayButtonPressed",	//115
    "SP_CustomCameraRecButton",	//116
    "SP_CustomCameraRecButtonPressed",	//117
    "SP_CustomCameraStopButton",	//118
    "SP_CustomCameraStopButtonPressed",	//119
    "SP_CustomTabAll",	//120
    "SP_CustomTabArtist",	//121
    "SP_CustomTabFavourite",	//122
    "SP_CustomTabGenre",	//123
    "SP_CustomTabLanguage",	//124
    "SP_CustomTabMusicAlbum",	//125
    "SP_CustomTabPhotosAlbum",	//126
    "SP_CustomTabPhotosAll",	//127
    "SP_CustomTabPlaylist",	//128
    "SP_CustomTabServices",	//129
    "SP_CustomTabSongs",	//130
    "SP_CustomTabVideos",	//131
    "SP_CustomToolBarAdd",	//132
    "SP_CustomToolBarAddDetail",	//133
    "SP_CustomToolBarAgain",	//134
    "SP_CustomToolBarAgenda",	//135
    "SP_CustomToolBarAudioOff",	//136
    "SP_CustomToolBarAudioOn",	//137
    "SP_CustomToolBarBack",	//138
    "SP_CustomToolBarBluetoothOff",	//139
    "SP_CustomToolBarBluetoothOn",	//140
    "SP_CustomToolBarCancel",	//141
    "SP_CustomToolBarDelete",	//142
    "SP_CustomToolBarDone",	//143
    "SP_CustomToolBarEdit",	//144
    "SP_CustomToolBarEditDisabled",	//145
    "SP_CustomToolBarEmailSend",	//146
    "SP_CustomToolBarEmergencyCall",	//147
    "SP_CustomToolBarFavouriteAdd",	//148
    "SP_CustomToolBarFavouriteRemove",	//149
    "SP_CustomToolBarFavourites",	//150
    "SP_CustomToolBarGo",	//151
    "SP_CustomToolBarHome",	//152
    "SP_CustomToolBarImageTools",	//153
    "SP_CustomToolBarList",	//154
    "SP_CustomToolBarLock",	//155
    "SP_CustomToolBarLogs",	//156
    "SP_CustomToolBarMenu",	//157
    "SP_CustomToolBarNewContact",	//158
    "SP_CustomToolBarNewGroup",	//159
    "SP_CustomToolBarNextFrame",	//160
    "SP_CustomToolBarNowPlay",	//161
    "SP_CustomToolBarOptions",	//162
    "SP_CustomToolBarOther",	//163
    "SP_CustomToolBarOvi",	//164
    "SP_CustomToolBarPreviousFrame",	//165
    "SP_CustomToolBarRead",	//166
    "SP_CustomToolBarRedo",	//167
    "SP_CustomToolBarRedoDisabled",	//168
    "SP_CustomToolBarRefresh",	//169
    "SP_CustomToolBarRemoveDetail",	//170
    "SP_CustomToolBarRemoveDisabled",	//171
    "SP_CustomToolBarRepeat",	//172
    "SP_CustomToolBarRepeatOff",	//173
    "SP_CustomToolBarRepeatOne",	//174
    "SP_CustomToolBarSearch",	//175
    "SP_CustomToolBarSearchDisabled",	//176
    "SP_CustomToolBarSelectContent",	//177
    "SP_CustomToolBarSelfTimer",	//178
    "SP_CustomToolBarSend",	//179
    "SP_CustomToolBarSendDimmed",	//180
    "SP_CustomToolBarShare",	//181
    "SP_CustomToolBarShift",	//182
    "SP_CustomToolBarShuffle",	//183
    "SP_CustomToolBarShuffleOff",	//184
    "SP_CustomToolBarSignalOff",	//185
    "SP_CustomToolBarSignalOn",	//186
    "SP_CustomToolBarSync",	//187
    "SP_CustomToolBarTools",	//188
    "SP_CustomToolBarTrim",	//189
    "SP_CustomToolBarUnlock",	//190
    "SP_CustomToolBarUnmark",	//191
    "SP_CustomToolBarView",	//192
    "SP_CustomToolBarWlanOff",	//193
    "SP_CustomToolBarWlanOn",	//194
    "SceneModal",	//195
    "Type",	//196
    "UserExtension",	//197
    "UserType",	//198
    "actionEvent",	//199
    "advance",	//200
    "animated",	//201
    "animationDuration",	//202
    "boundingRect",	//203
    "boundsOnElement",	//204
    "boundsOnElement$",	//205
    "changeEvent",	//206
    "childEvent",	//207
    "closeEvent",	//208
    "collidesWithItem",	//209
    "collidesWithPath",	//210
    "connectNotify",	//211
    "contains",	//212
    "contextMenuEvent",	//213
    "currentFrame",	//214
    "customEvent",	//215
    "defaultSize",	//216
    "description",	//217
    "devType",	//218
    "disconnectNotify",	//219
    "dragEnterEvent",	//220
    "dragLeaveEvent",	//221
    "dragMoveEvent",	//222
    "dropEvent",	//223
    "elementExists",	//224
    "elementExists$",	//225
    "elementId",	//226
    "enabledChange",	//227
    "enterEvent",	//228
    "event",	//229
    "eventFilter",	//230
    "extension",	//231
    "fileName",	//232
    "focusInEvent",	//233
    "focusNextPrevChild",	//234
    "focusOutEvent",	//235
    "fontChange",	//236
    "framesPerSecond",	//237
    "heightForWidth",	//238
    "hideEvent",	//239
    "hoverEnterEvent",	//240
    "hoverLeaveEvent",	//241
    "hoverMoveEvent",	//242
    "inputMethodEvent",	//243
    "inputMethodQuery",	//244
    "isCachingEnabled",	//245
    "isObscuredBy",	//246
    "isValid",	//247
    "itemChange",	//248
    "keyPressEvent",	//249
    "keyReleaseEvent",	//250
    "languageChange",	//251
    "leaveEvent",	//252
    "load",	//253
    "load#",	//254
    "load$",	//255
    "matrixForElement",	//256
    "matrixForElement$",	//257
    "maximumCacheSize",	//258
    "metaObject",	//259
    "metric",	//260
    "metric$",	//261
    "minimumSizeHint",	//262
    "mouseDoubleClickEvent",	//263
    "mouseMoveEvent",	//264
    "mousePressEvent",	//265
    "mouseReleaseEvent",	//266
    "moveEvent",	//267
    "opaqueArea",	//268
    "operator!=",	//269
    "operator!=##",	//270
    "operator!=#$",	//271
    "operator!=$#",	//272
    "operator&",	//273
    "operator&##",	//274
    "operator*",	//275
    "operator*##",	//276
    "operator*#$",	//277
    "operator*$#",	//278
    "operator+",	//279
    "operator+##",	//280
    "operator+#$",	//281
    "operator+$#",	//282
    "operator+$$",	//283
    "operator-",	//284
    "operator-#",	//285
    "operator-##",	//286
    "operator-#$",	//287
    "operator/",	//288
    "operator/#$",	//289
    "operator<",	//290
    "operator<##",	//291
    "operator<#$",	//292
    "operator<$#",	//293
    "operator<<",	//294
    "operator<<##",	//295
    "operator<<#$",	//296
    "operator<<#?",	//297
    "operator<=",	//298
    "operator<=##",	//299
    "operator<=#$",	//300
    "operator<=$#",	//301
    "operator==",	//302
    "operator==##",	//303
    "operator==#$",	//304
    "operator==$#",	//305
    "operator>",	//306
    "operator>##",	//307
    "operator>#$",	//308
    "operator>$#",	//309
    "operator>=",	//310
    "operator>=##",	//311
    "operator>=#$",	//312
    "operator>=$#",	//313
    "operator>>",	//314
    "operator>>##",	//315
    "operator>>#$",	//316
    "operator>>#?",	//317
    "operator^",	//318
    "operator^##",	//319
    "operator|",	//320
    "operator|##",	//321
    "operator|$$",	//322
    "outputDevice",	//323
    "paint",	//324
    "paint##",	//325
    "paint###",	//326
    "paintEngine",	//327
    "paintEvent",	//328
    "paintEvent#",	//329
    "paletteChange",	//330
    "qAccessibleActionCastHelper",	//331
    "qAccessibleEditableTextCastHelper",	//332
    "qAccessibleImageCastHelper",	//333
    "qAccessibleTable2CastHelper",	//334
    "qAccessibleTableCastHelper",	//335
    "qAccessibleTextCastHelper",	//336
    "qAccessibleValueCastHelper",	//337
    "qAcos",	//338
    "qAcos$",	//339
    "qAddPostRoutine",	//340
    "qAddPostRoutine$",	//341
    "qAlpha",	//342
    "qAlpha$",	//343
    "qAppName",	//344
    "qAsin",	//345
    "qAsin$",	//346
    "qAtan",	//347
    "qAtan$",	//348
    "qAtan2",	//349
    "qAtan2$$",	//350
    "qBadAlloc",	//351
    "qBlue",	//352
    "qBlue$",	//353
    "qCeil",	//354
    "qCeil$",	//355
    "qChecksum",	//356
    "qChecksum$$",	//357
    "qCompress",	//358
    "qCompress#",	//359
    "qCompress#$",	//360
    "qCompress$$",	//361
    "qCompress$$$",	//362
    "qCos",	//363
    "qCos$",	//364
    "qCritical",	//365
    "qDebug",	//366
    "qDrawBorderPixmap",	//367
    "qDrawBorderPixmap####",	//368
    "qDrawBorderPixmap######",	//369
    "qDrawBorderPixmap#######",	//370
    "qDrawBorderPixmap#######$",	//371
    "qDrawPlainRect",	//372
    "qDrawPlainRect###",	//373
    "qDrawPlainRect###$",	//374
    "qDrawPlainRect###$#",	//375
    "qDrawPlainRect#$$$$#",	//376
    "qDrawPlainRect#$$$$#$",	//377
    "qDrawPlainRect#$$$$#$#",	//378
    "qDrawShadeLine",	//379
    "qDrawShadeLine####",	//380
    "qDrawShadeLine####$",	//381
    "qDrawShadeLine####$$",	//382
    "qDrawShadeLine####$$$",	//383
    "qDrawShadeLine#$$$$#",	//384
    "qDrawShadeLine#$$$$#$",	//385
    "qDrawShadeLine#$$$$#$$",	//386
    "qDrawShadeLine#$$$$#$$$",	//387
    "qDrawShadePanel",	//388
    "qDrawShadePanel###",	//389
    "qDrawShadePanel###$",	//390
    "qDrawShadePanel###$$",	//391
    "qDrawShadePanel###$$#",	//392
    "qDrawShadePanel#$$$$#",	//393
    "qDrawShadePanel#$$$$#$",	//394
    "qDrawShadePanel#$$$$#$$",	//395
    "qDrawShadePanel#$$$$#$$#",	//396
    "qDrawShadeRect",	//397
    "qDrawShadeRect###",	//398
    "qDrawShadeRect###$",	//399
    "qDrawShadeRect###$$",	//400
    "qDrawShadeRect###$$$",	//401
    "qDrawShadeRect###$$$#",	//402
    "qDrawShadeRect#$$$$#",	//403
    "qDrawShadeRect#$$$$#$",	//404
    "qDrawShadeRect#$$$$#$$",	//405
    "qDrawShadeRect#$$$$#$$$",	//406
    "qDrawShadeRect#$$$$#$$$#",	//407
    "qDrawWinButton",	//408
    "qDrawWinButton###",	//409
    "qDrawWinButton###$",	//410
    "qDrawWinButton###$#",	//411
    "qDrawWinButton#$$$$#",	//412
    "qDrawWinButton#$$$$#$",	//413
    "qDrawWinButton#$$$$#$#",	//414
    "qDrawWinPanel",	//415
    "qDrawWinPanel###",	//416
    "qDrawWinPanel###$",	//417
    "qDrawWinPanel###$#",	//418
    "qDrawWinPanel#$$$$#",	//419
    "qDrawWinPanel#$$$$#$",	//420
    "qDrawWinPanel#$$$$#$#",	//421
    "qExp",	//422
    "qExp$",	//423
    "qFabs",	//424
    "qFabs$",	//425
    "qFastCos",	//426
    "qFastCos$",	//427
    "qFastSin",	//428
    "qFastSin$",	//429
    "qFlagLocation",	//430
    "qFlagLocation$",	//431
    "qFloor",	//432
    "qFloor$",	//433
    "qFree",	//434
    "qFree$",	//435
    "qFreeAligned",	//436
    "qFreeAligned$",	//437
    "qFuzzyCompare",	//438
    "qFuzzyCompare##",	//439
    "qFuzzyCompare$$",	//440
    "qFuzzyIsNull",	//441
    "qFuzzyIsNull$",	//442
    "qGray",	//443
    "qGray$",	//444
    "qGray$$$",	//445
    "qGreen",	//446
    "qGreen$",	//447
    "qHash",	//448
    "qHash#",	//449
    "qHash$",	//450
    "qInf",	//451
    "qInstallMsgHandler",	//452
    "qInstallMsgHandler$",	//453
    "qIntCast",	//454
    "qIntCast$",	//455
    "qIsFinite",	//456
    "qIsFinite$",	//457
    "qIsGray",	//458
    "qIsGray$",	//459
    "qIsInf",	//460
    "qIsInf$",	//461
    "qIsNaN",	//462
    "qIsNaN$",	//463
    "qIsNull",	//464
    "qIsNull$",	//465
    "qLn",	//466
    "qLn$",	//467
    "qMalloc",	//468
    "qMalloc$",	//469
    "qMallocAligned",	//470
    "qMallocAligned$$",	//471
    "qMemCopy",	//472
    "qMemCopy$$$",	//473
    "qMemSet",	//474
    "qMemSet$$$",	//475
    "qPow",	//476
    "qPow$$",	//477
    "qQNaN",	//478
    "qRealloc",	//479
    "qRealloc$$",	//480
    "qReallocAligned",	//481
    "qReallocAligned$$$$",	//482
    "qRed",	//483
    "qRed$",	//484
    "qRegisterStaticPluginInstanceFunction",	//485
    "qRegisterStaticPluginInstanceFunction#",	//486
    "qRemovePostRoutine",	//487
    "qRemovePostRoutine$",	//488
    "qRgb",	//489
    "qRgb$$$",	//490
    "qRgba",	//491
    "qRgba$$$$",	//492
    "qRound",	//493
    "qRound$",	//494
    "qRound64",	//495
    "qRound64$",	//496
    "qSNaN",	//497
    "qSetFieldWidth",	//498
    "qSetFieldWidth$",	//499
    "qSetPadChar",	//500
    "qSetPadChar#",	//501
    "qSetRealNumberPrecision",	//502
    "qSetRealNumberPrecision$",	//503
    "qSharedBuild",	//504
    "qSin",	//505
    "qSin$",	//506
    "qSqrt",	//507
    "qSqrt$",	//508
    "qStringComparisonHelper",	//509
    "qStringComparisonHelper#$",	//510
    "qTan",	//511
    "qTan$",	//512
    "qUncompress",	//513
    "qUncompress#",	//514
    "qUncompress$$",	//515
    "qVersion",	//516
    "qWarning",	//517
    "qbswap_helper",	//518
    "qbswap_helper$$$",	//519
    "qgetenv",	//520
    "qgetenv$",	//521
    "qputenv",	//522
    "qputenv$#",	//523
    "qrand",	//524
    "qsrand",	//525
    "qsrand$",	//526
    "qstrcmp",	//527
    "qstrcmp##",	//528
    "qstrcmp#$",	//529
    "qstrcmp$#",	//530
    "qstrcmp$$",	//531
    "qstrcpy",	//532
    "qstrcpy$$",	//533
    "qstrdup",	//534
    "qstrdup$",	//535
    "qstricmp",	//536
    "qstricmp$$",	//537
    "qstrlen",	//538
    "qstrlen$",	//539
    "qstrncmp",	//540
    "qstrncmp$$$",	//541
    "qstrncpy",	//542
    "qstrncpy$$$",	//543
    "qstrnicmp",	//544
    "qstrnicmp$$$",	//545
    "qstrnlen",	//546
    "qstrnlen$$",	//547
    "qtTrId",	//548
    "qtTrId$",	//549
    "qtTrId$$",	//550
    "qt_assert",	//551
    "qt_assert$$$",	//552
    "qt_assert_x",	//553
    "qt_assert_x$$$$",	//554
    "qt_check_pointer",	//555
    "qt_check_pointer$$",	//556
    "qt_error_string",	//557
    "qt_error_string$",	//558
    "qt_message_output",	//559
    "qt_message_output$$",	//560
    "qt_metacall",	//561
    "qt_metacall$$?",	//562
    "qt_metacast",	//563
    "qt_metacast$",	//564
    "qt_noop",	//565
    "qt_qFindChild_helper",	//566
    "qt_qFindChild_helper#$#",	//567
    "qt_qFindChildren_helper",	//568
    "qt_qFindChildren_helper#$##?",	//569
    "qvariant_cast_helper",	//570
    "qvariant_cast_helper#$$",	//571
    "qvsnprintf",	//572
    "qvsnprintf$$$?",	//573
    "render",	//574
    "render#",	//575
    "render##",	//576
    "render#$",	//577
    "render#$#",	//578
    "renderer",	//579
    "repaintNeeded",	//580
    "resizeEvent",	//581
    "resolution",	//582
    "sceneEvent",	//583
    "sceneEventFilter",	//584
    "setCachingEnabled",	//585
    "setCachingEnabled$",	//586
    "setCurrentFrame",	//587
    "setCurrentFrame$",	//588
    "setDescription",	//589
    "setDescription$",	//590
    "setElementId",	//591
    "setElementId$",	//592
    "setExtension",	//593
    "setFileName",	//594
    "setFileName$",	//595
    "setFramesPerSecond",	//596
    "setFramesPerSecond$",	//597
    "setMaximumCacheSize",	//598
    "setMaximumCacheSize#",	//599
    "setOutputDevice",	//600
    "setOutputDevice#",	//601
    "setResolution",	//602
    "setResolution$",	//603
    "setSharedRenderer",	//604
    "setSharedRenderer#",	//605
    "setSize",	//606
    "setSize#",	//607
    "setTitle",	//608
    "setTitle$",	//609
    "setViewBox",	//610
    "setViewBox#",	//611
    "setVisible",	//612
    "shape",	//613
    "showEvent",	//614
    "size",	//615
    "sizeHint",	//616
    "staticMetaObject",	//617
    "styleChange",	//618
    "supportsExtension",	//619
    "tabletEvent",	//620
    "timerEvent",	//621
    "title",	//622
    "tr",	//623
    "tr$",	//624
    "tr$$",	//625
    "tr$$$",	//626
    "trUtf8",	//627
    "trUtf8$",	//628
    "trUtf8$$",	//629
    "trUtf8$$$",	//630
    "type",	//631
    "viewBox",	//632
    "viewBoxF",	//633
    "wheelEvent",	//634
    "windowActivationChange",	//635
    "x11Event",	//636
    "~QGraphicsSvgItem",	//637
    "~QSvgGenerator",	//638
    "~QSvgRenderer",	//639
    "~QSvgWidget",	//640
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {26, 273, 1, 2, Smoke::mf_static, 13, 1},	//1 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {26, 365, 0, 0, Smoke::mf_static, 31, 2},	//2 QGlobalSpace::qCritical()
    {26, 448, 4, 1, Smoke::mf_static, 475, 3},	//3 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {26, 320, 6, 2, Smoke::mf_static, 152, 4},	//4 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {26, 551, 9, 3, Smoke::mf_static, 0, 5},	//5 QGlobalSpace::qt_assert(const char*, const char*, int)
    {26, 320, 13, 2, Smoke::mf_static, 66, 6},	//6 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag)
    {26, 275, 16, 2, Smoke::mf_static, 416, 7},	//7 QGlobalSpace::operator*(const QPoint&, double)
    {26, 460, 19, 1, Smoke::mf_static, 375, 8},	//8 QGlobalSpace::qIsInf(double)
    {26, 294, 21, 2, Smoke::mf_static, 31, 9},	//9 QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    {26, 275, 24, 2, Smoke::mf_static, 418, 10},	//10 QGlobalSpace::operator*(double, const QPointF&)
    {26, 320, 27, 2, Smoke::mf_static, 118, 11},	//11 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {26, 269, 30, 2, Smoke::mf_static, 375, 12},	//12 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {26, 294, 33, 2, Smoke::mf_static, 31, 13},	//13 QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    {26, 275, 36, 2, Smoke::mf_static, 431, 14},	//14 QGlobalSpace::operator*(double, const QSizeF&)
    {26, 320, 39, 2, Smoke::mf_static, 152, 15},	//15 QGlobalSpace::operator|(QDir::SortFlag, int)
    {26, 320, 42, 2, Smoke::mf_static, 48, 16},	//16 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    {26, 294, 45, 2, Smoke::mf_static, 31, 17},	//17 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {26, 314, 48, 2, Smoke::mf_static, 27, 18},	//18 QGlobalSpace::operator>>(QDataStream&, QImage&)
    {26, 294, 51, 2, Smoke::mf_static, 27, 19},	//19 QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    {26, 320, 54, 2, Smoke::mf_static, 152, 20},	//20 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {26, 320, 57, 2, Smoke::mf_static, 152, 21},	//21 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    {26, 294, 60, 2, Smoke::mf_static, 31, 22},	//22 QGlobalSpace::operator<<(QDebug, const QTransform&)
    {26, 532, 63, 2, Smoke::mf_static, 377, 23},	//23 QGlobalSpace::qstrcpy(char*, const char*)
    {26, 269, 66, 2, Smoke::mf_static, 375, 24},	//24 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {26, 279, 69, 2, Smoke::mf_static, 429, 25},	//25 QGlobalSpace::operator+(const QSize&, const QSize&)
    {26, 424, 19, 1, Smoke::mf_static, 465, 26},	//26 QGlobalSpace::qFabs(double)
    {26, 294, 72, 2, Smoke::mf_static, 27, 27},	//27 QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    {26, 320, 75, 2, Smoke::mf_static, 98, 28},	//28 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {26, 294, 78, 2, Smoke::mf_static, 31, 29},	//29 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {26, 478, 0, 0, Smoke::mf_static, 465, 30},	//30 QGlobalSpace::qQNaN()
    {26, 284, 81, 2, Smoke::mf_static, 171, 31},	//31 QGlobalSpace::operator-(const QMatrix4x4&, const QMatrix4x4&)
    {26, 448, 84, 1, Smoke::mf_static, 475, 32},	//32 QGlobalSpace::qHash(unsigned char)
    {26, 320, 86, 2, Smoke::mf_static, 56, 33},	//33 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {26, 284, 89, 2, Smoke::mf_static, 460, 34},	//34 QGlobalSpace::operator-(const QVector4D&, const QVector4D&)
    {26, 275, 92, 2, Smoke::mf_static, 197, 35},	//35 QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    {26, 320, 95, 2, Smoke::mf_static, 84, 36},	//36 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature)
    {26, 275, 98, 2, Smoke::mf_static, 160, 37},	//37 QGlobalSpace::operator*(const QLine&, const QTransform&)
    {26, 516, 0, 0, Smoke::mf_static, 462, 38},	//38 QGlobalSpace::qVersion()
    {26, 438, 101, 2, Smoke::mf_static, 375, 39},	//39 QGlobalSpace::qFuzzyCompare(const QVector2D&, const QVector2D&)
    {26, 320, 104, 2, Smoke::mf_static, 61, 40},	//40 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {26, 302, 30, 2, Smoke::mf_static, 375, 41},	//41 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {26, 320, 107, 2, Smoke::mf_static, 123, 42},	//42 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {26, 275, 110, 2, Smoke::mf_static, 431, 43},	//43 QGlobalSpace::operator*(const QSizeF&, double)
    {26, 294, 113, 2, Smoke::mf_static, 27, 44},	//44 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {26, 320, 116, 2, Smoke::mf_static, 152, 45},	//45 QGlobalSpace::operator|(QDir::Filter, int)
    {26, 438, 119, 2, Smoke::mf_static, 375, 46},	//46 QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    {26, 354, 19, 1, Smoke::mf_static, 467, 47},	//47 QGlobalSpace::qCeil(double)
    {26, 524, 0, 0, Smoke::mf_static, 467, 48},	//48 QGlobalSpace::qrand()
    {26, 443, 122, 1, Smoke::mf_static, 467, 49},	//49 QGlobalSpace::qGray(unsigned int)
    {26, 320, 124, 2, Smoke::mf_static, 63, 50},	//50 QGlobalSpace::operator|(QFileDialog::Option, QFlags<QFileDialog::Option>)
    {26, 284, 127, 2, Smoke::mf_static, 431, 51},	//51 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {26, 310, 130, 2, Smoke::mf_static, 375, 52},	//52 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {26, 302, 133, 2, Smoke::mf_static, 375, 53},	//53 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {26, 284, 136, 1, Smoke::mf_static, 422, 54},	//54 QGlobalSpace::operator-(const QQuaternion&)
    {26, 320, 138, 2, Smoke::mf_static, 49, 55},	//55 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption)
    {26, 320, 141, 2, Smoke::mf_static, 118, 56},	//56 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {26, 294, 144, 2, Smoke::mf_static, 31, 57},	//57 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {26, 483, 122, 1, Smoke::mf_static, 467, 58},	//58 QGlobalSpace::qRed(unsigned int)
    {26, 269, 147, 2, Smoke::mf_static, 375, 59},	//59 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {26, 275, 150, 2, Smoke::mf_static, 422, 60},	//60 QGlobalSpace::operator*(const QQuaternion&, double)
    {26, 302, 153, 2, Smoke::mf_static, 375, 61},	//61 QGlobalSpace::operator==(QBool, QBool)
    {26, 320, 156, 2, Smoke::mf_static, 94, 62},	//62 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    {26, 320, 159, 2, Smoke::mf_static, 93, 63},	//63 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    {26, 320, 162, 2, Smoke::mf_static, 64, 64},	//64 QGlobalSpace::operator|(QFontComboBox::FontFilter, QFontComboBox::FontFilter)
    {26, 320, 165, 2, Smoke::mf_static, 109, 65},	//65 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {26, 448, 168, 1, Smoke::mf_static, 475, 66},	//66 QGlobalSpace::qHash(const QStringRef&)
    {26, 320, 170, 2, Smoke::mf_static, 101, 67},	//67 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag)
    {26, 302, 173, 2, Smoke::mf_static, 375, 68},	//68 QGlobalSpace::operator==(QString::Null, QString::Null)
    {26, 294, 176, 2, Smoke::mf_static, 31, 69},	//69 QGlobalSpace::operator<<(QDebug, const QFont&)
    {26, 294, 179, 2, Smoke::mf_static, 31, 70},	//70 QGlobalSpace::operator<<(QDebug, const QPolygon&)
    {26, 294, 182, 2, Smoke::mf_static, 27, 71},	//71 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {26, 314, 185, 2, Smoke::mf_static, 27, 72},	//72 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {26, 342, 122, 1, Smoke::mf_static, 467, 73},	//73 QGlobalSpace::qAlpha(unsigned int)
    {26, 320, 188, 2, Smoke::mf_static, 152, 74},	//74 QGlobalSpace::operator|(QStyle::SubControl, int)
    {26, 320, 191, 2, Smoke::mf_static, 59, 75},	//75 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature)
    {26, 279, 194, 2, Smoke::mf_static, 436, 76},	//76 QGlobalSpace::operator+(QChar, const QString&)
    {26, 446, 122, 1, Smoke::mf_static, 467, 77},	//77 QGlobalSpace::qGreen(unsigned int)
    {26, 320, 197, 2, Smoke::mf_static, 73, 78},	//78 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {26, 388, 200, 6, Smoke::mf_static, 0, 79},	//79 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool, int, const QBrush*)
    {26, 388, 207, 3, Smoke::mf_static, 0, 80},	//80 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&)
    {26, 388, 211, 4, Smoke::mf_static, 0, 81},	//81 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool)
    {26, 388, 216, 5, Smoke::mf_static, 0, 82},	//82 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool, int)
    {26, 284, 222, 1, Smoke::mf_static, 456, 83},	//83 QGlobalSpace::operator-(const QVector2D&)
    {26, 320, 224, 2, Smoke::mf_static, 56, 84},	//84 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {26, 294, 227, 2, Smoke::mf_static, 27, 85},	//85 QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    {26, 294, 230, 2, Smoke::mf_static, 31, 86},	//86 QGlobalSpace::operator<<(QDebug, const QTime&)
    {26, 275, 89, 2, Smoke::mf_static, 460, 87},	//87 QGlobalSpace::operator*(const QVector4D&, const QVector4D&)
    {26, 320, 233, 2, Smoke::mf_static, 99, 88},	//88 QGlobalSpace::operator|(QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>)
    {26, 275, 236, 2, Smoke::mf_static, 422, 89},	//89 QGlobalSpace::operator*(const QQuaternion&, const QQuaternion&)
    {26, 294, 239, 2, Smoke::mf_static, 27, 90},	//90 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {26, 294, 242, 2, Smoke::mf_static, 31, 91},	//91 QGlobalSpace::operator<<(QDebug, const QDate&)
    {26, 448, 245, 1, Smoke::mf_static, 475, 92},	//92 QGlobalSpace::qHash(const QBitArray&)
    {26, 320, 247, 2, Smoke::mf_static, 100, 93},	//93 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>)
    {26, 347, 19, 1, Smoke::mf_static, 465, 94},	//94 QGlobalSpace::qAtan(double)
    {26, 518, 250, 3, Smoke::mf_static, 0, 95},	//95 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {26, 320, 254, 2, Smoke::mf_static, 52, 96},	//96 QGlobalSpace::operator|(QAccessible::StateFlag, QFlags<QAccessible::StateFlag>)
    {26, 275, 257, 2, Smoke::mf_static, 201, 97},	//97 QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    {26, 570, 260, 3, Smoke::mf_static, 375, 98},	//98 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {26, 448, 264, 1, Smoke::mf_static, 475, 99},	//99 QGlobalSpace::qHash(const QString&)
    {26, 448, 266, 1, Smoke::mf_static, 475, 100},	//100 QGlobalSpace::qHash(unsigned short)
    {26, 485, 268, 1, Smoke::mf_static, 0, 101},	//101 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {26, 448, 270, 1, Smoke::mf_static, 475, 102},	//102 QGlobalSpace::qHash(long)
    {26, 320, 272, 2, Smoke::mf_static, 121, 103},	//103 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {26, 448, 275, 1, Smoke::mf_static, 475, 104},	//104 QGlobalSpace::qHash(long long)
    {26, 294, 277, 2, Smoke::mf_static, 31, 105},	//105 QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    {26, 279, 127, 2, Smoke::mf_static, 431, 106},	//106 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {26, 320, 280, 2, Smoke::mf_static, 86, 107},	//107 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>)
    {26, 408, 283, 8, Smoke::mf_static, 0, 108},	//108 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*)
    {26, 408, 292, 6, Smoke::mf_static, 0, 109},	//109 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&)
    {26, 408, 299, 7, Smoke::mf_static, 0, 110},	//110 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&, bool)
    {26, 320, 307, 2, Smoke::mf_static, 152, 111},	//111 QGlobalSpace::operator|(QWidget::RenderFlag, int)
    {26, 294, 310, 2, Smoke::mf_static, 31, 112},	//112 QGlobalSpace::operator<<(QDebug, const QColor&)
    {26, 320, 313, 2, Smoke::mf_static, 152, 113},	//113 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, int)
    {26, 320, 316, 2, Smoke::mf_static, 152, 114},	//114 QGlobalSpace::operator|(Qt::DropAction, int)
    {26, 397, 319, 10, Smoke::mf_static, 0, 115},	//115 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int, int, const QBrush*)
    {26, 397, 292, 6, Smoke::mf_static, 0, 116},	//116 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&)
    {26, 397, 299, 7, Smoke::mf_static, 0, 117},	//117 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool)
    {26, 397, 330, 8, Smoke::mf_static, 0, 118},	//118 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {26, 397, 339, 9, Smoke::mf_static, 0, 119},	//119 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int, int)
    {26, 363, 19, 1, Smoke::mf_static, 465, 120},	//120 QGlobalSpace::qCos(double)
    {26, 294, 349, 2, Smoke::mf_static, 27, 121},	//121 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {26, 320, 352, 2, Smoke::mf_static, 47, 122},	//122 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {26, 314, 355, 2, Smoke::mf_static, 27, 123},	//123 QGlobalSpace::operator>>(QDataStream&, QPen&)
    {26, 525, 122, 1, Smoke::mf_static, 0, 124},	//124 QGlobalSpace::qsrand(unsigned int)
    {26, 460, 358, 1, Smoke::mf_static, 375, 125},	//125 QGlobalSpace::qIsInf(float)
    {26, 320, 360, 2, Smoke::mf_static, 66, 126},	//126 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>)
    {26, 320, 363, 2, Smoke::mf_static, 109, 127},	//127 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {26, 314, 366, 2, Smoke::mf_static, 27, 128},	//128 QGlobalSpace::operator>>(QDataStream&, QColor&)
    {26, 320, 369, 2, Smoke::mf_static, 152, 129},	//129 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {26, 294, 372, 2, Smoke::mf_static, 27, 130},	//130 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {26, 320, 375, 2, Smoke::mf_static, 152, 131},	//131 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {26, 320, 378, 2, Smoke::mf_static, 58, 132},	//132 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {26, 290, 381, 2, Smoke::mf_static, 375, 133},	//133 QGlobalSpace::operator<(const QByteArray&, const char*)
    {26, 320, 384, 2, Smoke::mf_static, 68, 134},	//134 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag)
    {26, 320, 387, 2, Smoke::mf_static, 152, 135},	//135 QGlobalSpace::operator|(QFontDialog::FontDialogOption, int)
    {26, 294, 390, 2, Smoke::mf_static, 31, 136},	//136 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {26, 320, 393, 2, Smoke::mf_static, 110, 137},	//137 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {26, 320, 396, 2, Smoke::mf_static, 152, 138},	//138 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    {26, 275, 399, 2, Smoke::mf_static, 160, 139},	//139 QGlobalSpace::operator*(const QLine&, const QMatrix&)
    {26, 517, 0, 0, Smoke::mf_static, 31, 140},	//140 QGlobalSpace::qWarning()
    {26, 320, 402, 2, Smoke::mf_static, 83, 141},	//141 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag)
    {26, 279, 89, 2, Smoke::mf_static, 460, 142},	//142 QGlobalSpace::operator+(const QVector4D&, const QVector4D&)
    {26, 443, 405, 3, Smoke::mf_static, 467, 143},	//143 QGlobalSpace::qGray(int, int, int)
    {26, 275, 409, 2, Smoke::mf_static, 162, 144},	//144 QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    {26, 320, 412, 2, Smoke::mf_static, 119, 145},	//145 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {26, 275, 415, 2, Smoke::mf_static, 188, 146},	//146 QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    {26, 320, 418, 2, Smoke::mf_static, 152, 147},	//147 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {26, 302, 421, 2, Smoke::mf_static, 375, 148},	//148 QGlobalSpace::operator==(const QVector3D&, const QVector3D&)
    {26, 269, 101, 2, Smoke::mf_static, 375, 149},	//149 QGlobalSpace::operator!=(const QVector2D&, const QVector2D&)
    {26, 314, 424, 2, Smoke::mf_static, 27, 150},	//150 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {26, 294, 427, 2, Smoke::mf_static, 27, 151},	//151 QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    {26, 320, 430, 2, Smoke::mf_static, 152, 152},	//152 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {26, 294, 433, 2, Smoke::mf_static, 27, 153},	//153 QGlobalSpace::operator<<(QDataStream&, const QTableWidgetItem&)
    {26, 294, 436, 2, Smoke::mf_static, 31, 154},	//154 QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemChange)
    {26, 294, 439, 2, Smoke::mf_static, 31, 155},	//155 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {26, 320, 442, 2, Smoke::mf_static, 152, 156},	//156 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    {26, 294, 445, 2, Smoke::mf_static, 27, 157},	//157 QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    {26, 320, 448, 2, Smoke::mf_static, 82, 158},	//158 QGlobalSpace::operator|(QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>)
    {26, 320, 451, 2, Smoke::mf_static, 112, 159},	//159 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {26, 314, 454, 2, Smoke::mf_static, 27, 160},	//160 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {26, 294, 457, 2, Smoke::mf_static, 27, 161},	//161 QGlobalSpace::operator<<(QDataStream&, const QPicture&)
    {26, 320, 460, 2, Smoke::mf_static, 73, 162},	//162 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {26, 320, 463, 2, Smoke::mf_static, 82, 163},	//163 QGlobalSpace::operator|(QMessageBox::StandardButton, QMessageBox::StandardButton)
    {26, 320, 466, 2, Smoke::mf_static, 152, 164},	//164 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {26, 279, 469, 2, Smoke::mf_static, 381, 165},	//165 QGlobalSpace::operator+(char, const QByteArray&)
    {26, 288, 16, 2, Smoke::mf_static, 416, 166},	//166 QGlobalSpace::operator/(const QPoint&, double)
    {26, 314, 472, 2, Smoke::mf_static, 27, 167},	//167 QGlobalSpace::operator>>(QDataStream&, QVector4D&)
    {26, 279, 101, 2, Smoke::mf_static, 456, 168},	//168 QGlobalSpace::operator+(const QVector2D&, const QVector2D&)
    {26, 320, 475, 2, Smoke::mf_static, 81, 169},	//169 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>)
    {26, 294, 478, 2, Smoke::mf_static, 31, 170},	//170 QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    {26, 302, 481, 2, Smoke::mf_static, 375, 171},	//171 QGlobalSpace::operator==(const char*, const QByteArray&)
    {26, 320, 484, 2, Smoke::mf_static, 65, 172},	//172 QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFontDialog::FontDialogOption)
    {26, 314, 487, 2, Smoke::mf_static, 27, 173},	//173 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {26, 462, 358, 1, Smoke::mf_static, 375, 174},	//174 QGlobalSpace::qIsNaN(float)
    {26, 438, 490, 2, Smoke::mf_static, 375, 175},	//175 QGlobalSpace::qFuzzyCompare(double, double)
    {26, 464, 358, 1, Smoke::mf_static, 375, 176},	//176 QGlobalSpace::qIsNull(float)
    {26, 314, 493, 2, Smoke::mf_static, 27, 177},	//177 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {26, 314, 496, 2, Smoke::mf_static, 27, 178},	//178 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {26, 294, 499, 2, Smoke::mf_static, 27, 179},	//179 QGlobalSpace::operator<<(QDataStream&, const QTreeWidgetItem&)
    {26, 314, 502, 2, Smoke::mf_static, 27, 180},	//180 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {26, 320, 505, 2, Smoke::mf_static, 85, 181},	//181 QGlobalSpace::operator|(QPainter::RenderHint, QPainter::RenderHint)
    {26, 302, 508, 2, Smoke::mf_static, 375, 182},	//182 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {26, 288, 511, 2, Smoke::mf_static, 257, 183},	//183 QGlobalSpace::operator/(const QTransform&, double)
    {26, 294, 514, 2, Smoke::mf_static, 251, 184},	//184 QGlobalSpace::operator<<(QTextStream&, const QSplitter&)
    {26, 320, 517, 2, Smoke::mf_static, 50, 185},	//185 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    {26, 275, 520, 2, Smoke::mf_static, 456, 186},	//186 QGlobalSpace::operator*(const QVector2D&, double)
    {26, 320, 523, 2, Smoke::mf_static, 105, 187},	//187 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag)
    {26, 320, 526, 2, Smoke::mf_static, 91, 188},	//188 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    {26, 269, 529, 2, Smoke::mf_static, 375, 189},	//189 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {26, 275, 532, 2, Smoke::mf_static, 460, 190},	//190 QGlobalSpace::operator*(const QVector4D&, double)
    {26, 320, 535, 2, Smoke::mf_static, 152, 191},	//191 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    {26, 320, 538, 2, Smoke::mf_static, 152, 192},	//192 QGlobalSpace::operator|(QFile::Permission, int)
    {26, 294, 541, 2, Smoke::mf_static, 31, 193},	//193 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {26, 290, 544, 2, Smoke::mf_static, 375, 194},	//194 QGlobalSpace::operator<(QChar, QChar)
    {26, 336, 0, 0, Smoke::mf_static, 9, 195},	//195 QGlobalSpace::qAccessibleTextCastHelper()
    {26, 302, 236, 2, Smoke::mf_static, 375, 196},	//196 QGlobalSpace::operator==(const QQuaternion&, const QQuaternion&)
    {26, 438, 81, 2, Smoke::mf_static, 375, 197},	//197 QGlobalSpace::qFuzzyCompare(const QMatrix4x4&, const QMatrix4x4&)
    {26, 288, 547, 2, Smoke::mf_static, 171, 198},	//198 QGlobalSpace::operator/(const QMatrix4x4&, double)
    {26, 275, 550, 2, Smoke::mf_static, 188, 199},	//199 QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    {26, 294, 553, 2, Smoke::mf_static, 27, 200},	//200 QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    {26, 320, 556, 2, Smoke::mf_static, 80, 201},	//201 QGlobalSpace::operator|(QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>)
    {26, 544, 559, 3, Smoke::mf_static, 467, 202},	//202 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {26, 448, 563, 1, Smoke::mf_static, 475, 203},	//203 QGlobalSpace::qHash(const QByteArray&)
    {26, 320, 565, 2, Smoke::mf_static, 50, 204},	//204 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    {26, 320, 568, 2, Smoke::mf_static, 152, 205},	//205 QGlobalSpace::operator|(QInputDialog::InputDialogOption, int)
    {26, 320, 571, 2, Smoke::mf_static, 152, 206},	//206 QGlobalSpace::operator|(QStyle::StateFlag, int)
    {26, 279, 81, 2, Smoke::mf_static, 171, 207},	//207 QGlobalSpace::operator+(const QMatrix4x4&, const QMatrix4x4&)
    {26, 294, 574, 2, Smoke::mf_static, 31, 208},	//208 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {26, 275, 101, 2, Smoke::mf_static, 456, 209},	//209 QGlobalSpace::operator*(const QVector2D&, const QVector2D&)
    {26, 555, 577, 2, Smoke::mf_static, 0, 210},	//210 QGlobalSpace::qt_check_pointer(const char*, int)
    {26, 314, 580, 2, Smoke::mf_static, 27, 211},	//211 QGlobalSpace::operator>>(QDataStream&, QRegion&)
    {26, 320, 583, 2, Smoke::mf_static, 152, 212},	//212 QGlobalSpace::operator|(QPainter::RenderHint, int)
    {26, 320, 586, 2, Smoke::mf_static, 152, 213},	//213 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    {26, 320, 589, 2, Smoke::mf_static, 108, 214},	//214 QGlobalSpace::operator|(QWizard::WizardOption, QWizard::WizardOption)
    {26, 320, 592, 2, Smoke::mf_static, 104, 215},	//215 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {26, 314, 595, 2, Smoke::mf_static, 27, 216},	//216 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {26, 320, 598, 2, Smoke::mf_static, 108, 217},	//217 QGlobalSpace::operator|(QWizard::WizardOption, QFlags<QWizard::WizardOption>)
    {26, 275, 601, 2, Smoke::mf_static, 418, 218},	//218 QGlobalSpace::operator*(const QPointF&, double)
    {26, 527, 130, 2, Smoke::mf_static, 467, 219},	//219 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {26, 320, 604, 2, Smoke::mf_static, 84, 220},	//220 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>)
    {26, 320, 607, 2, Smoke::mf_static, 69, 221},	//221 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag)
    {26, 500, 610, 1, Smoke::mf_static, 254, 222},	//222 QGlobalSpace::qSetPadChar(QChar)
    {26, 527, 381, 2, Smoke::mf_static, 467, 223},	//223 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {26, 302, 69, 2, Smoke::mf_static, 375, 224},	//224 QGlobalSpace::operator==(const QSize&, const QSize&)
    {26, 388, 612, 9, Smoke::mf_static, 0, 225},	//225 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool, int, const QBrush*)
    {26, 388, 292, 6, Smoke::mf_static, 0, 226},	//226 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&)
    {26, 388, 299, 7, Smoke::mf_static, 0, 227},	//227 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool)
    {26, 388, 330, 8, Smoke::mf_static, 0, 228},	//228 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {26, 504, 0, 0, Smoke::mf_static, 375, 229},	//229 QGlobalSpace::qSharedBuild()
    {26, 279, 236, 2, Smoke::mf_static, 422, 230},	//230 QGlobalSpace::operator+(const QQuaternion&, const QQuaternion&)
    {26, 320, 622, 2, Smoke::mf_static, 47, 231},	//231 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {26, 452, 625, 1, Smoke::mf_static, 481, 232},	//232 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {26, 294, 627, 2, Smoke::mf_static, 27, 233},	//233 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {26, 566, 630, 3, Smoke::mf_static, 179, 234},	//234 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {26, 320, 634, 2, Smoke::mf_static, 117, 235},	//235 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {26, 275, 637, 2, Smoke::mf_static, 269, 236},	//236 QGlobalSpace::operator*(const QVector3D&, const QMatrix4x4&)
    {26, 320, 640, 2, Smoke::mf_static, 152, 237},	//237 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {26, 269, 130, 2, Smoke::mf_static, 375, 238},	//238 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {26, 408, 643, 5, Smoke::mf_static, 0, 239},	//239 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&, bool, const QBrush*)
    {26, 408, 207, 3, Smoke::mf_static, 0, 240},	//240 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&)
    {26, 408, 211, 4, Smoke::mf_static, 0, 241},	//241 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&, bool)
    {26, 320, 649, 2, Smoke::mf_static, 152, 242},	//242 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {26, 320, 652, 2, Smoke::mf_static, 87, 243},	//243 QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    {26, 320, 655, 2, Smoke::mf_static, 152, 244},	//244 QGlobalSpace::operator|(QFontComboBox::FontFilter, int)
    {26, 320, 658, 2, Smoke::mf_static, 152, 245},	//245 QGlobalSpace::operator|(QTextDocument::FindFlag, int)
    {26, 314, 661, 2, Smoke::mf_static, 27, 246},	//246 QGlobalSpace::operator>>(QDataStream&, QCursor&)
    {26, 284, 101, 2, Smoke::mf_static, 456, 247},	//247 QGlobalSpace::operator-(const QVector2D&, const QVector2D&)
    {26, 320, 664, 2, Smoke::mf_static, 116, 248},	//248 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {26, 288, 110, 2, Smoke::mf_static, 431, 249},	//249 QGlobalSpace::operator/(const QSizeF&, double)
    {26, 275, 667, 2, Smoke::mf_static, 458, 250},	//250 QGlobalSpace::operator*(const QVector3D&, double)
    {26, 320, 670, 2, Smoke::mf_static, 117, 251},	//251 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {26, 314, 673, 2, Smoke::mf_static, 27, 252},	//252 QGlobalSpace::operator>>(QDataStream&, QTransform&)
    {26, 275, 676, 2, Smoke::mf_static, 199, 253},	//253 QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    {26, 306, 544, 2, Smoke::mf_static, 375, 254},	//254 QGlobalSpace::operator>(QChar, QChar)
    {26, 310, 481, 2, Smoke::mf_static, 375, 255},	//255 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {26, 436, 679, 1, Smoke::mf_static, 0, 256},	//256 QGlobalSpace::qFreeAligned(void*)
    {26, 320, 681, 2, Smoke::mf_static, 94, 257},	//257 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    {26, 302, 684, 2, Smoke::mf_static, 375, 258},	//258 QGlobalSpace::operator==(const QString&, QString::Null)
    {26, 294, 687, 2, Smoke::mf_static, 31, 259},	//259 QGlobalSpace::operator<<(QDebug, const QPen&)
    {26, 454, 358, 1, Smoke::mf_static, 467, 260},	//260 QGlobalSpace::qIntCast(float)
    {26, 290, 130, 2, Smoke::mf_static, 375, 261},	//261 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {26, 320, 690, 2, Smoke::mf_static, 96, 262},	//262 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    {26, 522, 481, 2, Smoke::mf_static, 375, 263},	//263 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {26, 320, 693, 2, Smoke::mf_static, 152, 264},	//264 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {26, 314, 696, 2, Smoke::mf_static, 27, 265},	//265 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {26, 509, 699, 2, Smoke::mf_static, 375, 266},	//266 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {26, 540, 559, 3, Smoke::mf_static, 467, 267},	//267 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {26, 397, 702, 7, Smoke::mf_static, 0, 268},	//268 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int, int, const QBrush*)
    {26, 397, 207, 3, Smoke::mf_static, 0, 269},	//269 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&)
    {26, 397, 211, 4, Smoke::mf_static, 0, 270},	//270 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool)
    {26, 397, 216, 5, Smoke::mf_static, 0, 271},	//271 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int)
    {26, 397, 710, 6, Smoke::mf_static, 0, 272},	//272 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int, int)
    {26, 320, 717, 2, Smoke::mf_static, 100, 273},	//273 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag)
    {26, 320, 720, 2, Smoke::mf_static, 152, 274},	//274 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, int)
    {26, 320, 723, 2, Smoke::mf_static, 152, 275},	//275 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, int)
    {26, 284, 726, 1, Smoke::mf_static, 418, 276},	//276 QGlobalSpace::operator-(const QPointF&)
    {26, 481, 728, 4, Smoke::mf_static, 482, 277},	//277 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {26, 320, 733, 2, Smoke::mf_static, 115, 278},	//278 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {26, 294, 736, 2, Smoke::mf_static, 27, 279},	//279 QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    {26, 448, 739, 1, Smoke::mf_static, 475, 280},	//280 QGlobalSpace::qHash(unsigned long long)
    {26, 320, 741, 2, Smoke::mf_static, 124, 281},	//281 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {26, 294, 744, 2, Smoke::mf_static, 31, 282},	//282 QGlobalSpace::operator<<(QDebug, const QSize&)
    {26, 275, 747, 2, Smoke::mf_static, 197, 283},	//283 QGlobalSpace::operator*(const QPointF&, const QTransform&)
    {26, 320, 750, 2, Smoke::mf_static, 115, 284},	//284 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {26, 294, 753, 2, Smoke::mf_static, 31, 285},	//285 QGlobalSpace::operator<<(QDebug, const QVector3D&)
    {26, 320, 756, 2, Smoke::mf_static, 122, 286},	//286 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {26, 344, 0, 0, Smoke::mf_static, 220, 287},	//287 QGlobalSpace::qAppName()
    {26, 310, 529, 2, Smoke::mf_static, 375, 288},	//288 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {26, 320, 759, 2, Smoke::mf_static, 59, 289},	//289 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>)
    {26, 448, 610, 1, Smoke::mf_static, 475, 290},	//290 QGlobalSpace::qHash(QChar)
    {26, 320, 762, 2, Smoke::mf_static, 152, 291},	//291 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, int)
    {26, 372, 765, 8, Smoke::mf_static, 0, 292},	//292 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&, int, const QBrush*)
    {26, 372, 774, 6, Smoke::mf_static, 0, 293},	//293 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&)
    {26, 372, 781, 7, Smoke::mf_static, 0, 294},	//294 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&, int)
    {26, 302, 147, 2, Smoke::mf_static, 375, 295},	//295 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {26, 441, 19, 1, Smoke::mf_static, 375, 296},	//296 QGlobalSpace::qFuzzyIsNull(double)
    {26, 275, 81, 2, Smoke::mf_static, 171, 297},	//297 QGlobalSpace::operator*(const QMatrix4x4&, const QMatrix4x4&)
    {26, 294, 789, 2, Smoke::mf_static, 27, 298},	//298 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {26, 474, 792, 3, Smoke::mf_static, 482, 299},	//299 QGlobalSpace::qMemSet(void*, int, size_t)
    {26, 349, 490, 2, Smoke::mf_static, 465, 300},	//300 QGlobalSpace::qAtan2(double, double)
    {26, 320, 796, 2, Smoke::mf_static, 87, 301},	//301 QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    {26, 294, 799, 2, Smoke::mf_static, 27, 302},	//302 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {26, 314, 802, 2, Smoke::mf_static, 27, 303},	//303 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {26, 358, 805, 2, Smoke::mf_static, 17, 304},	//304 QGlobalSpace::qCompress(const QByteArray&, int)
    {26, 358, 563, 1, Smoke::mf_static, 17, 305},	//305 QGlobalSpace::qCompress(const QByteArray&)
    {26, 320, 808, 2, Smoke::mf_static, 152, 306},	//306 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    {26, 294, 811, 2, Smoke::mf_static, 31, 307},	//307 QGlobalSpace::operator<<(QDebug, const QVector2D&)
    {26, 320, 814, 2, Smoke::mf_static, 116, 308},	//308 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {26, 275, 817, 2, Smoke::mf_static, 271, 309},	//309 QGlobalSpace::operator*(const QMatrix4x4&, const QVector4D&)
    {26, 320, 820, 2, Smoke::mf_static, 152, 310},	//310 QGlobalSpace::operator|(QAccessible::StateFlag, int)
    {26, 290, 481, 2, Smoke::mf_static, 375, 311},	//311 QGlobalSpace::operator<(const char*, const QByteArray&)
    {26, 372, 823, 5, Smoke::mf_static, 0, 312},	//312 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&, int, const QBrush*)
    {26, 372, 829, 3, Smoke::mf_static, 0, 313},	//313 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&)
    {26, 372, 833, 4, Smoke::mf_static, 0, 314},	//314 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&, int)
    {26, 320, 838, 2, Smoke::mf_static, 86, 315},	//315 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag)
    {26, 320, 841, 2, Smoke::mf_static, 152, 316},	//316 QGlobalSpace::operator|(QDateTimeEdit::Section, int)
    {26, 340, 844, 1, Smoke::mf_static, 0, 317},	//317 QGlobalSpace::qAddPostRoutine(void(*)())
    {26, 320, 846, 2, Smoke::mf_static, 152, 318},	//318 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {26, 275, 849, 2, Smoke::mf_static, 195, 319},	//319 QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    {26, 320, 852, 2, Smoke::mf_static, 152, 320},	//320 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {26, 320, 855, 2, Smoke::mf_static, 152, 321},	//321 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {26, 422, 19, 1, Smoke::mf_static, 465, 322},	//322 QGlobalSpace::qExp(double)
    {26, 269, 69, 2, Smoke::mf_static, 375, 323},	//323 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {26, 320, 858, 2, Smoke::mf_static, 113, 324},	//324 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {26, 298, 381, 2, Smoke::mf_static, 375, 325},	//325 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {26, 294, 861, 2, Smoke::mf_static, 27, 326},	//326 QGlobalSpace::operator<<(QDataStream&, const QPen&)
    {26, 269, 864, 2, Smoke::mf_static, 375, 327},	//327 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {26, 320, 867, 2, Smoke::mf_static, 152, 328},	//328 QGlobalSpace::operator|(QString::SectionFlag, int)
    {26, 320, 870, 2, Smoke::mf_static, 152, 329},	//329 QGlobalSpace::operator|(Qt::WindowType, int)
    {26, 320, 873, 2, Smoke::mf_static, 107, 330},	//330 QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    {26, 302, 876, 2, Smoke::mf_static, 375, 331},	//331 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {26, 464, 19, 1, Smoke::mf_static, 375, 332},	//332 QGlobalSpace::qIsNull(double)
    {26, 367, 879, 8, Smoke::mf_static, 0, 333},	//333 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&, QFlags<QDrawBorderPixmap::DrawingHint>)
    {26, 367, 888, 6, Smoke::mf_static, 0, 334},	//334 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&)
    {26, 367, 895, 7, Smoke::mf_static, 0, 335},	//335 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&)
    {26, 302, 903, 2, Smoke::mf_static, 375, 336},	//336 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {26, 454, 19, 1, Smoke::mf_static, 467, 337},	//337 QGlobalSpace::qIntCast(double)
    {26, 318, 1, 2, Smoke::mf_static, 13, 338},	//338 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {26, 356, 906, 2, Smoke::mf_static, 478, 339},	//339 QGlobalSpace::qChecksum(const char*, unsigned int)
    {26, 320, 909, 2, Smoke::mf_static, 106, 340},	//340 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {26, 320, 912, 2, Smoke::mf_static, 152, 341},	//341 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, int)
    {26, 314, 915, 2, Smoke::mf_static, 27, 342},	//342 QGlobalSpace::operator>>(QDataStream&, QIcon&)
    {26, 294, 918, 2, Smoke::mf_static, 27, 343},	//343 QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    {26, 275, 511, 2, Smoke::mf_static, 257, 344},	//344 QGlobalSpace::operator*(const QTransform&, double)
    {26, 320, 921, 2, Smoke::mf_static, 152, 345},	//345 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {26, 320, 924, 2, Smoke::mf_static, 107, 346},	//346 QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    {26, 290, 529, 2, Smoke::mf_static, 375, 347},	//347 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {26, 294, 927, 2, Smoke::mf_static, 31, 348},	//348 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {26, 320, 930, 2, Smoke::mf_static, 152, 349},	//349 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, int)
    {26, 520, 933, 1, Smoke::mf_static, 17, 350},	//350 QGlobalSpace::qgetenv(const char*)
    {26, 320, 935, 2, Smoke::mf_static, 152, 351},	//351 QGlobalSpace::operator|(QImageIOPlugin::Capability, int)
    {26, 294, 938, 2, Smoke::mf_static, 31, 352},	//352 QGlobalSpace::operator<<(QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>)
    {26, 320, 941, 2, Smoke::mf_static, 152, 353},	//353 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, int)
    {26, 320, 944, 2, Smoke::mf_static, 152, 354},	//354 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    {26, 269, 699, 2, Smoke::mf_static, 375, 355},	//355 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {26, 294, 947, 2, Smoke::mf_static, 31, 356},	//356 QGlobalSpace::operator<<(QDebug, const QVector4D&)
    {26, 314, 950, 2, Smoke::mf_static, 251, 357},	//357 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {26, 320, 953, 2, Smoke::mf_static, 152, 358},	//358 QGlobalSpace::operator|(QWizard::WizardOption, int)
    {26, 269, 481, 2, Smoke::mf_static, 375, 359},	//359 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {26, 320, 956, 2, Smoke::mf_static, 152, 360},	//360 QGlobalSpace::operator|(QFileDialog::Option, int)
    {26, 338, 19, 1, Smoke::mf_static, 465, 361},	//361 QGlobalSpace::qAcos(double)
    {26, 320, 959, 2, Smoke::mf_static, 89, 362},	//362 QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    {26, 306, 529, 2, Smoke::mf_static, 375, 363},	//363 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {26, 288, 532, 2, Smoke::mf_static, 460, 364},	//364 QGlobalSpace::operator/(const QVector4D&, double)
    {26, 275, 962, 2, Smoke::mf_static, 195, 365},	//365 QGlobalSpace::operator*(const QMatrix4x4&, const QPoint&)
    {26, 320, 965, 2, Smoke::mf_static, 96, 366},	//366 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    {26, 314, 968, 2, Smoke::mf_static, 27, 367},	//367 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {26, 320, 971, 2, Smoke::mf_static, 70, 368},	//368 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>)
    {26, 288, 150, 2, Smoke::mf_static, 422, 369},	//369 QGlobalSpace::operator/(const QQuaternion&, double)
    {26, 320, 974, 2, Smoke::mf_static, 80, 370},	//370 QGlobalSpace::operator|(QMdiArea::AreaOption, QMdiArea::AreaOption)
    {26, 314, 977, 2, Smoke::mf_static, 27, 371},	//371 QGlobalSpace::operator>>(QDataStream&, QStandardItem&)
    {26, 294, 980, 2, Smoke::mf_static, 27, 372},	//372 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {26, 320, 983, 2, Smoke::mf_static, 62, 373},	//373 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {26, 333, 0, 0, Smoke::mf_static, 9, 374},	//374 QGlobalSpace::qAccessibleImageCastHelper()
    {26, 320, 986, 2, Smoke::mf_static, 152, 375},	//375 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, int)
    {26, 294, 989, 2, Smoke::mf_static, 31, 376},	//376 QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    {26, 542, 992, 3, Smoke::mf_static, 377, 377},	//377 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {26, 320, 996, 2, Smoke::mf_static, 53, 378},	//378 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>)
    {26, 314, 999, 2, Smoke::mf_static, 27, 379},	//379 QGlobalSpace::operator>>(QDataStream&, QBrush&)
    {26, 294, 1002, 2, Smoke::mf_static, 27, 380},	//380 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {26, 314, 1005, 2, Smoke::mf_static, 27, 381},	//381 QGlobalSpace::operator>>(QDataStream&, QMatrix4x4&)
    {26, 284, 1008, 1, Smoke::mf_static, 460, 382},	//382 QGlobalSpace::operator-(const QVector4D&)
    {26, 294, 1010, 2, Smoke::mf_static, 31, 383},	//383 QGlobalSpace::operator<<(QDebug, const QMatrix4x4&)
    {26, 448, 1013, 1, Smoke::mf_static, 475, 384},	//384 QGlobalSpace::qHash(const QUrl&)
    {26, 320, 1015, 2, Smoke::mf_static, 152, 385},	//385 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, int)
    {26, 314, 1018, 2, Smoke::mf_static, 27, 386},	//386 QGlobalSpace::operator>>(QDataStream&, QTextFormat&)
    {26, 456, 358, 1, Smoke::mf_static, 375, 387},	//387 QGlobalSpace::qIsFinite(float)
    {26, 269, 421, 2, Smoke::mf_static, 375, 388},	//388 QGlobalSpace::operator!=(const QVector3D&, const QVector3D&)
    {26, 302, 101, 2, Smoke::mf_static, 375, 389},	//389 QGlobalSpace::operator==(const QVector2D&, const QVector2D&)
    {26, 557, 1021, 1, Smoke::mf_static, 220, 390},	//390 QGlobalSpace::qt_error_string(int)
    {26, 557, 0, 0, Smoke::mf_static, 220, 391},	//391 QGlobalSpace::qt_error_string()
    {26, 288, 520, 2, Smoke::mf_static, 456, 392},	//392 QGlobalSpace::operator/(const QVector2D&, double)
    {26, 275, 1023, 2, Smoke::mf_static, 416, 393},	//393 QGlobalSpace::operator*(const QPoint&, float)
    {26, 320, 1026, 2, Smoke::mf_static, 152, 394},	//394 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {26, 314, 1029, 2, Smoke::mf_static, 27, 395},	//395 QGlobalSpace::operator>>(QDataStream&, QListWidgetItem&)
    {26, 479, 1032, 2, Smoke::mf_static, 482, 396},	//396 QGlobalSpace::qRealloc(void*, size_t)
    {26, 320, 1035, 2, Smoke::mf_static, 68, 397},	//397 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>)
    {26, 320, 1038, 2, Smoke::mf_static, 67, 398},	//398 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>)
    {26, 279, 1041, 2, Smoke::mf_static, 436, 399},	//399 QGlobalSpace::operator+(const QString&, const QString&)
    {26, 320, 1044, 2, Smoke::mf_static, 152, 400},	//400 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    {26, 335, 0, 0, Smoke::mf_static, 9, 401},	//401 QGlobalSpace::qAccessibleTableCastHelper()
    {26, 320, 1047, 2, Smoke::mf_static, 152, 402},	//402 QGlobalSpace::operator|(QMessageBox::StandardButton, int)
    {26, 275, 547, 2, Smoke::mf_static, 171, 403},	//403 QGlobalSpace::operator*(const QMatrix4x4&, double)
    {26, 553, 1050, 4, Smoke::mf_static, 0, 404},	//404 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {26, 269, 381, 2, Smoke::mf_static, 375, 405},	//405 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {26, 269, 1055, 2, Smoke::mf_static, 375, 406},	//406 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {26, 294, 1058, 2, Smoke::mf_static, 31, 407},	//407 QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemFlag)
    {26, 320, 1061, 2, Smoke::mf_static, 51, 408},	//408 QGlobalSpace::operator|(QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>)
    {26, 302, 1064, 2, Smoke::mf_static, 375, 409},	//409 QGlobalSpace::operator==(QKeySequence::StandardKey, QKeyEvent*)
    {26, 320, 1067, 2, Smoke::mf_static, 152, 410},	//410 QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    {26, 314, 1070, 2, Smoke::mf_static, 27, 411},	//411 QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    {26, 306, 130, 2, Smoke::mf_static, 375, 412},	//412 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {26, 493, 19, 1, Smoke::mf_static, 467, 413},	//413 QGlobalSpace::qRound(double)
    {26, 302, 864, 2, Smoke::mf_static, 375, 414},	//414 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {26, 320, 1, 2, Smoke::mf_static, 13, 415},	//415 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {26, 302, 1073, 2, Smoke::mf_static, 375, 416},	//416 QGlobalSpace::operator==(const char*, const QStringRef&)
    {26, 279, 481, 2, Smoke::mf_static, 381, 417},	//417 QGlobalSpace::operator+(const char*, const QByteArray&)
    {26, 314, 1076, 2, Smoke::mf_static, 27, 418},	//418 QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    {26, 320, 1079, 2, Smoke::mf_static, 152, 419},	//419 QGlobalSpace::operator|(Qt::MouseButton, int)
    {26, 320, 1082, 2, Smoke::mf_static, 93, 420},	//420 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    {26, 298, 529, 2, Smoke::mf_static, 375, 421},	//421 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {26, 314, 1085, 2, Smoke::mf_static, 27, 422},	//422 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {26, 320, 1088, 2, Smoke::mf_static, 58, 423},	//423 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {26, 320, 1091, 2, Smoke::mf_static, 114, 424},	//424 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {26, 458, 122, 1, Smoke::mf_static, 375, 425},	//425 QGlobalSpace::qIsGray(unsigned int)
    {26, 320, 1094, 2, Smoke::mf_static, 104, 426},	//426 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {26, 275, 1097, 2, Smoke::mf_static, 197, 427},	//427 QGlobalSpace::operator*(const QMatrix4x4&, const QPointF&)
    {26, 284, 1100, 1, Smoke::mf_static, 171, 428},	//428 QGlobalSpace::operator-(const QMatrix4x4&)
    {26, 320, 1102, 2, Smoke::mf_static, 49, 429},	//429 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>)
    {26, 275, 1105, 2, Smoke::mf_static, 456, 430},	//430 QGlobalSpace::operator*(double, const QVector2D&)
    {26, 320, 1108, 2, Smoke::mf_static, 75, 431},	//431 QGlobalSpace::operator|(QInputDialog::InputDialogOption, QInputDialog::InputDialogOption)
    {26, 320, 1111, 2, Smoke::mf_static, 152, 432},	//432 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, int)
    {26, 314, 1114, 2, Smoke::mf_static, 27, 433},	//433 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {26, 302, 544, 2, Smoke::mf_static, 375, 434},	//434 QGlobalSpace::operator==(QChar, QChar)
    {26, 320, 1117, 2, Smoke::mf_static, 120, 435},	//435 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {26, 294, 1120, 2, Smoke::mf_static, 27, 436},	//436 QGlobalSpace::operator<<(QDataStream&, const QVector3D&)
    {26, 269, 876, 2, Smoke::mf_static, 375, 437},	//437 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {26, 275, 1123, 2, Smoke::mf_static, 162, 438},	//438 QGlobalSpace::operator*(const QLineF&, const QTransform&)
    {26, 269, 1126, 2, Smoke::mf_static, 375, 439},	//439 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {26, 448, 1129, 1, Smoke::mf_static, 475, 440},	//440 QGlobalSpace::qHash(signed char)
    {26, 294, 1131, 2, Smoke::mf_static, 27, 441},	//441 QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    {26, 294, 1134, 2, Smoke::mf_static, 27, 442},	//442 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {26, 320, 1137, 2, Smoke::mf_static, 121, 443},	//443 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {26, 275, 1140, 2, Smoke::mf_static, 458, 444},	//444 QGlobalSpace::operator*(double, const QVector3D&)
    {26, 507, 19, 1, Smoke::mf_static, 465, 445},	//445 QGlobalSpace::qSqrt(double)
    {26, 294, 1143, 2, Smoke::mf_static, 27, 446},	//446 QGlobalSpace::operator<<(QDataStream&, const QFont&)
    {26, 320, 1146, 2, Smoke::mf_static, 103, 447},	//447 QGlobalSpace::operator|(QTextOption::Flag, QFlags<QTextOption::Flag>)
    {26, 527, 1149, 2, Smoke::mf_static, 467, 448},	//448 QGlobalSpace::qstrcmp(const char*, const char*)
    {26, 314, 1152, 2, Smoke::mf_static, 27, 449},	//449 QGlobalSpace::operator>>(QDataStream&, QTableWidgetItem&)
    {26, 320, 1155, 2, Smoke::mf_static, 90, 450},	//450 QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    {26, 302, 89, 2, Smoke::mf_static, 375, 451},	//451 QGlobalSpace::operator==(const QVector4D&, const QVector4D&)
    {26, 294, 1158, 2, Smoke::mf_static, 27, 452},	//452 QGlobalSpace::operator<<(QDataStream&, const QVector2D&)
    {26, 294, 1161, 2, Smoke::mf_static, 27, 453},	//453 QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    {26, 288, 667, 2, Smoke::mf_static, 458, 454},	//454 QGlobalSpace::operator/(const QVector3D&, double)
    {26, 320, 1164, 2, Smoke::mf_static, 85, 455},	//455 QGlobalSpace::operator|(QPainter::RenderHint, QFlags<QPainter::RenderHint>)
    {26, 269, 133, 2, Smoke::mf_static, 375, 456},	//456 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {26, 269, 544, 2, Smoke::mf_static, 375, 457},	//457 QGlobalSpace::operator!=(QChar, QChar)
    {26, 320, 1167, 2, Smoke::mf_static, 77, 458},	//458 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {26, 275, 1170, 2, Smoke::mf_static, 171, 459},	//459 QGlobalSpace::operator*(double, const QMatrix4x4&)
    {26, 546, 906, 2, Smoke::mf_static, 475, 460},	//460 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {26, 320, 1173, 2, Smoke::mf_static, 72, 461},	//461 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>)
    {26, 489, 405, 3, Smoke::mf_static, 475, 462},	//462 QGlobalSpace::qRgb(int, int, int)
    {26, 438, 89, 2, Smoke::mf_static, 375, 463},	//463 QGlobalSpace::qFuzzyCompare(const QVector4D&, const QVector4D&)
    {26, 432, 19, 1, Smoke::mf_static, 467, 464},	//464 QGlobalSpace::qFloor(double)
    {26, 320, 1176, 2, Smoke::mf_static, 123, 465},	//465 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {26, 320, 1179, 2, Smoke::mf_static, 102, 466},	//466 QGlobalSpace::operator|(QTextItem::RenderFlag, QTextItem::RenderFlag)
    {26, 294, 1182, 2, Smoke::mf_static, 31, 467},	//467 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {26, 320, 1185, 2, Smoke::mf_static, 71, 468},	//468 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag)
    {26, 320, 1188, 2, Smoke::mf_static, 106, 469},	//469 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {26, 302, 127, 2, Smoke::mf_static, 375, 470},	//470 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {26, 314, 1191, 2, Smoke::mf_static, 27, 471},	//471 QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    {26, 320, 1194, 2, Smoke::mf_static, 105, 472},	//472 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>)
    {26, 314, 1197, 2, Smoke::mf_static, 27, 473},	//473 QGlobalSpace::operator>>(QDataStream&, QPalette&)
    {26, 294, 1200, 2, Smoke::mf_static, 27, 474},	//474 QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    {26, 320, 1203, 2, Smoke::mf_static, 52, 475},	//475 QGlobalSpace::operator|(QAccessible::StateFlag, QAccessible::StateFlag)
    {26, 302, 529, 2, Smoke::mf_static, 375, 476},	//476 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {26, 269, 1206, 2, Smoke::mf_static, 375, 477},	//477 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {26, 275, 1209, 2, Smoke::mf_static, 429, 478},	//478 QGlobalSpace::operator*(double, const QSize&)
    {26, 302, 1212, 2, Smoke::mf_static, 375, 479},	//479 QGlobalSpace::operator==(QKeyEvent*, QKeySequence::StandardKey)
    {26, 320, 1215, 2, Smoke::mf_static, 62, 480},	//480 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {26, 448, 1218, 1, Smoke::mf_static, 475, 481},	//481 QGlobalSpace::qHash(const QModelIndex&)
    {26, 320, 1220, 2, Smoke::mf_static, 71, 482},	//482 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>)
    {26, 320, 1223, 2, Smoke::mf_static, 90, 483},	//483 QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    {26, 294, 1226, 2, Smoke::mf_static, 31, 484},	//484 QGlobalSpace::operator<<(QDebug, const QLine&)
    {26, 337, 0, 0, Smoke::mf_static, 9, 485},	//485 QGlobalSpace::qAccessibleValueCastHelper()
    {26, 320, 1229, 2, Smoke::mf_static, 48, 486},	//486 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    {26, 487, 844, 1, Smoke::mf_static, 0, 487},	//487 QGlobalSpace::qRemovePostRoutine(void(*)())
    {26, 320, 1232, 2, Smoke::mf_static, 152, 488},	//488 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, int)
    {26, 314, 1235, 2, Smoke::mf_static, 27, 489},	//489 QGlobalSpace::operator>>(QDataStream&, QQuaternion&)
    {26, 275, 1238, 2, Smoke::mf_static, 271, 490},	//490 QGlobalSpace::operator*(const QVector4D&, const QMatrix4x4&)
    {26, 294, 1241, 2, Smoke::mf_static, 27, 491},	//491 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {26, 438, 1244, 2, Smoke::mf_static, 375, 492},	//492 QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    {26, 320, 1247, 2, Smoke::mf_static, 97, 493},	//493 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    {26, 430, 933, 1, Smoke::mf_static, 462, 494},	//494 QGlobalSpace::qFlagLocation(const char*)
    {26, 472, 1250, 3, Smoke::mf_static, 482, 495},	//495 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {26, 310, 381, 2, Smoke::mf_static, 375, 496},	//496 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {26, 275, 1254, 2, Smoke::mf_static, 416, 497},	//497 QGlobalSpace::operator*(double, const QPoint&)
    {26, 462, 19, 1, Smoke::mf_static, 375, 498},	//498 QGlobalSpace::qIsNaN(double)
    {26, 320, 1257, 2, Smoke::mf_static, 79, 499},	//499 QGlobalSpace::operator|(QMainWindow::DockOption, QFlags<QMainWindow::DockOption>)
    {26, 294, 1260, 2, Smoke::mf_static, 31, 500},	//500 QGlobalSpace::operator<<(QDebug, QGraphicsObject*)
    {26, 294, 1263, 2, Smoke::mf_static, 31, 501},	//501 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {26, 448, 1266, 1, Smoke::mf_static, 475, 502},	//502 QGlobalSpace::qHash(short)
    {26, 451, 0, 0, Smoke::mf_static, 465, 503},	//503 QGlobalSpace::qInf()
    {26, 294, 1268, 2, Smoke::mf_static, 31, 504},	//504 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {26, 320, 1271, 2, Smoke::mf_static, 81, 505},	//505 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption)
    {26, 294, 1274, 2, Smoke::mf_static, 27, 506},	//506 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {26, 294, 1277, 2, Smoke::mf_static, 27, 507},	//507 QGlobalSpace::operator<<(QDataStream&, const QImage&)
    {26, 275, 1280, 2, Smoke::mf_static, 422, 508},	//508 QGlobalSpace::operator*(double, const QQuaternion&)
    {26, 279, 1283, 2, Smoke::mf_static, 381, 509},	//509 QGlobalSpace::operator+(const QByteArray&, char)
    {26, 320, 1286, 2, Smoke::mf_static, 99, 510},	//510 QGlobalSpace::operator|(QTextDocument::FindFlag, QTextDocument::FindFlag)
    {26, 294, 1289, 2, Smoke::mf_static, 31, 511},	//511 QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    {26, 320, 1292, 2, Smoke::mf_static, 83, 512},	//512 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>)
    {26, 320, 1295, 2, Smoke::mf_static, 55, 513},	//513 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton)
    {26, 288, 601, 2, Smoke::mf_static, 418, 514},	//514 QGlobalSpace::operator/(const QPointF&, double)
    {26, 513, 563, 1, Smoke::mf_static, 17, 515},	//515 QGlobalSpace::qUncompress(const QByteArray&)
    {26, 310, 544, 2, Smoke::mf_static, 375, 516},	//516 QGlobalSpace::operator>=(QChar, QChar)
    {26, 320, 1298, 2, Smoke::mf_static, 51, 517},	//517 QGlobalSpace::operator|(QAccessible::RelationFlag, QAccessible::RelationFlag)
    {26, 298, 130, 2, Smoke::mf_static, 375, 518},	//518 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {26, 502, 1021, 1, Smoke::mf_static, 254, 519},	//519 QGlobalSpace::qSetRealNumberPrecision(int)
    {26, 294, 1301, 2, Smoke::mf_static, 31, 520},	//520 QGlobalSpace::operator<<(QDebug, const QObject*)
    {26, 505, 19, 1, Smoke::mf_static, 465, 521},	//521 QGlobalSpace::qSin(double)
    {26, 345, 19, 1, Smoke::mf_static, 465, 522},	//522 QGlobalSpace::qAsin(double)
    {26, 438, 421, 2, Smoke::mf_static, 375, 523},	//523 QGlobalSpace::qFuzzyCompare(const QVector3D&, const QVector3D&)
    {26, 536, 1149, 2, Smoke::mf_static, 467, 524},	//524 QGlobalSpace::qstricmp(const char*, const char*)
    {26, 320, 1304, 2, Smoke::mf_static, 70, 525},	//525 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer)
    {26, 294, 1307, 2, Smoke::mf_static, 31, 526},	//526 QGlobalSpace::operator<<(QDebug, const QEvent*)
    {26, 438, 1310, 2, Smoke::mf_static, 375, 527},	//527 QGlobalSpace::qFuzzyCompare(float, float)
    {26, 314, 1313, 2, Smoke::mf_static, 27, 528},	//528 QGlobalSpace::operator>>(QDataStream&, QFont&)
    {26, 320, 1316, 2, Smoke::mf_static, 57, 529},	//529 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {26, 572, 1319, 4, Smoke::mf_static, 467, 530},	//530 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {26, 320, 1324, 2, Smoke::mf_static, 75, 531},	//531 QGlobalSpace::operator|(QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>)
    {26, 320, 1327, 2, Smoke::mf_static, 88, 532},	//532 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {26, 294, 1330, 2, Smoke::mf_static, 27, 533},	//533 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {26, 565, 0, 0, Smoke::mf_static, 0, 534},	//534 QGlobalSpace::qt_noop()
    {26, 320, 1333, 2, Smoke::mf_static, 76, 535},	//535 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    {26, 306, 481, 2, Smoke::mf_static, 375, 536},	//536 QGlobalSpace::operator>(const char*, const QByteArray&)
    {26, 314, 1336, 2, Smoke::mf_static, 27, 537},	//537 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {26, 498, 1021, 1, Smoke::mf_static, 254, 538},	//538 QGlobalSpace::qSetFieldWidth(int)
    {26, 320, 1339, 2, Smoke::mf_static, 98, 539},	//539 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {26, 294, 1342, 2, Smoke::mf_static, 31, 540},	//540 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {26, 294, 1345, 2, Smoke::mf_static, 27, 541},	//541 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {26, 302, 1206, 2, Smoke::mf_static, 375, 542},	//542 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {26, 269, 1348, 2, Smoke::mf_static, 375, 543},	//543 QGlobalSpace::operator!=(bool, QBool)
    {26, 448, 1351, 1, Smoke::mf_static, 475, 544},	//544 QGlobalSpace::qHash(unsigned long)
    {26, 334, 0, 0, Smoke::mf_static, 9, 545},	//545 QGlobalSpace::qAccessibleTable2CastHelper()
    {26, 294, 1353, 2, Smoke::mf_static, 31, 546},	//546 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {26, 320, 1356, 2, Smoke::mf_static, 152, 547},	//547 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, int)
    {26, 275, 1359, 2, Smoke::mf_static, 199, 548},	//548 QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    {26, 269, 1362, 2, Smoke::mf_static, 375, 549},	//549 QGlobalSpace::operator!=(QBool, bool)
    {26, 320, 1365, 2, Smoke::mf_static, 152, 550},	//550 QGlobalSpace::operator|(Qt::WindowState, int)
    {26, 320, 1368, 2, Smoke::mf_static, 97, 551},	//551 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    {26, 284, 864, 2, Smoke::mf_static, 416, 552},	//552 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {26, 466, 19, 1, Smoke::mf_static, 465, 553},	//553 QGlobalSpace::qLn(double)
    {26, 314, 1371, 2, Smoke::mf_static, 27, 554},	//554 QGlobalSpace::operator>>(QDataStream&, QTextLength&)
    {26, 314, 1374, 2, Smoke::mf_static, 27, 555},	//555 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {26, 438, 236, 2, Smoke::mf_static, 375, 556},	//556 QGlobalSpace::qFuzzyCompare(const QQuaternion&, const QQuaternion&)
    {26, 379, 339, 9, Smoke::mf_static, 0, 557},	//557 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool, int, int)
    {26, 379, 292, 6, Smoke::mf_static, 0, 558},	//558 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&)
    {26, 379, 299, 7, Smoke::mf_static, 0, 559},	//559 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool)
    {26, 379, 330, 8, Smoke::mf_static, 0, 560},	//560 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {26, 538, 933, 1, Smoke::mf_static, 475, 561},	//561 QGlobalSpace::qstrlen(const char*)
    {26, 279, 381, 2, Smoke::mf_static, 381, 562},	//562 QGlobalSpace::operator+(const QByteArray&, const char*)
    {26, 294, 1377, 2, Smoke::mf_static, 27, 563},	//563 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {26, 269, 127, 2, Smoke::mf_static, 375, 564},	//564 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {26, 298, 481, 2, Smoke::mf_static, 375, 565},	//565 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {26, 294, 1380, 2, Smoke::mf_static, 27, 566},	//566 QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    {26, 320, 1383, 2, Smoke::mf_static, 110, 567},	//567 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {26, 294, 1386, 2, Smoke::mf_static, 31, 568},	//568 QGlobalSpace::operator<<(QDebug, const QMatrix&)
    {26, 320, 1389, 2, Smoke::mf_static, 152, 569},	//569 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, int)
    {26, 302, 1055, 2, Smoke::mf_static, 375, 570},	//570 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {26, 320, 1392, 2, Smoke::mf_static, 78, 571},	//571 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {26, 320, 1395, 2, Smoke::mf_static, 103, 572},	//572 QGlobalSpace::operator|(QTextOption::Flag, QTextOption::Flag)
    {26, 294, 1398, 2, Smoke::mf_static, 27, 573},	//573 QGlobalSpace::operator<<(QDataStream&, const QColor&)
    {26, 320, 1401, 2, Smoke::mf_static, 124, 574},	//574 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {26, 320, 1404, 2, Smoke::mf_static, 54, 575},	//575 QGlobalSpace::operator|(QDateTimeEdit::Section, QDateTimeEdit::Section)
    {26, 332, 0, 0, Smoke::mf_static, 9, 576},	//576 QGlobalSpace::qAccessibleEditableTextCastHelper()
    {26, 275, 1407, 2, Smoke::mf_static, 429, 577},	//577 QGlobalSpace::operator*(const QSize&, double)
    {26, 275, 1410, 2, Smoke::mf_static, 269, 578},	//578 QGlobalSpace::operator*(const QMatrix4x4&, const QVector3D&)
    {26, 302, 1413, 2, Smoke::mf_static, 375, 579},	//579 QGlobalSpace::operator==(QString::Null, const QString&)
    {26, 294, 1416, 2, Smoke::mf_static, 31, 580},	//580 QGlobalSpace::operator<<(QDebug, const QBrush&)
    {26, 320, 1419, 2, Smoke::mf_static, 57, 581},	//581 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {26, 320, 1422, 2, Smoke::mf_static, 114, 582},	//582 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {26, 314, 1425, 2, Smoke::mf_static, 27, 583},	//583 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {26, 294, 1428, 2, Smoke::mf_static, 31, 584},	//584 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {26, 302, 381, 2, Smoke::mf_static, 375, 585},	//585 QGlobalSpace::operator==(const QByteArray&, const char*)
    {26, 568, 1431, 5, Smoke::mf_static, 0, 586},	//586 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {26, 320, 1437, 2, Smoke::mf_static, 92, 587},	//587 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    {26, 314, 1440, 2, Smoke::mf_static, 27, 588},	//588 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {26, 294, 1443, 2, Smoke::mf_static, 27, 589},	//589 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {26, 314, 1446, 2, Smoke::mf_static, 27, 590},	//590 QGlobalSpace::operator>>(QDataStream&, QTreeWidgetItem&)
    {26, 314, 1449, 2, Smoke::mf_static, 27, 591},	//591 QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    {26, 306, 381, 2, Smoke::mf_static, 375, 592},	//592 QGlobalSpace::operator>(const QByteArray&, const char*)
    {26, 320, 1452, 2, Smoke::mf_static, 152, 593},	//593 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, int)
    {26, 279, 864, 2, Smoke::mf_static, 416, 594},	//594 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {26, 294, 1455, 2, Smoke::mf_static, 27, 595},	//595 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {26, 434, 679, 1, Smoke::mf_static, 0, 596},	//596 QGlobalSpace::qFree(void*)
    {26, 279, 421, 2, Smoke::mf_static, 458, 597},	//597 QGlobalSpace::operator+(const QVector3D&, const QVector3D&)
    {26, 298, 544, 2, Smoke::mf_static, 375, 598},	//598 QGlobalSpace::operator<=(QChar, QChar)
    {26, 294, 1458, 2, Smoke::mf_static, 251, 599},	//599 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {26, 320, 1461, 2, Smoke::mf_static, 74, 600},	//600 QGlobalSpace::operator|(QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>)
    {26, 294, 1464, 2, Smoke::mf_static, 27, 601},	//601 QGlobalSpace::operator<<(QDataStream&, const QTextLength&)
    {26, 448, 122, 1, Smoke::mf_static, 475, 602},	//602 QGlobalSpace::qHash(unsigned int)
    {26, 275, 1467, 2, Smoke::mf_static, 209, 603},	//603 QGlobalSpace::operator*(const QRegion&, const QTransform&)
    {26, 269, 1413, 2, Smoke::mf_static, 375, 604},	//604 QGlobalSpace::operator!=(QString::Null, const QString&)
    {26, 495, 19, 1, Smoke::mf_static, 469, 605},	//605 QGlobalSpace::qRound64(double)
    {26, 275, 1470, 2, Smoke::mf_static, 197, 606},	//606 QGlobalSpace::operator*(const QPointF&, const QMatrix4x4&)
    {26, 294, 1473, 2, Smoke::mf_static, 31, 607},	//607 QGlobalSpace::operator<<(QDebug, QGraphicsItem*)
    {26, 320, 1476, 2, Smoke::mf_static, 152, 608},	//608 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, int)
    {26, 294, 1479, 2, Smoke::mf_static, 27, 609},	//609 QGlobalSpace::operator<<(QDataStream&, const QListWidgetItem&)
    {26, 320, 1482, 2, Smoke::mf_static, 88, 610},	//610 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {26, 470, 1485, 2, Smoke::mf_static, 482, 611},	//611 QGlobalSpace::qMallocAligned(size_t, size_t)
    {26, 320, 1488, 2, Smoke::mf_static, 152, 612},	//612 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, int)
    {26, 320, 1491, 2, Smoke::mf_static, 152, 613},	//613 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {26, 269, 684, 2, Smoke::mf_static, 375, 614},	//614 QGlobalSpace::operator!=(const QString&, QString::Null)
    {26, 358, 1494, 3, Smoke::mf_static, 17, 615},	//615 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {26, 358, 1498, 2, Smoke::mf_static, 17, 616},	//616 QGlobalSpace::qCompress(const unsigned char*, int)
    {26, 320, 1501, 2, Smoke::mf_static, 152, 617},	//617 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {26, 275, 1504, 2, Smoke::mf_static, 416, 618},	//618 QGlobalSpace::operator*(int, const QPoint&)
    {26, 294, 1507, 2, Smoke::mf_static, 31, 619},	//619 QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    {26, 534, 933, 1, Smoke::mf_static, 377, 620},	//620 QGlobalSpace::qstrdup(const char*)
    {26, 320, 1510, 2, Smoke::mf_static, 112, 621},	//621 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {26, 294, 1513, 2, Smoke::mf_static, 27, 622},	//622 QGlobalSpace::operator<<(QDataStream&, const QStandardItem&)
    {26, 275, 1516, 2, Smoke::mf_static, 201, 623},	//623 QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    {26, 320, 1519, 2, Smoke::mf_static, 152, 624},	//624 QGlobalSpace::operator|(QAccessible::RelationFlag, int)
    {26, 269, 236, 2, Smoke::mf_static, 375, 625},	//625 QGlobalSpace::operator!=(const QQuaternion&, const QQuaternion&)
    {26, 366, 0, 0, Smoke::mf_static, 31, 626},	//626 QGlobalSpace::qDebug()
    {26, 284, 1522, 1, Smoke::mf_static, 416, 627},	//627 QGlobalSpace::operator-(const QPoint&)
    {26, 314, 1524, 2, Smoke::mf_static, 27, 628},	//628 QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    {26, 367, 1527, 4, Smoke::mf_static, 0, 629},	//629 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&)
    {26, 269, 89, 2, Smoke::mf_static, 375, 630},	//630 QGlobalSpace::operator!=(const QVector4D&, const QVector4D&)
    {26, 320, 1532, 2, Smoke::mf_static, 64, 631},	//631 QGlobalSpace::operator|(QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>)
    {26, 527, 481, 2, Smoke::mf_static, 467, 632},	//632 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {26, 320, 1535, 2, Smoke::mf_static, 63, 633},	//633 QGlobalSpace::operator|(QFileDialog::Option, QFileDialog::Option)
    {26, 320, 1538, 2, Smoke::mf_static, 152, 634},	//634 QGlobalSpace::operator|(QMdiArea::AreaOption, int)
    {26, 511, 19, 1, Smoke::mf_static, 465, 635},	//635 QGlobalSpace::qTan(double)
    {26, 314, 1541, 2, Smoke::mf_static, 27, 636},	//636 QGlobalSpace::operator>>(QDataStream&, QString&)
    {26, 320, 1544, 2, Smoke::mf_static, 54, 637},	//637 QGlobalSpace::operator|(QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>)
    {26, 302, 130, 2, Smoke::mf_static, 375, 638},	//638 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {26, 320, 1547, 2, Smoke::mf_static, 55, 639},	//639 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>)
    {26, 379, 1550, 7, Smoke::mf_static, 0, 640},	//640 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int, int)
    {26, 379, 1558, 4, Smoke::mf_static, 0, 641},	//641 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&)
    {26, 379, 1563, 5, Smoke::mf_static, 0, 642},	//642 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool)
    {26, 379, 1569, 6, Smoke::mf_static, 0, 643},	//643 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int)
    {26, 320, 1576, 2, Smoke::mf_static, 76, 644},	//644 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    {26, 275, 421, 2, Smoke::mf_static, 458, 645},	//645 QGlobalSpace::operator*(const QVector3D&, const QVector3D&)
    {26, 415, 643, 5, Smoke::mf_static, 0, 646},	//646 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&, bool, const QBrush*)
    {26, 415, 207, 3, Smoke::mf_static, 0, 647},	//647 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&)
    {26, 415, 211, 4, Smoke::mf_static, 0, 648},	//648 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&, bool)
    {26, 294, 1579, 2, Smoke::mf_static, 27, 649},	//649 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {26, 448, 1021, 1, Smoke::mf_static, 475, 650},	//650 QGlobalSpace::qHash(int)
    {26, 284, 508, 2, Smoke::mf_static, 418, 651},	//651 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {26, 294, 1582, 2, Smoke::mf_static, 27, 652},	//652 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {26, 314, 1585, 2, Smoke::mf_static, 251, 653},	//653 QGlobalSpace::operator>>(QTextStream&, QSplitter&)
    {26, 294, 1588, 2, Smoke::mf_static, 27, 654},	//654 QGlobalSpace::operator<<(QDataStream&, const QMatrix4x4&)
    {26, 314, 1591, 2, Smoke::mf_static, 27, 655},	//655 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {26, 279, 511, 2, Smoke::mf_static, 257, 656},	//656 QGlobalSpace::operator+(const QTransform&, double)
    {26, 294, 1594, 2, Smoke::mf_static, 27, 657},	//657 QGlobalSpace::operator<<(QDataStream&, const QVector4D&)
    {26, 320, 1597, 2, Smoke::mf_static, 89, 658},	//658 QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    {26, 448, 1600, 1, Smoke::mf_static, 475, 659},	//659 QGlobalSpace::qHash(const QItemSelectionRange&)
    {26, 320, 1602, 2, Smoke::mf_static, 120, 660},	//660 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {26, 476, 490, 2, Smoke::mf_static, 465, 661},	//661 QGlobalSpace::qPow(double, double)
    {26, 302, 699, 2, Smoke::mf_static, 375, 662},	//662 QGlobalSpace::operator==(const QStringRef&, const char*)
    {26, 269, 1073, 2, Smoke::mf_static, 375, 663},	//663 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {26, 314, 1605, 2, Smoke::mf_static, 27, 664},	//664 QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    {26, 279, 130, 2, Smoke::mf_static, 381, 665},	//665 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {26, 320, 1608, 2, Smoke::mf_static, 61, 666},	//666 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {26, 275, 1611, 2, Smoke::mf_static, 195, 667},	//667 QGlobalSpace::operator*(const QPoint&, const QMatrix4x4&)
    {26, 314, 1614, 2, Smoke::mf_static, 27, 668},	//668 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {26, 320, 1617, 2, Smoke::mf_static, 152, 669},	//669 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {26, 320, 1620, 2, Smoke::mf_static, 65, 670},	//670 QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>)
    {26, 320, 1623, 2, Smoke::mf_static, 72, 671},	//671 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag)
    {26, 559, 1626, 2, Smoke::mf_static, 0, 672},	//672 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {26, 320, 1629, 2, Smoke::mf_static, 152, 673},	//673 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {26, 284, 1632, 1, Smoke::mf_static, 458, 674},	//674 QGlobalSpace::operator-(const QVector3D&)
    {26, 320, 1634, 2, Smoke::mf_static, 91, 675},	//675 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    {26, 320, 1637, 2, Smoke::mf_static, 53, 676},	//676 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption)
    {26, 294, 1640, 2, Smoke::mf_static, 31, 677},	//677 QGlobalSpace::operator<<(QDebug, const QRect&)
    {26, 426, 19, 1, Smoke::mf_static, 465, 678},	//678 QGlobalSpace::qFastCos(double)
    {26, 294, 1643, 2, Smoke::mf_static, 27, 679},	//679 QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    {26, 294, 1646, 2, Smoke::mf_static, 27, 680},	//680 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {26, 314, 1649, 2, Smoke::mf_static, 27, 681},	//681 QGlobalSpace::operator>>(QDataStream&, QVector3D&)
    {26, 320, 1652, 2, Smoke::mf_static, 152, 682},	//682 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    {26, 275, 1655, 2, Smoke::mf_static, 460, 683},	//683 QGlobalSpace::operator*(double, const QVector4D&)
    {26, 288, 1407, 2, Smoke::mf_static, 429, 684},	//684 QGlobalSpace::operator/(const QSize&, double)
    {26, 314, 1658, 2, Smoke::mf_static, 27, 685},	//685 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {26, 314, 1661, 2, Smoke::mf_static, 27, 686},	//686 QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    {26, 320, 1664, 2, Smoke::mf_static, 69, 687},	//687 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>)
    {26, 314, 1667, 2, Smoke::mf_static, 27, 688},	//688 QGlobalSpace::operator>>(QDataStream&, QPicture&)
    {26, 302, 1348, 2, Smoke::mf_static, 375, 689},	//689 QGlobalSpace::operator==(bool, QBool)
    {26, 415, 283, 8, Smoke::mf_static, 0, 690},	//690 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*)
    {26, 415, 292, 6, Smoke::mf_static, 0, 691},	//691 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&)
    {26, 415, 299, 7, Smoke::mf_static, 0, 692},	//692 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&, bool)
    {26, 320, 1670, 2, Smoke::mf_static, 122, 693},	//693 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {26, 320, 1673, 2, Smoke::mf_static, 102, 694},	//694 QGlobalSpace::operator|(QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>)
    {26, 320, 1676, 2, Smoke::mf_static, 152, 695},	//695 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {26, 275, 1679, 2, Smoke::mf_static, 195, 696},	//696 QGlobalSpace::operator*(const QPoint&, const QTransform&)
    {26, 320, 1682, 2, Smoke::mf_static, 152, 697},	//697 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    {26, 320, 1685, 2, Smoke::mf_static, 152, 698},	//698 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, int)
    {26, 284, 236, 2, Smoke::mf_static, 422, 699},	//699 QGlobalSpace::operator-(const QQuaternion&, const QQuaternion&)
    {26, 320, 1688, 2, Smoke::mf_static, 95, 700},	//700 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    {26, 284, 421, 2, Smoke::mf_static, 458, 701},	//701 QGlobalSpace::operator-(const QVector3D&, const QVector3D&)
    {26, 320, 1691, 2, Smoke::mf_static, 152, 702},	//702 QGlobalSpace::operator|(QTextItem::RenderFlag, int)
    {26, 314, 1694, 2, Smoke::mf_static, 27, 703},	//703 QGlobalSpace::operator>>(QDataStream&, QVector2D&)
    {26, 331, 0, 0, Smoke::mf_static, 9, 704},	//704 QGlobalSpace::qAccessibleActionCastHelper()
    {26, 448, 1697, 1, Smoke::mf_static, 475, 705},	//705 QGlobalSpace::qHash(char)
    {26, 294, 1699, 2, Smoke::mf_static, 27, 706},	//706 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {26, 352, 122, 1, Smoke::mf_static, 467, 707},	//707 QGlobalSpace::qBlue(unsigned int)
    {26, 320, 1702, 2, Smoke::mf_static, 152, 708},	//708 QGlobalSpace::operator|(QMainWindow::DockOption, int)
    {26, 314, 1705, 2, Smoke::mf_static, 27, 709},	//709 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {26, 269, 508, 2, Smoke::mf_static, 375, 710},	//710 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {26, 320, 1708, 2, Smoke::mf_static, 101, 711},	//711 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>)
    {26, 456, 19, 1, Smoke::mf_static, 375, 712},	//712 QGlobalSpace::qIsFinite(double)
    {26, 275, 1711, 2, Smoke::mf_static, 416, 713},	//713 QGlobalSpace::operator*(const QPoint&, int)
    {26, 320, 1714, 2, Smoke::mf_static, 113, 714},	//714 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {26, 284, 69, 2, Smoke::mf_static, 429, 715},	//715 QGlobalSpace::operator-(const QSize&, const QSize&)
    {26, 294, 1717, 2, Smoke::mf_static, 31, 716},	//716 QGlobalSpace::operator<<(QDebug, const QQuaternion&)
    {26, 497, 0, 0, Smoke::mf_static, 465, 717},	//717 QGlobalSpace::qSNaN()
    {26, 320, 1720, 2, Smoke::mf_static, 92, 718},	//718 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    {26, 294, 1723, 2, Smoke::mf_static, 27, 719},	//719 QGlobalSpace::operator<<(QDataStream&, const QTextFormat&)
    {26, 441, 358, 1, Smoke::mf_static, 375, 720},	//720 QGlobalSpace::qFuzzyIsNull(float)
    {26, 320, 1726, 2, Smoke::mf_static, 111, 721},	//721 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {26, 320, 1729, 2, Smoke::mf_static, 152, 722},	//722 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, int)
    {26, 513, 1498, 2, Smoke::mf_static, 17, 723},	//723 QGlobalSpace::qUncompress(const unsigned char*, int)
    {26, 320, 1732, 2, Smoke::mf_static, 111, 724},	//724 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {26, 320, 1735, 2, Smoke::mf_static, 67, 725},	//725 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint)
    {26, 320, 1738, 2, Smoke::mf_static, 152, 726},	//726 QGlobalSpace::operator|(Qt::Orientation, int)
    {26, 428, 19, 1, Smoke::mf_static, 465, 727},	//727 QGlobalSpace::qFastSin(double)
    {26, 320, 1741, 2, Smoke::mf_static, 74, 728},	//728 QGlobalSpace::operator|(QImageIOPlugin::Capability, QImageIOPlugin::Capability)
    {26, 294, 1744, 2, Smoke::mf_static, 27, 729},	//729 QGlobalSpace::operator<<(QDataStream&, const QQuaternion&)
    {26, 294, 1747, 2, Smoke::mf_static, 31, 730},	//730 QGlobalSpace::operator<<(QDebug, const QDir&)
    {26, 279, 508, 2, Smoke::mf_static, 418, 731},	//731 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {26, 275, 1750, 2, Smoke::mf_static, 209, 732},	//732 QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    {26, 302, 1362, 2, Smoke::mf_static, 375, 733},	//733 QGlobalSpace::operator==(QBool, bool)
    {26, 302, 66, 2, Smoke::mf_static, 375, 734},	//734 QGlobalSpace::operator==(const QRect&, const QRect&)
    {26, 294, 1753, 2, Smoke::mf_static, 31, 735},	//735 QGlobalSpace::operator<<(QDebug, const QRegion&)
    {26, 275, 1756, 2, Smoke::mf_static, 416, 736},	//736 QGlobalSpace::operator*(float, const QPoint&)
    {26, 548, 577, 2, Smoke::mf_static, 220, 737},	//737 QGlobalSpace::qtTrId(const char*, int)
    {26, 548, 933, 1, Smoke::mf_static, 220, 738},	//738 QGlobalSpace::qtTrId(const char*)
    {26, 314, 1759, 2, Smoke::mf_static, 27, 739},	//739 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {26, 320, 1762, 2, Smoke::mf_static, 77, 740},	//740 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {26, 320, 1765, 2, Smoke::mf_static, 152, 741},	//741 QGlobalSpace::operator|(QTextOption::Flag, int)
    {26, 279, 1768, 2, Smoke::mf_static, 436, 742},	//742 QGlobalSpace::operator+(const QString&, QChar)
    {26, 351, 0, 0, Smoke::mf_static, 0, 743},	//743 QGlobalSpace::qBadAlloc()
    {26, 269, 173, 2, Smoke::mf_static, 375, 744},	//744 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {26, 491, 1771, 4, Smoke::mf_static, 475, 745},	//745 QGlobalSpace::qRgba(int, int, int, int)
    {26, 320, 1776, 2, Smoke::mf_static, 119, 746},	//746 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {26, 320, 1779, 2, Smoke::mf_static, 95, 747},	//747 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    {26, 320, 1782, 2, Smoke::mf_static, 79, 748},	//748 QGlobalSpace::operator|(QMainWindow::DockOption, QMainWindow::DockOption)
    {26, 269, 153, 2, Smoke::mf_static, 375, 749},	//749 QGlobalSpace::operator!=(QBool, QBool)
    {26, 294, 950, 2, Smoke::mf_static, 251, 750},	//750 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {26, 468, 1785, 1, Smoke::mf_static, 482, 751},	//751 QGlobalSpace::qMalloc(size_t)
    {26, 294, 1787, 2, Smoke::mf_static, 31, 752},	//752 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {26, 302, 1126, 2, Smoke::mf_static, 375, 753},	//753 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {26, 284, 511, 2, Smoke::mf_static, 257, 754},	//754 QGlobalSpace::operator-(const QTransform&, double)
    {26, 320, 1790, 2, Smoke::mf_static, 78, 755},	//755 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {26, 294, 1793, 2, Smoke::mf_static, 27, 756},	//756 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {26, 132, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 757},	//757 QGlobalSpace::SP_CustomToolBarAdd (enum)
    {26, 133, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 758},	//758 QGlobalSpace::SP_CustomToolBarAddDetail (enum)
    {26, 134, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 759},	//759 QGlobalSpace::SP_CustomToolBarAgain (enum)
    {26, 135, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 760},	//760 QGlobalSpace::SP_CustomToolBarAgenda (enum)
    {26, 136, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 761},	//761 QGlobalSpace::SP_CustomToolBarAudioOff (enum)
    {26, 137, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 762},	//762 QGlobalSpace::SP_CustomToolBarAudioOn (enum)
    {26, 138, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 763},	//763 QGlobalSpace::SP_CustomToolBarBack (enum)
    {26, 139, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 764},	//764 QGlobalSpace::SP_CustomToolBarBluetoothOff (enum)
    {26, 140, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 765},	//765 QGlobalSpace::SP_CustomToolBarBluetoothOn (enum)
    {26, 141, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 766},	//766 QGlobalSpace::SP_CustomToolBarCancel (enum)
    {26, 142, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 767},	//767 QGlobalSpace::SP_CustomToolBarDelete (enum)
    {26, 143, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 768},	//768 QGlobalSpace::SP_CustomToolBarDone (enum)
    {26, 144, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 769},	//769 QGlobalSpace::SP_CustomToolBarEdit (enum)
    {26, 145, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 770},	//770 QGlobalSpace::SP_CustomToolBarEditDisabled (enum)
    {26, 146, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 771},	//771 QGlobalSpace::SP_CustomToolBarEmailSend (enum)
    {26, 147, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 772},	//772 QGlobalSpace::SP_CustomToolBarEmergencyCall (enum)
    {26, 148, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 773},	//773 QGlobalSpace::SP_CustomToolBarFavouriteAdd (enum)
    {26, 149, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 774},	//774 QGlobalSpace::SP_CustomToolBarFavouriteRemove (enum)
    {26, 150, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 775},	//775 QGlobalSpace::SP_CustomToolBarFavourites (enum)
    {26, 151, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 776},	//776 QGlobalSpace::SP_CustomToolBarGo (enum)
    {26, 152, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 777},	//777 QGlobalSpace::SP_CustomToolBarHome (enum)
    {26, 153, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 778},	//778 QGlobalSpace::SP_CustomToolBarImageTools (enum)
    {26, 154, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 779},	//779 QGlobalSpace::SP_CustomToolBarList (enum)
    {26, 155, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 780},	//780 QGlobalSpace::SP_CustomToolBarLock (enum)
    {26, 156, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 781},	//781 QGlobalSpace::SP_CustomToolBarLogs (enum)
    {26, 157, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 782},	//782 QGlobalSpace::SP_CustomToolBarMenu (enum)
    {26, 158, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 783},	//783 QGlobalSpace::SP_CustomToolBarNewContact (enum)
    {26, 159, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 784},	//784 QGlobalSpace::SP_CustomToolBarNewGroup (enum)
    {26, 160, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 785},	//785 QGlobalSpace::SP_CustomToolBarNextFrame (enum)
    {26, 161, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 786},	//786 QGlobalSpace::SP_CustomToolBarNowPlay (enum)
    {26, 162, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 787},	//787 QGlobalSpace::SP_CustomToolBarOptions (enum)
    {26, 163, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 788},	//788 QGlobalSpace::SP_CustomToolBarOther (enum)
    {26, 164, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 789},	//789 QGlobalSpace::SP_CustomToolBarOvi (enum)
    {26, 165, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 790},	//790 QGlobalSpace::SP_CustomToolBarPreviousFrame (enum)
    {26, 166, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 791},	//791 QGlobalSpace::SP_CustomToolBarRead (enum)
    {26, 168, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 792},	//792 QGlobalSpace::SP_CustomToolBarRedoDisabled (enum)
    {26, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 793},	//793 QGlobalSpace::SP_CustomToolBarRedo (enum)
    {26, 169, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 794},	//794 QGlobalSpace::SP_CustomToolBarRefresh (enum)
    {26, 170, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 795},	//795 QGlobalSpace::SP_CustomToolBarRemoveDetail (enum)
    {26, 171, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 796},	//796 QGlobalSpace::SP_CustomToolBarRemoveDisabled (enum)
    {26, 172, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 797},	//797 QGlobalSpace::SP_CustomToolBarRepeat (enum)
    {26, 173, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 798},	//798 QGlobalSpace::SP_CustomToolBarRepeatOff (enum)
    {26, 174, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 799},	//799 QGlobalSpace::SP_CustomToolBarRepeatOne (enum)
    {26, 175, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 800},	//800 QGlobalSpace::SP_CustomToolBarSearch (enum)
    {26, 176, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 801},	//801 QGlobalSpace::SP_CustomToolBarSearchDisabled (enum)
    {26, 177, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 802},	//802 QGlobalSpace::SP_CustomToolBarSelectContent (enum)
    {26, 178, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 803},	//803 QGlobalSpace::SP_CustomToolBarSelfTimer (enum)
    {26, 179, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 804},	//804 QGlobalSpace::SP_CustomToolBarSend (enum)
    {26, 180, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 805},	//805 QGlobalSpace::SP_CustomToolBarSendDimmed (enum)
    {26, 181, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 806},	//806 QGlobalSpace::SP_CustomToolBarShare (enum)
    {26, 182, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 807},	//807 QGlobalSpace::SP_CustomToolBarShift (enum)
    {26, 183, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 808},	//808 QGlobalSpace::SP_CustomToolBarShuffle (enum)
    {26, 184, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 809},	//809 QGlobalSpace::SP_CustomToolBarShuffleOff (enum)
    {26, 185, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 810},	//810 QGlobalSpace::SP_CustomToolBarSignalOff (enum)
    {26, 186, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 811},	//811 QGlobalSpace::SP_CustomToolBarSignalOn (enum)
    {26, 187, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 812},	//812 QGlobalSpace::SP_CustomToolBarSync (enum)
    {26, 188, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 813},	//813 QGlobalSpace::SP_CustomToolBarTools (enum)
    {26, 189, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 814},	//814 QGlobalSpace::SP_CustomToolBarTrim (enum)
    {26, 190, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 815},	//815 QGlobalSpace::SP_CustomToolBarUnlock (enum)
    {26, 191, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 816},	//816 QGlobalSpace::SP_CustomToolBarUnmark (enum)
    {26, 192, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 817},	//817 QGlobalSpace::SP_CustomToolBarView (enum)
    {26, 193, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 818},	//818 QGlobalSpace::SP_CustomToolBarWlanOff (enum)
    {26, 194, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 819},	//819 QGlobalSpace::SP_CustomToolBarWlanOn (enum)
    {26, 110, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 820},	//820 QGlobalSpace::SP_CustomCameraCaptureButton (enum)
    {26, 111, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 821},	//821 QGlobalSpace::SP_CustomCameraCaptureButtonPressed (enum)
    {26, 112, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 822},	//822 QGlobalSpace::SP_CustomCameraPauseButton (enum)
    {26, 113, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 823},	//823 QGlobalSpace::SP_CustomCameraPauseButtonPressed (enum)
    {26, 114, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 824},	//824 QGlobalSpace::SP_CustomCameraPlayButton (enum)
    {26, 115, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 825},	//825 QGlobalSpace::SP_CustomCameraPlayButtonPressed (enum)
    {26, 116, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 826},	//826 QGlobalSpace::SP_CustomCameraRecButton (enum)
    {26, 117, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 827},	//827 QGlobalSpace::SP_CustomCameraRecButtonPressed (enum)
    {26, 118, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 828},	//828 QGlobalSpace::SP_CustomCameraStopButton (enum)
    {26, 119, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 829},	//829 QGlobalSpace::SP_CustomCameraStopButtonPressed (enum)
    {26, 120, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 830},	//830 QGlobalSpace::SP_CustomTabAll (enum)
    {26, 121, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 831},	//831 QGlobalSpace::SP_CustomTabArtist (enum)
    {26, 122, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 832},	//832 QGlobalSpace::SP_CustomTabFavourite (enum)
    {26, 123, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 833},	//833 QGlobalSpace::SP_CustomTabGenre (enum)
    {26, 124, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 834},	//834 QGlobalSpace::SP_CustomTabLanguage (enum)
    {26, 125, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 835},	//835 QGlobalSpace::SP_CustomTabMusicAlbum (enum)
    {26, 126, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 836},	//836 QGlobalSpace::SP_CustomTabPhotosAlbum (enum)
    {26, 127, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 837},	//837 QGlobalSpace::SP_CustomTabPhotosAll (enum)
    {26, 128, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 838},	//838 QGlobalSpace::SP_CustomTabPlaylist (enum)
    {26, 129, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 839},	//839 QGlobalSpace::SP_CustomTabServices (enum)
    {26, 130, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 840},	//840 QGlobalSpace::SP_CustomTabSongs (enum)
    {26, 131, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 841},	//841 QGlobalSpace::SP_CustomTabVideos (enum)
    {26, 67, 0, 0, Smoke::mf_static|Smoke::mf_enum, 363, 842},	//842 QGlobalSpace::LicensedOpenGL (enum)
    {26, 74, 0, 0, Smoke::mf_static|Smoke::mf_enum, 370, 843},	//843 QGlobalSpace::LicensedSvg (enum)
    {26, 68, 0, 0, Smoke::mf_static|Smoke::mf_enum, 364, 844},	//844 QGlobalSpace::LicensedOpenVG (enum)
    {26, 71, 0, 0, Smoke::mf_static|Smoke::mf_enum, 367, 845},	//845 QGlobalSpace::LicensedScript (enum)
    {26, 70, 0, 0, Smoke::mf_static|Smoke::mf_enum, 365, 846},	//846 QGlobalSpace::LicensedQt3SupportLight (enum)
    {26, 106, 0, 0, Smoke::mf_static|Smoke::mf_enum, 354, 847},	//847 QGlobalSpace::QtDebugMsg (enum)
    {26, 109, 0, 0, Smoke::mf_static|Smoke::mf_enum, 354, 848},	//848 QGlobalSpace::QtWarningMsg (enum)
    {26, 105, 0, 0, Smoke::mf_static|Smoke::mf_enum, 354, 849},	//849 QGlobalSpace::QtCriticalMsg (enum)
    {26, 107, 0, 0, Smoke::mf_static|Smoke::mf_enum, 354, 850},	//850 QGlobalSpace::QtFatalMsg (enum)
    {26, 108, 0, 0, Smoke::mf_static|Smoke::mf_enum, 354, 851},	//851 QGlobalSpace::QtSystemMsg (enum)
    {26, 63, 0, 0, Smoke::mf_static|Smoke::mf_enum, 359, 852},	//852 QGlobalSpace::LicensedGui (enum)
    {26, 77, 0, 0, Smoke::mf_static|Smoke::mf_enum, 373, 853},	//853 QGlobalSpace::LicensedXmlPatterns (enum)
    {26, 73, 0, 0, Smoke::mf_static|Smoke::mf_enum, 369, 854},	//854 QGlobalSpace::LicensedSql (enum)
    {26, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 355, 855},	//855 QGlobalSpace::LicensedActiveQt (enum)
    {26, 69, 0, 0, Smoke::mf_static|Smoke::mf_enum, 366, 856},	//856 QGlobalSpace::LicensedQt3Support (enum)
    {26, 61, 0, 0, Smoke::mf_static|Smoke::mf_enum, 357, 857},	//857 QGlobalSpace::LicensedDBus (enum)
    {26, 60, 0, 0, Smoke::mf_static|Smoke::mf_enum, 356, 858},	//858 QGlobalSpace::LicensedCore (enum)
    {26, 66, 0, 0, Smoke::mf_static|Smoke::mf_enum, 362, 859},	//859 QGlobalSpace::LicensedNetwork (enum)
    {26, 65, 0, 0, Smoke::mf_static|Smoke::mf_enum, 361, 860},	//860 QGlobalSpace::LicensedMultimedia (enum)
    {26, 75, 0, 0, Smoke::mf_static|Smoke::mf_enum, 371, 861},	//861 QGlobalSpace::LicensedTest (enum)
    {26, 72, 0, 0, Smoke::mf_static|Smoke::mf_enum, 368, 862},	//862 QGlobalSpace::LicensedScriptTools (enum)
    {26, 64, 0, 0, Smoke::mf_static|Smoke::mf_enum, 360, 863},	//863 QGlobalSpace::LicensedHelp (enum)
    {26, 76, 0, 0, Smoke::mf_static|Smoke::mf_enum, 372, 864},	//864 QGlobalSpace::LicensedXml (enum)
    {26, 62, 0, 0, Smoke::mf_static|Smoke::mf_enum, 358, 865},	//865 QGlobalSpace::LicensedDeclarative (enum)
    {27, 200, 1021, 1, Smoke::mf_virtual, 0, 0},	//866 QGraphicsItem::advance(int)
    {27, 613, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 188, 0},	//867 QGraphicsItem::shape() const
    {27, 212, 726, 1, Smoke::mf_const|Smoke::mf_virtual, 375, 0},	//868 QGraphicsItem::contains(const QPointF&) const
    {27, 209, 1796, 2, Smoke::mf_const|Smoke::mf_virtual, 375, 0},	//869 QGraphicsItem::collidesWithItem(const QGraphicsItem*, Qt::ItemSelectionMode) const
    {27, 210, 1799, 2, Smoke::mf_const|Smoke::mf_virtual, 375, 0},	//870 QGraphicsItem::collidesWithPath(const QPainterPath&, Qt::ItemSelectionMode) const
    {27, 246, 1802, 1, Smoke::mf_const|Smoke::mf_virtual, 375, 0},	//871 QGraphicsItem::isObscuredBy(const QGraphicsItem*) const
    {27, 268, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 188, 0},	//872 QGraphicsItem::opaqueArea() const
    {27, 584, 1804, 2, Smoke::mf_protected|Smoke::mf_virtual, 375, 0},	//873 QGraphicsItem::sceneEventFilter(QGraphicsItem*, QEvent*)
    {27, 583, 1807, 1, Smoke::mf_protected|Smoke::mf_virtual, 375, 0},	//874 QGraphicsItem::sceneEvent(QEvent*)
    {27, 213, 1809, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//875 QGraphicsItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*)
    {27, 220, 1811, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//876 QGraphicsItem::dragEnterEvent(QGraphicsSceneDragDropEvent*)
    {27, 221, 1811, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//877 QGraphicsItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*)
    {27, 222, 1811, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//878 QGraphicsItem::dragMoveEvent(QGraphicsSceneDragDropEvent*)
    {27, 223, 1811, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//879 QGraphicsItem::dropEvent(QGraphicsSceneDragDropEvent*)
    {27, 233, 1813, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//880 QGraphicsItem::focusInEvent(QFocusEvent*)
    {27, 235, 1813, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//881 QGraphicsItem::focusOutEvent(QFocusEvent*)
    {27, 240, 1815, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//882 QGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent*)
    {27, 242, 1815, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//883 QGraphicsItem::hoverMoveEvent(QGraphicsSceneHoverEvent*)
    {27, 241, 1815, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//884 QGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*)
    {27, 249, 1817, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//885 QGraphicsItem::keyPressEvent(QKeyEvent*)
    {27, 250, 1817, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//886 QGraphicsItem::keyReleaseEvent(QKeyEvent*)
    {27, 265, 1819, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//887 QGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent*)
    {27, 264, 1819, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//888 QGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent*)
    {27, 266, 1819, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//889 QGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {27, 263, 1819, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//890 QGraphicsItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)
    {27, 634, 1821, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//891 QGraphicsItem::wheelEvent(QGraphicsSceneWheelEvent*)
    {27, 243, 1823, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//892 QGraphicsItem::inputMethodEvent(QInputMethodEvent*)
    {27, 244, 1825, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 264, 0},	//893 QGraphicsItem::inputMethodQuery(Qt::InputMethodQuery) const
    {27, 248, 1827, 2, Smoke::mf_protected|Smoke::mf_virtual, 264, 0},	//894 QGraphicsItem::itemChange(QGraphicsItem::GraphicsItemChange, const QVariant&)
    {27, 619, 1830, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 375, 0},	//895 QGraphicsItem::supportsExtension(QGraphicsItem::Extension) const
    {27, 593, 1832, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//896 QGraphicsItem::setExtension(QGraphicsItem::Extension, const QVariant&)
    {27, 231, 1835, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 264, 0},	//897 QGraphicsItem::extension(const QVariant&) const
    {27, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 33},	//898 QGraphicsItem::ItemIsMovable (enum)
    {27, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 34},	//899 QGraphicsItem::ItemIsSelectable (enum)
    {27, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 35},	//900 QGraphicsItem::ItemIsFocusable (enum)
    {27, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 36},	//901 QGraphicsItem::ItemClipsToShape (enum)
    {27, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 37},	//902 QGraphicsItem::ItemClipsChildrenToShape (enum)
    {27, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 38},	//903 QGraphicsItem::ItemIgnoresTransformations (enum)
    {27, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 39},	//904 QGraphicsItem::ItemIgnoresParentOpacity (enum)
    {27, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 40},	//905 QGraphicsItem::ItemDoesntPropagateOpacityToChildren (enum)
    {27, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 41},	//906 QGraphicsItem::ItemStacksBehindParent (enum)
    {27, 54, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 42},	//907 QGraphicsItem::ItemUsesExtendedStyleOption (enum)
    {27, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 43},	//908 QGraphicsItem::ItemHasNoContents (enum)
    {27, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 44},	//909 QGraphicsItem::ItemSendsGeometryChanges (enum)
    {27, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 45},	//910 QGraphicsItem::ItemAcceptsInputMethod (enum)
    {27, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 46},	//911 QGraphicsItem::ItemNegativeZStacksBehindParent (enum)
    {27, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 47},	//912 QGraphicsItem::ItemIsPanel (enum)
    {27, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 48},	//913 QGraphicsItem::ItemIsFocusScope (enum)
    {27, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 49},	//914 QGraphicsItem::ItemSendsScenePositionChanges (enum)
    {27, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 50},	//915 QGraphicsItem::ItemStopsClickFocusPropagation (enum)
    {27, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 51},	//916 QGraphicsItem::ItemStopsFocusHandling (enum)
    {27, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 52},	//917 QGraphicsItem::ItemPositionChange (enum)
    {27, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 53},	//918 QGraphicsItem::ItemMatrixChange (enum)
    {27, 55, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 54},	//919 QGraphicsItem::ItemVisibleChange (enum)
    {27, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 55},	//920 QGraphicsItem::ItemEnabledChange (enum)
    {27, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 56},	//921 QGraphicsItem::ItemSelectedChange (enum)
    {27, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 57},	//922 QGraphicsItem::ItemParentChange (enum)
    {27, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 58},	//923 QGraphicsItem::ItemChildAddedChange (enum)
    {27, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 59},	//924 QGraphicsItem::ItemChildRemovedChange (enum)
    {27, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 60},	//925 QGraphicsItem::ItemTransformChange (enum)
    {27, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 61},	//926 QGraphicsItem::ItemPositionHasChanged (enum)
    {27, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 62},	//927 QGraphicsItem::ItemTransformHasChanged (enum)
    {27, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 63},	//928 QGraphicsItem::ItemSceneChange (enum)
    {27, 56, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 64},	//929 QGraphicsItem::ItemVisibleHasChanged (enum)
    {27, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 65},	//930 QGraphicsItem::ItemEnabledHasChanged (enum)
    {27, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 66},	//931 QGraphicsItem::ItemSelectedHasChanged (enum)
    {27, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 67},	//932 QGraphicsItem::ItemParentHasChanged (enum)
    {27, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 68},	//933 QGraphicsItem::ItemSceneHasChanged (enum)
    {27, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 69},	//934 QGraphicsItem::ItemCursorChange (enum)
    {27, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 70},	//935 QGraphicsItem::ItemCursorHasChanged (enum)
    {27, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 71},	//936 QGraphicsItem::ItemToolTipChange (enum)
    {27, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 72},	//937 QGraphicsItem::ItemToolTipHasChanged (enum)
    {27, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 73},	//938 QGraphicsItem::ItemFlagsChange (enum)
    {27, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 74},	//939 QGraphicsItem::ItemFlagsHaveChanged (enum)
    {27, 57, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 75},	//940 QGraphicsItem::ItemZValueChange (enum)
    {27, 58, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 76},	//941 QGraphicsItem::ItemZValueHasChanged (enum)
    {27, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 77},	//942 QGraphicsItem::ItemOpacityChange (enum)
    {27, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 78},	//943 QGraphicsItem::ItemOpacityHasChanged (enum)
    {27, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 79},	//944 QGraphicsItem::ItemScenePositionHasChanged (enum)
    {27, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 80},	//945 QGraphicsItem::ItemRotationChange (enum)
    {27, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 81},	//946 QGraphicsItem::ItemRotationHasChanged (enum)
    {27, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 82},	//947 QGraphicsItem::ItemScaleChange (enum)
    {27, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 83},	//948 QGraphicsItem::ItemScaleHasChanged (enum)
    {27, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 84},	//949 QGraphicsItem::ItemTransformOriginPointChange (enum)
    {27, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 134, 85},	//950 QGraphicsItem::ItemTransformOriginPointHasChanged (enum)
    {27, 196, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 86},	//951 QGraphicsItem::Type (enum)
    {27, 198, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 87},	//952 QGraphicsItem::UserType (enum)
    {27, 197, 0, 0, Smoke::mf_static|Smoke::mf_enum, 133, 88},	//953 QGraphicsItem::UserExtension (enum)
    {34, 259, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 407, 1},	//954 QGraphicsSvgItem::metaObject() const
    {34, 563, 933, 1, Smoke::mf_virtual, 482, 2},	//955 QGraphicsSvgItem::qt_metacast(const char*)
    {34, 623, 1149, 2, Smoke::mf_static, 220, 3},	//956 QGraphicsSvgItem::tr(const char*, const char*)
    {34, 627, 1149, 2, Smoke::mf_static, 220, 4},	//957 QGraphicsSvgItem::trUtf8(const char*, const char*)
    {34, 623, 9, 3, Smoke::mf_static, 220, 5},	//958 QGraphicsSvgItem::tr(const char*, const char*, int)
    {34, 627, 9, 3, Smoke::mf_static, 220, 6},	//959 QGraphicsSvgItem::trUtf8(const char*, const char*, int)
    {34, 561, 1837, 3, Smoke::mf_virtual, 467, 7},	//960 QGraphicsSvgItem::qt_metacall(QMetaObject::Call, int, void**)
    {34, 91, 1841, 1, Smoke::mf_ctor, 143, 8},	//961 QGraphicsSvgItem::QGraphicsSvgItem(QGraphicsItem*)
    {34, 91, 1843, 2, Smoke::mf_ctor, 143, 9},	//962 QGraphicsSvgItem::QGraphicsSvgItem(const QString&, QGraphicsItem*)
    {34, 604, 1846, 1, 0, 0, 10},	//963 QGraphicsSvgItem::setSharedRenderer(QSvgRenderer*)
    {34, 579, 0, 0, Smoke::mf_const, 238, 11},	//964 QGraphicsSvgItem::renderer() const
    {34, 591, 264, 1, Smoke::mf_property, 0, 12},	//965 QGraphicsSvgItem::setElementId(const QString&)
    {34, 226, 0, 0, Smoke::mf_const|Smoke::mf_property, 220, 13},	//966 QGraphicsSvgItem::elementId() const
    {34, 585, 1848, 1, 0, 0, 14},	//967 QGraphicsSvgItem::setCachingEnabled(bool)
    {34, 245, 0, 0, Smoke::mf_const, 375, 15},	//968 QGraphicsSvgItem::isCachingEnabled() const
    {34, 598, 1850, 1, Smoke::mf_property, 0, 16},	//969 QGraphicsSvgItem::setMaximumCacheSize(const QSize&)
    {34, 258, 0, 0, Smoke::mf_const|Smoke::mf_property, 213, 17},	//970 QGraphicsSvgItem::maximumCacheSize() const
    {34, 203, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 206, 18},	//971 QGraphicsSvgItem::boundingRect() const
    {34, 324, 1852, 3, Smoke::mf_virtual, 0, 19},	//972 QGraphicsSvgItem::paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*)
    {34, 631, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 467, 20},	//973 QGraphicsSvgItem::type() const
    {34, 623, 933, 1, Smoke::mf_static, 220, 21},	//974 QGraphicsSvgItem::tr(const char*)
    {34, 627, 933, 1, Smoke::mf_static, 220, 22},	//975 QGraphicsSvgItem::trUtf8(const char*)
    {34, 91, 0, 0, Smoke::mf_ctor, 143, 23},	//976 QGraphicsSvgItem::QGraphicsSvgItem()
    {34, 91, 264, 1, Smoke::mf_ctor, 143, 24},	//977 QGraphicsSvgItem::QGraphicsSvgItem(const QString&)
    {34, 324, 1856, 2, 0, 0, 25},	//978 QGraphicsSvgItem::paint(QPainter*, const QStyleOptionGraphicsItem*)
    {34, 617, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 406, 26},	//979 QGraphicsSvgItem::staticMetaObject() const
    {34, 196, 0, 0, Smoke::mf_static|Smoke::mf_enum, 468, 27},	//980 QGraphicsSvgItem::Type (enum)
    {34, 637, 0, 0, Smoke::mf_dtor, 0, 28 },	//981 QGraphicsSvgItem::~QGraphicsSvgItem()
    {57, 229, 1807, 1, Smoke::mf_virtual, 375, 0},	//982 QObject::event(QEvent*)
    {57, 230, 1859, 2, Smoke::mf_virtual, 375, 0},	//983 QObject::eventFilter(QObject*, QEvent*)
    {57, 621, 1862, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//984 QObject::timerEvent(QTimerEvent*)
    {57, 207, 1864, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//985 QObject::childEvent(QChildEvent*)
    {57, 215, 1807, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//986 QObject::customEvent(QEvent*)
    {57, 211, 933, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//987 QObject::connectNotify(const char*)
    {57, 219, 933, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//988 QObject::disconnectNotify(const char*)
    {58, 218, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 467, 0},	//989 QPaintDevice::devType() const
    {58, 89, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 2},	//990 QPaintDevice::PdmWidth (enum)
    {58, 84, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 3},	//991 QPaintDevice::PdmHeight (enum)
    {58, 90, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 4},	//992 QPaintDevice::PdmWidthMM (enum)
    {58, 85, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 5},	//993 QPaintDevice::PdmHeightMM (enum)
    {58, 86, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 6},	//994 QPaintDevice::PdmNumColors (enum)
    {58, 81, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 7},	//995 QPaintDevice::PdmDepth (enum)
    {58, 82, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 8},	//996 QPaintDevice::PdmDpiX (enum)
    {58, 83, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 9},	//997 QPaintDevice::PdmDpiY (enum)
    {58, 87, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 10},	//998 QPaintDevice::PdmPhysicalDpiX (enum)
    {58, 88, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 11},	//999 QPaintDevice::PdmPhysicalDpiY (enum)
    {89, 95, 0, 0, Smoke::mf_ctor, 237, 1},	//1000 QSvgGenerator::QSvgGenerator()
    {89, 622, 0, 0, Smoke::mf_const|Smoke::mf_property, 220, 2},	//1001 QSvgGenerator::title() const
    {89, 608, 264, 1, Smoke::mf_property, 0, 3},	//1002 QSvgGenerator::setTitle(const QString&)
    {89, 217, 0, 0, Smoke::mf_const|Smoke::mf_property, 220, 4},	//1003 QSvgGenerator::description() const
    {89, 589, 264, 1, Smoke::mf_property, 0, 5},	//1004 QSvgGenerator::setDescription(const QString&)
    {89, 615, 0, 0, Smoke::mf_const|Smoke::mf_property, 213, 6},	//1005 QSvgGenerator::size() const
    {89, 606, 1850, 1, Smoke::mf_property, 0, 7},	//1006 QSvgGenerator::setSize(const QSize&)
    {89, 632, 0, 0, Smoke::mf_const, 204, 8},	//1007 QSvgGenerator::viewBox() const
    {89, 633, 0, 0, Smoke::mf_const|Smoke::mf_property, 206, 9},	//1008 QSvgGenerator::viewBoxF() const
    {89, 610, 1866, 1, 0, 0, 10},	//1009 QSvgGenerator::setViewBox(const QRect&)
    {89, 610, 1868, 1, Smoke::mf_property, 0, 11},	//1010 QSvgGenerator::setViewBox(const QRectF&)
    {89, 232, 0, 0, Smoke::mf_const|Smoke::mf_property, 220, 12},	//1011 QSvgGenerator::fileName() const
    {89, 594, 264, 1, Smoke::mf_property, 0, 13},	//1012 QSvgGenerator::setFileName(const QString&)
    {89, 323, 0, 0, Smoke::mf_const|Smoke::mf_property, 147, 14},	//1013 QSvgGenerator::outputDevice() const
    {89, 600, 1870, 1, Smoke::mf_property, 0, 15},	//1014 QSvgGenerator::setOutputDevice(QIODevice*)
    {89, 602, 1021, 1, Smoke::mf_property, 0, 16},	//1015 QSvgGenerator::setResolution(int)
    {89, 582, 0, 0, Smoke::mf_const|Smoke::mf_property, 467, 17},	//1016 QSvgGenerator::resolution() const
    {89, 327, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 182, 18},	//1017 QSvgGenerator::paintEngine() const
    {89, 260, 1872, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 467, 19},	//1018 QSvgGenerator::metric(QPaintDevice::PaintDeviceMetric) const
    {89, 638, 0, 0, Smoke::mf_dtor, 0, 20 },	//1019 QSvgGenerator::~QSvgGenerator()
    {90, 259, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 407, 1},	//1020 QSvgRenderer::metaObject() const
    {90, 563, 933, 1, Smoke::mf_virtual, 482, 2},	//1021 QSvgRenderer::qt_metacast(const char*)
    {90, 623, 1149, 2, Smoke::mf_static, 220, 3},	//1022 QSvgRenderer::tr(const char*, const char*)
    {90, 627, 1149, 2, Smoke::mf_static, 220, 4},	//1023 QSvgRenderer::trUtf8(const char*, const char*)
    {90, 623, 9, 3, Smoke::mf_static, 220, 5},	//1024 QSvgRenderer::tr(const char*, const char*, int)
    {90, 627, 9, 3, Smoke::mf_static, 220, 6},	//1025 QSvgRenderer::trUtf8(const char*, const char*, int)
    {90, 561, 1837, 3, Smoke::mf_virtual, 467, 7},	//1026 QSvgRenderer::qt_metacall(QMetaObject::Call, int, void**)
    {90, 96, 1874, 1, Smoke::mf_ctor, 238, 8},	//1027 QSvgRenderer::QSvgRenderer(QObject*)
    {90, 96, 1876, 2, Smoke::mf_ctor, 238, 9},	//1028 QSvgRenderer::QSvgRenderer(const QString&, QObject*)
    {90, 96, 1879, 2, Smoke::mf_ctor, 238, 10},	//1029 QSvgRenderer::QSvgRenderer(const QByteArray&, QObject*)
    {90, 96, 1882, 2, Smoke::mf_ctor, 238, 11},	//1030 QSvgRenderer::QSvgRenderer(QXmlStreamReader*, QObject*)
    {90, 247, 0, 0, Smoke::mf_const, 375, 12},	//1031 QSvgRenderer::isValid() const
    {90, 216, 0, 0, Smoke::mf_const, 213, 13},	//1032 QSvgRenderer::defaultSize() const
    {90, 632, 0, 0, Smoke::mf_const, 204, 14},	//1033 QSvgRenderer::viewBox() const
    {90, 633, 0, 0, Smoke::mf_const|Smoke::mf_property, 206, 15},	//1034 QSvgRenderer::viewBoxF() const
    {90, 610, 1866, 1, 0, 0, 16},	//1035 QSvgRenderer::setViewBox(const QRect&)
    {90, 610, 1868, 1, Smoke::mf_property, 0, 17},	//1036 QSvgRenderer::setViewBox(const QRectF&)
    {90, 201, 0, 0, Smoke::mf_const, 375, 18},	//1037 QSvgRenderer::animated() const
    {90, 237, 0, 0, Smoke::mf_const|Smoke::mf_property, 467, 19},	//1038 QSvgRenderer::framesPerSecond() const
    {90, 596, 1021, 1, Smoke::mf_property, 0, 20},	//1039 QSvgRenderer::setFramesPerSecond(int)
    {90, 214, 0, 0, Smoke::mf_const|Smoke::mf_property, 467, 21},	//1040 QSvgRenderer::currentFrame() const
    {90, 587, 1021, 1, Smoke::mf_property, 0, 22},	//1041 QSvgRenderer::setCurrentFrame(int)
    {90, 202, 0, 0, Smoke::mf_const, 467, 23},	//1042 QSvgRenderer::animationDuration() const
    {90, 204, 264, 1, Smoke::mf_const, 206, 24},	//1043 QSvgRenderer::boundsOnElement(const QString&) const
    {90, 224, 264, 1, Smoke::mf_const, 375, 25},	//1044 QSvgRenderer::elementExists(const QString&) const
    {90, 256, 264, 1, Smoke::mf_const, 169, 26},	//1045 QSvgRenderer::matrixForElement(const QString&) const
    {90, 253, 264, 1, Smoke::mf_slot, 375, 27},	//1046 QSvgRenderer::load(const QString&)
    {90, 253, 563, 1, Smoke::mf_slot, 375, 28},	//1047 QSvgRenderer::load(const QByteArray&)
    {90, 253, 1885, 1, Smoke::mf_slot, 375, 29},	//1048 QSvgRenderer::load(QXmlStreamReader*)
    {90, 574, 1887, 1, Smoke::mf_slot, 0, 30},	//1049 QSvgRenderer::render(QPainter*)
    {90, 574, 1889, 2, Smoke::mf_slot, 0, 31},	//1050 QSvgRenderer::render(QPainter*, const QRectF&)
    {90, 574, 1892, 3, Smoke::mf_slot, 0, 32},	//1051 QSvgRenderer::render(QPainter*, const QString&, const QRectF&)
    {90, 580, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 33},	//1052 QSvgRenderer::repaintNeeded()
    {90, 623, 933, 1, Smoke::mf_static, 220, 34},	//1053 QSvgRenderer::tr(const char*)
    {90, 627, 933, 1, Smoke::mf_static, 220, 35},	//1054 QSvgRenderer::trUtf8(const char*)
    {90, 96, 0, 0, Smoke::mf_ctor, 238, 36},	//1055 QSvgRenderer::QSvgRenderer()
    {90, 96, 264, 1, Smoke::mf_ctor, 238, 37},	//1056 QSvgRenderer::QSvgRenderer(const QString&)
    {90, 96, 563, 1, Smoke::mf_ctor, 238, 38},	//1057 QSvgRenderer::QSvgRenderer(const QByteArray&)
    {90, 96, 1885, 1, Smoke::mf_ctor, 238, 39},	//1058 QSvgRenderer::QSvgRenderer(QXmlStreamReader*)
    {90, 574, 1896, 2, Smoke::mf_slot, 0, 40},	//1059 QSvgRenderer::render(QPainter*, const QString&)
    {90, 617, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 406, 41},	//1060 QSvgRenderer::staticMetaObject() const
    {90, 639, 0, 0, Smoke::mf_dtor, 0, 42 },	//1061 QSvgRenderer::~QSvgRenderer()
    {91, 259, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 407, 1},	//1062 QSvgWidget::metaObject() const
    {91, 563, 933, 1, Smoke::mf_virtual, 482, 2},	//1063 QSvgWidget::qt_metacast(const char*)
    {91, 623, 1149, 2, Smoke::mf_static, 220, 3},	//1064 QSvgWidget::tr(const char*, const char*)
    {91, 627, 1149, 2, Smoke::mf_static, 220, 4},	//1065 QSvgWidget::trUtf8(const char*, const char*)
    {91, 623, 9, 3, Smoke::mf_static, 220, 5},	//1066 QSvgWidget::tr(const char*, const char*, int)
    {91, 627, 9, 3, Smoke::mf_static, 220, 6},	//1067 QSvgWidget::trUtf8(const char*, const char*, int)
    {91, 561, 1837, 3, Smoke::mf_virtual, 467, 7},	//1068 QSvgWidget::qt_metacall(QMetaObject::Call, int, void**)
    {91, 101, 1899, 1, Smoke::mf_ctor, 239, 8},	//1069 QSvgWidget::QSvgWidget(QWidget*)
    {91, 101, 1901, 2, Smoke::mf_ctor, 239, 9},	//1070 QSvgWidget::QSvgWidget(const QString&, QWidget*)
    {91, 579, 0, 0, Smoke::mf_const, 238, 10},	//1071 QSvgWidget::renderer() const
    {91, 616, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 213, 11},	//1072 QSvgWidget::sizeHint() const
    {91, 253, 264, 1, Smoke::mf_slot, 0, 12},	//1073 QSvgWidget::load(const QString&)
    {91, 253, 563, 1, Smoke::mf_slot, 0, 13},	//1074 QSvgWidget::load(const QByteArray&)
    {91, 328, 1904, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 14},	//1075 QSvgWidget::paintEvent(QPaintEvent*)
    {91, 623, 933, 1, Smoke::mf_static, 220, 15},	//1076 QSvgWidget::tr(const char*)
    {91, 627, 933, 1, Smoke::mf_static, 220, 16},	//1077 QSvgWidget::trUtf8(const char*)
    {91, 101, 0, 0, Smoke::mf_ctor, 239, 17},	//1078 QSvgWidget::QSvgWidget()
    {91, 101, 264, 1, Smoke::mf_ctor, 239, 18},	//1079 QSvgWidget::QSvgWidget(const QString&)
    {91, 617, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 406, 19},	//1080 QSvgWidget::staticMetaObject() const
    {91, 640, 0, 0, Smoke::mf_dtor, 0, 20 },	//1081 QSvgWidget::~QSvgWidget()
    {112, 218, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 467, 0},	//1082 QWidget::devType() const
    {112, 612, 1848, 1, Smoke::mf_property|Smoke::mf_virtual|Smoke::mf_slot, 0, 0},	//1083 QWidget::setVisible(bool)
    {112, 262, 0, 0, Smoke::mf_const|Smoke::mf_property|Smoke::mf_virtual, 213, 0},	//1084 QWidget::minimumSizeHint() const
    {112, 238, 1021, 1, Smoke::mf_const|Smoke::mf_virtual, 467, 0},	//1085 QWidget::heightForWidth(int) const
    {112, 327, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 182, 0},	//1086 QWidget::paintEngine() const
    {112, 229, 1807, 1, Smoke::mf_protected|Smoke::mf_virtual, 375, 0},	//1087 QWidget::event(QEvent*)
    {112, 265, 1906, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1088 QWidget::mousePressEvent(QMouseEvent*)
    {112, 266, 1906, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1089 QWidget::mouseReleaseEvent(QMouseEvent*)
    {112, 263, 1906, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1090 QWidget::mouseDoubleClickEvent(QMouseEvent*)
    {112, 264, 1906, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1091 QWidget::mouseMoveEvent(QMouseEvent*)
    {112, 634, 1908, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1092 QWidget::wheelEvent(QWheelEvent*)
    {112, 249, 1817, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1093 QWidget::keyPressEvent(QKeyEvent*)
    {112, 250, 1817, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1094 QWidget::keyReleaseEvent(QKeyEvent*)
    {112, 233, 1813, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1095 QWidget::focusInEvent(QFocusEvent*)
    {112, 235, 1813, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1096 QWidget::focusOutEvent(QFocusEvent*)
    {112, 228, 1807, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1097 QWidget::enterEvent(QEvent*)
    {112, 252, 1807, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1098 QWidget::leaveEvent(QEvent*)
    {112, 267, 1910, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1099 QWidget::moveEvent(QMoveEvent*)
    {112, 581, 1912, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1100 QWidget::resizeEvent(QResizeEvent*)
    {112, 208, 1914, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1101 QWidget::closeEvent(QCloseEvent*)
    {112, 213, 1916, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1102 QWidget::contextMenuEvent(QContextMenuEvent*)
    {112, 620, 1918, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1103 QWidget::tabletEvent(QTabletEvent*)
    {112, 199, 1920, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1104 QWidget::actionEvent(QActionEvent*)
    {112, 220, 1922, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1105 QWidget::dragEnterEvent(QDragEnterEvent*)
    {112, 222, 1924, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1106 QWidget::dragMoveEvent(QDragMoveEvent*)
    {112, 221, 1926, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1107 QWidget::dragLeaveEvent(QDragLeaveEvent*)
    {112, 223, 1928, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1108 QWidget::dropEvent(QDropEvent*)
    {112, 614, 1930, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1109 QWidget::showEvent(QShowEvent*)
    {112, 239, 1932, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1110 QWidget::hideEvent(QHideEvent*)
    {112, 636, 1934, 1, Smoke::mf_protected|Smoke::mf_virtual, 375, 0},	//1111 QWidget::x11Event(_XEvent*)
    {112, 206, 1807, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1112 QWidget::changeEvent(QEvent*)
    {112, 260, 1872, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 467, 0},	//1113 QWidget::metric(QPaintDevice::PaintDeviceMetric) const
    {112, 243, 1823, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1114 QWidget::inputMethodEvent(QInputMethodEvent*)
    {112, 244, 1825, 1, Smoke::mf_const|Smoke::mf_virtual, 264, 0},	//1115 QWidget::inputMethodQuery(Qt::InputMethodQuery) const
    {112, 234, 1848, 1, Smoke::mf_protected|Smoke::mf_virtual, 375, 0},	//1116 QWidget::focusNextPrevChild(bool)
    {112, 618, 1936, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1117 QWidget::styleChange(QStyle&)
    {112, 227, 1848, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1118 QWidget::enabledChange(bool)
    {112, 330, 1938, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1119 QWidget::paletteChange(const QPalette&)
    {112, 236, 1940, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1120 QWidget::fontChange(const QFont&)
    {112, 635, 1848, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1121 QWidget::windowActivationChange(bool)
    {112, 251, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1122 QWidget::languageChange()
    {112, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 275, 42},	//1123 QWidget::DrawWindowBackground (enum)
    {112, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 275, 43},	//1124 QWidget::DrawChildren (enum)
    {112, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 275, 44},	//1125 QWidget::IgnoreMask (enum)
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    1009,  // QSvgGenerator::setViewBox(const QRect&)
    1010,  // QSvgGenerator::setViewBox(const QRectF&)
    0,
    12,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    24,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    59,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    149,  // QGlobalSpace::operator!=(const QVector2D&, const QVector2D&)
    189,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    238,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    323,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    327,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    388,  // QGlobalSpace::operator!=(const QVector3D&, const QVector3D&)
    439,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    456,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    457,  // QGlobalSpace::operator!=(QChar, QChar)
    477,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    564,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    625,  // QGlobalSpace::operator!=(const QQuaternion&, const QQuaternion&)
    630,  // QGlobalSpace::operator!=(const QVector4D&, const QVector4D&)
    710,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    744,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    749,  // QGlobalSpace::operator!=(QBool, QBool)
    0,
    355,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    405,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    437,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    549,  // QGlobalSpace::operator!=(QBool, bool)
    604,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    0,
    359,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    406,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    543,  // QGlobalSpace::operator!=(bool, QBool)
    614,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    663,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    0,
    35,  // QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    37,  // QGlobalSpace::operator*(const QLine&, const QTransform&)
    87,  // QGlobalSpace::operator*(const QVector4D&, const QVector4D&)
    89,  // QGlobalSpace::operator*(const QQuaternion&, const QQuaternion&)
    97,  // QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    139,  // QGlobalSpace::operator*(const QLine&, const QMatrix&)
    144,  // QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    146,  // QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    199,  // QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    209,  // QGlobalSpace::operator*(const QVector2D&, const QVector2D&)
    236,  // QGlobalSpace::operator*(const QVector3D&, const QMatrix4x4&)
    253,  // QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    283,  // QGlobalSpace::operator*(const QPointF&, const QTransform&)
    297,  // QGlobalSpace::operator*(const QMatrix4x4&, const QMatrix4x4&)
    309,  // QGlobalSpace::operator*(const QMatrix4x4&, const QVector4D&)
    319,  // QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    365,  // QGlobalSpace::operator*(const QMatrix4x4&, const QPoint&)
    427,  // QGlobalSpace::operator*(const QMatrix4x4&, const QPointF&)
    438,  // QGlobalSpace::operator*(const QLineF&, const QTransform&)
    490,  // QGlobalSpace::operator*(const QVector4D&, const QMatrix4x4&)
    548,  // QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    578,  // QGlobalSpace::operator*(const QMatrix4x4&, const QVector3D&)
    603,  // QGlobalSpace::operator*(const QRegion&, const QTransform&)
    606,  // QGlobalSpace::operator*(const QPointF&, const QMatrix4x4&)
    623,  // QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    645,  // QGlobalSpace::operator*(const QVector3D&, const QVector3D&)
    667,  // QGlobalSpace::operator*(const QPoint&, const QMatrix4x4&)
    696,  // QGlobalSpace::operator*(const QPoint&, const QTransform&)
    732,  // QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    0,
    7,  // QGlobalSpace::operator*(const QPoint&, double)
    43,  // QGlobalSpace::operator*(const QSizeF&, double)
    60,  // QGlobalSpace::operator*(const QQuaternion&, double)
    186,  // QGlobalSpace::operator*(const QVector2D&, double)
    190,  // QGlobalSpace::operator*(const QVector4D&, double)
    218,  // QGlobalSpace::operator*(const QPointF&, double)
    250,  // QGlobalSpace::operator*(const QVector3D&, double)
    344,  // QGlobalSpace::operator*(const QTransform&, double)
    393,  // QGlobalSpace::operator*(const QPoint&, float)
    403,  // QGlobalSpace::operator*(const QMatrix4x4&, double)
    577,  // QGlobalSpace::operator*(const QSize&, double)
    713,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    10,  // QGlobalSpace::operator*(double, const QPointF&)
    14,  // QGlobalSpace::operator*(double, const QSizeF&)
    430,  // QGlobalSpace::operator*(double, const QVector2D&)
    444,  // QGlobalSpace::operator*(double, const QVector3D&)
    459,  // QGlobalSpace::operator*(double, const QMatrix4x4&)
    478,  // QGlobalSpace::operator*(double, const QSize&)
    497,  // QGlobalSpace::operator*(double, const QPoint&)
    508,  // QGlobalSpace::operator*(double, const QQuaternion&)
    618,  // QGlobalSpace::operator*(int, const QPoint&)
    683,  // QGlobalSpace::operator*(double, const QVector4D&)
    736,  // QGlobalSpace::operator*(float, const QPoint&)
    0,
    25,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    106,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    142,  // QGlobalSpace::operator+(const QVector4D&, const QVector4D&)
    168,  // QGlobalSpace::operator+(const QVector2D&, const QVector2D&)
    207,  // QGlobalSpace::operator+(const QMatrix4x4&, const QMatrix4x4&)
    230,  // QGlobalSpace::operator+(const QQuaternion&, const QQuaternion&)
    594,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    597,  // QGlobalSpace::operator+(const QVector3D&, const QVector3D&)
    665,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    731,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    0,
    76,  // QGlobalSpace::operator+(QChar, const QString&)
    509,  // QGlobalSpace::operator+(const QByteArray&, char)
    562,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    656,  // QGlobalSpace::operator+(const QTransform&, double)
    0,
    165,  // QGlobalSpace::operator+(char, const QByteArray&)
    417,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    742,  // QGlobalSpace::operator+(const QString&, QChar)
    0,
    54,  // QGlobalSpace::operator-(const QQuaternion&)
    83,  // QGlobalSpace::operator-(const QVector2D&)
    276,  // QGlobalSpace::operator-(const QPointF&)
    382,  // QGlobalSpace::operator-(const QVector4D&)
    428,  // QGlobalSpace::operator-(const QMatrix4x4&)
    627,  // QGlobalSpace::operator-(const QPoint&)
    674,  // QGlobalSpace::operator-(const QVector3D&)
    0,
    31,  // QGlobalSpace::operator-(const QMatrix4x4&, const QMatrix4x4&)
    34,  // QGlobalSpace::operator-(const QVector4D&, const QVector4D&)
    51,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    247,  // QGlobalSpace::operator-(const QVector2D&, const QVector2D&)
    552,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    651,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    699,  // QGlobalSpace::operator-(const QQuaternion&, const QQuaternion&)
    701,  // QGlobalSpace::operator-(const QVector3D&, const QVector3D&)
    715,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    0,
    166,  // QGlobalSpace::operator/(const QPoint&, double)
    183,  // QGlobalSpace::operator/(const QTransform&, double)
    198,  // QGlobalSpace::operator/(const QMatrix4x4&, double)
    249,  // QGlobalSpace::operator/(const QSizeF&, double)
    364,  // QGlobalSpace::operator/(const QVector4D&, double)
    369,  // QGlobalSpace::operator/(const QQuaternion&, double)
    392,  // QGlobalSpace::operator/(const QVector2D&, double)
    454,  // QGlobalSpace::operator/(const QVector3D&, double)
    514,  // QGlobalSpace::operator/(const QPointF&, double)
    684,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    194,  // QGlobalSpace::operator<(QChar, QChar)
    261,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    347,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    0,
    9,  // QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    13,  // QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    17,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    19,  // QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    22,  // QGlobalSpace::operator<<(QDebug, const QTransform&)
    27,  // QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    29,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    44,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    69,  // QGlobalSpace::operator<<(QDebug, const QFont&)
    70,  // QGlobalSpace::operator<<(QDebug, const QPolygon&)
    71,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    85,  // QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    86,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    90,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    91,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    105,  // QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    112,  // QGlobalSpace::operator<<(QDebug, const QColor&)
    130,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    136,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    151,  // QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    153,  // QGlobalSpace::operator<<(QDataStream&, const QTableWidgetItem&)
    155,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    157,  // QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    161,  // QGlobalSpace::operator<<(QDataStream&, const QPicture&)
    179,  // QGlobalSpace::operator<<(QDataStream&, const QTreeWidgetItem&)
    184,  // QGlobalSpace::operator<<(QTextStream&, const QSplitter&)
    193,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    200,  // QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    233,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    259,  // QGlobalSpace::operator<<(QDebug, const QPen&)
    279,  // QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    282,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    285,  // QGlobalSpace::operator<<(QDebug, const QVector3D&)
    298,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    302,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    307,  // QGlobalSpace::operator<<(QDebug, const QVector2D&)
    326,  // QGlobalSpace::operator<<(QDataStream&, const QPen&)
    343,  // QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    348,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    356,  // QGlobalSpace::operator<<(QDebug, const QVector4D&)
    372,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    376,  // QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    380,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    383,  // QGlobalSpace::operator<<(QDebug, const QMatrix4x4&)
    436,  // QGlobalSpace::operator<<(QDataStream&, const QVector3D&)
    441,  // QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    442,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    446,  // QGlobalSpace::operator<<(QDataStream&, const QFont&)
    452,  // QGlobalSpace::operator<<(QDataStream&, const QVector2D&)
    453,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    467,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    474,  // QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    484,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    491,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    500,  // QGlobalSpace::operator<<(QDebug, QGraphicsObject*)
    501,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    504,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    506,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    507,  // QGlobalSpace::operator<<(QDataStream&, const QImage&)
    511,  // QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    520,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    526,  // QGlobalSpace::operator<<(QDebug, const QEvent*)
    533,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    541,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    546,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    563,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    566,  // QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    568,  // QGlobalSpace::operator<<(QDebug, const QMatrix&)
    573,  // QGlobalSpace::operator<<(QDataStream&, const QColor&)
    580,  // QGlobalSpace::operator<<(QDebug, const QBrush&)
    584,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    589,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    595,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    599,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    601,  // QGlobalSpace::operator<<(QDataStream&, const QTextLength&)
    607,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem*)
    609,  // QGlobalSpace::operator<<(QDataStream&, const QListWidgetItem&)
    622,  // QGlobalSpace::operator<<(QDataStream&, const QStandardItem&)
    652,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    654,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix4x4&)
    657,  // QGlobalSpace::operator<<(QDataStream&, const QVector4D&)
    677,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    679,  // QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    706,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    716,  // QGlobalSpace::operator<<(QDebug, const QQuaternion&)
    719,  // QGlobalSpace::operator<<(QDataStream&, const QTextFormat&)
    729,  // QGlobalSpace::operator<<(QDataStream&, const QQuaternion&)
    730,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    735,  // QGlobalSpace::operator<<(QDebug, const QRegion&)
    750,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    752,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    756,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    0,
    57,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    154,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemChange)
    170,  // QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    208,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    352,  // QGlobalSpace::operator<<(QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>)
    407,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemFlag)
    540,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    619,  // QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    649,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    680,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    0,
    421,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    518,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    598,  // QGlobalSpace::operator<=(QChar, QChar)
    0,
    41,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    53,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    61,  // QGlobalSpace::operator==(QBool, QBool)
    68,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    148,  // QGlobalSpace::operator==(const QVector3D&, const QVector3D&)
    182,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    196,  // QGlobalSpace::operator==(const QQuaternion&, const QQuaternion&)
    224,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    295,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    336,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    389,  // QGlobalSpace::operator==(const QVector2D&, const QVector2D&)
    414,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    434,  // QGlobalSpace::operator==(QChar, QChar)
    451,  // QGlobalSpace::operator==(const QVector4D&, const QVector4D&)
    470,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    476,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    542,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    638,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    734,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    753,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    0,
    331,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    479,  // QGlobalSpace::operator==(QKeyEvent*, QKeySequence::StandardKey)
    579,  // QGlobalSpace::operator==(QString::Null, const QString&)
    585,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    662,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    733,  // QGlobalSpace::operator==(QBool, bool)
    0,
    171,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    258,  // QGlobalSpace::operator==(const QString&, QString::Null)
    409,  // QGlobalSpace::operator==(QKeySequence::StandardKey, QKeyEvent*)
    416,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    570,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    689,  // QGlobalSpace::operator==(bool, QBool)
    0,
    254,  // QGlobalSpace::operator>(QChar, QChar)
    363,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    412,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    52,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    288,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    516,  // QGlobalSpace::operator>=(QChar, QChar)
    0,
    18,  // QGlobalSpace::operator>>(QDataStream&, QImage&)
    72,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    123,  // QGlobalSpace::operator>>(QDataStream&, QPen&)
    128,  // QGlobalSpace::operator>>(QDataStream&, QColor&)
    150,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    160,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    167,  // QGlobalSpace::operator>>(QDataStream&, QVector4D&)
    173,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    177,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    178,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    180,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    211,  // QGlobalSpace::operator>>(QDataStream&, QRegion&)
    216,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    246,  // QGlobalSpace::operator>>(QDataStream&, QCursor&)
    252,  // QGlobalSpace::operator>>(QDataStream&, QTransform&)
    265,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    303,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    342,  // QGlobalSpace::operator>>(QDataStream&, QIcon&)
    357,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    367,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    371,  // QGlobalSpace::operator>>(QDataStream&, QStandardItem&)
    379,  // QGlobalSpace::operator>>(QDataStream&, QBrush&)
    381,  // QGlobalSpace::operator>>(QDataStream&, QMatrix4x4&)
    386,  // QGlobalSpace::operator>>(QDataStream&, QTextFormat&)
    395,  // QGlobalSpace::operator>>(QDataStream&, QListWidgetItem&)
    411,  // QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    418,  // QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    422,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    449,  // QGlobalSpace::operator>>(QDataStream&, QTableWidgetItem&)
    471,  // QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    473,  // QGlobalSpace::operator>>(QDataStream&, QPalette&)
    489,  // QGlobalSpace::operator>>(QDataStream&, QQuaternion&)
    528,  // QGlobalSpace::operator>>(QDataStream&, QFont&)
    537,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    554,  // QGlobalSpace::operator>>(QDataStream&, QTextLength&)
    583,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    588,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    590,  // QGlobalSpace::operator>>(QDataStream&, QTreeWidgetItem&)
    591,  // QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    628,  // QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    653,  // QGlobalSpace::operator>>(QTextStream&, QSplitter&)
    655,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    664,  // QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    668,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    681,  // QGlobalSpace::operator>>(QDataStream&, QVector3D&)
    685,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    686,  // QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    688,  // QGlobalSpace::operator>>(QDataStream&, QPicture&)
    703,  // QGlobalSpace::operator>>(QDataStream&, QVector2D&)
    709,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    739,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    0,
    433,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    636,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    0,
    4,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    6,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag)
    11,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    15,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    16,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    20,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    21,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    28,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    33,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    36,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature)
    40,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    42,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    45,  // QGlobalSpace::operator|(QDir::Filter, int)
    50,  // QGlobalSpace::operator|(QFileDialog::Option, QFlags<QFileDialog::Option>)
    55,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption)
    56,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    62,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    63,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    64,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, QFontComboBox::FontFilter)
    65,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    67,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag)
    74,  // QGlobalSpace::operator|(QStyle::SubControl, int)
    75,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature)
    78,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    84,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    88,  // QGlobalSpace::operator|(QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>)
    93,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>)
    96,  // QGlobalSpace::operator|(QAccessible::StateFlag, QFlags<QAccessible::StateFlag>)
    103,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    107,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>)
    111,  // QGlobalSpace::operator|(QWidget::RenderFlag, int)
    113,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, int)
    114,  // QGlobalSpace::operator|(Qt::DropAction, int)
    122,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    126,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>)
    127,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    129,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    131,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    132,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    134,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag)
    135,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, int)
    137,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    138,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    141,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag)
    145,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    147,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    152,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    156,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    158,  // QGlobalSpace::operator|(QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>)
    159,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    162,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    163,  // QGlobalSpace::operator|(QMessageBox::StandardButton, QMessageBox::StandardButton)
    164,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    169,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>)
    172,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFontDialog::FontDialogOption)
    181,  // QGlobalSpace::operator|(QPainter::RenderHint, QPainter::RenderHint)
    185,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    187,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag)
    188,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    191,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    192,  // QGlobalSpace::operator|(QFile::Permission, int)
    201,  // QGlobalSpace::operator|(QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>)
    204,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    205,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, int)
    206,  // QGlobalSpace::operator|(QStyle::StateFlag, int)
    212,  // QGlobalSpace::operator|(QPainter::RenderHint, int)
    213,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    214,  // QGlobalSpace::operator|(QWizard::WizardOption, QWizard::WizardOption)
    215,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    217,  // QGlobalSpace::operator|(QWizard::WizardOption, QFlags<QWizard::WizardOption>)
    220,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>)
    221,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag)
    231,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    235,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    237,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    242,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    243,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    244,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, int)
    245,  // QGlobalSpace::operator|(QTextDocument::FindFlag, int)
    248,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    251,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    257,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    262,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    264,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    273,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag)
    274,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, int)
    275,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, int)
    278,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    281,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    284,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    286,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    289,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>)
    291,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, int)
    301,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    306,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    308,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    310,  // QGlobalSpace::operator|(QAccessible::StateFlag, int)
    315,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag)
    316,  // QGlobalSpace::operator|(QDateTimeEdit::Section, int)
    318,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    320,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    321,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    324,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    328,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    329,  // QGlobalSpace::operator|(Qt::WindowType, int)
    330,  // QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    340,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    341,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, int)
    345,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    346,  // QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    349,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, int)
    351,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, int)
    353,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, int)
    354,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    358,  // QGlobalSpace::operator|(QWizard::WizardOption, int)
    360,  // QGlobalSpace::operator|(QFileDialog::Option, int)
    362,  // QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    366,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    368,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>)
    370,  // QGlobalSpace::operator|(QMdiArea::AreaOption, QMdiArea::AreaOption)
    373,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    375,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, int)
    378,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>)
    385,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, int)
    394,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    397,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>)
    398,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>)
    400,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    402,  // QGlobalSpace::operator|(QMessageBox::StandardButton, int)
    408,  // QGlobalSpace::operator|(QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>)
    410,  // QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    419,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    420,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    423,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    424,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    426,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    429,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>)
    431,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, QInputDialog::InputDialogOption)
    432,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, int)
    435,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    443,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    447,  // QGlobalSpace::operator|(QTextOption::Flag, QFlags<QTextOption::Flag>)
    450,  // QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    455,  // QGlobalSpace::operator|(QPainter::RenderHint, QFlags<QPainter::RenderHint>)
    458,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    461,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>)
    465,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    466,  // QGlobalSpace::operator|(QTextItem::RenderFlag, QTextItem::RenderFlag)
    468,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag)
    469,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    472,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>)
    475,  // QGlobalSpace::operator|(QAccessible::StateFlag, QAccessible::StateFlag)
    480,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    482,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>)
    483,  // QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    486,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    488,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, int)
    493,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    499,  // QGlobalSpace::operator|(QMainWindow::DockOption, QFlags<QMainWindow::DockOption>)
    505,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption)
    510,  // QGlobalSpace::operator|(QTextDocument::FindFlag, QTextDocument::FindFlag)
    512,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>)
    513,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton)
    517,  // QGlobalSpace::operator|(QAccessible::RelationFlag, QAccessible::RelationFlag)
    525,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer)
    529,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    531,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>)
    532,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    535,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    539,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    547,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, int)
    550,  // QGlobalSpace::operator|(Qt::WindowState, int)
    551,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    567,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    569,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, int)
    571,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    572,  // QGlobalSpace::operator|(QTextOption::Flag, QTextOption::Flag)
    574,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    575,  // QGlobalSpace::operator|(QDateTimeEdit::Section, QDateTimeEdit::Section)
    581,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    582,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    587,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    593,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, int)
    600,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>)
    608,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, int)
    610,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    612,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, int)
    613,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    617,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    621,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    624,  // QGlobalSpace::operator|(QAccessible::RelationFlag, int)
    631,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>)
    633,  // QGlobalSpace::operator|(QFileDialog::Option, QFileDialog::Option)
    634,  // QGlobalSpace::operator|(QMdiArea::AreaOption, int)
    637,  // QGlobalSpace::operator|(QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>)
    639,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>)
    644,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    658,  // QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    660,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    666,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    669,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    670,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>)
    671,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag)
    673,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    675,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    676,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption)
    682,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    687,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>)
    693,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    694,  // QGlobalSpace::operator|(QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>)
    695,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    697,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    698,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, int)
    700,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    702,  // QGlobalSpace::operator|(QTextItem::RenderFlag, int)
    708,  // QGlobalSpace::operator|(QMainWindow::DockOption, int)
    711,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>)
    714,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    718,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    721,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    722,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, int)
    724,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    725,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint)
    726,  // QGlobalSpace::operator|(Qt::Orientation, int)
    728,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, QImageIOPlugin::Capability)
    740,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    741,  // QGlobalSpace::operator|(QTextOption::Flag, int)
    746,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    747,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    748,  // QGlobalSpace::operator|(QMainWindow::DockOption, QMainWindow::DockOption)
    755,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    0,
    39,  // QGlobalSpace::qFuzzyCompare(const QVector2D&, const QVector2D&)
    46,  // QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    197,  // QGlobalSpace::qFuzzyCompare(const QMatrix4x4&, const QMatrix4x4&)
    463,  // QGlobalSpace::qFuzzyCompare(const QVector4D&, const QVector4D&)
    492,  // QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    523,  // QGlobalSpace::qFuzzyCompare(const QVector3D&, const QVector3D&)
    556,  // QGlobalSpace::qFuzzyCompare(const QQuaternion&, const QQuaternion&)
    0,
    175,  // QGlobalSpace::qFuzzyCompare(double, double)
    527,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    296,  // QGlobalSpace::qFuzzyIsNull(double)
    720,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    3,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    66,  // QGlobalSpace::qHash(const QStringRef&)
    92,  // QGlobalSpace::qHash(const QBitArray&)
    203,  // QGlobalSpace::qHash(const QByteArray&)
    290,  // QGlobalSpace::qHash(QChar)
    384,  // QGlobalSpace::qHash(const QUrl&)
    481,  // QGlobalSpace::qHash(const QModelIndex&)
    659,  // QGlobalSpace::qHash(const QItemSelectionRange&)
    0,
    32,  // QGlobalSpace::qHash(unsigned char)
    99,  // QGlobalSpace::qHash(const QString&)
    100,  // QGlobalSpace::qHash(unsigned short)
    102,  // QGlobalSpace::qHash(long)
    104,  // QGlobalSpace::qHash(long long)
    280,  // QGlobalSpace::qHash(unsigned long long)
    440,  // QGlobalSpace::qHash(signed char)
    502,  // QGlobalSpace::qHash(short)
    544,  // QGlobalSpace::qHash(unsigned long)
    602,  // QGlobalSpace::qHash(unsigned int)
    650,  // QGlobalSpace::qHash(int)
    705,  // QGlobalSpace::qHash(char)
    0,
    260,  // QGlobalSpace::qIntCast(float)
    337,  // QGlobalSpace::qIntCast(double)
    0,
    387,  // QGlobalSpace::qIsFinite(float)
    712,  // QGlobalSpace::qIsFinite(double)
    0,
    8,  // QGlobalSpace::qIsInf(double)
    125,  // QGlobalSpace::qIsInf(float)
    0,
    174,  // QGlobalSpace::qIsNaN(float)
    498,  // QGlobalSpace::qIsNaN(double)
    0,
    176,  // QGlobalSpace::qIsNull(float)
    332,  // QGlobalSpace::qIsNull(double)
    0,
    1027,  // QSvgRenderer::QSvgRenderer(QObject*)
    1057,  // QSvgRenderer::QSvgRenderer(const QByteArray&)
    1058,  // QSvgRenderer::QSvgRenderer(QXmlStreamReader*)
    0,
    1029,  // QSvgRenderer::QSvgRenderer(const QByteArray&, QObject*)
    1030,  // QSvgRenderer::QSvgRenderer(QXmlStreamReader*, QObject*)
    0,
    1047,  // QSvgRenderer::load(const QByteArray&)
    1048,  // QSvgRenderer::load(QXmlStreamReader*)
    0,
    1035,  // QSvgRenderer::setViewBox(const QRect&)
    1036,  // QSvgRenderer::setViewBox(const QRectF&)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {26, 59, 855},	// QGlobalSpace::LicensedActiveQt
    {26, 60, 858},	// QGlobalSpace::LicensedCore
    {26, 61, 857},	// QGlobalSpace::LicensedDBus
    {26, 62, 865},	// QGlobalSpace::LicensedDeclarative
    {26, 63, 852},	// QGlobalSpace::LicensedGui
    {26, 64, 863},	// QGlobalSpace::LicensedHelp
    {26, 65, 860},	// QGlobalSpace::LicensedMultimedia
    {26, 66, 859},	// QGlobalSpace::LicensedNetwork
    {26, 67, 842},	// QGlobalSpace::LicensedOpenGL
    {26, 68, 844},	// QGlobalSpace::LicensedOpenVG
    {26, 69, 856},	// QGlobalSpace::LicensedQt3Support
    {26, 70, 846},	// QGlobalSpace::LicensedQt3SupportLight
    {26, 71, 845},	// QGlobalSpace::LicensedScript
    {26, 72, 862},	// QGlobalSpace::LicensedScriptTools
    {26, 73, 854},	// QGlobalSpace::LicensedSql
    {26, 74, 843},	// QGlobalSpace::LicensedSvg
    {26, 75, 861},	// QGlobalSpace::LicensedTest
    {26, 76, 864},	// QGlobalSpace::LicensedXml
    {26, 77, 853},	// QGlobalSpace::LicensedXmlPatterns
    {26, 105, 849},	// QGlobalSpace::QtCriticalMsg
    {26, 106, 847},	// QGlobalSpace::QtDebugMsg
    {26, 107, 850},	// QGlobalSpace::QtFatalMsg
    {26, 108, 851},	// QGlobalSpace::QtSystemMsg
    {26, 109, 848},	// QGlobalSpace::QtWarningMsg
    {26, 110, 820},	// QGlobalSpace::SP_CustomCameraCaptureButton
    {26, 111, 821},	// QGlobalSpace::SP_CustomCameraCaptureButtonPressed
    {26, 112, 822},	// QGlobalSpace::SP_CustomCameraPauseButton
    {26, 113, 823},	// QGlobalSpace::SP_CustomCameraPauseButtonPressed
    {26, 114, 824},	// QGlobalSpace::SP_CustomCameraPlayButton
    {26, 115, 825},	// QGlobalSpace::SP_CustomCameraPlayButtonPressed
    {26, 116, 826},	// QGlobalSpace::SP_CustomCameraRecButton
    {26, 117, 827},	// QGlobalSpace::SP_CustomCameraRecButtonPressed
    {26, 118, 828},	// QGlobalSpace::SP_CustomCameraStopButton
    {26, 119, 829},	// QGlobalSpace::SP_CustomCameraStopButtonPressed
    {26, 120, 830},	// QGlobalSpace::SP_CustomTabAll
    {26, 121, 831},	// QGlobalSpace::SP_CustomTabArtist
    {26, 122, 832},	// QGlobalSpace::SP_CustomTabFavourite
    {26, 123, 833},	// QGlobalSpace::SP_CustomTabGenre
    {26, 124, 834},	// QGlobalSpace::SP_CustomTabLanguage
    {26, 125, 835},	// QGlobalSpace::SP_CustomTabMusicAlbum
    {26, 126, 836},	// QGlobalSpace::SP_CustomTabPhotosAlbum
    {26, 127, 837},	// QGlobalSpace::SP_CustomTabPhotosAll
    {26, 128, 838},	// QGlobalSpace::SP_CustomTabPlaylist
    {26, 129, 839},	// QGlobalSpace::SP_CustomTabServices
    {26, 130, 840},	// QGlobalSpace::SP_CustomTabSongs
    {26, 131, 841},	// QGlobalSpace::SP_CustomTabVideos
    {26, 132, 757},	// QGlobalSpace::SP_CustomToolBarAdd
    {26, 133, 758},	// QGlobalSpace::SP_CustomToolBarAddDetail
    {26, 134, 759},	// QGlobalSpace::SP_CustomToolBarAgain
    {26, 135, 760},	// QGlobalSpace::SP_CustomToolBarAgenda
    {26, 136, 761},	// QGlobalSpace::SP_CustomToolBarAudioOff
    {26, 137, 762},	// QGlobalSpace::SP_CustomToolBarAudioOn
    {26, 138, 763},	// QGlobalSpace::SP_CustomToolBarBack
    {26, 139, 764},	// QGlobalSpace::SP_CustomToolBarBluetoothOff
    {26, 140, 765},	// QGlobalSpace::SP_CustomToolBarBluetoothOn
    {26, 141, 766},	// QGlobalSpace::SP_CustomToolBarCancel
    {26, 142, 767},	// QGlobalSpace::SP_CustomToolBarDelete
    {26, 143, 768},	// QGlobalSpace::SP_CustomToolBarDone
    {26, 144, 769},	// QGlobalSpace::SP_CustomToolBarEdit
    {26, 145, 770},	// QGlobalSpace::SP_CustomToolBarEditDisabled
    {26, 146, 771},	// QGlobalSpace::SP_CustomToolBarEmailSend
    {26, 147, 772},	// QGlobalSpace::SP_CustomToolBarEmergencyCall
    {26, 148, 773},	// QGlobalSpace::SP_CustomToolBarFavouriteAdd
    {26, 149, 774},	// QGlobalSpace::SP_CustomToolBarFavouriteRemove
    {26, 150, 775},	// QGlobalSpace::SP_CustomToolBarFavourites
    {26, 151, 776},	// QGlobalSpace::SP_CustomToolBarGo
    {26, 152, 777},	// QGlobalSpace::SP_CustomToolBarHome
    {26, 153, 778},	// QGlobalSpace::SP_CustomToolBarImageTools
    {26, 154, 779},	// QGlobalSpace::SP_CustomToolBarList
    {26, 155, 780},	// QGlobalSpace::SP_CustomToolBarLock
    {26, 156, 781},	// QGlobalSpace::SP_CustomToolBarLogs
    {26, 157, 782},	// QGlobalSpace::SP_CustomToolBarMenu
    {26, 158, 783},	// QGlobalSpace::SP_CustomToolBarNewContact
    {26, 159, 784},	// QGlobalSpace::SP_CustomToolBarNewGroup
    {26, 160, 785},	// QGlobalSpace::SP_CustomToolBarNextFrame
    {26, 161, 786},	// QGlobalSpace::SP_CustomToolBarNowPlay
    {26, 162, 787},	// QGlobalSpace::SP_CustomToolBarOptions
    {26, 163, 788},	// QGlobalSpace::SP_CustomToolBarOther
    {26, 164, 789},	// QGlobalSpace::SP_CustomToolBarOvi
    {26, 165, 790},	// QGlobalSpace::SP_CustomToolBarPreviousFrame
    {26, 166, 791},	// QGlobalSpace::SP_CustomToolBarRead
    {26, 167, 793},	// QGlobalSpace::SP_CustomToolBarRedo
    {26, 168, 792},	// QGlobalSpace::SP_CustomToolBarRedoDisabled
    {26, 169, 794},	// QGlobalSpace::SP_CustomToolBarRefresh
    {26, 170, 795},	// QGlobalSpace::SP_CustomToolBarRemoveDetail
    {26, 171, 796},	// QGlobalSpace::SP_CustomToolBarRemoveDisabled
    {26, 172, 797},	// QGlobalSpace::SP_CustomToolBarRepeat
    {26, 173, 798},	// QGlobalSpace::SP_CustomToolBarRepeatOff
    {26, 174, 799},	// QGlobalSpace::SP_CustomToolBarRepeatOne
    {26, 175, 800},	// QGlobalSpace::SP_CustomToolBarSearch
    {26, 176, 801},	// QGlobalSpace::SP_CustomToolBarSearchDisabled
    {26, 177, 802},	// QGlobalSpace::SP_CustomToolBarSelectContent
    {26, 178, 803},	// QGlobalSpace::SP_CustomToolBarSelfTimer
    {26, 179, 804},	// QGlobalSpace::SP_CustomToolBarSend
    {26, 180, 805},	// QGlobalSpace::SP_CustomToolBarSendDimmed
    {26, 181, 806},	// QGlobalSpace::SP_CustomToolBarShare
    {26, 182, 807},	// QGlobalSpace::SP_CustomToolBarShift
    {26, 183, 808},	// QGlobalSpace::SP_CustomToolBarShuffle
    {26, 184, 809},	// QGlobalSpace::SP_CustomToolBarShuffleOff
    {26, 185, 810},	// QGlobalSpace::SP_CustomToolBarSignalOff
    {26, 186, 811},	// QGlobalSpace::SP_CustomToolBarSignalOn
    {26, 187, 812},	// QGlobalSpace::SP_CustomToolBarSync
    {26, 188, 813},	// QGlobalSpace::SP_CustomToolBarTools
    {26, 189, 814},	// QGlobalSpace::SP_CustomToolBarTrim
    {26, 190, 815},	// QGlobalSpace::SP_CustomToolBarUnlock
    {26, 191, 816},	// QGlobalSpace::SP_CustomToolBarUnmark
    {26, 192, 817},	// QGlobalSpace::SP_CustomToolBarView
    {26, 193, 818},	// QGlobalSpace::SP_CustomToolBarWlanOff
    {26, 194, 819},	// QGlobalSpace::SP_CustomToolBarWlanOn
    {26, 270, -4},	// QGlobalSpace::operator!=##
    {26, 271, -24},	// QGlobalSpace::operator!=#$
    {26, 272, -30},	// QGlobalSpace::operator!=$#
    {26, 274, 1},	// QGlobalSpace::operator&##
    {26, 276, -36},	// QGlobalSpace::operator*##
    {26, 277, -66},	// QGlobalSpace::operator*#$
    {26, 278, -79},	// QGlobalSpace::operator*$#
    {26, 280, -91},	// QGlobalSpace::operator+##
    {26, 281, -102},	// QGlobalSpace::operator+#$
    {26, 282, -107},	// QGlobalSpace::operator+$#
    {26, 283, 399},	// QGlobalSpace::operator+$$
    {26, 285, -111},	// QGlobalSpace::operator-#
    {26, 286, -119},	// QGlobalSpace::operator-##
    {26, 287, 754},	// QGlobalSpace::operator-#$
    {26, 289, -129},	// QGlobalSpace::operator/#$
    {26, 291, -140},	// QGlobalSpace::operator<##
    {26, 292, 133},	// QGlobalSpace::operator<#$
    {26, 293, 311},	// QGlobalSpace::operator<$#
    {26, 295, -144},	// QGlobalSpace::operator<<##
    {26, 296, -237},	// QGlobalSpace::operator<<#$
    {26, 297, 121},	// QGlobalSpace::operator<<#?
    {26, 299, -248},	// QGlobalSpace::operator<=##
    {26, 300, 325},	// QGlobalSpace::operator<=#$
    {26, 301, 565},	// QGlobalSpace::operator<=$#
    {26, 303, -252},	// QGlobalSpace::operator==##
    {26, 304, -273},	// QGlobalSpace::operator==#$
    {26, 305, -280},	// QGlobalSpace::operator==$#
    {26, 307, -287},	// QGlobalSpace::operator>##
    {26, 308, 592},	// QGlobalSpace::operator>#$
    {26, 309, 536},	// QGlobalSpace::operator>$#
    {26, 311, -291},	// QGlobalSpace::operator>=##
    {26, 312, 496},	// QGlobalSpace::operator>=#$
    {26, 313, 255},	// QGlobalSpace::operator>=$#
    {26, 315, -295},	// QGlobalSpace::operator>>##
    {26, 316, -347},	// QGlobalSpace::operator>>#$
    {26, 317, 555},	// QGlobalSpace::operator>>#?
    {26, 319, 338},	// QGlobalSpace::operator^##
    {26, 321, 415},	// QGlobalSpace::operator|##
    {26, 322, -350},	// QGlobalSpace::operator|$$
    {26, 331, 704},	// QGlobalSpace::qAccessibleActionCastHelper
    {26, 332, 576},	// QGlobalSpace::qAccessibleEditableTextCastHelper
    {26, 333, 374},	// QGlobalSpace::qAccessibleImageCastHelper
    {26, 334, 545},	// QGlobalSpace::qAccessibleTable2CastHelper
    {26, 335, 401},	// QGlobalSpace::qAccessibleTableCastHelper
    {26, 336, 195},	// QGlobalSpace::qAccessibleTextCastHelper
    {26, 337, 485},	// QGlobalSpace::qAccessibleValueCastHelper
    {26, 339, 361},	// QGlobalSpace::qAcos$
    {26, 341, 317},	// QGlobalSpace::qAddPostRoutine$
    {26, 343, 73},	// QGlobalSpace::qAlpha$
    {26, 344, 287},	// QGlobalSpace::qAppName
    {26, 346, 522},	// QGlobalSpace::qAsin$
    {26, 348, 94},	// QGlobalSpace::qAtan$
    {26, 350, 300},	// QGlobalSpace::qAtan2$$
    {26, 351, 743},	// QGlobalSpace::qBadAlloc
    {26, 353, 707},	// QGlobalSpace::qBlue$
    {26, 355, 47},	// QGlobalSpace::qCeil$
    {26, 357, 339},	// QGlobalSpace::qChecksum$$
    {26, 359, 305},	// QGlobalSpace::qCompress#
    {26, 360, 304},	// QGlobalSpace::qCompress#$
    {26, 361, 616},	// QGlobalSpace::qCompress$$
    {26, 362, 615},	// QGlobalSpace::qCompress$$$
    {26, 364, 120},	// QGlobalSpace::qCos$
    {26, 365, 2},	// QGlobalSpace::qCritical
    {26, 366, 626},	// QGlobalSpace::qDebug
    {26, 368, 629},	// QGlobalSpace::qDrawBorderPixmap####
    {26, 369, 334},	// QGlobalSpace::qDrawBorderPixmap######
    {26, 370, 335},	// QGlobalSpace::qDrawBorderPixmap#######
    {26, 371, 333},	// QGlobalSpace::qDrawBorderPixmap#######$
    {26, 373, 313},	// QGlobalSpace::qDrawPlainRect###
    {26, 374, 314},	// QGlobalSpace::qDrawPlainRect###$
    {26, 375, 312},	// QGlobalSpace::qDrawPlainRect###$#
    {26, 376, 293},	// QGlobalSpace::qDrawPlainRect#$$$$#
    {26, 377, 294},	// QGlobalSpace::qDrawPlainRect#$$$$#$
    {26, 378, 292},	// QGlobalSpace::qDrawPlainRect#$$$$#$#
    {26, 380, 641},	// QGlobalSpace::qDrawShadeLine####
    {26, 381, 642},	// QGlobalSpace::qDrawShadeLine####$
    {26, 382, 643},	// QGlobalSpace::qDrawShadeLine####$$
    {26, 383, 640},	// QGlobalSpace::qDrawShadeLine####$$$
    {26, 384, 558},	// QGlobalSpace::qDrawShadeLine#$$$$#
    {26, 385, 559},	// QGlobalSpace::qDrawShadeLine#$$$$#$
    {26, 386, 560},	// QGlobalSpace::qDrawShadeLine#$$$$#$$
    {26, 387, 557},	// QGlobalSpace::qDrawShadeLine#$$$$#$$$
    {26, 389, 80},	// QGlobalSpace::qDrawShadePanel###
    {26, 390, 81},	// QGlobalSpace::qDrawShadePanel###$
    {26, 391, 82},	// QGlobalSpace::qDrawShadePanel###$$
    {26, 392, 79},	// QGlobalSpace::qDrawShadePanel###$$#
    {26, 393, 226},	// QGlobalSpace::qDrawShadePanel#$$$$#
    {26, 394, 227},	// QGlobalSpace::qDrawShadePanel#$$$$#$
    {26, 395, 228},	// QGlobalSpace::qDrawShadePanel#$$$$#$$
    {26, 396, 225},	// QGlobalSpace::qDrawShadePanel#$$$$#$$#
    {26, 398, 269},	// QGlobalSpace::qDrawShadeRect###
    {26, 399, 270},	// QGlobalSpace::qDrawShadeRect###$
    {26, 400, 271},	// QGlobalSpace::qDrawShadeRect###$$
    {26, 401, 272},	// QGlobalSpace::qDrawShadeRect###$$$
    {26, 402, 268},	// QGlobalSpace::qDrawShadeRect###$$$#
    {26, 403, 116},	// QGlobalSpace::qDrawShadeRect#$$$$#
    {26, 404, 117},	// QGlobalSpace::qDrawShadeRect#$$$$#$
    {26, 405, 118},	// QGlobalSpace::qDrawShadeRect#$$$$#$$
    {26, 406, 119},	// QGlobalSpace::qDrawShadeRect#$$$$#$$$
    {26, 407, 115},	// QGlobalSpace::qDrawShadeRect#$$$$#$$$#
    {26, 409, 240},	// QGlobalSpace::qDrawWinButton###
    {26, 410, 241},	// QGlobalSpace::qDrawWinButton###$
    {26, 411, 239},	// QGlobalSpace::qDrawWinButton###$#
    {26, 412, 109},	// QGlobalSpace::qDrawWinButton#$$$$#
    {26, 413, 110},	// QGlobalSpace::qDrawWinButton#$$$$#$
    {26, 414, 108},	// QGlobalSpace::qDrawWinButton#$$$$#$#
    {26, 416, 647},	// QGlobalSpace::qDrawWinPanel###
    {26, 417, 648},	// QGlobalSpace::qDrawWinPanel###$
    {26, 418, 646},	// QGlobalSpace::qDrawWinPanel###$#
    {26, 419, 691},	// QGlobalSpace::qDrawWinPanel#$$$$#
    {26, 420, 692},	// QGlobalSpace::qDrawWinPanel#$$$$#$
    {26, 421, 690},	// QGlobalSpace::qDrawWinPanel#$$$$#$#
    {26, 423, 322},	// QGlobalSpace::qExp$
    {26, 425, 26},	// QGlobalSpace::qFabs$
    {26, 427, 678},	// QGlobalSpace::qFastCos$
    {26, 429, 727},	// QGlobalSpace::qFastSin$
    {26, 431, 494},	// QGlobalSpace::qFlagLocation$
    {26, 433, 464},	// QGlobalSpace::qFloor$
    {26, 435, 596},	// QGlobalSpace::qFree$
    {26, 437, 256},	// QGlobalSpace::qFreeAligned$
    {26, 439, -582},	// QGlobalSpace::qFuzzyCompare##
    {26, 440, -590},	// QGlobalSpace::qFuzzyCompare$$
    {26, 442, -593},	// QGlobalSpace::qFuzzyIsNull$
    {26, 444, 49},	// QGlobalSpace::qGray$
    {26, 445, 143},	// QGlobalSpace::qGray$$$
    {26, 447, 77},	// QGlobalSpace::qGreen$
    {26, 449, -596},	// QGlobalSpace::qHash#
    {26, 450, -605},	// QGlobalSpace::qHash$
    {26, 451, 503},	// QGlobalSpace::qInf
    {26, 453, 232},	// QGlobalSpace::qInstallMsgHandler$
    {26, 455, -618},	// QGlobalSpace::qIntCast$
    {26, 457, -621},	// QGlobalSpace::qIsFinite$
    {26, 459, 425},	// QGlobalSpace::qIsGray$
    {26, 461, -624},	// QGlobalSpace::qIsInf$
    {26, 463, -627},	// QGlobalSpace::qIsNaN$
    {26, 465, -630},	// QGlobalSpace::qIsNull$
    {26, 467, 553},	// QGlobalSpace::qLn$
    {26, 469, 751},	// QGlobalSpace::qMalloc$
    {26, 471, 611},	// QGlobalSpace::qMallocAligned$$
    {26, 473, 495},	// QGlobalSpace::qMemCopy$$$
    {26, 475, 299},	// QGlobalSpace::qMemSet$$$
    {26, 477, 661},	// QGlobalSpace::qPow$$
    {26, 478, 30},	// QGlobalSpace::qQNaN
    {26, 480, 396},	// QGlobalSpace::qRealloc$$
    {26, 482, 277},	// QGlobalSpace::qReallocAligned$$$$
    {26, 484, 58},	// QGlobalSpace::qRed$
    {26, 486, 101},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {26, 488, 487},	// QGlobalSpace::qRemovePostRoutine$
    {26, 490, 462},	// QGlobalSpace::qRgb$$$
    {26, 492, 745},	// QGlobalSpace::qRgba$$$$
    {26, 494, 413},	// QGlobalSpace::qRound$
    {26, 496, 605},	// QGlobalSpace::qRound64$
    {26, 497, 717},	// QGlobalSpace::qSNaN
    {26, 499, 538},	// QGlobalSpace::qSetFieldWidth$
    {26, 501, 222},	// QGlobalSpace::qSetPadChar#
    {26, 503, 519},	// QGlobalSpace::qSetRealNumberPrecision$
    {26, 504, 229},	// QGlobalSpace::qSharedBuild
    {26, 506, 521},	// QGlobalSpace::qSin$
    {26, 508, 445},	// QGlobalSpace::qSqrt$
    {26, 510, 266},	// QGlobalSpace::qStringComparisonHelper#$
    {26, 512, 635},	// QGlobalSpace::qTan$
    {26, 514, 515},	// QGlobalSpace::qUncompress#
    {26, 515, 723},	// QGlobalSpace::qUncompress$$
    {26, 516, 38},	// QGlobalSpace::qVersion
    {26, 517, 140},	// QGlobalSpace::qWarning
    {26, 519, 95},	// QGlobalSpace::qbswap_helper$$$
    {26, 521, 350},	// QGlobalSpace::qgetenv$
    {26, 523, 263},	// QGlobalSpace::qputenv$#
    {26, 524, 48},	// QGlobalSpace::qrand
    {26, 526, 124},	// QGlobalSpace::qsrand$
    {26, 528, 219},	// QGlobalSpace::qstrcmp##
    {26, 529, 223},	// QGlobalSpace::qstrcmp#$
    {26, 530, 632},	// QGlobalSpace::qstrcmp$#
    {26, 531, 448},	// QGlobalSpace::qstrcmp$$
    {26, 533, 23},	// QGlobalSpace::qstrcpy$$
    {26, 535, 620},	// QGlobalSpace::qstrdup$
    {26, 537, 524},	// QGlobalSpace::qstricmp$$
    {26, 539, 561},	// QGlobalSpace::qstrlen$
    {26, 541, 267},	// QGlobalSpace::qstrncmp$$$
    {26, 543, 377},	// QGlobalSpace::qstrncpy$$$
    {26, 545, 202},	// QGlobalSpace::qstrnicmp$$$
    {26, 547, 460},	// QGlobalSpace::qstrnlen$$
    {26, 549, 738},	// QGlobalSpace::qtTrId$
    {26, 550, 737},	// QGlobalSpace::qtTrId$$
    {26, 552, 5},	// QGlobalSpace::qt_assert$$$
    {26, 554, 404},	// QGlobalSpace::qt_assert_x$$$$
    {26, 556, 210},	// QGlobalSpace::qt_check_pointer$$
    {26, 557, 391},	// QGlobalSpace::qt_error_string
    {26, 558, 390},	// QGlobalSpace::qt_error_string$
    {26, 560, 672},	// QGlobalSpace::qt_message_output$$
    {26, 565, 534},	// QGlobalSpace::qt_noop
    {26, 567, 234},	// QGlobalSpace::qt_qFindChild_helper#$#
    {26, 569, 586},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {26, 571, 98},	// QGlobalSpace::qvariant_cast_helper#$$
    {26, 573, 530},	// QGlobalSpace::qvsnprintf$$$?
    {34, 91, 976},	// QGraphicsSvgItem::QGraphicsSvgItem
    {34, 92, 961},	// QGraphicsSvgItem::QGraphicsSvgItem#
    {34, 93, 977},	// QGraphicsSvgItem::QGraphicsSvgItem$
    {34, 94, 962},	// QGraphicsSvgItem::QGraphicsSvgItem$#
    {34, 196, 980},	// QGraphicsSvgItem::Type
    {34, 203, 971},	// QGraphicsSvgItem::boundingRect
    {34, 226, 966},	// QGraphicsSvgItem::elementId
    {34, 245, 968},	// QGraphicsSvgItem::isCachingEnabled
    {34, 258, 970},	// QGraphicsSvgItem::maximumCacheSize
    {34, 259, 954},	// QGraphicsSvgItem::metaObject
    {34, 325, 978},	// QGraphicsSvgItem::paint##
    {34, 326, 972},	// QGraphicsSvgItem::paint###
    {34, 562, 960},	// QGraphicsSvgItem::qt_metacall$$?
    {34, 564, 955},	// QGraphicsSvgItem::qt_metacast$
    {34, 579, 964},	// QGraphicsSvgItem::renderer
    {34, 586, 967},	// QGraphicsSvgItem::setCachingEnabled$
    {34, 592, 965},	// QGraphicsSvgItem::setElementId$
    {34, 599, 969},	// QGraphicsSvgItem::setMaximumCacheSize#
    {34, 605, 963},	// QGraphicsSvgItem::setSharedRenderer#
    {34, 617, 979},	// QGraphicsSvgItem::staticMetaObject
    {34, 624, 974},	// QGraphicsSvgItem::tr$
    {34, 625, 956},	// QGraphicsSvgItem::tr$$
    {34, 626, 958},	// QGraphicsSvgItem::tr$$$
    {34, 628, 975},	// QGraphicsSvgItem::trUtf8$
    {34, 629, 957},	// QGraphicsSvgItem::trUtf8$$
    {34, 630, 959},	// QGraphicsSvgItem::trUtf8$$$
    {34, 631, 973},	// QGraphicsSvgItem::type
    {34, 637, 981},	// QGraphicsSvgItem::~QGraphicsSvgItem
    {89, 95, 1000},	// QSvgGenerator::QSvgGenerator
    {89, 217, 1003},	// QSvgGenerator::description
    {89, 232, 1011},	// QSvgGenerator::fileName
    {89, 261, 1018},	// QSvgGenerator::metric$
    {89, 323, 1013},	// QSvgGenerator::outputDevice
    {89, 327, 1017},	// QSvgGenerator::paintEngine
    {89, 582, 1016},	// QSvgGenerator::resolution
    {89, 590, 1004},	// QSvgGenerator::setDescription$
    {89, 595, 1012},	// QSvgGenerator::setFileName$
    {89, 601, 1014},	// QSvgGenerator::setOutputDevice#
    {89, 603, 1015},	// QSvgGenerator::setResolution$
    {89, 607, 1006},	// QSvgGenerator::setSize#
    {89, 609, 1002},	// QSvgGenerator::setTitle$
    {89, 611, -1},	// QSvgGenerator::setViewBox#
    {89, 615, 1005},	// QSvgGenerator::size
    {89, 622, 1001},	// QSvgGenerator::title
    {89, 632, 1007},	// QSvgGenerator::viewBox
    {89, 633, 1008},	// QSvgGenerator::viewBoxF
    {89, 638, 1019},	// QSvgGenerator::~QSvgGenerator
    {90, 96, 1055},	// QSvgRenderer::QSvgRenderer
    {90, 97, -633},	// QSvgRenderer::QSvgRenderer#
    {90, 98, -637},	// QSvgRenderer::QSvgRenderer##
    {90, 99, 1056},	// QSvgRenderer::QSvgRenderer$
    {90, 100, 1028},	// QSvgRenderer::QSvgRenderer$#
    {90, 201, 1037},	// QSvgRenderer::animated
    {90, 202, 1042},	// QSvgRenderer::animationDuration
    {90, 205, 1043},	// QSvgRenderer::boundsOnElement$
    {90, 214, 1040},	// QSvgRenderer::currentFrame
    {90, 216, 1032},	// QSvgRenderer::defaultSize
    {90, 225, 1044},	// QSvgRenderer::elementExists$
    {90, 237, 1038},	// QSvgRenderer::framesPerSecond
    {90, 247, 1031},	// QSvgRenderer::isValid
    {90, 254, -640},	// QSvgRenderer::load#
    {90, 255, 1046},	// QSvgRenderer::load$
    {90, 257, 1045},	// QSvgRenderer::matrixForElement$
    {90, 259, 1020},	// QSvgRenderer::metaObject
    {90, 562, 1026},	// QSvgRenderer::qt_metacall$$?
    {90, 564, 1021},	// QSvgRenderer::qt_metacast$
    {90, 575, 1049},	// QSvgRenderer::render#
    {90, 576, 1050},	// QSvgRenderer::render##
    {90, 577, 1059},	// QSvgRenderer::render#$
    {90, 578, 1051},	// QSvgRenderer::render#$#
    {90, 580, 1052},	// QSvgRenderer::repaintNeeded
    {90, 588, 1041},	// QSvgRenderer::setCurrentFrame$
    {90, 597, 1039},	// QSvgRenderer::setFramesPerSecond$
    {90, 611, -643},	// QSvgRenderer::setViewBox#
    {90, 617, 1060},	// QSvgRenderer::staticMetaObject
    {90, 624, 1053},	// QSvgRenderer::tr$
    {90, 625, 1022},	// QSvgRenderer::tr$$
    {90, 626, 1024},	// QSvgRenderer::tr$$$
    {90, 628, 1054},	// QSvgRenderer::trUtf8$
    {90, 629, 1023},	// QSvgRenderer::trUtf8$$
    {90, 630, 1025},	// QSvgRenderer::trUtf8$$$
    {90, 632, 1033},	// QSvgRenderer::viewBox
    {90, 633, 1034},	// QSvgRenderer::viewBoxF
    {90, 639, 1061},	// QSvgRenderer::~QSvgRenderer
    {91, 101, 1078},	// QSvgWidget::QSvgWidget
    {91, 102, 1069},	// QSvgWidget::QSvgWidget#
    {91, 103, 1079},	// QSvgWidget::QSvgWidget$
    {91, 104, 1070},	// QSvgWidget::QSvgWidget$#
    {91, 254, 1074},	// QSvgWidget::load#
    {91, 255, 1073},	// QSvgWidget::load$
    {91, 259, 1062},	// QSvgWidget::metaObject
    {91, 329, 1075},	// QSvgWidget::paintEvent#
    {91, 562, 1068},	// QSvgWidget::qt_metacall$$?
    {91, 564, 1063},	// QSvgWidget::qt_metacast$
    {91, 579, 1071},	// QSvgWidget::renderer
    {91, 616, 1072},	// QSvgWidget::sizeHint
    {91, 617, 1080},	// QSvgWidget::staticMetaObject
    {91, 624, 1076},	// QSvgWidget::tr$
    {91, 625, 1064},	// QSvgWidget::tr$$
    {91, 626, 1066},	// QSvgWidget::tr$$$
    {91, 628, 1077},	// QSvgWidget::trUtf8$
    {91, 629, 1065},	// QSvgWidget::trUtf8$$
    {91, 630, 1067},	// QSvgWidget::trUtf8$$$
    {91, 640, 1081},	// QSvgWidget::~QSvgWidget
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();
SMOKE_IMPORT void init_qtgui_Smoke();

static bool initialized = false;
Smoke *qtsvg_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtsvg_Smoke() {
    init_qtcore_Smoke();
    init_qtgui_Smoke();
    if (initialized) return;
    qtsvg_Smoke = new Smoke(
        "qtsvg",
        __smokeqtsvg::classes, 113,
        __smokeqtsvg::methods, 1126,
        __smokeqtsvg::methodMaps, 409,
        __smokeqtsvg::methodNames, 640,
        __smokeqtsvg::types, 484,
        __smokeqtsvg::inheritanceList,
        __smokeqtsvg::argumentList,
        __smokeqtsvg::ambiguousMethodList,
        __smokeqtsvg::cast );
    initialized = true;
}

void delete_qtsvg_Smoke() { delete qtsvg_Smoke; }

}
