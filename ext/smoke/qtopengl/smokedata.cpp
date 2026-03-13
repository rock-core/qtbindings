#include <qtopengl_includes.h>

#include <smoke.h>
#include <qtopengl_smoke.h>

namespace __smokeqtopengl {

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
    case 27:   //QGLBuffer
      switch(to) {
        case 27: return (void*)(QGLBuffer*)xptr;
        default: return xptr;
      }
    case 28:   //QGLColormap
      switch(to) {
        case 28: return (void*)(QGLColormap*)xptr;
        default: return xptr;
      }
    case 29:   //QGLContext
      switch(to) {
        case 29: return (void*)(QGLContext*)xptr;
        default: return xptr;
      }
    case 30:   //QGLFormat
      switch(to) {
        case 30: return (void*)(QGLFormat*)xptr;
        default: return xptr;
      }
    case 31:   //QGLFramebufferObject
      switch(to) {
        case 62: return (void*)(QPaintDevice*)(QGLFramebufferObject*)xptr;
        case 31: return (void*)(QGLFramebufferObject*)xptr;
        default: return xptr;
      }
    case 32:   //QGLFramebufferObjectFormat
      switch(to) {
        case 32: return (void*)(QGLFramebufferObjectFormat*)xptr;
        default: return xptr;
      }
    case 33:   //QGLPixelBuffer
      switch(to) {
        case 62: return (void*)(QPaintDevice*)(QGLPixelBuffer*)xptr;
        case 33: return (void*)(QGLPixelBuffer*)xptr;
        default: return xptr;
      }
    case 34:   //QGLShader
      switch(to) {
        case 61: return (void*)(QObject*)(QGLShader*)xptr;
        case 34: return (void*)(QGLShader*)xptr;
        default: return xptr;
      }
    case 35:   //QGLShaderProgram
      switch(to) {
        case 61: return (void*)(QObject*)(QGLShaderProgram*)xptr;
        case 35: return (void*)(QGLShaderProgram*)xptr;
        default: return xptr;
      }
    case 36:   //QGLWidget
      switch(to) {
        case 112: return (void*)(QWidget*)(QGLWidget*)xptr;
        case 61: return (void*)(QObject*)(QGLWidget*)xptr;
        case 62: return (void*)(QPaintDevice*)(QGLWidget*)xptr;
        case 36: return (void*)(QGLWidget*)xptr;
        default: return xptr;
      }
    case 38:   //QGraphicsItem
      switch(to) {
        case 38: return (void*)(QGraphicsItem*)xptr;
        default: return xptr;
      }
    case 39:   //QGraphicsObject
      switch(to) {
        case 61: return (void*)(QObject*)(QGraphicsObject*)xptr;
        case 38: return (void*)(QGraphicsItem*)(QGraphicsObject*)xptr;
        case 39: return (void*)(QGraphicsObject*)xptr;
        default: return xptr;
      }
    case 40:   //QHashDummyValue
      switch(to) {
        case 40: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 41:   //QHideEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QHideEvent*)xptr;
        case 41: return (void*)(QHideEvent*)xptr;
        default: return xptr;
      }
    case 42:   //QIcon
      switch(to) {
        case 42: return (void*)(QIcon*)xptr;
        default: return xptr;
      }
    case 43:   //QImage
      switch(to) {
        case 62: return (void*)(QPaintDevice*)(QImage*)xptr;
        case 43: return (void*)(QImage*)xptr;
        default: return xptr;
      }
    case 44:   //QIncompatibleFlag
      switch(to) {
        case 44: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 45:   //QInputMethodEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QInputMethodEvent*)xptr;
        case 45: return (void*)(QInputMethodEvent*)xptr;
        default: return xptr;
      }
    case 46:   //QItemSelectionRange
      switch(to) {
        case 46: return (void*)(QItemSelectionRange*)xptr;
        default: return xptr;
      }
    case 47:   //QKeyEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QKeyEvent*)xptr;
        case 47: return (void*)(QKeyEvent*)xptr;
        default: return xptr;
      }
    case 48:   //QKeySequence
      switch(to) {
        case 48: return (void*)(QKeySequence*)xptr;
        default: return xptr;
      }
    case 49:   //QLatin1String
      switch(to) {
        case 49: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 50:   //QLine
      switch(to) {
        case 50: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 51:   //QLineF
      switch(to) {
        case 51: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 52:   //QListWidgetItem
      switch(to) {
        case 52: return (void*)(QListWidgetItem*)xptr;
        default: return xptr;
      }
    case 53:   //QLocale
      switch(to) {
        case 53: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 54:   //QMargins
      switch(to) {
        case 54: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 55:   //QMatrix
      switch(to) {
        case 55: return (void*)(QMatrix*)xptr;
        default: return xptr;
      }
    case 56:   //QMatrix4x4
      switch(to) {
        case 56: return (void*)(QMatrix4x4*)xptr;
        default: return xptr;
      }
    case 57:   //QMetaObject
      switch(to) {
        case 57: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 58:   //QModelIndex
      switch(to) {
        case 58: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 59:   //QMouseEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QMouseEvent*)xptr;
        case 59: return (void*)(QMouseEvent*)xptr;
        default: return xptr;
      }
    case 60:   //QMoveEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QMoveEvent*)xptr;
        case 60: return (void*)(QMoveEvent*)xptr;
        default: return xptr;
      }
    case 61:   //QObject
      switch(to) {
        case 61: return (void*)(QObject*)xptr;
        case 35: return (void*)(QGLShaderProgram*)(QObject*)xptr;
        case 36: return (void*)(QGLWidget*)(QObject*)xptr;
        case 34: return (void*)(QGLShader*)(QObject*)xptr;
        default: return xptr;
      }
    case 62:   //QPaintDevice
      switch(to) {
        case 62: return (void*)(QPaintDevice*)xptr;
        case 31: return (void*)(QGLFramebufferObject*)(QPaintDevice*)xptr;
        case 36: return (void*)(QGLWidget*)(QPaintDevice*)xptr;
        case 33: return (void*)(QGLPixelBuffer*)(QPaintDevice*)xptr;
        default: return xptr;
      }
    case 63:   //QPaintEngine
      switch(to) {
        case 63: return (void*)(QPaintEngine*)xptr;
        default: return xptr;
      }
    case 64:   //QPaintEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QPaintEvent*)xptr;
        case 64: return (void*)(QPaintEvent*)xptr;
        default: return xptr;
      }
    case 65:   //QPainter
      switch(to) {
        case 65: return (void*)(QPainter*)xptr;
        default: return xptr;
      }
    case 66:   //QPainterPath
      switch(to) {
        case 66: return (void*)(QPainterPath*)xptr;
        default: return xptr;
      }
    case 67:   //QPalette
      switch(to) {
        case 67: return (void*)(QPalette*)xptr;
        default: return xptr;
      }
    case 68:   //QPen
      switch(to) {
        case 68: return (void*)(QPen*)xptr;
        default: return xptr;
      }
    case 69:   //QPersistentModelIndex
      switch(to) {
        case 69: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 70:   //QPicture
      switch(to) {
        case 62: return (void*)(QPaintDevice*)(QPicture*)xptr;
        case 70: return (void*)(QPicture*)xptr;
        default: return xptr;
      }
    case 71:   //QPixmap
      switch(to) {
        case 62: return (void*)(QPaintDevice*)(QPixmap*)xptr;
        case 71: return (void*)(QPixmap*)xptr;
        default: return xptr;
      }
    case 72:   //QPoint
      switch(to) {
        case 72: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 73:   //QPointF
      switch(to) {
        case 73: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 74:   //QPolygon
      switch(to) {
        case 74: return (void*)(QPolygon*)xptr;
        default: return xptr;
      }
    case 75:   //QPolygonF
      switch(to) {
        case 75: return (void*)(QPolygonF*)xptr;
        default: return xptr;
      }
    case 76:   //QQuaternion
      switch(to) {
        case 76: return (void*)(QQuaternion*)xptr;
        default: return xptr;
      }
    case 77:   //QRect
      switch(to) {
        case 77: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 78:   //QRectF
      switch(to) {
        case 78: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 79:   //QRegExp
      switch(to) {
        case 79: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 80:   //QRegion
      switch(to) {
        case 80: return (void*)(QRegion*)xptr;
        default: return xptr;
      }
    case 81:   //QResizeEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QResizeEvent*)xptr;
        case 81: return (void*)(QResizeEvent*)xptr;
        default: return xptr;
      }
    case 82:   //QShowEvent
      switch(to) {
        case 23: return (void*)(QEvent*)(QShowEvent*)xptr;
        case 82: return (void*)(QShowEvent*)xptr;
        default: return xptr;
      }
    case 83:   //QSize
      switch(to) {
        case 83: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 84:   //QSizeF
      switch(to) {
        case 84: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 85:   //QSizePolicy
      switch(to) {
        case 85: return (void*)(QSizePolicy*)xptr;
        default: return xptr;
      }
    case 86:   //QSplitter
      switch(to) {
        case 112: return (void*)(QWidget*)(QSplitter*)xptr;
        case 61: return (void*)(QObject*)(QSplitter*)xptr;
        case 62: return (void*)(QPaintDevice*)(QSplitter*)xptr;
        case 86: return (void*)(QSplitter*)xptr;
        default: return xptr;
      }
    case 87:   //QStandardItem
      switch(to) {
        case 87: return (void*)(QStandardItem*)xptr;
        default: return xptr;
      }
    case 88:   //QString::Null
      switch(to) {
        case 88: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 89:   //QStringRef
      switch(to) {
        case 89: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 90:   //QStyle
      switch(to) {
        case 61: return (void*)(QObject*)(QStyle*)xptr;
        case 90: return (void*)(QStyle*)xptr;
        default: return xptr;
      }
    case 91:   //QStyleOption
      switch(to) {
        case 91: return (void*)(QStyleOption*)xptr;
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
        case 61: return (void*)(QObject*)(QWidget*)xptr;
        case 62: return (void*)(QPaintDevice*)(QWidget*)xptr;
        case 112: return (void*)(QWidget*)xptr;
        case 36: return (void*)(QGLWidget*)(QWidget*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    62, 0,	// 1: QPaintDevice
    61, 0,	// 3: QObject
    112, 0,	// 5: QWidget
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QGLBuffer(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QGLContext(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QGLShader(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QGLFramebufferObject(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QGLFormat(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QGL(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QGL(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLBuffer(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLColormap(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLContext(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLFormat(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLFramebufferObject(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLFramebufferObjectFormat(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLPixelBuffer(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLShader(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLShaderProgram(Smoke::Index, void*, Smoke::Stack);
void xcall_QGLWidget(Smoke::Index, void*, Smoke::Stack);
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);

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
    { "QGL", false, 0, xcall_QGL, xenum_QGL, Smoke::cf_namespace, 0 },	//26
    { "QGLBuffer", false, 0, xcall_QGLBuffer, xenum_QGLBuffer, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QGLBuffer) },	//27
    { "QGLColormap", false, 0, xcall_QGLColormap, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QGLColormap) },	//28
    { "QGLContext", false, 0, xcall_QGLContext, xenum_QGLContext, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QGLContext) },	//29
    { "QGLFormat", false, 0, xcall_QGLFormat, xenum_QGLFormat, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QGLFormat) },	//30
    { "QGLFramebufferObject", false, 1, xcall_QGLFramebufferObject, xenum_QGLFramebufferObject, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QGLFramebufferObject) },	//31
    { "QGLFramebufferObjectFormat", false, 0, xcall_QGLFramebufferObjectFormat, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QGLFramebufferObjectFormat) },	//32
    { "QGLPixelBuffer", false, 1, xcall_QGLPixelBuffer, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QGLPixelBuffer) },	//33
    { "QGLShader", false, 3, xcall_QGLShader, xenum_QGLShader, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QGLShader) },	//34
    { "QGLShaderProgram", false, 3, xcall_QGLShaderProgram, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QGLShaderProgram) },	//35
    { "QGLWidget", false, 5, xcall_QGLWidget, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QGLWidget) },	//36
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//37
    { "QGraphicsItem", true, 0, 0, 0, 0, 0 },	//38
    { "QGraphicsObject", true, 0, 0, 0, 0, 0 },	//39
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//40
    { "QHideEvent", true, 0, 0, 0, 0, 0 },	//41
    { "QIcon", true, 0, 0, 0, 0, 0 },	//42
    { "QImage", true, 0, 0, 0, 0, 0 },	//43
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//44
    { "QInputMethodEvent", true, 0, 0, 0, 0, 0 },	//45
    { "QItemSelectionRange", true, 0, 0, 0, 0, 0 },	//46
    { "QKeyEvent", true, 0, 0, 0, 0, 0 },	//47
    { "QKeySequence", true, 0, 0, 0, 0, 0 },	//48
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//49
    { "QLine", true, 0, 0, 0, 0, 0 },	//50
    { "QLineF", true, 0, 0, 0, 0, 0 },	//51
    { "QListWidgetItem", true, 0, 0, 0, 0, 0 },	//52
    { "QLocale", true, 0, 0, 0, 0, 0 },	//53
    { "QMargins", true, 0, 0, 0, 0, 0 },	//54
    { "QMatrix", true, 0, 0, 0, 0, 0 },	//55
    { "QMatrix4x4", true, 0, 0, 0, 0, 0 },	//56
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//57
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//58
    { "QMouseEvent", true, 0, 0, 0, 0, 0 },	//59
    { "QMoveEvent", true, 0, 0, 0, 0, 0 },	//60
    { "QObject", true, 0, 0, 0, 0, 0 },	//61
    { "QPaintDevice", true, 0, 0, 0, 0, 0 },	//62
    { "QPaintEngine", true, 0, 0, 0, 0, 0 },	//63
    { "QPaintEvent", true, 0, 0, 0, 0, 0 },	//64
    { "QPainter", true, 0, 0, 0, 0, 0 },	//65
    { "QPainterPath", true, 0, 0, 0, 0, 0 },	//66
    { "QPalette", true, 0, 0, 0, 0, 0 },	//67
    { "QPen", true, 0, 0, 0, 0, 0 },	//68
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//69
    { "QPicture", true, 0, 0, 0, 0, 0 },	//70
    { "QPixmap", true, 0, 0, 0, 0, 0 },	//71
    { "QPoint", true, 0, 0, 0, 0, 0 },	//72
    { "QPointF", true, 0, 0, 0, 0, 0 },	//73
    { "QPolygon", true, 0, 0, 0, 0, 0 },	//74
    { "QPolygonF", true, 0, 0, 0, 0, 0 },	//75
    { "QQuaternion", true, 0, 0, 0, 0, 0 },	//76
    { "QRect", true, 0, 0, 0, 0, 0 },	//77
    { "QRectF", true, 0, 0, 0, 0, 0 },	//78
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//79
    { "QRegion", true, 0, 0, 0, 0, 0 },	//80
    { "QResizeEvent", true, 0, 0, 0, 0, 0 },	//81
    { "QShowEvent", true, 0, 0, 0, 0, 0 },	//82
    { "QSize", true, 0, 0, 0, 0, 0 },	//83
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//84
    { "QSizePolicy", true, 0, 0, 0, 0, 0 },	//85
    { "QSplitter", true, 0, 0, 0, 0, 0 },	//86
    { "QStandardItem", true, 0, 0, 0, 0, 0 },	//87
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//88
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//89
    { "QStyle", true, 0, 0, 0, 0, 0 },	//90
    { "QStyleOption", true, 0, 0, 0, 0, 0 },	//91
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
    { "QColor", 10, Smoke::t_class|Smoke::tf_stack },	//23
    { "QColor&", 10, Smoke::t_class|Smoke::tf_ref },	//24
    { "QColorDialog::ColorDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//25
    { "QContextMenuEvent*", 11, Smoke::t_class|Smoke::tf_ptr },	//26
    { "QCursor&", 12, Smoke::t_class|Smoke::tf_ref },	//27
    { "QDataStream&", 13, Smoke::t_class|Smoke::tf_ref },	//28
    { "QDate&", 14, Smoke::t_class|Smoke::tf_ref },	//29
    { "QDateTime&", 15, Smoke::t_class|Smoke::tf_ref },	//30
    { "QDateTimeEdit::Section", 0, Smoke::t_enum|Smoke::tf_stack },	//31
    { "QDebug", 16, Smoke::t_class|Smoke::tf_stack },	//32
    { "QDialogButtonBox::StandardButton", 0, Smoke::t_enum|Smoke::tf_stack },	//33
    { "QDir::Filter", 17, Smoke::t_enum|Smoke::tf_stack },	//34
    { "QDir::SortFlag", 17, Smoke::t_enum|Smoke::tf_stack },	//35
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//36
    { "QDockWidget::DockWidgetFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//37
    { "QDragEnterEvent*", 18, Smoke::t_class|Smoke::tf_ptr },	//38
    { "QDragLeaveEvent*", 19, Smoke::t_class|Smoke::tf_ptr },	//39
    { "QDragMoveEvent*", 20, Smoke::t_class|Smoke::tf_ptr },	//40
    { "QDrawBorderPixmap::DrawingHint", 0, Smoke::t_enum|Smoke::tf_stack },	//41
    { "QDropEvent*", 21, Smoke::t_class|Smoke::tf_ptr },	//42
    { "QEasingCurve&", 22, Smoke::t_class|Smoke::tf_ref },	//43
    { "QEvent*", 23, Smoke::t_class|Smoke::tf_ptr },	//44
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//45
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//46
    { "QFileDialog::Option", 0, Smoke::t_enum|Smoke::tf_stack },	//47
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//48
    { "QFlags<QAbstractItemView::EditTrigger>", 0, Smoke::t_uint|Smoke::tf_stack },	//49
    { "QFlags<QAbstractPrintDialog::PrintDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//50
    { "QFlags<QAbstractSpinBox::StepEnabledFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//51
    { "QFlags<QAccessible::RelationFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//52
    { "QFlags<QAccessible::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//53
    { "QFlags<QColorDialog::ColorDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//54
    { "QFlags<QDateTimeEdit::Section>", 0, Smoke::t_uint|Smoke::tf_stack },	//55
    { "QFlags<QDialogButtonBox::StandardButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//56
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//57
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//58
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//59
    { "QFlags<QDockWidget::DockWidgetFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//60
    { "QFlags<QDrawBorderPixmap::DrawingHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//61
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//62
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//63
    { "QFlags<QFileDialog::Option>", 0, Smoke::t_uint|Smoke::tf_stack },	//64
    { "QFlags<QFontComboBox::FontFilter>", 0, Smoke::t_uint|Smoke::tf_stack },	//65
    { "QFlags<QFontDialog::FontDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//66
    { "QFlags<QGL::FormatOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//67
    { "QFlags<QGLContext::BindOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//68
    { "QFlags<QGLFormat::OpenGLVersionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//69
    { "QFlags<QGLFunctions::OpenGLFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//70
    { "QFlags<QGLShader::ShaderTypeBit>", 0, Smoke::t_uint|Smoke::tf_stack },	//71
    { "QFlags<QGestureRecognizer::ResultFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//72
    { "QFlags<QGraphicsBlurEffect::BlurHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//73
    { "QFlags<QGraphicsEffect::ChangeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//74
    { "QFlags<QGraphicsItem::GraphicsItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//75
    { "QFlags<QGraphicsScene::SceneLayer>", 0, Smoke::t_uint|Smoke::tf_stack },	//76
    { "QFlags<QGraphicsView::CacheModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//77
    { "QFlags<QGraphicsView::OptimizationFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//78
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//79
    { "QFlags<QImageIOPlugin::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//80
    { "QFlags<QInputDialog::InputDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//81
    { "QFlags<QItemSelectionModel::SelectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//82
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//83
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//84
    { "QFlags<QMainWindow::DockOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//85
    { "QFlags<QMdiArea::AreaOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//86
    { "QFlags<QMdiSubWindow::SubWindowOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//87
    { "QFlags<QMessageBox::StandardButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//88
    { "QFlags<QPaintEngine::DirtyFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//89
    { "QFlags<QPaintEngine::PaintEngineFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//90
    { "QFlags<QPainter::RenderHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//91
    { "QFlags<QPinchGesture::ChangeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//92
    { "QFlags<QSizePolicy::ControlType>", 0, Smoke::t_uint|Smoke::tf_stack },	//93
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//94
    { "QFlags<QStyle::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//95
    { "QFlags<QStyle::SubControl>", 0, Smoke::t_uint|Smoke::tf_stack },	//96
    { "QFlags<QStyleOptionButton::ButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//97
    { "QFlags<QStyleOptionFrameV2::FrameFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//98
    { "QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//99
    { "QFlags<QStyleOptionTab::CornerWidget>", 0, Smoke::t_uint|Smoke::tf_stack },	//100
    { "QFlags<QStyleOptionToolBar::ToolBarFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//101
    { "QFlags<QStyleOptionToolButton::ToolButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//102
    { "QFlags<QStyleOptionViewItemV2::ViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//103
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//104
    { "QFlags<QTextDocument::FindFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//105
    { "QFlags<QTextEdit::AutoFormattingFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//106
    { "QFlags<QTextFormat::PageBreakFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//107
    { "QFlags<QTextItem::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//108
    { "QFlags<QTextOption::Flag>", 0, Smoke::t_uint|Smoke::tf_stack },	//109
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//110
    { "QFlags<QTreeWidgetItemIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//111
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//112
    { "QFlags<QWidget::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//113
    { "QFlags<QWizard::WizardOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//114
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//115
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//116
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//117
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//118
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//119
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//120
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//121
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//122
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//123
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//124
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//125
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//126
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//127
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//128
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//129
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//130
    { "QFocusEvent*", 24, Smoke::t_class|Smoke::tf_ptr },	//131
    { "QFont&", 25, Smoke::t_class|Smoke::tf_ref },	//132
    { "QFontComboBox::FontFilter", 0, Smoke::t_enum|Smoke::tf_stack },	//133
    { "QFontDialog::FontDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//134
    { "QGL::FormatOption", 26, Smoke::t_enum|Smoke::tf_stack },	//135
    { "QGLBuffer&", 27, Smoke::t_class|Smoke::tf_ref },	//136
    { "QGLBuffer*", 27, Smoke::t_class|Smoke::tf_ptr },	//137
    { "QGLBuffer::Access", 27, Smoke::t_enum|Smoke::tf_stack },	//138
    { "QGLBuffer::Type", 27, Smoke::t_enum|Smoke::tf_stack },	//139
    { "QGLBuffer::UsagePattern", 27, Smoke::t_enum|Smoke::tf_stack },	//140
    { "QGLColormap&", 28, Smoke::t_class|Smoke::tf_ref },	//141
    { "QGLColormap*", 28, Smoke::t_class|Smoke::tf_ptr },	//142
    { "QGLContext*", 29, Smoke::t_class|Smoke::tf_ptr },	//143
    { "QGLContext::BindOption", 29, Smoke::t_enum|Smoke::tf_stack },	//144
    { "QGLFormat", 30, Smoke::t_class|Smoke::tf_stack },	//145
    { "QGLFormat&", 30, Smoke::t_class|Smoke::tf_ref },	//146
    { "QGLFormat*", 30, Smoke::t_class|Smoke::tf_ptr },	//147
    { "QGLFormat::OpenGLContextProfile", 30, Smoke::t_enum|Smoke::tf_stack },	//148
    { "QGLFormat::OpenGLVersionFlag", 30, Smoke::t_enum|Smoke::tf_stack },	//149
    { "QGLFramebufferObject*", 31, Smoke::t_class|Smoke::tf_ptr },	//150
    { "QGLFramebufferObject::Attachment", 31, Smoke::t_enum|Smoke::tf_stack },	//151
    { "QGLFramebufferObjectFormat", 32, Smoke::t_class|Smoke::tf_stack },	//152
    { "QGLFramebufferObjectFormat&", 32, Smoke::t_class|Smoke::tf_ref },	//153
    { "QGLFramebufferObjectFormat*", 32, Smoke::t_class|Smoke::tf_ptr },	//154
    { "QGLFunctions::OpenGLFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//155
    { "QGLPixelBuffer*", 33, Smoke::t_class|Smoke::tf_ptr },	//156
    { "QGLShader*", 34, Smoke::t_class|Smoke::tf_ptr },	//157
    { "QGLShader::ShaderTypeBit", 34, Smoke::t_enum|Smoke::tf_stack },	//158
    { "QGLShaderProgram*", 35, Smoke::t_class|Smoke::tf_ptr },	//159
    { "QGLWidget*", 36, Smoke::t_class|Smoke::tf_ptr },	//160
    { "QGestureRecognizer::ResultFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//161
    { "QGraphicsBlurEffect::BlurHint", 0, Smoke::t_enum|Smoke::tf_stack },	//162
    { "QGraphicsEffect::ChangeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//163
    { "QGraphicsItem*", 38, Smoke::t_class|Smoke::tf_ptr },	//164
    { "QGraphicsItem::GraphicsItemChange", 38, Smoke::t_enum|Smoke::tf_stack },	//165
    { "QGraphicsItem::GraphicsItemFlag", 38, Smoke::t_enum|Smoke::tf_stack },	//166
    { "QGraphicsObject*", 39, Smoke::t_class|Smoke::tf_ptr },	//167
    { "QGraphicsScene::SceneLayer", 0, Smoke::t_enum|Smoke::tf_stack },	//168
    { "QGraphicsView::CacheModeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//169
    { "QGraphicsView::OptimizationFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//170
    { "QHideEvent*", 41, Smoke::t_class|Smoke::tf_ptr },	//171
    { "QIODevice::OpenModeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//172
    { "QIcon&", 42, Smoke::t_class|Smoke::tf_ref },	//173
    { "QImage", 43, Smoke::t_class|Smoke::tf_stack },	//174
    { "QImage&", 43, Smoke::t_class|Smoke::tf_ref },	//175
    { "QImageIOPlugin::Capability", 0, Smoke::t_enum|Smoke::tf_stack },	//176
    { "QIncompatibleFlag", 44, Smoke::t_class|Smoke::tf_stack },	//177
    { "QInputDialog::InputDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//178
    { "QInputMethodEvent*", 45, Smoke::t_class|Smoke::tf_ptr },	//179
    { "QItemSelectionModel::SelectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//180
    { "QKeyEvent*", 47, Smoke::t_class|Smoke::tf_ptr },	//181
    { "QKeySequence&", 48, Smoke::t_class|Smoke::tf_ref },	//182
    { "QKeySequence::StandardKey", 48, Smoke::t_enum|Smoke::tf_stack },	//183
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//184
    { "QLine", 50, Smoke::t_class|Smoke::tf_stack },	//185
    { "QLine&", 50, Smoke::t_class|Smoke::tf_ref },	//186
    { "QLineF", 51, Smoke::t_class|Smoke::tf_stack },	//187
    { "QLineF&", 51, Smoke::t_class|Smoke::tf_ref },	//188
    { "QList<QGLShader*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//189
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//190
    { "QListWidgetItem&", 52, Smoke::t_class|Smoke::tf_ref },	//191
    { "QLocale&", 53, Smoke::t_class|Smoke::tf_ref },	//192
    { "QLocale::NumberOption", 53, Smoke::t_enum|Smoke::tf_stack },	//193
    { "QMainWindow::DockOption", 0, Smoke::t_enum|Smoke::tf_stack },	//194
    { "QMatrix&", 55, Smoke::t_class|Smoke::tf_ref },	//195
    { "QMatrix4x4", 56, Smoke::t_class|Smoke::tf_stack },	//196
    { "QMatrix4x4&", 56, Smoke::t_class|Smoke::tf_ref },	//197
    { "QMdiArea::AreaOption", 0, Smoke::t_enum|Smoke::tf_stack },	//198
    { "QMdiSubWindow::SubWindowOption", 0, Smoke::t_enum|Smoke::tf_stack },	//199
    { "QMessageBox::StandardButton", 0, Smoke::t_enum|Smoke::tf_stack },	//200
    { "QMetaObject::Call", 57, Smoke::t_enum|Smoke::tf_stack },	//201
    { "QMouseEvent*", 59, Smoke::t_class|Smoke::tf_ptr },	//202
    { "QMoveEvent*", 60, Smoke::t_class|Smoke::tf_ptr },	//203
    { "QObject*", 61, Smoke::t_class|Smoke::tf_ptr },	//204
    { "QObject*(*)()", 61, Smoke::t_class|Smoke::tf_ptr },	//205
    { "QPaintDevice*", 62, Smoke::t_class|Smoke::tf_ptr },	//206
    { "QPaintDevice::PaintDeviceMetric", 62, Smoke::t_enum|Smoke::tf_stack },	//207
    { "QPaintEngine*", 63, Smoke::t_class|Smoke::tf_ptr },	//208
    { "QPaintEngine::DirtyFlag", 63, Smoke::t_enum|Smoke::tf_stack },	//209
    { "QPaintEngine::PaintEngineFeature", 63, Smoke::t_enum|Smoke::tf_stack },	//210
    { "QPaintEngine::Type", 63, Smoke::t_enum|Smoke::tf_stack },	//211
    { "QPaintEvent*", 64, Smoke::t_class|Smoke::tf_ptr },	//212
    { "QPainter*", 65, Smoke::t_class|Smoke::tf_ptr },	//213
    { "QPainter::RenderHint", 65, Smoke::t_enum|Smoke::tf_stack },	//214
    { "QPainterPath", 66, Smoke::t_class|Smoke::tf_stack },	//215
    { "QPainterPath&", 66, Smoke::t_class|Smoke::tf_ref },	//216
    { "QPalette&", 67, Smoke::t_class|Smoke::tf_ref },	//217
    { "QPen&", 68, Smoke::t_class|Smoke::tf_ref },	//218
    { "QPicture&", 70, Smoke::t_class|Smoke::tf_ref },	//219
    { "QPinchGesture::ChangeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//220
    { "QPixmap", 71, Smoke::t_class|Smoke::tf_stack },	//221
    { "QPixmap&", 71, Smoke::t_class|Smoke::tf_ref },	//222
    { "QPoint", 72, Smoke::t_class|Smoke::tf_stack },	//223
    { "QPoint&", 72, Smoke::t_class|Smoke::tf_ref },	//224
    { "QPointF", 73, Smoke::t_class|Smoke::tf_stack },	//225
    { "QPointF&", 73, Smoke::t_class|Smoke::tf_ref },	//226
    { "QPolygon", 74, Smoke::t_class|Smoke::tf_stack },	//227
    { "QPolygon&", 74, Smoke::t_class|Smoke::tf_ref },	//228
    { "QPolygonF", 75, Smoke::t_class|Smoke::tf_stack },	//229
    { "QPolygonF&", 75, Smoke::t_class|Smoke::tf_ref },	//230
    { "QQuaternion&", 76, Smoke::t_class|Smoke::tf_ref },	//231
    { "QRect&", 77, Smoke::t_class|Smoke::tf_ref },	//232
    { "QRectF&", 78, Smoke::t_class|Smoke::tf_ref },	//233
    { "QRegExp&", 79, Smoke::t_class|Smoke::tf_ref },	//234
    { "QRegion", 80, Smoke::t_class|Smoke::tf_stack },	//235
    { "QRegion&", 80, Smoke::t_class|Smoke::tf_ref },	//236
    { "QResizeEvent*", 81, Smoke::t_class|Smoke::tf_ptr },	//237
    { "QShowEvent*", 82, Smoke::t_class|Smoke::tf_ptr },	//238
    { "QSize", 83, Smoke::t_class|Smoke::tf_stack },	//239
    { "QSize&", 83, Smoke::t_class|Smoke::tf_ref },	//240
    { "QSizeF&", 84, Smoke::t_class|Smoke::tf_ref },	//241
    { "QSizePolicy&", 85, Smoke::t_class|Smoke::tf_ref },	//242
    { "QSizePolicy::ControlType", 85, Smoke::t_enum|Smoke::tf_stack },	//243
    { "QSplitter&", 86, Smoke::t_class|Smoke::tf_ref },	//244
    { "QStandardItem&", 87, Smoke::t_class|Smoke::tf_ref },	//245
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//246
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//247
    { "QString::Null", 88, Smoke::t_class|Smoke::tf_stack },	//248
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//249
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//250
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//251
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//252
    { "QStyle&", 90, Smoke::t_class|Smoke::tf_ref },	//253
    { "QStyle::StateFlag", 90, Smoke::t_enum|Smoke::tf_stack },	//254
    { "QStyle::SubControl", 90, Smoke::t_enum|Smoke::tf_stack },	//255
    { "QStyleOptionButton::ButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//256
    { "QStyleOptionFrameV2::FrameFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//257
    { "QStyleOptionQ3ListViewItem::Q3ListViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//258
    { "QStyleOptionTab::CornerWidget", 0, Smoke::t_enum|Smoke::tf_stack },	//259
    { "QStyleOptionToolBar::ToolBarFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//260
    { "QStyleOptionToolButton::ToolButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//261
    { "QStyleOptionViewItemV2::ViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//262
    { "QTableWidgetItem&", 92, Smoke::t_class|Smoke::tf_ref },	//263
    { "QTabletEvent*", 93, Smoke::t_class|Smoke::tf_ptr },	//264
    { "QTextCodec*", 94, Smoke::t_class|Smoke::tf_ptr },	//265
    { "QTextCodec::ConversionFlag", 94, Smoke::t_enum|Smoke::tf_stack },	//266
    { "QTextDocument::FindFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//267
    { "QTextEdit::AutoFormattingFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//268
    { "QTextFormat&", 95, Smoke::t_class|Smoke::tf_ref },	//269
    { "QTextFormat::PageBreakFlag", 95, Smoke::t_enum|Smoke::tf_stack },	//270
    { "QTextItem::RenderFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//271
    { "QTextLength&", 96, Smoke::t_class|Smoke::tf_ref },	//272
    { "QTextOption::Flag", 0, Smoke::t_enum|Smoke::tf_stack },	//273
    { "QTextStream&", 97, Smoke::t_class|Smoke::tf_ref },	//274
    { "QTextStream&(*)(QTextStream&)", 97, Smoke::t_class|Smoke::tf_ref },	//275
    { "QTextStream::NumberFlag", 97, Smoke::t_enum|Smoke::tf_stack },	//276
    { "QTextStreamManipulator", 98, Smoke::t_class|Smoke::tf_stack },	//277
    { "QTime&", 100, Smoke::t_class|Smoke::tf_ref },	//278
    { "QTimerEvent*", 101, Smoke::t_class|Smoke::tf_ptr },	//279
    { "QTransform", 102, Smoke::t_class|Smoke::tf_stack },	//280
    { "QTransform&", 102, Smoke::t_class|Smoke::tf_ref },	//281
    { "QTreeWidgetItem&", 103, Smoke::t_class|Smoke::tf_ref },	//282
    { "QTreeWidgetItemIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//283
    { "QUrl&", 104, Smoke::t_class|Smoke::tf_ref },	//284
    { "QUrl::FormattingOption", 104, Smoke::t_enum|Smoke::tf_stack },	//285
    { "QUuid&", 105, Smoke::t_class|Smoke::tf_ref },	//286
    { "QVariant", 106, Smoke::t_class|Smoke::tf_stack },	//287
    { "QVariant&", 106, Smoke::t_class|Smoke::tf_ref },	//288
    { "QVariant::Type", 106, Smoke::t_enum|Smoke::tf_stack },	//289
    { "QVariant::Type&", 106, Smoke::t_enum|Smoke::tf_ref },	//290
    { "QVector2D&", 108, Smoke::t_class|Smoke::tf_ref },	//291
    { "QVector3D", 109, Smoke::t_class|Smoke::tf_stack },	//292
    { "QVector3D&", 109, Smoke::t_class|Smoke::tf_ref },	//293
    { "QVector4D", 110, Smoke::t_class|Smoke::tf_stack },	//294
    { "QVector4D&", 110, Smoke::t_class|Smoke::tf_ref },	//295
    { "QWheelEvent*", 111, Smoke::t_class|Smoke::tf_ptr },	//296
    { "QWidget*", 112, Smoke::t_class|Smoke::tf_ptr },	//297
    { "QWidget::RenderFlag", 112, Smoke::t_enum|Smoke::tf_stack },	//298
    { "QWizard::WizardOption", 0, Smoke::t_enum|Smoke::tf_stack },	//299
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//300
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//301
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//302
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//303
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//304
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//305
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//306
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//307
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//308
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//309
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//310
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//311
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//312
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//313
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//314
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//315
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//316
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//317
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//318
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//319
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//320
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//321
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//322
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//323
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//324
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//325
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//326
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//327
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//328
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//329
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//330
    { "Qt::HitTestAccuracy", 0, Smoke::t_enum|Smoke::tf_stack },	//331
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//332
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//333
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//334
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//335
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//336
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//337
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//338
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//339
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//340
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//341
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//342
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//343
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//344
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//345
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//346
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//347
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//348
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//349
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//350
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//351
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//352
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//353
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//354
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//355
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//356
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//357
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//358
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//359
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//360
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//361
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//362
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//363
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//364
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//365
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//366
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//367
    { "Qt::WhiteSpaceMode", 0, Smoke::t_enum|Smoke::tf_stack },	//368
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//369
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//370
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//371
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//372
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//373
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//374
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//375
    { "QtMsgType", 37, Smoke::t_enum|Smoke::tf_stack },	//376
    { "QtValidLicenseForActiveQtModule", 37, Smoke::t_enum|Smoke::tf_stack },	//377
    { "QtValidLicenseForCoreModule", 37, Smoke::t_enum|Smoke::tf_stack },	//378
    { "QtValidLicenseForDBusModule", 37, Smoke::t_enum|Smoke::tf_stack },	//379
    { "QtValidLicenseForDeclarativeModule", 37, Smoke::t_enum|Smoke::tf_stack },	//380
    { "QtValidLicenseForGuiModule", 37, Smoke::t_enum|Smoke::tf_stack },	//381
    { "QtValidLicenseForHelpModule", 37, Smoke::t_enum|Smoke::tf_stack },	//382
    { "QtValidLicenseForMultimediaModule", 37, Smoke::t_enum|Smoke::tf_stack },	//383
    { "QtValidLicenseForNetworkModule", 37, Smoke::t_enum|Smoke::tf_stack },	//384
    { "QtValidLicenseForOpenGLModule", 37, Smoke::t_enum|Smoke::tf_stack },	//385
    { "QtValidLicenseForOpenVGModule", 37, Smoke::t_enum|Smoke::tf_stack },	//386
    { "QtValidLicenseForQt3SupportLightModule", 37, Smoke::t_enum|Smoke::tf_stack },	//387
    { "QtValidLicenseForQt3SupportModule", 37, Smoke::t_enum|Smoke::tf_stack },	//388
    { "QtValidLicenseForScriptModule", 37, Smoke::t_enum|Smoke::tf_stack },	//389
    { "QtValidLicenseForScriptToolsModule", 37, Smoke::t_enum|Smoke::tf_stack },	//390
    { "QtValidLicenseForSqlModule", 37, Smoke::t_enum|Smoke::tf_stack },	//391
    { "QtValidLicenseForSvgModule", 37, Smoke::t_enum|Smoke::tf_stack },	//392
    { "QtValidLicenseForTestModule", 37, Smoke::t_enum|Smoke::tf_stack },	//393
    { "QtValidLicenseForXmlModule", 37, Smoke::t_enum|Smoke::tf_stack },	//394
    { "QtValidLicenseForXmlPatternsModule", 37, Smoke::t_enum|Smoke::tf_stack },	//395
    { "_XEvent*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//396
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//397
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//398
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//399
    { "const QBitArray&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//400
    { "const QBrush&", 5, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//401
    { "const QBrush*", 5, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//402
    { "const QByteArray", 6, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//403
    { "const QByteArray&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//404
    { "const QChar&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//405
    { "const QColor&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//406
    { "const QCursor&", 12, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//407
    { "const QDate&", 14, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//408
    { "const QDateTime&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//409
    { "const QDir&", 17, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//410
    { "const QEasingCurve&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//411
    { "const QEvent*", 23, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//412
    { "const QFont&", 25, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//413
    { "const QGLBuffer&", 27, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//414
    { "const QGLColormap&", 28, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//415
    { "const QGLContext*", 29, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//416
    { "const QGLFormat&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//417
    { "const QGLFramebufferObjectFormat&", 32, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//418
    { "const QGLWidget*", 36, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//419
    { "const QGenericMatrix<2,2,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//420
    { "const QGenericMatrix<2,2,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//421
    { "const QGenericMatrix<2,3,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//422
    { "const QGenericMatrix<2,3,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//423
    { "const QGenericMatrix<2,4,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//424
    { "const QGenericMatrix<2,4,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//425
    { "const QGenericMatrix<3,2,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//426
    { "const QGenericMatrix<3,2,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//427
    { "const QGenericMatrix<3,3,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//428
    { "const QGenericMatrix<3,3,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//429
    { "const QGenericMatrix<3,4,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//430
    { "const QGenericMatrix<3,4,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//431
    { "const QGenericMatrix<4,2,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//432
    { "const QGenericMatrix<4,2,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//433
    { "const QGenericMatrix<4,3,double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//434
    { "const QGenericMatrix<4,3,double>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//435
    { "const QHashDummyValue&", 40, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//436
    { "const QIcon&", 42, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//437
    { "const QImage&", 43, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//438
    { "const QItemSelectionRange&", 46, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//439
    { "const QKeySequence&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//440
    { "const QLatin1String&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//441
    { "const QLine&", 50, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//442
    { "const QLineF&", 51, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//443
    { "const QListWidgetItem&", 52, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//444
    { "const QLocale&", 53, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//445
    { "const QMargins&", 54, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//446
    { "const QMatrix&", 55, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//447
    { "const QMatrix4x4&", 56, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//448
    { "const QMatrix4x4*", 56, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//449
    { "const QMetaObject&", 57, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//450
    { "const QMetaObject*", 57, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//451
    { "const QModelIndex&", 58, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//452
    { "const QObject*", 61, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//453
    { "const QPainterPath&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//454
    { "const QPalette&", 67, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//455
    { "const QPen&", 68, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//456
    { "const QPersistentModelIndex&", 69, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//457
    { "const QPicture&", 70, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//458
    { "const QPixmap&", 71, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//459
    { "const QPoint", 72, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//460
    { "const QPoint&", 72, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//461
    { "const QPointF", 73, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//462
    { "const QPointF&", 73, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//463
    { "const QPolygon&", 74, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//464
    { "const QPolygonF&", 75, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//465
    { "const QQuaternion", 76, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//466
    { "const QQuaternion&", 76, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//467
    { "const QRect&", 77, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//468
    { "const QRectF&", 78, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//469
    { "const QRegExp&", 79, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//470
    { "const QRegExp*", 79, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//471
    { "const QRegion&", 80, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//472
    { "const QSize", 83, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//473
    { "const QSize&", 83, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//474
    { "const QSizeF", 84, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//475
    { "const QSizeF&", 84, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//476
    { "const QSizePolicy&", 85, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//477
    { "const QSplitter&", 86, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//478
    { "const QStandardItem&", 87, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//479
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//480
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//481
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//482
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//483
    { "const QStringRef&", 89, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//484
    { "const QStyleOption&", 91, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//485
    { "const QStyleOption::OptionType&", 91, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//486
    { "const QTableWidgetItem&", 92, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//487
    { "const QTextFormat&", 95, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//488
    { "const QTextLength&", 96, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//489
    { "const QTileRules&", 99, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//490
    { "const QTime&", 100, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//491
    { "const QTransform&", 102, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//492
    { "const QTreeWidgetItem&", 103, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//493
    { "const QUrl&", 104, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//494
    { "const QUuid&", 105, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//495
    { "const QVariant&", 106, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//496
    { "const QVariant::Type", 106, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//497
    { "const QVariantComparisonHelper&", 107, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//498
    { "const QVector2D", 108, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//499
    { "const QVector2D&", 108, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//500
    { "const QVector2D*", 108, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//501
    { "const QVector3D", 109, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//502
    { "const QVector3D&", 109, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//503
    { "const QVector3D*", 109, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//504
    { "const QVector4D", 110, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//505
    { "const QVector4D&", 110, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//506
    { "const QVector4D*", 110, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//507
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//508
    { "const float*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//509
    { "const float[2][2]", 0, Smoke::t_float|Smoke::tf_stack|Smoke::tf_const },	//510
    { "const float[3][3]", 0, Smoke::t_float|Smoke::tf_stack|Smoke::tf_const },	//511
    { "const float[4][4]", 0, Smoke::t_float|Smoke::tf_stack|Smoke::tf_const },	//512
    { "const int*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//513
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//514
    { "const unsigned int*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//515
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//516
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//517
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//518
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//519
    { "khronos_boolean_enum_t", 37, Smoke::t_enum|Smoke::tf_stack },	//520
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//521
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//522
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//523
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//524
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//525
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//526
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//527
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//528
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//529
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//530
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//531
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//532
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//533
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//534
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//535
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//536
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//537
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    211, 0,	//1  QPaintEngine::Type
    139, 0,	//3  QGLBuffer::Type
    414, 0,	//5  const QGLBuffer&
    140, 0,	//7  QGLBuffer::UsagePattern
    519, 535, 519, 0,	//9  int, void*, int
    519, 516, 519, 0,	//13  int, const void*, int
    516, 519, 0,	//17  const void*, int
    519, 0,	//20  int
    138, 0,	//22  QGLBuffer::Access
    415, 0,	//24  const QGLColormap&
    519, 515, 519, 0,	//26  int, const unsigned int*, int
    519, 528, 0,	//30  int, unsigned int
    519, 406, 0,	//33  int, const QColor&
    528, 0,	//36  unsigned int
    529, 0,	//38  unsigned long
    519, 515, 0,	//40  int, const unsigned int*
    417, 206, 0,	//43  const QGLFormat&, QPaintDevice*
    417, 0,	//46  const QGLFormat&
    416, 0,	//48  const QGLContext*
    416, 416, 0,	//50  const QGLContext*, const QGLContext*
    438, 528, 519, 68, 0,	//53  const QImage&, unsigned int, int, QFlags<QGLContext::BindOption>
    459, 528, 519, 68, 0,	//58  const QPixmap&, unsigned int, int, QFlags<QGLContext::BindOption>
    438, 528, 519, 0,	//63  const QImage&, unsigned int, int
    459, 528, 519, 0,	//67  const QPixmap&, unsigned int, int
    481, 0,	//71  const QString&
    469, 528, 528, 0,	//73  const QRectF&, unsigned int, unsigned int
    463, 528, 528, 0,	//77  const QPointF&, unsigned int, unsigned int
    417, 519, 0,	//81  const QGLFormat&, int
    397, 0,	//84  bool
    413, 519, 0,	//86  const QFont&, int
    406, 0,	//89  const QColor&
    206, 0,	//91  QPaintDevice*
    438, 0,	//93  const QImage&
    438, 528, 0,	//95  const QImage&, unsigned int
    459, 0,	//98  const QPixmap&
    459, 528, 0,	//100  const QPixmap&, unsigned int
    469, 528, 0,	//103  const QRectF&, unsigned int
    463, 528, 0,	//106  const QPointF&, unsigned int
    143, 0,	//109  QGLContext*
    67, 519, 0,	//111  QFlags<QGL::FormatOption>, int
    67, 0,	//114  QFlags<QGL::FormatOption>
    519, 519, 0,	//116  int, int
    148, 0,	//119  QGLFormat::OpenGLContextProfile
    474, 528, 0,	//121  const QSize&, unsigned int
    519, 519, 528, 0,	//124  int, int, unsigned int
    474, 151, 528, 528, 0,	//128  const QSize&, QGLFramebufferObject::Attachment, unsigned int, unsigned int
    519, 519, 151, 528, 528, 0,	//133  int, int, QGLFramebufferObject::Attachment, unsigned int, unsigned int
    474, 418, 0,	//139  const QSize&, const QGLFramebufferObjectFormat&
    519, 519, 418, 0,	//142  int, int, const QGLFramebufferObjectFormat&
    150, 468, 150, 468, 528, 528, 0,	//146  QGLFramebufferObject*, const QRect&, QGLFramebufferObject*, const QRect&, unsigned int, unsigned int
    207, 0,	//153  QPaintDevice::PaintDeviceMetric
    474, 0,	//155  const QSize&
    474, 151, 0,	//157  const QSize&, QGLFramebufferObject::Attachment
    474, 151, 528, 0,	//160  const QSize&, QGLFramebufferObject::Attachment, unsigned int
    519, 519, 151, 0,	//164  int, int, QGLFramebufferObject::Attachment
    519, 519, 151, 528, 0,	//168  int, int, QGLFramebufferObject::Attachment, unsigned int
    150, 468, 150, 468, 0,	//173  QGLFramebufferObject*, const QRect&, QGLFramebufferObject*, const QRect&
    150, 468, 150, 468, 528, 0,	//178  QGLFramebufferObject*, const QRect&, QGLFramebufferObject*, const QRect&, unsigned int
    418, 0,	//184  const QGLFramebufferObjectFormat&
    151, 0,	//186  QGLFramebufferObject::Attachment
    474, 417, 160, 0,	//188  const QSize&, const QGLFormat&, QGLWidget*
    519, 519, 417, 160, 0,	//192  int, int, const QGLFormat&, QGLWidget*
    474, 417, 0,	//197  const QSize&, const QGLFormat&
    519, 519, 417, 0,	//200  int, int, const QGLFormat&
    508, 0,	//204  const char*
    508, 508, 0,	//206  const char*, const char*
    508, 508, 519, 0,	//209  const char*, const char*, int
    201, 519, 536, 0,	//213  QMetaObject::Call, int, void**
    71, 204, 0,	//217  QFlags<QGLShader::ShaderTypeBit>, QObject*
    71, 416, 204, 0,	//220  QFlags<QGLShader::ShaderTypeBit>, const QGLContext*, QObject*
    404, 0,	//224  const QByteArray&
    71, 416, 0,	//226  QFlags<QGLShader::ShaderTypeBit>, const QGLContext*
    71, 0,	//229  QFlags<QGLShader::ShaderTypeBit>
    204, 0,	//231  QObject*
    416, 204, 0,	//233  const QGLContext*, QObject*
    157, 0,	//236  QGLShader*
    71, 508, 0,	//238  QFlags<QGLShader::ShaderTypeBit>, const char*
    71, 404, 0,	//241  QFlags<QGLShader::ShaderTypeBit>, const QByteArray&
    71, 481, 0,	//244  QFlags<QGLShader::ShaderTypeBit>, const QString&
    508, 519, 0,	//247  const char*, int
    404, 519, 0,	//250  const QByteArray&, int
    481, 519, 0,	//253  const QString&, int
    519, 518, 0,	//256  int, float
    519, 518, 518, 0,	//259  int, float, float
    519, 518, 518, 518, 0,	//263  int, float, float, float
    519, 518, 518, 518, 518, 0,	//268  int, float, float, float, float
    519, 500, 0,	//274  int, const QVector2D&
    519, 503, 0,	//277  int, const QVector3D&
    519, 506, 0,	//280  int, const QVector4D&
    519, 509, 519, 519, 0,	//283  int, const float*, int, int
    508, 518, 0,	//288  const char*, float
    508, 518, 518, 0,	//291  const char*, float, float
    508, 518, 518, 518, 0,	//295  const char*, float, float, float
    508, 518, 518, 518, 518, 0,	//300  const char*, float, float, float, float
    508, 500, 0,	//306  const char*, const QVector2D&
    508, 503, 0,	//309  const char*, const QVector3D&
    508, 506, 0,	//312  const char*, const QVector4D&
    508, 406, 0,	//315  const char*, const QColor&
    508, 509, 519, 519, 0,	//318  const char*, const float*, int, int
    519, 501, 519, 0,	//323  int, const QVector2D*, int
    519, 504, 519, 0,	//327  int, const QVector3D*, int
    519, 507, 519, 0,	//331  int, const QVector4D*, int
    519, 528, 516, 519, 519, 0,	//335  int, unsigned int, const void*, int, int
    508, 501, 519, 0,	//341  const char*, const QVector2D*, int
    508, 504, 519, 0,	//345  const char*, const QVector3D*, int
    508, 507, 519, 0,	//349  const char*, const QVector4D*, int
    508, 528, 516, 519, 519, 0,	//353  const char*, unsigned int, const void*, int, int
    519, 528, 519, 519, 519, 0,	//359  int, unsigned int, int, int, int
    508, 528, 519, 519, 519, 0,	//365  const char*, unsigned int, int, int, int
    519, 461, 0,	//371  int, const QPoint&
    519, 463, 0,	//374  int, const QPointF&
    519, 474, 0,	//377  int, const QSize&
    519, 476, 0,	//380  int, const QSizeF&
    519, 420, 0,	//383  int, const QGenericMatrix<2,2,double>&
    519, 422, 0,	//386  int, const QGenericMatrix<2,3,double>&
    519, 424, 0,	//389  int, const QGenericMatrix<2,4,double>&
    519, 426, 0,	//392  int, const QGenericMatrix<3,2,double>&
    519, 428, 0,	//395  int, const QGenericMatrix<3,3,double>&
    519, 430, 0,	//398  int, const QGenericMatrix<3,4,double>&
    519, 432, 0,	//401  int, const QGenericMatrix<4,2,double>&
    519, 434, 0,	//404  int, const QGenericMatrix<4,3,double>&
    519, 448, 0,	//407  int, const QMatrix4x4&
    519, 510, 0,	//410  int, const float[2][2]
    519, 511, 0,	//413  int, const float[3][3]
    519, 512, 0,	//416  int, const float[4][4]
    519, 492, 0,	//419  int, const QTransform&
    508, 528, 0,	//422  const char*, unsigned int
    508, 461, 0,	//425  const char*, const QPoint&
    508, 463, 0,	//428  const char*, const QPointF&
    508, 474, 0,	//431  const char*, const QSize&
    508, 476, 0,	//434  const char*, const QSizeF&
    508, 420, 0,	//437  const char*, const QGenericMatrix<2,2,double>&
    508, 422, 0,	//440  const char*, const QGenericMatrix<2,3,double>&
    508, 424, 0,	//443  const char*, const QGenericMatrix<2,4,double>&
    508, 426, 0,	//446  const char*, const QGenericMatrix<3,2,double>&
    508, 428, 0,	//449  const char*, const QGenericMatrix<3,3,double>&
    508, 430, 0,	//452  const char*, const QGenericMatrix<3,4,double>&
    508, 432, 0,	//455  const char*, const QGenericMatrix<4,2,double>&
    508, 434, 0,	//458  const char*, const QGenericMatrix<4,3,double>&
    508, 448, 0,	//461  const char*, const QMatrix4x4&
    508, 510, 0,	//464  const char*, const float[2][2]
    508, 511, 0,	//467  const char*, const float[3][3]
    508, 512, 0,	//470  const char*, const float[4][4]
    508, 492, 0,	//473  const char*, const QTransform&
    519, 513, 519, 0,	//476  int, const int*, int
    519, 421, 519, 0,	//480  int, const QGenericMatrix<2,2,double>*, int
    519, 423, 519, 0,	//484  int, const QGenericMatrix<2,3,double>*, int
    519, 425, 519, 0,	//488  int, const QGenericMatrix<2,4,double>*, int
    519, 427, 519, 0,	//492  int, const QGenericMatrix<3,2,double>*, int
    519, 429, 519, 0,	//496  int, const QGenericMatrix<3,3,double>*, int
    519, 431, 519, 0,	//500  int, const QGenericMatrix<3,4,double>*, int
    519, 433, 519, 0,	//504  int, const QGenericMatrix<4,2,double>*, int
    519, 435, 519, 0,	//508  int, const QGenericMatrix<4,3,double>*, int
    519, 449, 519, 0,	//512  int, const QMatrix4x4*, int
    508, 513, 519, 0,	//516  const char*, const int*, int
    508, 515, 519, 0,	//520  const char*, const unsigned int*, int
    508, 421, 519, 0,	//524  const char*, const QGenericMatrix<2,2,double>*, int
    508, 423, 519, 0,	//528  const char*, const QGenericMatrix<2,3,double>*, int
    508, 425, 519, 0,	//532  const char*, const QGenericMatrix<2,4,double>*, int
    508, 427, 519, 0,	//536  const char*, const QGenericMatrix<3,2,double>*, int
    508, 429, 519, 0,	//540  const char*, const QGenericMatrix<3,3,double>*, int
    508, 431, 519, 0,	//544  const char*, const QGenericMatrix<3,4,double>*, int
    508, 433, 519, 0,	//548  const char*, const QGenericMatrix<4,2,double>*, int
    508, 435, 519, 0,	//552  const char*, const QGenericMatrix<4,3,double>*, int
    508, 449, 519, 0,	//556  const char*, const QMatrix4x4*, int
    519, 509, 519, 0,	//560  int, const float*, int
    519, 501, 0,	//564  int, const QVector2D*
    519, 504, 0,	//567  int, const QVector3D*
    519, 507, 0,	//570  int, const QVector4D*
    519, 528, 516, 519, 0,	//573  int, unsigned int, const void*, int
    508, 509, 519, 0,	//578  const char*, const float*, int
    508, 501, 0,	//582  const char*, const QVector2D*
    508, 504, 0,	//585  const char*, const QVector3D*
    508, 507, 0,	//588  const char*, const QVector4D*
    508, 528, 516, 519, 0,	//591  const char*, unsigned int, const void*, int
    519, 528, 519, 519, 0,	//596  int, unsigned int, int, int
    508, 528, 519, 519, 0,	//601  const char*, unsigned int, int, int
    297, 419, 130, 0,	//606  QWidget*, const QGLWidget*, QFlags<Qt::WindowType>
    143, 297, 419, 130, 0,	//610  QGLContext*, QWidget*, const QGLWidget*, QFlags<Qt::WindowType>
    417, 297, 419, 130, 0,	//615  const QGLFormat&, QWidget*, const QGLWidget*, QFlags<Qt::WindowType>
    143, 416, 397, 0,	//620  QGLContext*, const QGLContext*, bool
    519, 519, 397, 0,	//624  int, int, bool
    519, 519, 481, 413, 519, 0,	//628  int, int, const QString&, const QFont&, int
    517, 517, 517, 481, 413, 519, 0,	//634  double, double, double, const QString&, const QFont&, int
    44, 0,	//641  QEvent*
    212, 0,	//643  QPaintEvent*
    237, 0,	//645  QResizeEvent*
    297, 0,	//647  QWidget*
    297, 419, 0,	//649  QWidget*, const QGLWidget*
    143, 297, 0,	//652  QGLContext*, QWidget*
    143, 297, 419, 0,	//655  QGLContext*, QWidget*, const QGLWidget*
    417, 297, 0,	//659  const QGLFormat&, QWidget*
    417, 297, 419, 0,	//662  const QGLFormat&, QWidget*, const QGLWidget*
    143, 416, 0,	//666  QGLContext*, const QGLContext*
    519, 519, 481, 0,	//669  int, int, const QString&
    519, 519, 481, 413, 0,	//673  int, int, const QString&, const QFont&
    517, 517, 517, 481, 0,	//678  double, double, double, const QString&
    517, 517, 517, 481, 413, 0,	//683  double, double, double, const QString&, const QFont&
    413, 0,	//689  const QFont&
    31, 519, 0,	//691  QDateTimeEdit::Section, int
    484, 484, 0,	//694  const QStringRef&, const QStringRef&
    530, 0,	//697  unsigned long long
    517, 0,	//699  double
    266, 519, 0,	//701  QTextCodec::ConversionFlag, int
    448, 448, 0,	//704  const QMatrix4x4&, const QMatrix4x4&
    332, 519, 0,	//707  Qt::ImageConversionFlag, int
    503, 503, 0,	//710  const QVector3D&, const QVector3D&
    500, 500, 0,	//713  const QVector2D&, const QVector2D&
    535, 516, 525, 0,	//716  void*, const void*, size_t
    28, 173, 0,	//720  QDataStream&, QIcon&
    32, 79, 0,	//723  QDebug, QFlags<QIODevice::OpenModeFlag>
    463, 447, 0,	//726  const QPointF&, const QMatrix&
    209, 89, 0,	//729  QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>
    484, 481, 0,	//732  const QStringRef&, const QString&
    474, 474, 0,	//735  const QSize&, const QSize&
    28, 440, 0,	//738  QDataStream&, const QKeySequence&
    268, 268, 0,	//741  QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag
    28, 245, 0,	//744  QDataStream&, QStandardItem&
    508, 404, 0,	//747  const char*, const QByteArray&
    256, 256, 0,	//750  QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature
    198, 86, 0,	//753  QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>
    46, 63, 0,	//756  QFile::Permission, QFlags<QFile::Permission>
    28, 231, 0,	//759  QDataStream&, QQuaternion&
    463, 463, 0,	//762  const QPointF&, const QPointF&
    28, 465, 0,	//765  QDataStream&, const QPolygonF&
    517, 517, 0,	//768  double, double
    28, 241, 0,	//771  QDataStream&, QSizeF&
    404, 508, 0,	//774  const QByteArray&, const char*
    518, 0,	//777  float
    524, 0,	//779  signed char
    163, 519, 0,	//781  QGraphicsEffect::ChangeFlag, int
    481, 484, 0,	//784  const QString&, const QStringRef&
    47, 519, 0,	//787  QFileDialog::Option, int
    19, 0,	//790  QChar
    28, 472, 0,	//792  QDataStream&, const QRegion&
    200, 200, 0,	//795  QMessageBox::StandardButton, QMessageBox::StandardButton
    448, 461, 0,	//798  const QMatrix4x4&, const QPoint&
    255, 96, 0,	//801  QStyle::SubControl, QFlags<QStyle::SubControl>
    28, 489, 0,	//804  QDataStream&, const QTextLength&
    32, 401, 0,	//807  QDebug, const QBrush&
    161, 161, 0,	//810  QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag
    484, 441, 0,	//813  const QStringRef&, const QLatin1String&
    448, 506, 0,	//816  const QMatrix4x4&, const QVector4D&
    19, 19, 0,	//819  QChar, QChar
    32, 467, 0,	//822  QDebug, const QQuaternion&
    365, 365, 0,	//825  Qt::TouchPointState, Qt::TouchPointState
    448, 0,	//828  const QMatrix4x4&
    494, 0,	//830  const QUrl&
    298, 519, 0,	//832  QWidget::RenderFlag, int
    448, 517, 0,	//835  const QMatrix4x4&, double
    28, 455, 0,	//838  QDataStream&, const QPalette&
    32, 494, 0,	//841  QDebug, const QUrl&
    28, 24, 0,	//844  QDataStream&, QColor&
    28, 263, 0,	//847  QDataStream&, QTableWidgetItem&
    194, 85, 0,	//850  QMainWindow::DockOption, QFlags<QMainWindow::DockOption>
    248, 481, 0,	//853  QString::Null, const QString&
    32, 166, 0,	//856  QDebug, QGraphicsItem::GraphicsItemFlag
    32, 417, 0,	//859  QDebug, const QGLFormat&
    298, 113, 0,	//862  QWidget::RenderFlag, QFlags<QWidget::RenderFlag>
    362, 362, 0,	//865  Qt::ToolBarArea, Qt::ToolBarArea
    170, 519, 0,	//868  QGraphicsView::OptimizationFlag, int
    193, 193, 0,	//871  QLocale::NumberOption, QLocale::NumberOption
    373, 373, 0,	//874  Qt::WindowType, Qt::WindowType
    517, 476, 0,	//877  double, const QSizeF&
    467, 467, 0,	//880  const QQuaternion&, const QQuaternion&
    34, 519, 0,	//883  QDir::Filter, int
    255, 255, 0,	//886  QStyle::SubControl, QStyle::SubControl
    461, 461, 0,	//889  const QPoint&, const QPoint&
    28, 469, 0,	//892  QDataStream&, const QRectF&
    340, 519, 0,	//895  Qt::KeyboardModifier, int
    359, 126, 0,	//898  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    198, 519, 0,	//901  QMdiArea::AreaOption, int
    492, 517, 0,	//904  const QTransform&, double
    2, 49, 0,	//907  QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>
    398, 0,	//910  char
    299, 299, 0,	//912  QWizard::WizardOption, QWizard::WizardOption
    276, 110, 0,	//915  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    273, 519, 0,	//918  QTextOption::Flag, int
    32, 446, 0,	//921  QDebug, const QMargins&
    285, 519, 0,	//924  QUrl::FormattingOption, int
    46, 519, 0,	//927  QFile::Permission, int
    161, 72, 0,	//930  QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>
    461, 517, 0,	//933  const QPoint&, double
    213, 519, 519, 519, 519, 455, 397, 402, 0,	//936  QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*
    213, 519, 519, 519, 519, 455, 0,	//945  QPainter*, int, int, int, int, const QPalette&
    213, 519, 519, 519, 519, 455, 397, 0,	//952  QPainter*, int, int, int, int, const QPalette&, bool
    28, 492, 0,	//960  QDataStream&, const QTransform&
    36, 59, 0,	//963  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    476, 476, 0,	//966  const QSizeF&, const QSizeF&
    503, 448, 0,	//969  const QVector3D&, const QMatrix4x4&
    506, 506, 0,	//972  const QVector4D&, const QVector4D&
    32, 463, 0,	//975  QDebug, const QPointF&
    47, 64, 0,	//978  QFileDialog::Option, QFlags<QFileDialog::Option>
    28, 459, 0,	//981  QDataStream&, const QPixmap&
    340, 122, 0,	//984  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    299, 519, 0,	//987  QWizard::WizardOption, int
    32, 443, 0,	//990  QDebug, const QLineF&
    32, 409, 0,	//993  QDebug, const QDateTime&
    37, 60, 0,	//996  QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>
    519, 519, 519, 0,	//999  int, int, int
    169, 169, 0,	//1003  QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag
    144, 68, 0,	//1006  QGLContext::BindOption, QFlags<QGLContext::BindOption>
    28, 458, 0,	//1009  QDataStream&, const QPicture&
    285, 285, 0,	//1012  QUrl::FormattingOption, QUrl::FormattingOption
    365, 128, 0,	//1015  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    332, 332, 0,	//1018  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    210, 519, 0,	//1021  QPaintEngine::PaintEngineFeature, int
    2, 2, 0,	//1024  QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger
    193, 519, 0,	//1027  QLocale::NumberOption, int
    514, 519, 0,	//1030  const unsigned char*, int
    508, 508, 528, 0,	//1033  const char*, const char*, unsigned int
    441, 484, 0,	//1037  const QLatin1String&, const QStringRef&
    181, 183, 0,	//1040  QKeyEvent*, QKeySequence::StandardKey
    258, 258, 0,	//1043  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature
    274, 244, 0,	//1046  QTextStream&, QSplitter&
    439, 0,	//1049  const QItemSelectionRange&
    322, 322, 0,	//1051  Qt::DropAction, Qt::DropAction
    214, 91, 0,	//1054  QPainter::RenderHint, QFlags<QPainter::RenderHint>
    32, 461, 0,	//1057  QDebug, const QPoint&
    28, 192, 0,	//1060  QDataStream&, QLocale&
    481, 19, 0,	//1063  const QString&, QChar
    248, 248, 0,	//1066  QString::Null, QString::Null
    10, 52, 0,	//1069  QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>
    158, 519, 0,	//1072  QGLShader::ShaderTypeBit, int
    514, 527, 519, 0,	//1075  const unsigned char*, unsigned char*, int
    257, 98, 0,	//1079  QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>
    266, 266, 0,	//1082  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    347, 347, 0,	//1085  Qt::Orientation, Qt::Orientation
    155, 155, 0,	//1088  QGLFunctions::OpenGLFeature, QGLFunctions::OpenGLFeature
    535, 525, 525, 525, 0,	//1091  void*, size_t, size_t, size_t
    28, 407, 0,	//1096  QDataStream&, const QCursor&
    28, 217, 0,	//1099  QDataStream&, QPalette&
    362, 127, 0,	//1102  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    268, 106, 0,	//1105  QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>
    468, 468, 0,	//1108  const QRect&, const QRect&
    45, 62, 0,	//1111  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    400, 400, 0,	//1114  const QBitArray&, const QBitArray&
    200, 88, 0,	//1117  QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>
    404, 404, 0,	//1120  const QByteArray&, const QByteArray&
    535, 525, 0,	//1123  void*, size_t
    220, 92, 0,	//1126  QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>
    28, 447, 0,	//1129  QDataStream&, const QMatrix&
    28, 445, 0,	//1132  QDataStream&, const QLocale&
    32, 411, 0,	//1135  QDebug, const QEasingCurve&
    534, 0,	//1138  void(*)(QtMsgType,const char*)
    3, 519, 0,	//1140  QAbstractPrintDialog::PrintDialogOption, int
    452, 0,	//1143  const QModelIndex&
    31, 31, 0,	//1145  QDateTimeEdit::Section, QDateTimeEdit::Section
    262, 103, 0,	//1148  QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>
    32, 412, 0,	//1151  QDebug, const QEvent*
    28, 30, 0,	//1154  QDataStream&, QDateTime&
    15, 15, 0,	//1157  QBool, QBool
    163, 163, 0,	//1160  QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag
    508, 484, 0,	//1163  const char*, const QStringRef&
    133, 519, 0,	//1166  QFontComboBox::FontFilter, int
    362, 519, 0,	//1169  Qt::ToolBarArea, int
    161, 519, 0,	//1172  QGestureRecognizer::ResultFlag, int
    176, 176, 0,	//1175  QImageIOPlugin::Capability, QImageIOPlugin::Capability
    135, 67, 0,	//1178  QGL::FormatOption, QFlags<QGL::FormatOption>
    28, 218, 0,	//1181  QDataStream&, QPen&
    442, 492, 0,	//1184  const QLine&, const QTransform&
    32, 465, 0,	//1187  QDebug, const QPolygonF&
    334, 519, 0,	//1190  Qt::InputMethodHint, int
    19, 481, 0,	//1193  QChar, const QString&
    259, 100, 0,	//1196  QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>
    249, 519, 0,	//1199  QString::SectionFlag, int
    144, 519, 0,	//1202  QGLContext::BindOption, int
    162, 73, 0,	//1205  QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>
    184, 519, 0,	//1208  QLibrary::LoadHint, int
    32, 165, 0,	//1211  QDebug, QGraphicsItem::GraphicsItemChange
    28, 284, 0,	//1214  QDataStream&, QUrl&
    467, 0,	//1217  const QQuaternion&
    522, 0,	//1219  long long
    481, 248, 0,	//1221  const QString&, QString::Null
    134, 134, 0,	//1224  QFontDialog::FontDialogOption, QFontDialog::FontDialogOption
    492, 492, 0,	//1227  const QTransform&, const QTransform&
    194, 519, 0,	//1230  QMainWindow::DockOption, int
    28, 16, 0,	//1233  QDataStream&, QBrush&
    1, 519, 0,	//1236  QAbstractFileEngine::FileFlag, int
    266, 104, 0,	//1239  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    454, 447, 0,	//1242  const QPainterPath&, const QMatrix&
    334, 120, 0,	//1245  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    149, 519, 0,	//1248  QGLFormat::OpenGLVersionFlag, int
    194, 194, 0,	//1251  QMainWindow::DockOption, QMainWindow::DockOption
    299, 114, 0,	//1254  QWizard::WizardOption, QFlags<QWizard::WizardOption>
    28, 242, 0,	//1257  QDataStream&, QSizePolicy&
    373, 130, 0,	//1260  Qt::WindowType, QFlags<Qt::WindowType>
    213, 519, 519, 519, 519, 406, 519, 402, 0,	//1263  QPainter*, int, int, int, int, const QColor&, int, const QBrush*
    213, 519, 519, 519, 519, 406, 0,	//1272  QPainter*, int, int, int, int, const QColor&
    213, 519, 519, 519, 519, 406, 519, 0,	//1279  QPainter*, int, int, int, int, const QColor&, int
    467, 517, 0,	//1287  const QQuaternion&, double
    345, 345, 0,	//1290  Qt::MouseButton, Qt::MouseButton
    399, 508, 0,	//1293  char*, const char*
    220, 220, 0,	//1296  QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag
    472, 447, 0,	//1299  const QRegion&, const QMatrix&
    300, 300, 0,	//1302  Qt::AlignmentFlag, Qt::AlignmentFlag
    461, 0,	//1305  const QPoint&
    322, 519, 0,	//1307  Qt::DropAction, int
    28, 491, 0,	//1310  QDataStream&, const QTime&
    35, 519, 0,	//1313  QDir::SortFlag, int
    446, 446, 0,	//1316  const QMargins&, const QMargins&
    213, 468, 455, 397, 519, 519, 402, 0,	//1319  QPainter*, const QRect&, const QPalette&, bool, int, int, const QBrush*
    213, 468, 455, 0,	//1327  QPainter*, const QRect&, const QPalette&
    213, 468, 455, 397, 0,	//1331  QPainter*, const QRect&, const QPalette&, bool
    213, 468, 455, 397, 519, 0,	//1336  QPainter*, const QRect&, const QPalette&, bool, int
    213, 468, 455, 397, 519, 519, 0,	//1342  QPainter*, const QRect&, const QPalette&, bool, int, int
    28, 454, 0,	//1349  QDataStream&, const QPainterPath&
    506, 448, 0,	//1352  const QVector4D&, const QMatrix4x4&
    267, 519, 0,	//1355  QTextDocument::FindFlag, int
    32, 439, 0,	//1358  QDebug, const QItemSelectionRange&
    205, 0,	//1361  QObject*(*)()
    37, 37, 0,	//1363  QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature
    32, 440, 0,	//1366  QDebug, const QKeySequence&
    213, 468, 446, 459, 0,	//1369  QPainter*, const QRect&, const QMargins&, const QPixmap&
    506, 517, 0,	//1374  const QVector4D&, double
    274, 478, 0,	//1377  QTextStream&, const QSplitter&
    343, 343, 0,	//1380  Qt::MatchFlag, Qt::MatchFlag
    525, 0,	//1383  size_t
    320, 116, 0,	//1385  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    28, 251, 0,	//1388  QDataStream&, QStringList&
    260, 260, 0,	//1391  QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature
    180, 82, 0,	//1394  QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>
    28, 503, 0,	//1397  QDataStream&, const QVector3D&
    32, 497, 0,	//1400  QDebug, const QVariant::Type
    320, 519, 0,	//1403  Qt::DockWidgetArea, int
    271, 108, 0,	//1406  QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>
    28, 500, 0,	//1409  QDataStream&, const QVector2D&
    28, 401, 0,	//1412  QDataStream&, const QBrush&
    213, 468, 455, 397, 402, 0,	//1415  QPainter*, const QRect&, const QPalette&, bool, const QBrush*
    199, 519, 0,	//1421  QMdiSubWindow::SubWindowOption, int
    521, 0,	//1424  long
    28, 493, 0,	//1426  QDataStream&, const QTreeWidgetItem&
    531, 0,	//1429  unsigned short
    270, 270, 0,	//1431  QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag
    28, 188, 0,	//1434  QDataStream&, QLineF&
    209, 209, 0,	//1437  QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag
    28, 438, 0,	//1440  QDataStream&, const QImage&
    46, 46, 0,	//1443  QFile::Permission, QFile::Permission
    178, 81, 0,	//1446  QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>
    213, 468, 455, 397, 519, 402, 0,	//1449  QPainter*, const QRect&, const QPalette&, bool, int, const QBrush*
    28, 240, 0,	//1456  QDataStream&, QSize&
    28, 182, 0,	//1459  QDataStream&, QKeySequence&
    259, 259, 0,	//1462  QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget
    33, 519, 0,	//1465  QDialogButtonBox::StandardButton, int
    270, 107, 0,	//1468  QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>
    457, 0,	//1471  const QPersistentModelIndex&
    28, 506, 0,	//1473  QDataStream&, const QVector4D&
    32, 472, 0,	//1476  QDebug, const QRegion&
    28, 437, 0,	//1479  QDataStream&, const QIcon&
    28, 481, 0,	//1482  QDataStream&, const QString&
    28, 293, 0,	//1485  QDataStream&, QVector3D&
    28, 409, 0,	//1488  QDataStream&, const QDateTime&
    158, 71, 0,	//1491  QGLShader::ShaderTypeBit, QFlags<QGLShader::ShaderTypeBit>
    213, 519, 519, 519, 519, 455, 397, 519, 402, 0,	//1494  QPainter*, int, int, int, int, const QPalette&, bool, int, const QBrush*
    213, 519, 519, 519, 519, 455, 397, 519, 0,	//1504  QPainter*, int, int, int, int, const QPalette&, bool, int
    453, 481, 450, 0,	//1513  const QObject*, const QString&, const QMetaObject&
    249, 249, 0,	//1517  QString::SectionFlag, QString::SectionFlag
    28, 291, 0,	//1520  QDataStream&, QVector2D&
    200, 519, 0,	//1523  QMessageBox::StandardButton, int
    500, 517, 0,	//1526  const QVector2D&, double
    257, 257, 0,	//1529  QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature
    463, 517, 0,	//1532  const QPointF&, double
    397, 15, 0,	//1535  bool, QBool
    170, 170, 0,	//1538  QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag
    178, 178, 0,	//1541  QInputDialog::InputDialogOption, QInputDialog::InputDialogOption
    503, 517, 0,	//1544  const QVector3D&, double
    180, 180, 0,	//1547  QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag
    399, 508, 528, 0,	//1550  char*, const char*, unsigned int
    517, 500, 0,	//1554  double, const QVector2D&
    506, 0,	//1557  const QVector4D&
    283, 111, 0,	//1559  QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>
    28, 197, 0,	//1562  QDataStream&, QMatrix4x4&
    260, 101, 0,	//1565  QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>
    268, 519, 0,	//1568  QTextEdit::AutoFormattingFlag, int
    259, 519, 0,	//1571  QStyleOptionTab::CornerWidget, int
    28, 461, 0,	//1574  QDataStream&, const QPoint&
    28, 288, 0,	//1577  QDataStream&, QVariant&
    463, 448, 0,	//1580  const QPointF&, const QMatrix4x4&
    345, 519, 0,	//1583  Qt::MouseButton, int
    28, 175, 0,	//1586  QDataStream&, QImage&
    463, 0,	//1589  const QPointF&
    32, 485, 0,	//1591  QDebug, const QStyleOption&
    3, 50, 0,	//1594  QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>
    28, 219, 0,	//1597  QDataStream&, QPicture&
    25, 519, 0,	//1600  QColorDialog::ColorDialogOption, int
    135, 519, 0,	//1603  QGL::FormatOption, int
    32, 457, 0,	//1606  QDebug, const QPersistentModelIndex&
    28, 295, 0,	//1609  QDataStream&, QVector4D&
    465, 447, 0,	//1612  const QPolygonF&, const QMatrix&
    25, 25, 0,	//1615  QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption
    508, 508, 508, 519, 0,	//1618  const char*, const char*, const char*, int
    518, 461, 0,	//1623  float, const QPoint&
    47, 47, 0,	//1626  QFileDialog::Option, QFileDialog::Option
    273, 273, 0,	//1629  QTextOption::Flag, QTextOption::Flag
    28, 448, 0,	//1632  QDataStream&, const QMatrix4x4&
    347, 125, 0,	//1635  Qt::Orientation, QFlags<Qt::Orientation>
    447, 447, 0,	//1638  const QMatrix&, const QMatrix&
    45, 519, 0,	//1641  QEventLoop::ProcessEventsFlag, int
    469, 469, 0,	//1644  const QRectF&, const QRectF&
    519, 519, 519, 519, 0,	//1647  int, int, int, int
    28, 281, 0,	//1652  QDataStream&, QTransform&
    32, 167, 0,	//1655  QDebug, QGraphicsObject*
    28, 479, 0,	//1658  QDataStream&, const QStandardItem&
    332, 119, 0,	//1661  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    517, 506, 0,	//1664  double, const QVector4D&
    10, 519, 0,	//1667  QAccessible::RelationFlag, int
    199, 87, 0,	//1670  QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>
    28, 482, 0,	//1673  QDataStream&, const QStringList&
    32, 448, 0,	//1676  QDebug, const QMatrix4x4&
    404, 398, 0,	//1679  const QByteArray&, char
    36, 36, 0,	//1682  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    34, 57, 0,	//1685  QDir::Filter, QFlags<QDir::Filter>
    28, 224, 0,	//1688  QDataStream&, QPoint&
    476, 517, 0,	//1691  const QSizeF&, double
    28, 408, 0,	//1694  QDataStream&, const QDate&
    262, 519, 0,	//1697  QStyleOptionViewItemV2::ViewItemFeature, int
    533, 0,	//1700  void(*)()
    243, 243, 0,	//1702  QSizePolicy::ControlType, QSizePolicy::ControlType
    514, 519, 519, 0,	//1705  const unsigned char*, int, int
    28, 442, 0,	//1709  QDataStream&, const QLine&
    28, 195, 0,	//1712  QDataStream&, QMatrix&
    33, 33, 0,	//1715  QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton
    28, 247, 0,	//1718  QDataStream&, QString&
    254, 254, 0,	//1721  QStyle::StateFlag, QStyle::StateFlag
    28, 444, 0,	//1724  QDataStream&, const QListWidgetItem&
    257, 519, 0,	//1727  QStyleOptionFrameV2::FrameFeature, int
    155, 70, 0,	//1730  QGLFunctions::OpenGLFeature, QFlags<QGLFunctions::OpenGLFeature>
    535, 0,	//1733  void*
    32, 75, 0,	//1735  QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>
    443, 447, 0,	//1738  const QLineF&, const QMatrix&
    28, 488, 0,	//1741  QDataStream&, const QTextFormat&
    337, 519, 0,	//1744  Qt::ItemFlag, int
    28, 282, 0,	//1747  QDataStream&, QTreeWidgetItem&
    32, 410, 0,	//1750  QDebug, const QDir&
    274, 275, 0,	//1753  QTextStream&, QTextStream&(*)(QTextStream&)
    32, 456, 0,	//1756  QDebug, const QPen&
    517, 467, 0,	//1759  double, const QQuaternion&
    417, 417, 0,	//1762  const QGLFormat&, const QGLFormat&
    32, 452, 0,	//1765  QDebug, const QModelIndex&
    166, 75, 0,	//1768  QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>
    32, 503, 0,	//1771  QDebug, const QVector3D&
    271, 271, 0,	//1774  QTextItem::RenderFlag, QTextItem::RenderFlag
    45, 45, 0,	//1777  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    400, 0,	//1780  const QBitArray&
    32, 500, 0,	//1782  QDebug, const QVector2D&
    176, 80, 0,	//1785  QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>
    32, 491, 0,	//1788  QDebug, const QTime&
    274, 277, 0,	//1791  QTextStream&, QTextStreamManipulator
    32, 506, 0,	//1794  QDebug, const QVector4D&
    28, 269, 0,	//1797  QDataStream&, QTextFormat&
    327, 118, 0,	//1800  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    484, 508, 0,	//1803  const QStringRef&, const char*
    261, 519, 0,	//1806  QStyleOptionToolButton::ToolButtonFeature, int
    243, 93, 0,	//1809  QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>
    298, 298, 0,	//1812  QWidget::RenderFlag, QWidget::RenderFlag
    28, 14, 0,	//1815  QDataStream&, QBitArray&
    28, 228, 0,	//1818  QDataStream&, QPolygon&
    28, 236, 0,	//1821  QDataStream&, QRegion&
    4, 4, 0,	//1824  QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag
    28, 477, 0,	//1827  QDataStream&, const QSizePolicy&
    261, 261, 0,	//1830  QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature
    37, 519, 0,	//1833  QDockWidget::DockWidgetFeature, int
    525, 525, 0,	//1836  size_t, size_t
    168, 76, 0,	//1839  QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>
    144, 144, 0,	//1842  QGLContext::BindOption, QGLContext::BindOption
    461, 492, 0,	//1845  const QPoint&, const QTransform&
    32, 476, 0,	//1848  QDebug, const QSizeF&
    327, 519, 0,	//1851  Qt::GestureFlag, int
    398, 404, 0,	//1854  char, const QByteArray&
    254, 519, 0,	//1857  QStyle::StateFlag, int
    28, 496, 0,	//1860  QDataStream&, const QVariant&
    261, 102, 0,	//1863  QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>
    32, 496, 0,	//1866  QDebug, const QVariant&
    11, 11, 0,	//1869  QAccessible::StateFlag, QAccessible::StateFlag
    214, 214, 0,	//1872  QPainter::RenderHint, QPainter::RenderHint
    372, 519, 0,	//1875  Qt::WindowState, int
    28, 278, 0,	//1878  QDataStream&, QTime&
    28, 222, 0,	//1881  QDataStream&, QPixmap&
    31, 55, 0,	//1884  QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>
    273, 109, 0,	//1887  QTextOption::Flag, QFlags<QTextOption::Flag>
    32, 57, 0,	//1890  QDebug, QFlags<QDir::Filter>
    340, 340, 0,	//1893  Qt::KeyboardModifier, Qt::KeyboardModifier
    517, 463, 0,	//1896  double, const QPointF&
    28, 43, 0,	//1899  QDataStream&, QEasingCurve&
    472, 492, 0,	//1902  const QRegion&, const QTransform&
    322, 117, 0,	//1905  Qt::DropAction, QFlags<Qt::DropAction>
    149, 69, 0,	//1908  QGLFormat::OpenGLVersionFlag, QFlags<QGLFormat::OpenGLVersionFlag>
    474, 517, 0,	//1911  const QSize&, double
    32, 408, 0,	//1914  QDebug, const QDate&
    454, 492, 0,	//1917  const QPainterPath&, const QTransform&
    11, 53, 0,	//1920  QAccessible::StateFlag, QFlags<QAccessible::StateFlag>
    34, 34, 0,	//1923  QDir::Filter, QDir::Filter
    399, 525, 508, 532, 0,	//1926  char*, size_t, const char*, va_list
    465, 492, 0,	//1931  const QPolygonF&, const QTransform&
    517, 461, 0,	//1934  double, const QPoint&
    535, 519, 525, 0,	//1937  void*, int, size_t
    28, 443, 0,	//1941  QDataStream&, const QLineF&
    523, 0,	//1944  short
    199, 199, 0,	//1946  QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption
    172, 172, 0,	//1949  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    320, 320, 0,	//1952  Qt::DockWidgetArea, Qt::DockWidgetArea
    35, 58, 0,	//1955  QDir::SortFlag, QFlags<QDir::SortFlag>
    518, 518, 0,	//1958  float, float
    178, 519, 0,	//1961  QInputDialog::InputDialogOption, int
    496, 498, 0,	//1964  const QVariant&, const QVariantComparisonHelper&
    184, 184, 0,	//1967  QLibrary::LoadHint, QLibrary::LoadHint
    283, 283, 0,	//1970  QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag
    258, 99, 0,	//1973  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>
    170, 78, 0,	//1976  QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>
    36, 519, 0,	//1979  QDirIterator::IteratorFlag, int
    334, 334, 0,	//1982  Qt::InputMethodHint, Qt::InputMethodHint
    168, 519, 0,	//1985  QGraphicsScene::SceneLayer, int
    28, 456, 0,	//1988  QDataStream&, const QPen&
    155, 519, 0,	//1991  QGLFunctions::OpenGLFeature, int
    210, 210, 0,	//1994  QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature
    28, 216, 0,	//1997  QDataStream&, QPainterPath&
    32, 442, 0,	//2000  QDebug, const QLine&
    359, 359, 0,	//2003  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    213, 519, 519, 519, 519, 455, 397, 519, 519, 402, 0,	//2006  QPainter*, int, int, int, int, const QPalette&, bool, int, int, const QBrush*
    213, 519, 519, 519, 519, 455, 397, 519, 519, 0,	//2017  QPainter*, int, int, int, int, const QPalette&, bool, int, int
    365, 519, 0,	//2027  Qt::TouchPointState, int
    28, 272, 0,	//2030  QDataStream&, QTextLength&
    32, 492, 0,	//2033  QDebug, const QTransform&
    283, 519, 0,	//2036  QTreeWidgetItemIterator::IteratorFlag, int
    32, 464, 0,	//2039  QDebug, const QPolygon&
    285, 112, 0,	//2042  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    4, 519, 0,	//2045  QAbstractSpinBox::StepEnabledFlag, int
    243, 519, 0,	//2048  QSizePolicy::ControlType, int
    168, 168, 0,	//2051  QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer
    359, 519, 0,	//2054  Qt::TextInteractionFlag, int
    372, 372, 0,	//2057  Qt::WindowState, Qt::WindowState
    500, 0,	//2060  const QVector2D&
    270, 519, 0,	//2062  QTextFormat::PageBreakFlag, int
    1, 48, 0,	//2065  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    28, 406, 0,	//2068  QDataStream&, const QColor&
    517, 448, 0,	//2071  double, const QMatrix4x4&
    28, 404, 0,	//2074  QDataStream&, const QByteArray&
    10, 10, 0,	//2077  QAccessible::RelationFlag, QAccessible::RelationFlag
    442, 447, 0,	//2080  const QLine&, const QMatrix&
    28, 411, 0,	//2083  QDataStream&, const QEasingCurve&
    28, 494, 0,	//2086  QDataStream&, const QUrl&
    32, 468, 0,	//2089  QDebug, const QRect&
    32, 413, 0,	//2092  QDebug, const QFont&
    35, 35, 0,	//2095  QDir::SortFlag, QDir::SortFlag
    25, 54, 0,	//2098  QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>
    169, 519, 0,	//2101  QGraphicsView::CacheModeFlag, int
    276, 519, 0,	//2104  QTextStream::NumberFlag, int
    28, 232, 0,	//2107  QDataStream&, QRect&
    198, 198, 0,	//2110  QMdiArea::AreaOption, QMdiArea::AreaOption
    28, 474, 0,	//2113  QDataStream&, const QSize&
    28, 405, 0,	//2116  QDataStream&, const QChar&
    133, 65, 0,	//2119  QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>
    183, 181, 0,	//2122  QKeySequence::StandardKey, QKeyEvent*
    134, 66, 0,	//2125  QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>
    254, 95, 0,	//2128  QStyle::StateFlag, QFlags<QStyle::StateFlag>
    300, 519, 0,	//2131  Qt::AlignmentFlag, int
    28, 191, 0,	//2134  QDataStream&, QListWidgetItem&
    28, 470, 0,	//2137  QDataStream&, const QRegExp&
    176, 519, 0,	//2140  QImageIOPlugin::Capability, int
    267, 105, 0,	//2143  QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>
    503, 0,	//2146  const QVector3D&
    32, 469, 0,	//2148  QDebug, const QRectF&
    372, 129, 0,	//2151  Qt::WindowState, QFlags<Qt::WindowState>
    163, 74, 0,	//2154  QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>
    337, 337, 0,	//2157  Qt::ItemFlag, Qt::ItemFlag
    28, 286, 0,	//2160  QDataStream&, QUuid&
    28, 132, 0,	//2163  QDataStream&, QFont&
    213, 468, 406, 519, 402, 0,	//2166  QPainter*, const QRect&, const QColor&, int, const QBrush*
    213, 468, 406, 0,	//2172  QPainter*, const QRect&, const QColor&
    213, 468, 406, 519, 0,	//2176  QPainter*, const QRect&, const QColor&, int
    166, 166, 0,	//2181  QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag
    28, 230, 0,	//2184  QDataStream&, QPolygonF&
    158, 158, 0,	//2187  QGLShader::ShaderTypeBit, QGLShader::ShaderTypeBit
    260, 519, 0,	//2190  QStyleOptionToolBar::ToolBarFeature, int
    461, 519, 0,	//2193  const QPoint&, int
    28, 290, 0,	//2196  QDataStream&, QVariant::Type&
    214, 519, 0,	//2199  QPainter::RenderHint, int
    496, 289, 535, 0,	//2202  const QVariant&, QVariant::Type, void*
    32, 95, 0,	//2206  QDebug, QFlags<QStyle::StateFlag>
    2, 519, 0,	//2209  QAbstractItemView::EditTrigger, int
    461, 448, 0,	//2212  const QPoint&, const QMatrix4x4&
    461, 447, 0,	//2215  const QPoint&, const QMatrix&
    3, 3, 0,	//2218  QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption
    453, 481, 471, 450, 190, 0,	//2221  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    436, 436, 0,	//2227  const QHashDummyValue&, const QHashDummyValue&
    28, 226, 0,	//2230  QDataStream&, QPointF&
    262, 262, 0,	//2233  QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature
    347, 519, 0,	//2236  Qt::Orientation, int
    448, 503, 0,	//2239  const QMatrix4x4&, const QVector3D&
    28, 487, 0,	//2242  QDataStream&, const QTableWidgetItem&
    32, 164, 0,	//2245  QDebug, QGraphicsItem*
    213, 461, 461, 455, 397, 519, 519, 0,	//2248  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int, int
    213, 461, 461, 455, 0,	//2256  QPainter*, const QPoint&, const QPoint&, const QPalette&
    213, 461, 461, 455, 397, 0,	//2261  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool
    213, 461, 461, 455, 397, 519, 0,	//2267  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int
    327, 327, 0,	//2274  Qt::GestureFlag, Qt::GestureFlag
    172, 79, 0,	//2277  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    448, 463, 0,	//2280  const QMatrix4x4&, const QPointF&
    162, 519, 0,	//2283  QGraphicsBlurEffect::BlurHint, int
    210, 90, 0,	//2286  QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>
    28, 413, 0,	//2289  QDataStream&, const QFont&
    162, 162, 0,	//2292  QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint
    464, 492, 0,	//2295  const QPolygon&, const QTransform&
    149, 149, 0,	//2298  QGLFormat::OpenGLVersionFlag, QGLFormat::OpenGLVersionFlag
    209, 519, 0,	//2301  QPaintEngine::DirtyFlag, int
    461, 518, 0,	//2304  const QPoint&, float
    517, 474, 0,	//2307  double, const QSize&
    180, 519, 0,	//2310  QItemSelectionModel::SelectionFlag, int
    15, 397, 0,	//2313  QBool, bool
    33, 56, 0,	//2316  QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>
    28, 186, 0,	//2319  QDataStream&, QLine&
    32, 474, 0,	//2322  QDebug, const QSize&
    255, 519, 0,	//2325  QStyle::SubControl, int
    276, 276, 0,	//2328  QTextStream::NumberFlag, QTextStream::NumberFlag
    443, 492, 0,	//2331  const QLineF&, const QTransform&
    134, 519, 0,	//2334  QFontDialog::FontDialogOption, int
    345, 124, 0,	//2337  Qt::MouseButton, QFlags<Qt::MouseButton>
    28, 497, 0,	//2340  QDataStream&, const QVariant::Type
    267, 267, 0,	//2343  QTextDocument::FindFlag, QTextDocument::FindFlag
    258, 519, 0,	//2346  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int
    337, 121, 0,	//2349  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    463, 492, 0,	//2352  const QPointF&, const QTransform&
    32, 406, 0,	//2355  QDebug, const QColor&
    32, 447, 0,	//2358  QDebug, const QMatrix&
    28, 495, 0,	//2361  QDataStream&, const QUuid&
    184, 83, 0,	//2364  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    373, 519, 0,	//2367  Qt::WindowType, int
    256, 519, 0,	//2370  QStyleOptionButton::ButtonFeature, int
    28, 233, 0,	//2373  QDataStream&, QRectF&
    256, 97, 0,	//2376  QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>
    169, 77, 0,	//2379  QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>
    28, 27, 0,	//2382  QDataStream&, QCursor&
    166, 519, 0,	//2385  QGraphicsItem::GraphicsItemFlag, int
    28, 468, 0,	//2388  QDataStream&, const QRect&
    343, 123, 0,	//2391  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    300, 115, 0,	//2394  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    28, 20, 0,	//2397  QDataStream&, QChar&
    28, 234, 0,	//2400  QDataStream&, QRegExp&
    28, 467, 0,	//2403  QDataStream&, const QQuaternion&
    11, 519, 0,	//2406  QAccessible::StateFlag, int
    28, 463, 0,	//2409  QDataStream&, const QPointF&
    135, 135, 0,	//2412  QGL::FormatOption, QGL::FormatOption
    220, 519, 0,	//2415  QPinchGesture::ChangeFlag, int
    28, 476, 0,	//2418  QDataStream&, const QSizeF&
    193, 84, 0,	//2421  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    271, 519, 0,	//2424  QTextItem::RenderFlag, int
    213, 468, 446, 459, 468, 446, 490, 61, 0,	//2427  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&, QFlags<QDrawBorderPixmap::DrawingHint>
    213, 468, 446, 459, 468, 446, 0,	//2436  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&
    213, 468, 446, 459, 468, 446, 490, 0,	//2443  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&
    249, 94, 0,	//2451  QString::SectionFlag, QFlags<QString::SectionFlag>
    481, 481, 0,	//2454  const QString&, const QString&
    1, 1, 0,	//2457  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    376, 508, 0,	//2460  QtMsgType, const char*
    32, 454, 0,	//2463  QDebug, const QPainterPath&
    517, 503, 0,	//2466  double, const QVector3D&
    484, 0,	//2469  const QStringRef&
    172, 519, 0,	//2471  QIODevice::OpenModeFlag, int
    4, 51, 0,	//2474  QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>
    526, 0,	//2477  unsigned char
    28, 18, 0,	//2479  QDataStream&, QByteArray&
    133, 133, 0,	//2482  QFontComboBox::FontFilter, QFontComboBox::FontFilter
    464, 447, 0,	//2485  const QPolygon&, const QMatrix&
    32, 486, 0,	//2488  QDebug, const QStyleOption::OptionType&
    32, 453, 0,	//2491  QDebug, const QObject*
    343, 519, 0,	//2494  Qt::MatchFlag, int
    28, 464, 0,	//2497  QDataStream&, const QPolygon&
    28, 29, 0,	//2500  QDataStream&, QDate&
    28, 400, 0,	//2503  QDataStream&, const QBitArray&
    204, 44, 0,	//2506  QObject*, QEvent*
    279, 0,	//2509  QTimerEvent*
    21, 0,	//2511  QChildEvent*
    202, 0,	//2513  QMouseEvent*
    296, 0,	//2515  QWheelEvent*
    181, 0,	//2517  QKeyEvent*
    131, 0,	//2519  QFocusEvent*
    203, 0,	//2521  QMoveEvent*
    22, 0,	//2523  QCloseEvent*
    26, 0,	//2525  QContextMenuEvent*
    264, 0,	//2527  QTabletEvent*
    12, 0,	//2529  QActionEvent*
    38, 0,	//2531  QDragEnterEvent*
    40, 0,	//2533  QDragMoveEvent*
    39, 0,	//2535  QDragLeaveEvent*
    42, 0,	//2537  QDropEvent*
    238, 0,	//2539  QShowEvent*
    171, 0,	//2541  QHideEvent*
    396, 0,	//2543  _XEvent*
    179, 0,	//2545  QInputMethodEvent*
    335, 0,	//2547  Qt::InputMethodQuery
    253, 0,	//2549  QStyle&
    455, 0,	//2551  const QPalette&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "AccumBuffer",	//1
    "AlphaChannel",	//2
    "CanFlipNativePixmapBindOption",	//3
    "ColorIndex",	//4
    "CombinedDepthStencil",	//5
    "CompatibilityProfile",	//6
    "CoreProfile",	//7
    "DefaultBindOption",	//8
    "DeprecatedFunctions",	//9
    "Depth",	//10
    "DepthBuffer",	//11
    "DirectRendering",	//12
    "DoubleBuffer",	//13
    "DrawChildren",	//14
    "DrawWindowBackground",	//15
    "DynamicCopy",	//16
    "DynamicDraw",	//17
    "DynamicRead",	//18
    "Fragment",	//19
    "Geometry",	//20
    "HasOverlay",	//21
    "IgnoreMask",	//22
    "IndexBuffer",	//23
    "IndirectRendering",	//24
    "InternalBindOption",	//25
    "InvertedYBindOption",	//26
    "KHRONOS_BOOLEAN_ENUM_FORCE_SIZE",	//27
    "KHRONOS_FALSE",	//28
    "KHRONOS_TRUE",	//29
    "LicensedActiveQt",	//30
    "LicensedCore",	//31
    "LicensedDBus",	//32
    "LicensedDeclarative",	//33
    "LicensedGui",	//34
    "LicensedHelp",	//35
    "LicensedMultimedia",	//36
    "LicensedNetwork",	//37
    "LicensedOpenGL",	//38
    "LicensedOpenVG",	//39
    "LicensedQt3Support",	//40
    "LicensedQt3SupportLight",	//41
    "LicensedScript",	//42
    "LicensedScriptTools",	//43
    "LicensedSql",	//44
    "LicensedSvg",	//45
    "LicensedTest",	//46
    "LicensedXml",	//47
    "LicensedXmlPatterns",	//48
    "LinearFilteringBindOption",	//49
    "MemoryManagedBindOption",	//50
    "MipmapBindOption",	//51
    "NoAccumBuffer",	//52
    "NoAlphaChannel",	//53
    "NoAttachment",	//54
    "NoBindOption",	//55
    "NoDeprecatedFunctions",	//56
    "NoDepthBuffer",	//57
    "NoOverlay",	//58
    "NoProfile",	//59
    "NoSampleBuffers",	//60
    "NoStencilBuffer",	//61
    "NoStereoBuffers",	//62
    "OpenGL_ES_CommonLite_Version_1_0",	//63
    "OpenGL_ES_CommonLite_Version_1_1",	//64
    "OpenGL_ES_Common_Version_1_0",	//65
    "OpenGL_ES_Common_Version_1_1",	//66
    "OpenGL_ES_Version_2_0",	//67
    "OpenGL_Version_1_1",	//68
    "OpenGL_Version_1_2",	//69
    "OpenGL_Version_1_3",	//70
    "OpenGL_Version_1_4",	//71
    "OpenGL_Version_1_5",	//72
    "OpenGL_Version_2_0",	//73
    "OpenGL_Version_2_1",	//74
    "OpenGL_Version_3_0",	//75
    "OpenGL_Version_3_1",	//76
    "OpenGL_Version_3_2",	//77
    "OpenGL_Version_3_3",	//78
    "OpenGL_Version_4_0",	//79
    "OpenGL_Version_None",	//80
    "PixelPackBuffer",	//81
    "PixelUnpackBuffer",	//82
    "PremultipliedAlphaBindOption",	//83
    "QGLBuffer",	//84
    "QGLBuffer#",	//85
    "QGLBuffer$",	//86
    "QGLColormap",	//87
    "QGLColormap#",	//88
    "QGLContext",	//89
    "QGLContext#",	//90
    "QGLContext##",	//91
    "QGLFormat",	//92
    "QGLFormat#",	//93
    "QGLFormat$",	//94
    "QGLFormat$$",	//95
    "QGLFramebufferObject",	//96
    "QGLFramebufferObject#",	//97
    "QGLFramebufferObject##",	//98
    "QGLFramebufferObject#$",	//99
    "QGLFramebufferObject#$$",	//100
    "QGLFramebufferObject#$$$",	//101
    "QGLFramebufferObject$$",	//102
    "QGLFramebufferObject$$#",	//103
    "QGLFramebufferObject$$$",	//104
    "QGLFramebufferObject$$$$",	//105
    "QGLFramebufferObject$$$$$",	//106
    "QGLFramebufferObjectFormat",	//107
    "QGLFramebufferObjectFormat#",	//108
    "QGLPixelBuffer",	//109
    "QGLPixelBuffer#",	//110
    "QGLPixelBuffer##",	//111
    "QGLPixelBuffer###",	//112
    "QGLPixelBuffer$$",	//113
    "QGLPixelBuffer$$#",	//114
    "QGLPixelBuffer$$##",	//115
    "QGLShader",	//116
    "QGLShader$",	//117
    "QGLShader$#",	//118
    "QGLShader$##",	//119
    "QGLShaderProgram",	//120
    "QGLShaderProgram#",	//121
    "QGLShaderProgram##",	//122
    "QGLWidget",	//123
    "QGLWidget#",	//124
    "QGLWidget##",	//125
    "QGLWidget###",	//126
    "QGLWidget###$",	//127
    "QGLWidget##$",	//128
    "QtCriticalMsg",	//129
    "QtDebugMsg",	//130
    "QtFatalMsg",	//131
    "QtSystemMsg",	//132
    "QtWarningMsg",	//133
    "ReadOnly",	//134
    "ReadWrite",	//135
    "Rgba",	//136
    "SampleBuffers",	//137
    "SingleBuffer",	//138
    "StaticCopy",	//139
    "StaticDraw",	//140
    "StaticRead",	//141
    "StencilBuffer",	//142
    "StereoBuffers",	//143
    "StreamCopy",	//144
    "StreamDraw",	//145
    "StreamRead",	//146
    "Vertex",	//147
    "VertexBuffer",	//148
    "WriteOnly",	//149
    "accum",	//150
    "accumBufferSize",	//151
    "actionEvent",	//152
    "addShader",	//153
    "addShader#",	//154
    "addShaderFromSourceCode",	//155
    "addShaderFromSourceCode$#",	//156
    "addShaderFromSourceCode$$",	//157
    "addShaderFromSourceFile",	//158
    "addShaderFromSourceFile$$",	//159
    "allocate",	//160
    "allocate$",	//161
    "allocate$$",	//162
    "alpha",	//163
    "alphaBufferSize",	//164
    "areSharing",	//165
    "areSharing##",	//166
    "attachment",	//167
    "attributeLocation",	//168
    "attributeLocation#",	//169
    "attributeLocation$",	//170
    "autoBufferSwap",	//171
    "bind",	//172
    "bindAttributeLocation",	//173
    "bindAttributeLocation#$",	//174
    "bindAttributeLocation$$",	//175
    "bindDefault",	//176
    "bindTexture",	//177
    "bindTexture#",	//178
    "bindTexture#$",	//179
    "bindTexture#$$",	//180
    "bindTexture#$$$",	//181
    "bindTexture$",	//182
    "bindToDynamicTexture",	//183
    "bindToDynamicTexture$",	//184
    "blitFramebuffer",	//185
    "blitFramebuffer####",	//186
    "blitFramebuffer####$",	//187
    "blitFramebuffer####$$",	//188
    "blueBufferSize",	//189
    "bufferId",	//190
    "changeEvent",	//191
    "childEvent",	//192
    "chooseContext",	//193
    "chooseContext#",	//194
    "chooseVisual",	//195
    "closeEvent",	//196
    "colorIndex",	//197
    "colorIndex#",	//198
    "colormap",	//199
    "compileSourceCode",	//200
    "compileSourceCode#",	//201
    "compileSourceCode$",	//202
    "compileSourceFile",	//203
    "compileSourceFile$",	//204
    "connectNotify",	//205
    "context",	//206
    "contextMenuEvent",	//207
    "convertToGLFormat",	//208
    "convertToGLFormat#",	//209
    "create",	//210
    "create#",	//211
    "currentContext",	//212
    "currentCtx",	//213
    "customEvent",	//214
    "defaultFormat",	//215
    "defaultOverlayFormat",	//216
    "deleteTexture",	//217
    "deleteTexture$",	//218
    "depth",	//219
    "depthBufferSize",	//220
    "destroy",	//221
    "detach",	//222
    "devType",	//223
    "device",	//224
    "deviceIsPixmap",	//225
    "directRendering",	//226
    "disableAttributeArray",	//227
    "disableAttributeArray$",	//228
    "disconnectNotify",	//229
    "doneCurrent",	//230
    "doubleBuffer",	//231
    "dragEnterEvent",	//232
    "dragLeaveEvent",	//233
    "dragMoveEvent",	//234
    "drawTexture",	//235
    "drawTexture#$",	//236
    "drawTexture#$$",	//237
    "dropEvent",	//238
    "enableAttributeArray",	//239
    "enableAttributeArray$",	//240
    "enabledChange",	//241
    "enterEvent",	//242
    "entryColor",	//243
    "entryColor$",	//244
    "entryRgb",	//245
    "entryRgb$",	//246
    "event",	//247
    "event#",	//248
    "eventFilter",	//249
    "find",	//250
    "find$",	//251
    "findNearest",	//252
    "findNearest$",	//253
    "focusInEvent",	//254
    "focusNextPrevChild",	//255
    "focusOutEvent",	//256
    "fontChange",	//257
    "fontDisplayListBase",	//258
    "fontDisplayListBase#",	//259
    "fontDisplayListBase#$",	//260
    "format",	//261
    "generateDynamicTexture",	//262
    "generateFontDisplayLists",	//263
    "generateFontDisplayLists#$",	//264
    "geometryInputType",	//265
    "geometryOutputType",	//266
    "geometryOutputVertexCount",	//267
    "getProcAddress",	//268
    "getProcAddress$",	//269
    "glDraw",	//270
    "glInit",	//271
    "grabFrameBuffer",	//272
    "grabFrameBuffer$",	//273
    "greenBufferSize",	//274
    "handle",	//275
    "hasOpenGL",	//276
    "hasOpenGLFramebufferBlit",	//277
    "hasOpenGLFramebufferObjects",	//278
    "hasOpenGLOverlays",	//279
    "hasOpenGLPbuffers",	//280
    "hasOpenGLShaderPrograms",	//281
    "hasOpenGLShaderPrograms#",	//282
    "hasOpenGLShaders",	//283
    "hasOpenGLShaders$",	//284
    "hasOpenGLShaders$#",	//285
    "hasOverlay",	//286
    "heightForWidth",	//287
    "hideEvent",	//288
    "initializeGL",	//289
    "initializeOverlayGL",	//290
    "initialized",	//291
    "inputMethodEvent",	//292
    "inputMethodQuery",	//293
    "internalTextureFormat",	//294
    "isBound",	//295
    "isCompiled",	//296
    "isCreated",	//297
    "isEmpty",	//298
    "isLinked",	//299
    "isSharing",	//300
    "isValid",	//301
    "keyPressEvent",	//302
    "keyReleaseEvent",	//303
    "languageChange",	//304
    "leaveEvent",	//305
    "link",	//306
    "log",	//307
    "majorVersion",	//308
    "makeCurrent",	//309
    "makeOverlayCurrent",	//310
    "map",	//311
    "map$",	//312
    "maxGeometryOutputVertices",	//313
    "metaObject",	//314
    "metric",	//315
    "metric$",	//316
    "minimumSizeHint",	//317
    "minorVersion",	//318
    "mipmap",	//319
    "mouseDoubleClickEvent",	//320
    "mouseMoveEvent",	//321
    "mousePressEvent",	//322
    "mouseReleaseEvent",	//323
    "moveEvent",	//324
    "openGLVersionFlags",	//325
    "operator!=",	//326
    "operator!=#",	//327
    "operator!=##",	//328
    "operator!=#$",	//329
    "operator!=$#",	//330
    "operator&",	//331
    "operator&##",	//332
    "operator*",	//333
    "operator*##",	//334
    "operator*#$",	//335
    "operator*$#",	//336
    "operator+",	//337
    "operator+##",	//338
    "operator+#$",	//339
    "operator+$#",	//340
    "operator+$$",	//341
    "operator-",	//342
    "operator-#",	//343
    "operator-##",	//344
    "operator-#$",	//345
    "operator/",	//346
    "operator/#$",	//347
    "operator<",	//348
    "operator<##",	//349
    "operator<#$",	//350
    "operator<$#",	//351
    "operator<<",	//352
    "operator<<##",	//353
    "operator<<#$",	//354
    "operator<<#?",	//355
    "operator<=",	//356
    "operator<=##",	//357
    "operator<=#$",	//358
    "operator<=$#",	//359
    "operator=",	//360
    "operator=#",	//361
    "operator==",	//362
    "operator==#",	//363
    "operator==##",	//364
    "operator==#$",	//365
    "operator==$#",	//366
    "operator>",	//367
    "operator>##",	//368
    "operator>#$",	//369
    "operator>$#",	//370
    "operator>=",	//371
    "operator>=##",	//372
    "operator>=#$",	//373
    "operator>=$#",	//374
    "operator>>",	//375
    "operator>>##",	//376
    "operator>>#$",	//377
    "operator>>#?",	//378
    "operator^",	//379
    "operator^##",	//380
    "operator|",	//381
    "operator|##",	//382
    "operator|$$",	//383
    "overlayContext",	//384
    "overlayTransparentColor",	//385
    "paintEngine",	//386
    "paintEvent",	//387
    "paintEvent#",	//388
    "paintGL",	//389
    "paintOverlayGL",	//390
    "paletteChange",	//391
    "plane",	//392
    "profile",	//393
    "programId",	//394
    "qAccessibleActionCastHelper",	//395
    "qAccessibleEditableTextCastHelper",	//396
    "qAccessibleImageCastHelper",	//397
    "qAccessibleTable2CastHelper",	//398
    "qAccessibleTableCastHelper",	//399
    "qAccessibleTextCastHelper",	//400
    "qAccessibleValueCastHelper",	//401
    "qAcos",	//402
    "qAcos$",	//403
    "qAddPostRoutine",	//404
    "qAddPostRoutine$",	//405
    "qAlpha",	//406
    "qAlpha$",	//407
    "qAppName",	//408
    "qAsin",	//409
    "qAsin$",	//410
    "qAtan",	//411
    "qAtan$",	//412
    "qAtan2",	//413
    "qAtan2$$",	//414
    "qBadAlloc",	//415
    "qBlue",	//416
    "qBlue$",	//417
    "qCeil",	//418
    "qCeil$",	//419
    "qChecksum",	//420
    "qChecksum$$",	//421
    "qCompress",	//422
    "qCompress#",	//423
    "qCompress#$",	//424
    "qCompress$$",	//425
    "qCompress$$$",	//426
    "qCos",	//427
    "qCos$",	//428
    "qCritical",	//429
    "qDebug",	//430
    "qDrawBorderPixmap",	//431
    "qDrawBorderPixmap####",	//432
    "qDrawBorderPixmap######",	//433
    "qDrawBorderPixmap#######",	//434
    "qDrawBorderPixmap#######$",	//435
    "qDrawPlainRect",	//436
    "qDrawPlainRect###",	//437
    "qDrawPlainRect###$",	//438
    "qDrawPlainRect###$#",	//439
    "qDrawPlainRect#$$$$#",	//440
    "qDrawPlainRect#$$$$#$",	//441
    "qDrawPlainRect#$$$$#$#",	//442
    "qDrawShadeLine",	//443
    "qDrawShadeLine####",	//444
    "qDrawShadeLine####$",	//445
    "qDrawShadeLine####$$",	//446
    "qDrawShadeLine####$$$",	//447
    "qDrawShadeLine#$$$$#",	//448
    "qDrawShadeLine#$$$$#$",	//449
    "qDrawShadeLine#$$$$#$$",	//450
    "qDrawShadeLine#$$$$#$$$",	//451
    "qDrawShadePanel",	//452
    "qDrawShadePanel###",	//453
    "qDrawShadePanel###$",	//454
    "qDrawShadePanel###$$",	//455
    "qDrawShadePanel###$$#",	//456
    "qDrawShadePanel#$$$$#",	//457
    "qDrawShadePanel#$$$$#$",	//458
    "qDrawShadePanel#$$$$#$$",	//459
    "qDrawShadePanel#$$$$#$$#",	//460
    "qDrawShadeRect",	//461
    "qDrawShadeRect###",	//462
    "qDrawShadeRect###$",	//463
    "qDrawShadeRect###$$",	//464
    "qDrawShadeRect###$$$",	//465
    "qDrawShadeRect###$$$#",	//466
    "qDrawShadeRect#$$$$#",	//467
    "qDrawShadeRect#$$$$#$",	//468
    "qDrawShadeRect#$$$$#$$",	//469
    "qDrawShadeRect#$$$$#$$$",	//470
    "qDrawShadeRect#$$$$#$$$#",	//471
    "qDrawWinButton",	//472
    "qDrawWinButton###",	//473
    "qDrawWinButton###$",	//474
    "qDrawWinButton###$#",	//475
    "qDrawWinButton#$$$$#",	//476
    "qDrawWinButton#$$$$#$",	//477
    "qDrawWinButton#$$$$#$#",	//478
    "qDrawWinPanel",	//479
    "qDrawWinPanel###",	//480
    "qDrawWinPanel###$",	//481
    "qDrawWinPanel###$#",	//482
    "qDrawWinPanel#$$$$#",	//483
    "qDrawWinPanel#$$$$#$",	//484
    "qDrawWinPanel#$$$$#$#",	//485
    "qExp",	//486
    "qExp$",	//487
    "qFabs",	//488
    "qFabs$",	//489
    "qFastCos",	//490
    "qFastCos$",	//491
    "qFastSin",	//492
    "qFastSin$",	//493
    "qFlagLocation",	//494
    "qFlagLocation$",	//495
    "qFloor",	//496
    "qFloor$",	//497
    "qFree",	//498
    "qFree$",	//499
    "qFreeAligned",	//500
    "qFreeAligned$",	//501
    "qFuzzyCompare",	//502
    "qFuzzyCompare##",	//503
    "qFuzzyCompare$$",	//504
    "qFuzzyIsNull",	//505
    "qFuzzyIsNull$",	//506
    "qGray",	//507
    "qGray$",	//508
    "qGray$$$",	//509
    "qGreen",	//510
    "qGreen$",	//511
    "qHash",	//512
    "qHash#",	//513
    "qHash$",	//514
    "qInf",	//515
    "qInstallMsgHandler",	//516
    "qInstallMsgHandler$",	//517
    "qIntCast",	//518
    "qIntCast$",	//519
    "qIsFinite",	//520
    "qIsFinite$",	//521
    "qIsGray",	//522
    "qIsGray$",	//523
    "qIsInf",	//524
    "qIsInf$",	//525
    "qIsNaN",	//526
    "qIsNaN$",	//527
    "qIsNull",	//528
    "qIsNull$",	//529
    "qLn",	//530
    "qLn$",	//531
    "qMalloc",	//532
    "qMalloc$",	//533
    "qMallocAligned",	//534
    "qMallocAligned$$",	//535
    "qMemCopy",	//536
    "qMemCopy$$$",	//537
    "qMemSet",	//538
    "qMemSet$$$",	//539
    "qPow",	//540
    "qPow$$",	//541
    "qQNaN",	//542
    "qRealloc",	//543
    "qRealloc$$",	//544
    "qReallocAligned",	//545
    "qReallocAligned$$$$",	//546
    "qRed",	//547
    "qRed$",	//548
    "qRegisterStaticPluginInstanceFunction",	//549
    "qRegisterStaticPluginInstanceFunction#",	//550
    "qRemovePostRoutine",	//551
    "qRemovePostRoutine$",	//552
    "qRgb",	//553
    "qRgb$$$",	//554
    "qRgba",	//555
    "qRgba$$$$",	//556
    "qRound",	//557
    "qRound$",	//558
    "qRound64",	//559
    "qRound64$",	//560
    "qSNaN",	//561
    "qSetFieldWidth",	//562
    "qSetFieldWidth$",	//563
    "qSetPadChar",	//564
    "qSetPadChar#",	//565
    "qSetRealNumberPrecision",	//566
    "qSetRealNumberPrecision$",	//567
    "qSharedBuild",	//568
    "qSin",	//569
    "qSin$",	//570
    "qSqrt",	//571
    "qSqrt$",	//572
    "qStringComparisonHelper",	//573
    "qStringComparisonHelper#$",	//574
    "qTan",	//575
    "qTan$",	//576
    "qUncompress",	//577
    "qUncompress#",	//578
    "qUncompress$$",	//579
    "qVersion",	//580
    "qWarning",	//581
    "qbswap_helper",	//582
    "qbswap_helper$$$",	//583
    "qgetenv",	//584
    "qgetenv$",	//585
    "qglClearColor",	//586
    "qglClearColor#",	//587
    "qglColor",	//588
    "qglColor#",	//589
    "qputenv",	//590
    "qputenv$#",	//591
    "qrand",	//592
    "qsrand",	//593
    "qsrand$",	//594
    "qstrcmp",	//595
    "qstrcmp##",	//596
    "qstrcmp#$",	//597
    "qstrcmp$#",	//598
    "qstrcmp$$",	//599
    "qstrcpy",	//600
    "qstrcpy$$",	//601
    "qstrdup",	//602
    "qstrdup$",	//603
    "qstricmp",	//604
    "qstricmp$$",	//605
    "qstrlen",	//606
    "qstrlen$",	//607
    "qstrncmp",	//608
    "qstrncmp$$$",	//609
    "qstrncpy",	//610
    "qstrncpy$$$",	//611
    "qstrnicmp",	//612
    "qstrnicmp$$$",	//613
    "qstrnlen",	//614
    "qstrnlen$$",	//615
    "qtTrId",	//616
    "qtTrId$",	//617
    "qtTrId$$",	//618
    "qt_assert",	//619
    "qt_assert$$$",	//620
    "qt_assert_x",	//621
    "qt_assert_x$$$$",	//622
    "qt_check_pointer",	//623
    "qt_check_pointer$$",	//624
    "qt_error_string",	//625
    "qt_error_string$",	//626
    "qt_message_output",	//627
    "qt_message_output$$",	//628
    "qt_metacall",	//629
    "qt_metacall$$?",	//630
    "qt_metacast",	//631
    "qt_metacast$",	//632
    "qt_noop",	//633
    "qt_qFindChild_helper",	//634
    "qt_qFindChild_helper#$#",	//635
    "qt_qFindChildren_helper",	//636
    "qt_qFindChildren_helper#$##?",	//637
    "qvariant_cast_helper",	//638
    "qvariant_cast_helper#$$",	//639
    "qvsnprintf",	//640
    "qvsnprintf$$$?",	//641
    "read",	//642
    "read$$$",	//643
    "redBufferSize",	//644
    "release",	//645
    "release$",	//646
    "releaseFromDynamicTexture",	//647
    "removeAllShaders",	//648
    "removeShader",	//649
    "removeShader#",	//650
    "renderPixmap",	//651
    "renderPixmap$",	//652
    "renderPixmap$$",	//653
    "renderPixmap$$$",	//654
    "renderText",	//655
    "renderText$$$",	//656
    "renderText$$$#",	//657
    "renderText$$$#$",	//658
    "renderText$$$$",	//659
    "renderText$$$$#",	//660
    "renderText$$$$#$",	//661
    "requestedFormat",	//662
    "reset",	//663
    "resizeEvent",	//664
    "resizeEvent#",	//665
    "resizeGL",	//666
    "resizeGL$$",	//667
    "resizeOverlayGL",	//668
    "resizeOverlayGL$$",	//669
    "rgba",	//670
    "sampleBuffers",	//671
    "samples",	//672
    "setAccum",	//673
    "setAccum$",	//674
    "setAccumBufferSize",	//675
    "setAccumBufferSize$",	//676
    "setAlpha",	//677
    "setAlpha$",	//678
    "setAlphaBufferSize",	//679
    "setAlphaBufferSize$",	//680
    "setAttachment",	//681
    "setAttachment$",	//682
    "setAttributeArray",	//683
    "setAttributeArray$#",	//684
    "setAttributeArray$#$",	//685
    "setAttributeArray$$$",	//686
    "setAttributeArray$$$$",	//687
    "setAttributeArray$$$$$",	//688
    "setAttributeBuffer",	//689
    "setAttributeBuffer$$$$",	//690
    "setAttributeBuffer$$$$$",	//691
    "setAttributeValue",	//692
    "setAttributeValue$#",	//693
    "setAttributeValue$$",	//694
    "setAttributeValue$$$",	//695
    "setAttributeValue$$$$",	//696
    "setAttributeValue$$$$$",	//697
    "setAutoBufferSwap",	//698
    "setAutoBufferSwap$",	//699
    "setBlueBufferSize",	//700
    "setBlueBufferSize$",	//701
    "setColormap",	//702
    "setColormap#",	//703
    "setContext",	//704
    "setContext#",	//705
    "setContext##",	//706
    "setContext##$",	//707
    "setCurrentCtx",	//708
    "setCurrentCtx#",	//709
    "setDefaultFormat",	//710
    "setDefaultFormat#",	//711
    "setDefaultOverlayFormat",	//712
    "setDefaultOverlayFormat#",	//713
    "setDepth",	//714
    "setDepth$",	//715
    "setDepthBufferSize",	//716
    "setDepthBufferSize$",	//717
    "setDevice",	//718
    "setDevice#",	//719
    "setDirectRendering",	//720
    "setDirectRendering$",	//721
    "setDoubleBuffer",	//722
    "setDoubleBuffer$",	//723
    "setEntries",	//724
    "setEntries$$",	//725
    "setEntries$$$",	//726
    "setEntry",	//727
    "setEntry$#",	//728
    "setEntry$$",	//729
    "setFormat",	//730
    "setFormat#",	//731
    "setGeometryInputType",	//732
    "setGeometryInputType$",	//733
    "setGeometryOutputType",	//734
    "setGeometryOutputType$",	//735
    "setGeometryOutputVertexCount",	//736
    "setGeometryOutputVertexCount$",	//737
    "setGreenBufferSize",	//738
    "setGreenBufferSize$",	//739
    "setHandle",	//740
    "setHandle$",	//741
    "setInitialized",	//742
    "setInitialized$",	//743
    "setInternalTextureFormat",	//744
    "setInternalTextureFormat$",	//745
    "setMipmap",	//746
    "setMipmap$",	//747
    "setMouseTracking",	//748
    "setMouseTracking$",	//749
    "setOption",	//750
    "setOption$",	//751
    "setOverlay",	//752
    "setOverlay$",	//753
    "setPlane",	//754
    "setPlane$",	//755
    "setPreferredPaintEngine",	//756
    "setPreferredPaintEngine$",	//757
    "setProfile",	//758
    "setProfile$",	//759
    "setRedBufferSize",	//760
    "setRedBufferSize$",	//761
    "setRgba",	//762
    "setRgba$",	//763
    "setSampleBuffers",	//764
    "setSampleBuffers$",	//765
    "setSamples",	//766
    "setSamples$",	//767
    "setStencil",	//768
    "setStencil$",	//769
    "setStencilBufferSize",	//770
    "setStencilBufferSize$",	//771
    "setStereo",	//772
    "setStereo$",	//773
    "setSwapInterval",	//774
    "setSwapInterval$",	//775
    "setTextureCacheLimit",	//776
    "setTextureCacheLimit$",	//777
    "setTextureTarget",	//778
    "setTextureTarget$",	//779
    "setUniformValue",	//780
    "setUniformValue$#",	//781
    "setUniformValue$$",	//782
    "setUniformValue$$$",	//783
    "setUniformValue$$$$",	//784
    "setUniformValue$$$$$",	//785
    "setUniformValue$?",	//786
    "setUniformValueArray",	//787
    "setUniformValueArray$#$",	//788
    "setUniformValueArray$$$",	//789
    "setUniformValueArray$$$$",	//790
    "setUniformValueArray$?$",	//791
    "setUsagePattern",	//792
    "setUsagePattern$",	//793
    "setValid",	//794
    "setValid$",	//795
    "setVersion",	//796
    "setVersion$$",	//797
    "setVisible",	//798
    "setWindowCreated",	//799
    "setWindowCreated$",	//800
    "shaderId",	//801
    "shaderType",	//802
    "shaders",	//803
    "showEvent",	//804
    "size",	//805
    "sizeHint",	//806
    "sourceCode",	//807
    "staticMetaObject",	//808
    "stencil",	//809
    "stencilBufferSize",	//810
    "stereo",	//811
    "styleChange",	//812
    "swapBuffers",	//813
    "swapInterval",	//814
    "tabletEvent",	//815
    "testOption",	//816
    "testOption$",	//817
    "texture",	//818
    "textureCacheLimit",	//819
    "textureTarget",	//820
    "timerEvent",	//821
    "toImage",	//822
    "tr",	//823
    "tr$",	//824
    "tr$$",	//825
    "tr$$$",	//826
    "trUtf8",	//827
    "trUtf8$",	//828
    "trUtf8$$",	//829
    "trUtf8$$$",	//830
    "tryVisual",	//831
    "tryVisual#",	//832
    "tryVisual#$",	//833
    "type",	//834
    "uniformLocation",	//835
    "uniformLocation#",	//836
    "uniformLocation$",	//837
    "unmap",	//838
    "updateDynamicTexture",	//839
    "updateDynamicTexture$",	//840
    "updateGL",	//841
    "updateOverlayGL",	//842
    "usagePattern",	//843
    "wheelEvent",	//844
    "windowActivationChange",	//845
    "windowCreated",	//846
    "write",	//847
    "write$$$",	//848
    "x11Event",	//849
    "~QGLBuffer",	//850
    "~QGLColormap",	//851
    "~QGLContext",	//852
    "~QGLFormat",	//853
    "~QGLFramebufferObject",	//854
    "~QGLFramebufferObjectFormat",	//855
    "~QGLPixelBuffer",	//856
    "~QGLShader",	//857
    "~QGLShaderProgram",	//858
    "~QGLWidget",	//859
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {26, 756, 1, 1, Smoke::mf_static, 0, 1},	//1 QGL::setPreferredPaintEngine(QPaintEngine::Type)
    {26, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 2},	//2 QGL::DoubleBuffer (enum)
    {26, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 3},	//3 QGL::DepthBuffer (enum)
    {26, 136, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 4},	//4 QGL::Rgba (enum)
    {26, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 5},	//5 QGL::AlphaChannel (enum)
    {26, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 6},	//6 QGL::AccumBuffer (enum)
    {26, 142, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 7},	//7 QGL::StencilBuffer (enum)
    {26, 143, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 8},	//8 QGL::StereoBuffers (enum)
    {26, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 9},	//9 QGL::DirectRendering (enum)
    {26, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 10},	//10 QGL::HasOverlay (enum)
    {26, 137, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 11},	//11 QGL::SampleBuffers (enum)
    {26, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 12},	//12 QGL::DeprecatedFunctions (enum)
    {26, 138, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 13},	//13 QGL::SingleBuffer (enum)
    {26, 57, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 14},	//14 QGL::NoDepthBuffer (enum)
    {26, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 15},	//15 QGL::ColorIndex (enum)
    {26, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 16},	//16 QGL::NoAlphaChannel (enum)
    {26, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 17},	//17 QGL::NoAccumBuffer (enum)
    {26, 61, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 18},	//18 QGL::NoStencilBuffer (enum)
    {26, 62, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 19},	//19 QGL::NoStereoBuffers (enum)
    {26, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 20},	//20 QGL::IndirectRendering (enum)
    {26, 58, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 21},	//21 QGL::NoOverlay (enum)
    {26, 60, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 22},	//22 QGL::NoSampleBuffers (enum)
    {26, 56, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 23},	//23 QGL::NoDeprecatedFunctions (enum)
    {27, 84, 0, 0, Smoke::mf_ctor, 137, 1},	//24 QGLBuffer::QGLBuffer()
    {27, 84, 3, 1, Smoke::mf_ctor, 137, 2},	//25 QGLBuffer::QGLBuffer(QGLBuffer::Type)
    {27, 84, 5, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 137, 3},	//26 QGLBuffer::QGLBuffer(const QGLBuffer&)
    {27, 360, 5, 1, 0, 136, 4},	//27 QGLBuffer::operator=(const QGLBuffer&)
    {27, 834, 0, 0, Smoke::mf_const, 139, 5},	//28 QGLBuffer::type() const
    {27, 843, 0, 0, Smoke::mf_const, 140, 6},	//29 QGLBuffer::usagePattern() const
    {27, 792, 7, 1, 0, 0, 7},	//30 QGLBuffer::setUsagePattern(QGLBuffer::UsagePattern)
    {27, 210, 0, 0, 0, 397, 8},	//31 QGLBuffer::create()
    {27, 297, 0, 0, Smoke::mf_const, 397, 9},	//32 QGLBuffer::isCreated() const
    {27, 221, 0, 0, 0, 0, 10},	//33 QGLBuffer::destroy()
    {27, 172, 0, 0, 0, 397, 11},	//34 QGLBuffer::bind()
    {27, 645, 0, 0, 0, 0, 12},	//35 QGLBuffer::release()
    {27, 645, 3, 1, Smoke::mf_static, 0, 13},	//36 QGLBuffer::release(QGLBuffer::Type)
    {27, 190, 0, 0, Smoke::mf_const, 528, 14},	//37 QGLBuffer::bufferId() const
    {27, 805, 0, 0, Smoke::mf_const, 519, 15},	//38 QGLBuffer::size() const
    {27, 642, 9, 3, 0, 397, 16},	//39 QGLBuffer::read(int, void*, int)
    {27, 847, 13, 3, 0, 0, 17},	//40 QGLBuffer::write(int, const void*, int)
    {27, 160, 17, 2, 0, 0, 18},	//41 QGLBuffer::allocate(const void*, int)
    {27, 160, 20, 1, 0, 0, 19},	//42 QGLBuffer::allocate(int)
    {27, 311, 22, 1, 0, 535, 20},	//43 QGLBuffer::map(QGLBuffer::Access)
    {27, 838, 0, 0, 0, 397, 21},	//44 QGLBuffer::unmap()
    {27, 148, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 22},	//45 QGLBuffer::VertexBuffer (enum)
    {27, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 23},	//46 QGLBuffer::IndexBuffer (enum)
    {27, 81, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 24},	//47 QGLBuffer::PixelPackBuffer (enum)
    {27, 82, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 25},	//48 QGLBuffer::PixelUnpackBuffer (enum)
    {27, 145, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 26},	//49 QGLBuffer::StreamDraw (enum)
    {27, 146, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 27},	//50 QGLBuffer::StreamRead (enum)
    {27, 144, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 28},	//51 QGLBuffer::StreamCopy (enum)
    {27, 140, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 29},	//52 QGLBuffer::StaticDraw (enum)
    {27, 141, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 30},	//53 QGLBuffer::StaticRead (enum)
    {27, 139, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 31},	//54 QGLBuffer::StaticCopy (enum)
    {27, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 32},	//55 QGLBuffer::DynamicDraw (enum)
    {27, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 33},	//56 QGLBuffer::DynamicRead (enum)
    {27, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 140, 34},	//57 QGLBuffer::DynamicCopy (enum)
    {27, 134, 0, 0, Smoke::mf_static|Smoke::mf_enum, 138, 35},	//58 QGLBuffer::ReadOnly (enum)
    {27, 149, 0, 0, Smoke::mf_static|Smoke::mf_enum, 138, 36},	//59 QGLBuffer::WriteOnly (enum)
    {27, 135, 0, 0, Smoke::mf_static|Smoke::mf_enum, 138, 37},	//60 QGLBuffer::ReadWrite (enum)
    {27, 850, 0, 0, Smoke::mf_dtor, 0, 38 },	//61 QGLBuffer::~QGLBuffer()
    {28, 87, 0, 0, Smoke::mf_ctor, 142, 1},	//62 QGLColormap::QGLColormap()
    {28, 87, 24, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 142, 2},	//63 QGLColormap::QGLColormap(const QGLColormap&)
    {28, 360, 24, 1, 0, 141, 3},	//64 QGLColormap::operator=(const QGLColormap&)
    {28, 298, 0, 0, Smoke::mf_const, 397, 4},	//65 QGLColormap::isEmpty() const
    {28, 805, 0, 0, Smoke::mf_const, 519, 5},	//66 QGLColormap::size() const
    {28, 222, 0, 0, 0, 0, 6},	//67 QGLColormap::detach()
    {28, 724, 26, 3, 0, 0, 7},	//68 QGLColormap::setEntries(int, const unsigned int*, int)
    {28, 727, 30, 2, 0, 0, 8},	//69 QGLColormap::setEntry(int, unsigned int)
    {28, 727, 33, 2, 0, 0, 9},	//70 QGLColormap::setEntry(int, const QColor&)
    {28, 245, 20, 1, Smoke::mf_const, 528, 10},	//71 QGLColormap::entryRgb(int) const
    {28, 243, 20, 1, Smoke::mf_const, 23, 11},	//72 QGLColormap::entryColor(int) const
    {28, 250, 36, 1, Smoke::mf_const, 519, 12},	//73 QGLColormap::find(unsigned int) const
    {28, 252, 36, 1, Smoke::mf_const, 519, 13},	//74 QGLColormap::findNearest(unsigned int) const
    {28, 275, 0, 0, Smoke::mf_protected, 529, 14},	//75 QGLColormap::handle()
    {28, 740, 38, 1, Smoke::mf_protected, 0, 15},	//76 QGLColormap::setHandle(unsigned long)
    {28, 724, 40, 2, 0, 0, 16},	//77 QGLColormap::setEntries(int, const unsigned int*)
    {28, 851, 0, 0, Smoke::mf_dtor, 0, 17 },	//78 QGLColormap::~QGLColormap()
    {29, 89, 43, 2, Smoke::mf_ctor, 143, 1},	//79 QGLContext::QGLContext(const QGLFormat&, QPaintDevice*)
    {29, 89, 46, 1, Smoke::mf_ctor, 143, 2},	//80 QGLContext::QGLContext(const QGLFormat&)
    {29, 210, 48, 1, Smoke::mf_virtual, 397, 3},	//81 QGLContext::create(const QGLContext*)
    {29, 301, 0, 0, Smoke::mf_const, 397, 4},	//82 QGLContext::isValid() const
    {29, 300, 0, 0, Smoke::mf_const, 397, 5},	//83 QGLContext::isSharing() const
    {29, 663, 0, 0, 0, 0, 6},	//84 QGLContext::reset()
    {29, 165, 50, 2, Smoke::mf_static, 397, 7},	//85 QGLContext::areSharing(const QGLContext*, const QGLContext*)
    {29, 261, 0, 0, Smoke::mf_const, 145, 8},	//86 QGLContext::format() const
    {29, 662, 0, 0, Smoke::mf_const, 145, 9},	//87 QGLContext::requestedFormat() const
    {29, 730, 46, 1, 0, 0, 10},	//88 QGLContext::setFormat(const QGLFormat&)
    {29, 309, 0, 0, Smoke::mf_virtual, 0, 11},	//89 QGLContext::makeCurrent()
    {29, 230, 0, 0, Smoke::mf_virtual, 0, 12},	//90 QGLContext::doneCurrent()
    {29, 813, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 0, 13},	//91 QGLContext::swapBuffers() const
    {29, 177, 53, 4, 0, 528, 14},	//92 QGLContext::bindTexture(const QImage&, unsigned int, int, QFlags<QGLContext::BindOption>)
    {29, 177, 58, 4, 0, 528, 15},	//93 QGLContext::bindTexture(const QPixmap&, unsigned int, int, QFlags<QGLContext::BindOption>)
    {29, 177, 63, 3, 0, 528, 16},	//94 QGLContext::bindTexture(const QImage&, unsigned int, int)
    {29, 177, 67, 3, 0, 528, 17},	//95 QGLContext::bindTexture(const QPixmap&, unsigned int, int)
    {29, 177, 71, 1, 0, 528, 18},	//96 QGLContext::bindTexture(const QString&)
    {29, 217, 36, 1, 0, 0, 19},	//97 QGLContext::deleteTexture(unsigned int)
    {29, 235, 73, 3, 0, 0, 20},	//98 QGLContext::drawTexture(const QRectF&, unsigned int, unsigned int)
    {29, 235, 77, 3, 0, 0, 21},	//99 QGLContext::drawTexture(const QPointF&, unsigned int, unsigned int)
    {29, 776, 20, 1, Smoke::mf_static, 0, 22},	//100 QGLContext::setTextureCacheLimit(int)
    {29, 819, 0, 0, Smoke::mf_static, 519, 23},	//101 QGLContext::textureCacheLimit()
    {29, 268, 71, 1, Smoke::mf_const, 535, 24},	//102 QGLContext::getProcAddress(const QString&) const
    {29, 224, 0, 0, Smoke::mf_const, 206, 25},	//103 QGLContext::device() const
    {29, 385, 0, 0, Smoke::mf_const, 23, 26},	//104 QGLContext::overlayTransparentColor() const
    {29, 212, 0, 0, Smoke::mf_static, 416, 27},	//105 QGLContext::currentContext()
    {29, 193, 48, 1, Smoke::mf_protected|Smoke::mf_virtual, 397, 28},	//106 QGLContext::chooseContext(const QGLContext*)
    {29, 831, 81, 2, Smoke::mf_protected|Smoke::mf_virtual, 535, 29},	//107 QGLContext::tryVisual(const QGLFormat&, int)
    {29, 195, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 535, 30},	//108 QGLContext::chooseVisual()
    {29, 225, 0, 0, Smoke::mf_const|Smoke::mf_protected, 397, 31},	//109 QGLContext::deviceIsPixmap() const
    {29, 846, 0, 0, Smoke::mf_const|Smoke::mf_protected, 397, 32},	//110 QGLContext::windowCreated() const
    {29, 799, 84, 1, Smoke::mf_protected, 0, 33},	//111 QGLContext::setWindowCreated(bool)
    {29, 291, 0, 0, Smoke::mf_const|Smoke::mf_protected, 397, 34},	//112 QGLContext::initialized() const
    {29, 742, 84, 1, Smoke::mf_protected, 0, 35},	//113 QGLContext::setInitialized(bool)
    {29, 263, 86, 2, Smoke::mf_protected, 0, 36},	//114 QGLContext::generateFontDisplayLists(const QFont&, int)
    {29, 197, 89, 1, Smoke::mf_const|Smoke::mf_protected, 528, 37},	//115 QGLContext::colorIndex(const QColor&) const
    {29, 794, 84, 1, Smoke::mf_protected, 0, 38},	//116 QGLContext::setValid(bool)
    {29, 718, 91, 1, Smoke::mf_protected, 0, 39},	//117 QGLContext::setDevice(QPaintDevice*)
    {29, 210, 0, 0, 0, 397, 40},	//118 QGLContext::create()
    {29, 177, 93, 1, 0, 528, 41},	//119 QGLContext::bindTexture(const QImage&)
    {29, 177, 95, 2, 0, 528, 42},	//120 QGLContext::bindTexture(const QImage&, unsigned int)
    {29, 177, 98, 1, 0, 528, 43},	//121 QGLContext::bindTexture(const QPixmap&)
    {29, 177, 100, 2, 0, 528, 44},	//122 QGLContext::bindTexture(const QPixmap&, unsigned int)
    {29, 235, 103, 2, 0, 0, 45},	//123 QGLContext::drawTexture(const QRectF&, unsigned int)
    {29, 235, 106, 2, 0, 0, 46},	//124 QGLContext::drawTexture(const QPointF&, unsigned int)
    {29, 193, 0, 0, Smoke::mf_protected, 397, 47},	//125 QGLContext::chooseContext()
    {29, 831, 46, 1, Smoke::mf_protected, 535, 48},	//126 QGLContext::tryVisual(const QGLFormat&)
    {29, 213, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_protected|Smoke::mf_attribute, 143, 49},	//127 QGLContext::currentCtx() const
    {29, 708, 109, 1, Smoke::mf_static|Smoke::mf_protected|Smoke::mf_attribute, 0, 50},	//128 QGLContext::setCurrentCtx(QGLContext*)
    {29, 55, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 51},	//129 QGLContext::NoBindOption (enum)
    {29, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 52},	//130 QGLContext::InvertedYBindOption (enum)
    {29, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 53},	//131 QGLContext::MipmapBindOption (enum)
    {29, 83, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 54},	//132 QGLContext::PremultipliedAlphaBindOption (enum)
    {29, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 55},	//133 QGLContext::LinearFilteringBindOption (enum)
    {29, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 56},	//134 QGLContext::MemoryManagedBindOption (enum)
    {29, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 57},	//135 QGLContext::CanFlipNativePixmapBindOption (enum)
    {29, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 58},	//136 QGLContext::DefaultBindOption (enum)
    {29, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 59},	//137 QGLContext::InternalBindOption (enum)
    {29, 852, 0, 0, Smoke::mf_dtor, 0, 60 },	//138 QGLContext::~QGLContext()
    {30, 92, 0, 0, Smoke::mf_ctor, 147, 1},	//139 QGLFormat::QGLFormat()
    {30, 92, 111, 2, Smoke::mf_ctor, 147, 2},	//140 QGLFormat::QGLFormat(QFlags<QGL::FormatOption>, int)
    {30, 92, 46, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 147, 3},	//141 QGLFormat::QGLFormat(const QGLFormat&)
    {30, 360, 46, 1, 0, 146, 4},	//142 QGLFormat::operator=(const QGLFormat&)
    {30, 716, 20, 1, 0, 0, 5},	//143 QGLFormat::setDepthBufferSize(int)
    {30, 220, 0, 0, Smoke::mf_const, 519, 6},	//144 QGLFormat::depthBufferSize() const
    {30, 675, 20, 1, 0, 0, 7},	//145 QGLFormat::setAccumBufferSize(int)
    {30, 151, 0, 0, Smoke::mf_const, 519, 8},	//146 QGLFormat::accumBufferSize() const
    {30, 760, 20, 1, 0, 0, 9},	//147 QGLFormat::setRedBufferSize(int)
    {30, 644, 0, 0, Smoke::mf_const, 519, 10},	//148 QGLFormat::redBufferSize() const
    {30, 738, 20, 1, 0, 0, 11},	//149 QGLFormat::setGreenBufferSize(int)
    {30, 274, 0, 0, Smoke::mf_const, 519, 12},	//150 QGLFormat::greenBufferSize() const
    {30, 700, 20, 1, 0, 0, 13},	//151 QGLFormat::setBlueBufferSize(int)
    {30, 189, 0, 0, Smoke::mf_const, 519, 14},	//152 QGLFormat::blueBufferSize() const
    {30, 679, 20, 1, 0, 0, 15},	//153 QGLFormat::setAlphaBufferSize(int)
    {30, 164, 0, 0, Smoke::mf_const, 519, 16},	//154 QGLFormat::alphaBufferSize() const
    {30, 770, 20, 1, 0, 0, 17},	//155 QGLFormat::setStencilBufferSize(int)
    {30, 810, 0, 0, Smoke::mf_const, 519, 18},	//156 QGLFormat::stencilBufferSize() const
    {30, 764, 84, 1, 0, 0, 19},	//157 QGLFormat::setSampleBuffers(bool)
    {30, 671, 0, 0, Smoke::mf_const, 397, 20},	//158 QGLFormat::sampleBuffers() const
    {30, 766, 20, 1, 0, 0, 21},	//159 QGLFormat::setSamples(int)
    {30, 672, 0, 0, Smoke::mf_const, 519, 22},	//160 QGLFormat::samples() const
    {30, 774, 20, 1, 0, 0, 23},	//161 QGLFormat::setSwapInterval(int)
    {30, 814, 0, 0, Smoke::mf_const, 519, 24},	//162 QGLFormat::swapInterval() const
    {30, 231, 0, 0, Smoke::mf_const, 397, 25},	//163 QGLFormat::doubleBuffer() const
    {30, 722, 84, 1, 0, 0, 26},	//164 QGLFormat::setDoubleBuffer(bool)
    {30, 219, 0, 0, Smoke::mf_const, 397, 27},	//165 QGLFormat::depth() const
    {30, 714, 84, 1, 0, 0, 28},	//166 QGLFormat::setDepth(bool)
    {30, 670, 0, 0, Smoke::mf_const, 397, 29},	//167 QGLFormat::rgba() const
    {30, 762, 84, 1, 0, 0, 30},	//168 QGLFormat::setRgba(bool)
    {30, 163, 0, 0, Smoke::mf_const, 397, 31},	//169 QGLFormat::alpha() const
    {30, 677, 84, 1, 0, 0, 32},	//170 QGLFormat::setAlpha(bool)
    {30, 150, 0, 0, Smoke::mf_const, 397, 33},	//171 QGLFormat::accum() const
    {30, 673, 84, 1, 0, 0, 34},	//172 QGLFormat::setAccum(bool)
    {30, 809, 0, 0, Smoke::mf_const, 397, 35},	//173 QGLFormat::stencil() const
    {30, 768, 84, 1, 0, 0, 36},	//174 QGLFormat::setStencil(bool)
    {30, 811, 0, 0, Smoke::mf_const, 397, 37},	//175 QGLFormat::stereo() const
    {30, 772, 84, 1, 0, 0, 38},	//176 QGLFormat::setStereo(bool)
    {30, 226, 0, 0, Smoke::mf_const, 397, 39},	//177 QGLFormat::directRendering() const
    {30, 720, 84, 1, 0, 0, 40},	//178 QGLFormat::setDirectRendering(bool)
    {30, 286, 0, 0, Smoke::mf_const, 397, 41},	//179 QGLFormat::hasOverlay() const
    {30, 752, 84, 1, 0, 0, 42},	//180 QGLFormat::setOverlay(bool)
    {30, 392, 0, 0, Smoke::mf_const, 519, 43},	//181 QGLFormat::plane() const
    {30, 754, 20, 1, 0, 0, 44},	//182 QGLFormat::setPlane(int)
    {30, 750, 114, 1, 0, 0, 45},	//183 QGLFormat::setOption(QFlags<QGL::FormatOption>)
    {30, 816, 114, 1, Smoke::mf_const, 397, 46},	//184 QGLFormat::testOption(QFlags<QGL::FormatOption>) const
    {30, 215, 0, 0, Smoke::mf_static, 145, 47},	//185 QGLFormat::defaultFormat()
    {30, 710, 46, 1, Smoke::mf_static, 0, 48},	//186 QGLFormat::setDefaultFormat(const QGLFormat&)
    {30, 216, 0, 0, Smoke::mf_static, 145, 49},	//187 QGLFormat::defaultOverlayFormat()
    {30, 712, 46, 1, Smoke::mf_static, 0, 50},	//188 QGLFormat::setDefaultOverlayFormat(const QGLFormat&)
    {30, 276, 0, 0, Smoke::mf_static, 397, 51},	//189 QGLFormat::hasOpenGL()
    {30, 279, 0, 0, Smoke::mf_static, 397, 52},	//190 QGLFormat::hasOpenGLOverlays()
    {30, 796, 116, 2, 0, 0, 53},	//191 QGLFormat::setVersion(int, int)
    {30, 308, 0, 0, Smoke::mf_const, 519, 54},	//192 QGLFormat::majorVersion() const
    {30, 318, 0, 0, Smoke::mf_const, 519, 55},	//193 QGLFormat::minorVersion() const
    {30, 758, 119, 1, 0, 0, 56},	//194 QGLFormat::setProfile(QGLFormat::OpenGLContextProfile)
    {30, 393, 0, 0, Smoke::mf_const, 148, 57},	//195 QGLFormat::profile() const
    {30, 325, 0, 0, Smoke::mf_static, 69, 58},	//196 QGLFormat::openGLVersionFlags()
    {30, 92, 114, 1, Smoke::mf_ctor, 147, 59},	//197 QGLFormat::QGLFormat(QFlags<QGL::FormatOption>)
    {30, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 60},	//198 QGLFormat::NoProfile (enum)
    {30, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 61},	//199 QGLFormat::CoreProfile (enum)
    {30, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 62},	//200 QGLFormat::CompatibilityProfile (enum)
    {30, 80, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 63},	//201 QGLFormat::OpenGL_Version_None (enum)
    {30, 68, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 64},	//202 QGLFormat::OpenGL_Version_1_1 (enum)
    {30, 69, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 65},	//203 QGLFormat::OpenGL_Version_1_2 (enum)
    {30, 70, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 66},	//204 QGLFormat::OpenGL_Version_1_3 (enum)
    {30, 71, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 67},	//205 QGLFormat::OpenGL_Version_1_4 (enum)
    {30, 72, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 68},	//206 QGLFormat::OpenGL_Version_1_5 (enum)
    {30, 73, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 69},	//207 QGLFormat::OpenGL_Version_2_0 (enum)
    {30, 74, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 70},	//208 QGLFormat::OpenGL_Version_2_1 (enum)
    {30, 65, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 71},	//209 QGLFormat::OpenGL_ES_Common_Version_1_0 (enum)
    {30, 63, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 72},	//210 QGLFormat::OpenGL_ES_CommonLite_Version_1_0 (enum)
    {30, 66, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 73},	//211 QGLFormat::OpenGL_ES_Common_Version_1_1 (enum)
    {30, 64, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 74},	//212 QGLFormat::OpenGL_ES_CommonLite_Version_1_1 (enum)
    {30, 67, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 75},	//213 QGLFormat::OpenGL_ES_Version_2_0 (enum)
    {30, 75, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 76},	//214 QGLFormat::OpenGL_Version_3_0 (enum)
    {30, 76, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 77},	//215 QGLFormat::OpenGL_Version_3_1 (enum)
    {30, 77, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 78},	//216 QGLFormat::OpenGL_Version_3_2 (enum)
    {30, 78, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 79},	//217 QGLFormat::OpenGL_Version_3_3 (enum)
    {30, 79, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 80},	//218 QGLFormat::OpenGL_Version_4_0 (enum)
    {30, 853, 0, 0, Smoke::mf_dtor, 0, 81 },	//219 QGLFormat::~QGLFormat()
    {31, 96, 121, 2, Smoke::mf_ctor, 150, 1},	//220 QGLFramebufferObject::QGLFramebufferObject(const QSize&, unsigned int)
    {31, 96, 124, 3, Smoke::mf_ctor, 150, 2},	//221 QGLFramebufferObject::QGLFramebufferObject(int, int, unsigned int)
    {31, 96, 128, 4, Smoke::mf_ctor, 150, 3},	//222 QGLFramebufferObject::QGLFramebufferObject(const QSize&, QGLFramebufferObject::Attachment, unsigned int, unsigned int)
    {31, 96, 133, 5, Smoke::mf_ctor, 150, 4},	//223 QGLFramebufferObject::QGLFramebufferObject(int, int, QGLFramebufferObject::Attachment, unsigned int, unsigned int)
    {31, 96, 139, 2, Smoke::mf_ctor, 150, 5},	//224 QGLFramebufferObject::QGLFramebufferObject(const QSize&, const QGLFramebufferObjectFormat&)
    {31, 96, 142, 3, Smoke::mf_ctor, 150, 6},	//225 QGLFramebufferObject::QGLFramebufferObject(int, int, const QGLFramebufferObjectFormat&)
    {31, 261, 0, 0, Smoke::mf_const, 152, 7},	//226 QGLFramebufferObject::format() const
    {31, 301, 0, 0, Smoke::mf_const, 397, 8},	//227 QGLFramebufferObject::isValid() const
    {31, 295, 0, 0, Smoke::mf_const, 397, 9},	//228 QGLFramebufferObject::isBound() const
    {31, 172, 0, 0, 0, 397, 10},	//229 QGLFramebufferObject::bind()
    {31, 645, 0, 0, 0, 397, 11},	//230 QGLFramebufferObject::release()
    {31, 818, 0, 0, Smoke::mf_const, 528, 12},	//231 QGLFramebufferObject::texture() const
    {31, 805, 0, 0, Smoke::mf_const, 239, 13},	//232 QGLFramebufferObject::size() const
    {31, 822, 0, 0, Smoke::mf_const, 174, 14},	//233 QGLFramebufferObject::toImage() const
    {31, 167, 0, 0, Smoke::mf_const, 151, 15},	//234 QGLFramebufferObject::attachment() const
    {31, 386, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 208, 16},	//235 QGLFramebufferObject::paintEngine() const
    {31, 275, 0, 0, Smoke::mf_const, 528, 17},	//236 QGLFramebufferObject::handle() const
    {31, 176, 0, 0, Smoke::mf_static, 397, 18},	//237 QGLFramebufferObject::bindDefault()
    {31, 278, 0, 0, Smoke::mf_static, 397, 19},	//238 QGLFramebufferObject::hasOpenGLFramebufferObjects()
    {31, 235, 73, 3, 0, 0, 20},	//239 QGLFramebufferObject::drawTexture(const QRectF&, unsigned int, unsigned int)
    {31, 235, 77, 3, 0, 0, 21},	//240 QGLFramebufferObject::drawTexture(const QPointF&, unsigned int, unsigned int)
    {31, 277, 0, 0, Smoke::mf_static, 397, 22},	//241 QGLFramebufferObject::hasOpenGLFramebufferBlit()
    {31, 185, 146, 6, Smoke::mf_static, 0, 23},	//242 QGLFramebufferObject::blitFramebuffer(QGLFramebufferObject*, const QRect&, QGLFramebufferObject*, const QRect&, unsigned int, unsigned int)
    {31, 315, 153, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 519, 24},	//243 QGLFramebufferObject::metric(QPaintDevice::PaintDeviceMetric) const
    {31, 223, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 519, 25},	//244 QGLFramebufferObject::devType() const
    {31, 96, 155, 1, Smoke::mf_ctor, 150, 26},	//245 QGLFramebufferObject::QGLFramebufferObject(const QSize&)
    {31, 96, 116, 2, Smoke::mf_ctor, 150, 27},	//246 QGLFramebufferObject::QGLFramebufferObject(int, int)
    {31, 96, 157, 2, Smoke::mf_ctor, 150, 28},	//247 QGLFramebufferObject::QGLFramebufferObject(const QSize&, QGLFramebufferObject::Attachment)
    {31, 96, 160, 3, Smoke::mf_ctor, 150, 29},	//248 QGLFramebufferObject::QGLFramebufferObject(const QSize&, QGLFramebufferObject::Attachment, unsigned int)
    {31, 96, 164, 3, Smoke::mf_ctor, 150, 30},	//249 QGLFramebufferObject::QGLFramebufferObject(int, int, QGLFramebufferObject::Attachment)
    {31, 96, 168, 4, Smoke::mf_ctor, 150, 31},	//250 QGLFramebufferObject::QGLFramebufferObject(int, int, QGLFramebufferObject::Attachment, unsigned int)
    {31, 235, 103, 2, 0, 0, 32},	//251 QGLFramebufferObject::drawTexture(const QRectF&, unsigned int)
    {31, 235, 106, 2, 0, 0, 33},	//252 QGLFramebufferObject::drawTexture(const QPointF&, unsigned int)
    {31, 185, 173, 4, Smoke::mf_static, 0, 34},	//253 QGLFramebufferObject::blitFramebuffer(QGLFramebufferObject*, const QRect&, QGLFramebufferObject*, const QRect&)
    {31, 185, 178, 5, Smoke::mf_static, 0, 35},	//254 QGLFramebufferObject::blitFramebuffer(QGLFramebufferObject*, const QRect&, QGLFramebufferObject*, const QRect&, unsigned int)
    {31, 54, 0, 0, Smoke::mf_static|Smoke::mf_enum, 151, 36},	//255 QGLFramebufferObject::NoAttachment (enum)
    {31, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 151, 37},	//256 QGLFramebufferObject::CombinedDepthStencil (enum)
    {31, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 151, 38},	//257 QGLFramebufferObject::Depth (enum)
    {31, 854, 0, 0, Smoke::mf_dtor, 0, 39 },	//258 QGLFramebufferObject::~QGLFramebufferObject()
    {32, 107, 0, 0, Smoke::mf_ctor, 154, 1},	//259 QGLFramebufferObjectFormat::QGLFramebufferObjectFormat()
    {32, 107, 184, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 154, 2},	//260 QGLFramebufferObjectFormat::QGLFramebufferObjectFormat(const QGLFramebufferObjectFormat&)
    {32, 360, 184, 1, 0, 153, 3},	//261 QGLFramebufferObjectFormat::operator=(const QGLFramebufferObjectFormat&)
    {32, 766, 20, 1, 0, 0, 4},	//262 QGLFramebufferObjectFormat::setSamples(int)
    {32, 672, 0, 0, Smoke::mf_const, 519, 5},	//263 QGLFramebufferObjectFormat::samples() const
    {32, 746, 84, 1, 0, 0, 6},	//264 QGLFramebufferObjectFormat::setMipmap(bool)
    {32, 319, 0, 0, Smoke::mf_const, 397, 7},	//265 QGLFramebufferObjectFormat::mipmap() const
    {32, 681, 186, 1, 0, 0, 8},	//266 QGLFramebufferObjectFormat::setAttachment(QGLFramebufferObject::Attachment)
    {32, 167, 0, 0, Smoke::mf_const, 151, 9},	//267 QGLFramebufferObjectFormat::attachment() const
    {32, 778, 36, 1, 0, 0, 10},	//268 QGLFramebufferObjectFormat::setTextureTarget(unsigned int)
    {32, 820, 0, 0, Smoke::mf_const, 528, 11},	//269 QGLFramebufferObjectFormat::textureTarget() const
    {32, 744, 36, 1, 0, 0, 12},	//270 QGLFramebufferObjectFormat::setInternalTextureFormat(unsigned int)
    {32, 294, 0, 0, Smoke::mf_const, 528, 13},	//271 QGLFramebufferObjectFormat::internalTextureFormat() const
    {32, 362, 184, 1, Smoke::mf_const, 397, 14},	//272 QGLFramebufferObjectFormat::operator==(const QGLFramebufferObjectFormat&) const
    {32, 326, 184, 1, Smoke::mf_const, 397, 15},	//273 QGLFramebufferObjectFormat::operator!=(const QGLFramebufferObjectFormat&) const
    {32, 855, 0, 0, Smoke::mf_dtor, 0, 16 },	//274 QGLFramebufferObjectFormat::~QGLFramebufferObjectFormat()
    {33, 109, 188, 3, Smoke::mf_ctor, 156, 1},	//275 QGLPixelBuffer::QGLPixelBuffer(const QSize&, const QGLFormat&, QGLWidget*)
    {33, 109, 192, 4, Smoke::mf_ctor, 156, 2},	//276 QGLPixelBuffer::QGLPixelBuffer(int, int, const QGLFormat&, QGLWidget*)
    {33, 301, 0, 0, Smoke::mf_const, 397, 3},	//277 QGLPixelBuffer::isValid() const
    {33, 309, 0, 0, 0, 397, 4},	//278 QGLPixelBuffer::makeCurrent()
    {33, 230, 0, 0, 0, 397, 5},	//279 QGLPixelBuffer::doneCurrent()
    {33, 262, 0, 0, Smoke::mf_const, 528, 6},	//280 QGLPixelBuffer::generateDynamicTexture() const
    {33, 183, 36, 1, 0, 397, 7},	//281 QGLPixelBuffer::bindToDynamicTexture(unsigned int)
    {33, 647, 0, 0, 0, 0, 8},	//282 QGLPixelBuffer::releaseFromDynamicTexture()
    {33, 839, 36, 1, Smoke::mf_const, 0, 9},	//283 QGLPixelBuffer::updateDynamicTexture(unsigned int) const
    {33, 177, 95, 2, 0, 528, 10},	//284 QGLPixelBuffer::bindTexture(const QImage&, unsigned int)
    {33, 177, 100, 2, 0, 528, 11},	//285 QGLPixelBuffer::bindTexture(const QPixmap&, unsigned int)
    {33, 177, 71, 1, 0, 528, 12},	//286 QGLPixelBuffer::bindTexture(const QString&)
    {33, 217, 36, 1, 0, 0, 13},	//287 QGLPixelBuffer::deleteTexture(unsigned int)
    {33, 235, 73, 3, 0, 0, 14},	//288 QGLPixelBuffer::drawTexture(const QRectF&, unsigned int, unsigned int)
    {33, 235, 77, 3, 0, 0, 15},	//289 QGLPixelBuffer::drawTexture(const QPointF&, unsigned int, unsigned int)
    {33, 805, 0, 0, Smoke::mf_const, 239, 16},	//290 QGLPixelBuffer::size() const
    {33, 275, 0, 0, Smoke::mf_const, 529, 17},	//291 QGLPixelBuffer::handle() const
    {33, 822, 0, 0, Smoke::mf_const, 174, 18},	//292 QGLPixelBuffer::toImage() const
    {33, 386, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 208, 19},	//293 QGLPixelBuffer::paintEngine() const
    {33, 261, 0, 0, Smoke::mf_const, 145, 20},	//294 QGLPixelBuffer::format() const
    {33, 280, 0, 0, Smoke::mf_static, 397, 21},	//295 QGLPixelBuffer::hasOpenGLPbuffers()
    {33, 315, 153, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 519, 22},	//296 QGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric) const
    {33, 223, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 519, 23},	//297 QGLPixelBuffer::devType() const
    {33, 109, 155, 1, Smoke::mf_ctor, 156, 24},	//298 QGLPixelBuffer::QGLPixelBuffer(const QSize&)
    {33, 109, 197, 2, Smoke::mf_ctor, 156, 25},	//299 QGLPixelBuffer::QGLPixelBuffer(const QSize&, const QGLFormat&)
    {33, 109, 116, 2, Smoke::mf_ctor, 156, 26},	//300 QGLPixelBuffer::QGLPixelBuffer(int, int)
    {33, 109, 200, 3, Smoke::mf_ctor, 156, 27},	//301 QGLPixelBuffer::QGLPixelBuffer(int, int, const QGLFormat&)
    {33, 177, 93, 1, 0, 528, 28},	//302 QGLPixelBuffer::bindTexture(const QImage&)
    {33, 177, 98, 1, 0, 528, 29},	//303 QGLPixelBuffer::bindTexture(const QPixmap&)
    {33, 235, 103, 2, 0, 0, 30},	//304 QGLPixelBuffer::drawTexture(const QRectF&, unsigned int)
    {33, 235, 106, 2, 0, 0, 31},	//305 QGLPixelBuffer::drawTexture(const QPointF&, unsigned int)
    {33, 856, 0, 0, Smoke::mf_dtor, 0, 32 },	//306 QGLPixelBuffer::~QGLPixelBuffer()
    {34, 314, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 451, 1},	//307 QGLShader::metaObject() const
    {34, 631, 204, 1, Smoke::mf_virtual, 535, 2},	//308 QGLShader::qt_metacast(const char*)
    {34, 823, 206, 2, Smoke::mf_static, 246, 3},	//309 QGLShader::tr(const char*, const char*)
    {34, 827, 206, 2, Smoke::mf_static, 246, 4},	//310 QGLShader::trUtf8(const char*, const char*)
    {34, 823, 209, 3, Smoke::mf_static, 246, 5},	//311 QGLShader::tr(const char*, const char*, int)
    {34, 827, 209, 3, Smoke::mf_static, 246, 6},	//312 QGLShader::trUtf8(const char*, const char*, int)
    {34, 629, 213, 3, Smoke::mf_virtual, 519, 7},	//313 QGLShader::qt_metacall(QMetaObject::Call, int, void**)
    {34, 116, 217, 2, Smoke::mf_ctor, 157, 8},	//314 QGLShader::QGLShader(QFlags<QGLShader::ShaderTypeBit>, QObject*)
    {34, 116, 220, 3, Smoke::mf_ctor, 157, 9},	//315 QGLShader::QGLShader(QFlags<QGLShader::ShaderTypeBit>, const QGLContext*, QObject*)
    {34, 802, 0, 0, Smoke::mf_const, 71, 10},	//316 QGLShader::shaderType() const
    {34, 200, 204, 1, 0, 397, 11},	//317 QGLShader::compileSourceCode(const char*)
    {34, 200, 224, 1, 0, 397, 12},	//318 QGLShader::compileSourceCode(const QByteArray&)
    {34, 200, 71, 1, 0, 397, 13},	//319 QGLShader::compileSourceCode(const QString&)
    {34, 203, 71, 1, 0, 397, 14},	//320 QGLShader::compileSourceFile(const QString&)
    {34, 807, 0, 0, Smoke::mf_const, 17, 15},	//321 QGLShader::sourceCode() const
    {34, 296, 0, 0, Smoke::mf_const, 397, 16},	//322 QGLShader::isCompiled() const
    {34, 307, 0, 0, Smoke::mf_const, 246, 17},	//323 QGLShader::log() const
    {34, 801, 0, 0, Smoke::mf_const, 528, 18},	//324 QGLShader::shaderId() const
    {34, 283, 226, 2, Smoke::mf_static, 397, 19},	//325 QGLShader::hasOpenGLShaders(QFlags<QGLShader::ShaderTypeBit>, const QGLContext*)
    {34, 823, 204, 1, Smoke::mf_static, 246, 20},	//326 QGLShader::tr(const char*)
    {34, 827, 204, 1, Smoke::mf_static, 246, 21},	//327 QGLShader::trUtf8(const char*)
    {34, 116, 229, 1, Smoke::mf_ctor, 157, 22},	//328 QGLShader::QGLShader(QFlags<QGLShader::ShaderTypeBit>)
    {34, 116, 226, 2, Smoke::mf_ctor, 157, 23},	//329 QGLShader::QGLShader(QFlags<QGLShader::ShaderTypeBit>, const QGLContext*)
    {34, 283, 229, 1, Smoke::mf_static, 397, 24},	//330 QGLShader::hasOpenGLShaders(QFlags<QGLShader::ShaderTypeBit>)
    {34, 808, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 450, 25},	//331 QGLShader::staticMetaObject() const
    {34, 147, 0, 0, Smoke::mf_static|Smoke::mf_enum, 158, 26},	//332 QGLShader::Vertex (enum)
    {34, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 158, 27},	//333 QGLShader::Fragment (enum)
    {34, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 158, 28},	//334 QGLShader::Geometry (enum)
    {34, 857, 0, 0, Smoke::mf_dtor, 0, 29 },	//335 QGLShader::~QGLShader()
    {35, 314, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 451, 1},	//336 QGLShaderProgram::metaObject() const
    {35, 631, 204, 1, Smoke::mf_virtual, 535, 2},	//337 QGLShaderProgram::qt_metacast(const char*)
    {35, 823, 206, 2, Smoke::mf_static, 246, 3},	//338 QGLShaderProgram::tr(const char*, const char*)
    {35, 827, 206, 2, Smoke::mf_static, 246, 4},	//339 QGLShaderProgram::trUtf8(const char*, const char*)
    {35, 823, 209, 3, Smoke::mf_static, 246, 5},	//340 QGLShaderProgram::tr(const char*, const char*, int)
    {35, 827, 209, 3, Smoke::mf_static, 246, 6},	//341 QGLShaderProgram::trUtf8(const char*, const char*, int)
    {35, 629, 213, 3, Smoke::mf_virtual, 519, 7},	//342 QGLShaderProgram::qt_metacall(QMetaObject::Call, int, void**)
    {35, 120, 231, 1, Smoke::mf_ctor, 159, 8},	//343 QGLShaderProgram::QGLShaderProgram(QObject*)
    {35, 120, 233, 2, Smoke::mf_ctor, 159, 9},	//344 QGLShaderProgram::QGLShaderProgram(const QGLContext*, QObject*)
    {35, 153, 236, 1, 0, 397, 10},	//345 QGLShaderProgram::addShader(QGLShader*)
    {35, 649, 236, 1, 0, 0, 11},	//346 QGLShaderProgram::removeShader(QGLShader*)
    {35, 803, 0, 0, Smoke::mf_const, 189, 12},	//347 QGLShaderProgram::shaders() const
    {35, 155, 238, 2, 0, 397, 13},	//348 QGLShaderProgram::addShaderFromSourceCode(QFlags<QGLShader::ShaderTypeBit>, const char*)
    {35, 155, 241, 2, 0, 397, 14},	//349 QGLShaderProgram::addShaderFromSourceCode(QFlags<QGLShader::ShaderTypeBit>, const QByteArray&)
    {35, 155, 244, 2, 0, 397, 15},	//350 QGLShaderProgram::addShaderFromSourceCode(QFlags<QGLShader::ShaderTypeBit>, const QString&)
    {35, 158, 244, 2, 0, 397, 16},	//351 QGLShaderProgram::addShaderFromSourceFile(QFlags<QGLShader::ShaderTypeBit>, const QString&)
    {35, 648, 0, 0, 0, 0, 17},	//352 QGLShaderProgram::removeAllShaders()
    {35, 306, 0, 0, Smoke::mf_virtual, 397, 18},	//353 QGLShaderProgram::link()
    {35, 299, 0, 0, Smoke::mf_const, 397, 19},	//354 QGLShaderProgram::isLinked() const
    {35, 307, 0, 0, Smoke::mf_const, 246, 20},	//355 QGLShaderProgram::log() const
    {35, 172, 0, 0, 0, 397, 21},	//356 QGLShaderProgram::bind()
    {35, 645, 0, 0, 0, 0, 22},	//357 QGLShaderProgram::release()
    {35, 394, 0, 0, Smoke::mf_const, 528, 23},	//358 QGLShaderProgram::programId() const
    {35, 313, 0, 0, Smoke::mf_const, 519, 24},	//359 QGLShaderProgram::maxGeometryOutputVertices() const
    {35, 736, 20, 1, 0, 0, 25},	//360 QGLShaderProgram::setGeometryOutputVertexCount(int)
    {35, 267, 0, 0, Smoke::mf_const, 519, 26},	//361 QGLShaderProgram::geometryOutputVertexCount() const
    {35, 732, 36, 1, 0, 0, 27},	//362 QGLShaderProgram::setGeometryInputType(unsigned int)
    {35, 265, 0, 0, Smoke::mf_const, 528, 28},	//363 QGLShaderProgram::geometryInputType() const
    {35, 734, 36, 1, 0, 0, 29},	//364 QGLShaderProgram::setGeometryOutputType(unsigned int)
    {35, 266, 0, 0, Smoke::mf_const, 528, 30},	//365 QGLShaderProgram::geometryOutputType() const
    {35, 173, 247, 2, 0, 0, 31},	//366 QGLShaderProgram::bindAttributeLocation(const char*, int)
    {35, 173, 250, 2, 0, 0, 32},	//367 QGLShaderProgram::bindAttributeLocation(const QByteArray&, int)
    {35, 173, 253, 2, 0, 0, 33},	//368 QGLShaderProgram::bindAttributeLocation(const QString&, int)
    {35, 168, 204, 1, Smoke::mf_const, 519, 34},	//369 QGLShaderProgram::attributeLocation(const char*) const
    {35, 168, 224, 1, Smoke::mf_const, 519, 35},	//370 QGLShaderProgram::attributeLocation(const QByteArray&) const
    {35, 168, 71, 1, Smoke::mf_const, 519, 36},	//371 QGLShaderProgram::attributeLocation(const QString&) const
    {35, 692, 256, 2, 0, 0, 37},	//372 QGLShaderProgram::setAttributeValue(int, float)
    {35, 692, 259, 3, 0, 0, 38},	//373 QGLShaderProgram::setAttributeValue(int, float, float)
    {35, 692, 263, 4, 0, 0, 39},	//374 QGLShaderProgram::setAttributeValue(int, float, float, float)
    {35, 692, 268, 5, 0, 0, 40},	//375 QGLShaderProgram::setAttributeValue(int, float, float, float, float)
    {35, 692, 274, 2, 0, 0, 41},	//376 QGLShaderProgram::setAttributeValue(int, const QVector2D&)
    {35, 692, 277, 2, 0, 0, 42},	//377 QGLShaderProgram::setAttributeValue(int, const QVector3D&)
    {35, 692, 280, 2, 0, 0, 43},	//378 QGLShaderProgram::setAttributeValue(int, const QVector4D&)
    {35, 692, 33, 2, 0, 0, 44},	//379 QGLShaderProgram::setAttributeValue(int, const QColor&)
    {35, 692, 283, 4, 0, 0, 45},	//380 QGLShaderProgram::setAttributeValue(int, const float*, int, int)
    {35, 692, 288, 2, 0, 0, 46},	//381 QGLShaderProgram::setAttributeValue(const char*, float)
    {35, 692, 291, 3, 0, 0, 47},	//382 QGLShaderProgram::setAttributeValue(const char*, float, float)
    {35, 692, 295, 4, 0, 0, 48},	//383 QGLShaderProgram::setAttributeValue(const char*, float, float, float)
    {35, 692, 300, 5, 0, 0, 49},	//384 QGLShaderProgram::setAttributeValue(const char*, float, float, float, float)
    {35, 692, 306, 2, 0, 0, 50},	//385 QGLShaderProgram::setAttributeValue(const char*, const QVector2D&)
    {35, 692, 309, 2, 0, 0, 51},	//386 QGLShaderProgram::setAttributeValue(const char*, const QVector3D&)
    {35, 692, 312, 2, 0, 0, 52},	//387 QGLShaderProgram::setAttributeValue(const char*, const QVector4D&)
    {35, 692, 315, 2, 0, 0, 53},	//388 QGLShaderProgram::setAttributeValue(const char*, const QColor&)
    {35, 692, 318, 4, 0, 0, 54},	//389 QGLShaderProgram::setAttributeValue(const char*, const float*, int, int)
    {35, 683, 283, 4, 0, 0, 55},	//390 QGLShaderProgram::setAttributeArray(int, const float*, int, int)
    {35, 683, 323, 3, 0, 0, 56},	//391 QGLShaderProgram::setAttributeArray(int, const QVector2D*, int)
    {35, 683, 327, 3, 0, 0, 57},	//392 QGLShaderProgram::setAttributeArray(int, const QVector3D*, int)
    {35, 683, 331, 3, 0, 0, 58},	//393 QGLShaderProgram::setAttributeArray(int, const QVector4D*, int)
    {35, 683, 335, 5, 0, 0, 59},	//394 QGLShaderProgram::setAttributeArray(int, unsigned int, const void*, int, int)
    {35, 683, 318, 4, 0, 0, 60},	//395 QGLShaderProgram::setAttributeArray(const char*, const float*, int, int)
    {35, 683, 341, 3, 0, 0, 61},	//396 QGLShaderProgram::setAttributeArray(const char*, const QVector2D*, int)
    {35, 683, 345, 3, 0, 0, 62},	//397 QGLShaderProgram::setAttributeArray(const char*, const QVector3D*, int)
    {35, 683, 349, 3, 0, 0, 63},	//398 QGLShaderProgram::setAttributeArray(const char*, const QVector4D*, int)
    {35, 683, 353, 5, 0, 0, 64},	//399 QGLShaderProgram::setAttributeArray(const char*, unsigned int, const void*, int, int)
    {35, 689, 359, 5, 0, 0, 65},	//400 QGLShaderProgram::setAttributeBuffer(int, unsigned int, int, int, int)
    {35, 689, 365, 5, 0, 0, 66},	//401 QGLShaderProgram::setAttributeBuffer(const char*, unsigned int, int, int, int)
    {35, 239, 20, 1, 0, 0, 67},	//402 QGLShaderProgram::enableAttributeArray(int)
    {35, 239, 204, 1, 0, 0, 68},	//403 QGLShaderProgram::enableAttributeArray(const char*)
    {35, 227, 20, 1, 0, 0, 69},	//404 QGLShaderProgram::disableAttributeArray(int)
    {35, 227, 204, 1, 0, 0, 70},	//405 QGLShaderProgram::disableAttributeArray(const char*)
    {35, 835, 204, 1, Smoke::mf_const, 519, 71},	//406 QGLShaderProgram::uniformLocation(const char*) const
    {35, 835, 224, 1, Smoke::mf_const, 519, 72},	//407 QGLShaderProgram::uniformLocation(const QByteArray&) const
    {35, 835, 71, 1, Smoke::mf_const, 519, 73},	//408 QGLShaderProgram::uniformLocation(const QString&) const
    {35, 780, 256, 2, 0, 0, 74},	//409 QGLShaderProgram::setUniformValue(int, float)
    {35, 780, 116, 2, 0, 0, 75},	//410 QGLShaderProgram::setUniformValue(int, int)
    {35, 780, 30, 2, 0, 0, 76},	//411 QGLShaderProgram::setUniformValue(int, unsigned int)
    {35, 780, 259, 3, 0, 0, 77},	//412 QGLShaderProgram::setUniformValue(int, float, float)
    {35, 780, 263, 4, 0, 0, 78},	//413 QGLShaderProgram::setUniformValue(int, float, float, float)
    {35, 780, 268, 5, 0, 0, 79},	//414 QGLShaderProgram::setUniformValue(int, float, float, float, float)
    {35, 780, 274, 2, 0, 0, 80},	//415 QGLShaderProgram::setUniformValue(int, const QVector2D&)
    {35, 780, 277, 2, 0, 0, 81},	//416 QGLShaderProgram::setUniformValue(int, const QVector3D&)
    {35, 780, 280, 2, 0, 0, 82},	//417 QGLShaderProgram::setUniformValue(int, const QVector4D&)
    {35, 780, 33, 2, 0, 0, 83},	//418 QGLShaderProgram::setUniformValue(int, const QColor&)
    {35, 780, 371, 2, 0, 0, 84},	//419 QGLShaderProgram::setUniformValue(int, const QPoint&)
    {35, 780, 374, 2, 0, 0, 85},	//420 QGLShaderProgram::setUniformValue(int, const QPointF&)
    {35, 780, 377, 2, 0, 0, 86},	//421 QGLShaderProgram::setUniformValue(int, const QSize&)
    {35, 780, 380, 2, 0, 0, 87},	//422 QGLShaderProgram::setUniformValue(int, const QSizeF&)
    {35, 780, 383, 2, 0, 0, 88},	//423 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<2,2,double>&)
    {35, 780, 386, 2, 0, 0, 89},	//424 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<2,3,double>&)
    {35, 780, 389, 2, 0, 0, 90},	//425 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<2,4,double>&)
    {35, 780, 392, 2, 0, 0, 91},	//426 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<3,2,double>&)
    {35, 780, 395, 2, 0, 0, 92},	//427 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<3,3,double>&)
    {35, 780, 398, 2, 0, 0, 93},	//428 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<3,4,double>&)
    {35, 780, 401, 2, 0, 0, 94},	//429 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<4,2,double>&)
    {35, 780, 404, 2, 0, 0, 95},	//430 QGLShaderProgram::setUniformValue(int, const QGenericMatrix<4,3,double>&)
    {35, 780, 407, 2, 0, 0, 96},	//431 QGLShaderProgram::setUniformValue(int, const QMatrix4x4&)
    {35, 780, 410, 2, 0, 0, 97},	//432 QGLShaderProgram::setUniformValue(int, const float[2][2])
    {35, 780, 413, 2, 0, 0, 98},	//433 QGLShaderProgram::setUniformValue(int, const float[3][3])
    {35, 780, 416, 2, 0, 0, 99},	//434 QGLShaderProgram::setUniformValue(int, const float[4][4])
    {35, 780, 419, 2, 0, 0, 100},	//435 QGLShaderProgram::setUniformValue(int, const QTransform&)
    {35, 780, 288, 2, 0, 0, 101},	//436 QGLShaderProgram::setUniformValue(const char*, float)
    {35, 780, 247, 2, 0, 0, 102},	//437 QGLShaderProgram::setUniformValue(const char*, int)
    {35, 780, 422, 2, 0, 0, 103},	//438 QGLShaderProgram::setUniformValue(const char*, unsigned int)
    {35, 780, 291, 3, 0, 0, 104},	//439 QGLShaderProgram::setUniformValue(const char*, float, float)
    {35, 780, 295, 4, 0, 0, 105},	//440 QGLShaderProgram::setUniformValue(const char*, float, float, float)
    {35, 780, 300, 5, 0, 0, 106},	//441 QGLShaderProgram::setUniformValue(const char*, float, float, float, float)
    {35, 780, 306, 2, 0, 0, 107},	//442 QGLShaderProgram::setUniformValue(const char*, const QVector2D&)
    {35, 780, 309, 2, 0, 0, 108},	//443 QGLShaderProgram::setUniformValue(const char*, const QVector3D&)
    {35, 780, 312, 2, 0, 0, 109},	//444 QGLShaderProgram::setUniformValue(const char*, const QVector4D&)
    {35, 780, 315, 2, 0, 0, 110},	//445 QGLShaderProgram::setUniformValue(const char*, const QColor&)
    {35, 780, 425, 2, 0, 0, 111},	//446 QGLShaderProgram::setUniformValue(const char*, const QPoint&)
    {35, 780, 428, 2, 0, 0, 112},	//447 QGLShaderProgram::setUniformValue(const char*, const QPointF&)
    {35, 780, 431, 2, 0, 0, 113},	//448 QGLShaderProgram::setUniformValue(const char*, const QSize&)
    {35, 780, 434, 2, 0, 0, 114},	//449 QGLShaderProgram::setUniformValue(const char*, const QSizeF&)
    {35, 780, 437, 2, 0, 0, 115},	//450 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<2,2,double>&)
    {35, 780, 440, 2, 0, 0, 116},	//451 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<2,3,double>&)
    {35, 780, 443, 2, 0, 0, 117},	//452 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<2,4,double>&)
    {35, 780, 446, 2, 0, 0, 118},	//453 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<3,2,double>&)
    {35, 780, 449, 2, 0, 0, 119},	//454 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<3,3,double>&)
    {35, 780, 452, 2, 0, 0, 120},	//455 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<3,4,double>&)
    {35, 780, 455, 2, 0, 0, 121},	//456 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<4,2,double>&)
    {35, 780, 458, 2, 0, 0, 122},	//457 QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<4,3,double>&)
    {35, 780, 461, 2, 0, 0, 123},	//458 QGLShaderProgram::setUniformValue(const char*, const QMatrix4x4&)
    {35, 780, 464, 2, 0, 0, 124},	//459 QGLShaderProgram::setUniformValue(const char*, const float[2][2])
    {35, 780, 467, 2, 0, 0, 125},	//460 QGLShaderProgram::setUniformValue(const char*, const float[3][3])
    {35, 780, 470, 2, 0, 0, 126},	//461 QGLShaderProgram::setUniformValue(const char*, const float[4][4])
    {35, 780, 473, 2, 0, 0, 127},	//462 QGLShaderProgram::setUniformValue(const char*, const QTransform&)
    {35, 787, 283, 4, 0, 0, 128},	//463 QGLShaderProgram::setUniformValueArray(int, const float*, int, int)
    {35, 787, 476, 3, 0, 0, 129},	//464 QGLShaderProgram::setUniformValueArray(int, const int*, int)
    {35, 787, 26, 3, 0, 0, 130},	//465 QGLShaderProgram::setUniformValueArray(int, const unsigned int*, int)
    {35, 787, 323, 3, 0, 0, 131},	//466 QGLShaderProgram::setUniformValueArray(int, const QVector2D*, int)
    {35, 787, 327, 3, 0, 0, 132},	//467 QGLShaderProgram::setUniformValueArray(int, const QVector3D*, int)
    {35, 787, 331, 3, 0, 0, 133},	//468 QGLShaderProgram::setUniformValueArray(int, const QVector4D*, int)
    {35, 787, 480, 3, 0, 0, 134},	//469 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<2,2,double>*, int)
    {35, 787, 484, 3, 0, 0, 135},	//470 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<2,3,double>*, int)
    {35, 787, 488, 3, 0, 0, 136},	//471 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<2,4,double>*, int)
    {35, 787, 492, 3, 0, 0, 137},	//472 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<3,2,double>*, int)
    {35, 787, 496, 3, 0, 0, 138},	//473 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<3,3,double>*, int)
    {35, 787, 500, 3, 0, 0, 139},	//474 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<3,4,double>*, int)
    {35, 787, 504, 3, 0, 0, 140},	//475 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<4,2,double>*, int)
    {35, 787, 508, 3, 0, 0, 141},	//476 QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<4,3,double>*, int)
    {35, 787, 512, 3, 0, 0, 142},	//477 QGLShaderProgram::setUniformValueArray(int, const QMatrix4x4*, int)
    {35, 787, 318, 4, 0, 0, 143},	//478 QGLShaderProgram::setUniformValueArray(const char*, const float*, int, int)
    {35, 787, 516, 3, 0, 0, 144},	//479 QGLShaderProgram::setUniformValueArray(const char*, const int*, int)
    {35, 787, 520, 3, 0, 0, 145},	//480 QGLShaderProgram::setUniformValueArray(const char*, const unsigned int*, int)
    {35, 787, 341, 3, 0, 0, 146},	//481 QGLShaderProgram::setUniformValueArray(const char*, const QVector2D*, int)
    {35, 787, 345, 3, 0, 0, 147},	//482 QGLShaderProgram::setUniformValueArray(const char*, const QVector3D*, int)
    {35, 787, 349, 3, 0, 0, 148},	//483 QGLShaderProgram::setUniformValueArray(const char*, const QVector4D*, int)
    {35, 787, 524, 3, 0, 0, 149},	//484 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<2,2,double>*, int)
    {35, 787, 528, 3, 0, 0, 150},	//485 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<2,3,double>*, int)
    {35, 787, 532, 3, 0, 0, 151},	//486 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<2,4,double>*, int)
    {35, 787, 536, 3, 0, 0, 152},	//487 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<3,2,double>*, int)
    {35, 787, 540, 3, 0, 0, 153},	//488 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<3,3,double>*, int)
    {35, 787, 544, 3, 0, 0, 154},	//489 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<3,4,double>*, int)
    {35, 787, 548, 3, 0, 0, 155},	//490 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<4,2,double>*, int)
    {35, 787, 552, 3, 0, 0, 156},	//491 QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<4,3,double>*, int)
    {35, 787, 556, 3, 0, 0, 157},	//492 QGLShaderProgram::setUniformValueArray(const char*, const QMatrix4x4*, int)
    {35, 281, 48, 1, Smoke::mf_static, 397, 158},	//493 QGLShaderProgram::hasOpenGLShaderPrograms(const QGLContext*)
    {35, 823, 204, 1, Smoke::mf_static, 246, 159},	//494 QGLShaderProgram::tr(const char*)
    {35, 827, 204, 1, Smoke::mf_static, 246, 160},	//495 QGLShaderProgram::trUtf8(const char*)
    {35, 120, 0, 0, Smoke::mf_ctor, 159, 161},	//496 QGLShaderProgram::QGLShaderProgram()
    {35, 120, 48, 1, Smoke::mf_ctor, 159, 162},	//497 QGLShaderProgram::QGLShaderProgram(const QGLContext*)
    {35, 683, 560, 3, 0, 0, 163},	//498 QGLShaderProgram::setAttributeArray(int, const float*, int)
    {35, 683, 564, 2, 0, 0, 164},	//499 QGLShaderProgram::setAttributeArray(int, const QVector2D*)
    {35, 683, 567, 2, 0, 0, 165},	//500 QGLShaderProgram::setAttributeArray(int, const QVector3D*)
    {35, 683, 570, 2, 0, 0, 166},	//501 QGLShaderProgram::setAttributeArray(int, const QVector4D*)
    {35, 683, 573, 4, 0, 0, 167},	//502 QGLShaderProgram::setAttributeArray(int, unsigned int, const void*, int)
    {35, 683, 578, 3, 0, 0, 168},	//503 QGLShaderProgram::setAttributeArray(const char*, const float*, int)
    {35, 683, 582, 2, 0, 0, 169},	//504 QGLShaderProgram::setAttributeArray(const char*, const QVector2D*)
    {35, 683, 585, 2, 0, 0, 170},	//505 QGLShaderProgram::setAttributeArray(const char*, const QVector3D*)
    {35, 683, 588, 2, 0, 0, 171},	//506 QGLShaderProgram::setAttributeArray(const char*, const QVector4D*)
    {35, 683, 591, 4, 0, 0, 172},	//507 QGLShaderProgram::setAttributeArray(const char*, unsigned int, const void*, int)
    {35, 689, 596, 4, 0, 0, 173},	//508 QGLShaderProgram::setAttributeBuffer(int, unsigned int, int, int)
    {35, 689, 601, 4, 0, 0, 174},	//509 QGLShaderProgram::setAttributeBuffer(const char*, unsigned int, int, int)
    {35, 281, 0, 0, Smoke::mf_static, 397, 175},	//510 QGLShaderProgram::hasOpenGLShaderPrograms()
    {35, 808, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 450, 176},	//511 QGLShaderProgram::staticMetaObject() const
    {35, 858, 0, 0, Smoke::mf_dtor, 0, 177 },	//512 QGLShaderProgram::~QGLShaderProgram()
    {36, 314, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 451, 1},	//513 QGLWidget::metaObject() const
    {36, 631, 204, 1, Smoke::mf_virtual, 535, 2},	//514 QGLWidget::qt_metacast(const char*)
    {36, 823, 206, 2, Smoke::mf_static, 246, 3},	//515 QGLWidget::tr(const char*, const char*)
    {36, 827, 206, 2, Smoke::mf_static, 246, 4},	//516 QGLWidget::trUtf8(const char*, const char*)
    {36, 823, 209, 3, Smoke::mf_static, 246, 5},	//517 QGLWidget::tr(const char*, const char*, int)
    {36, 827, 209, 3, Smoke::mf_static, 246, 6},	//518 QGLWidget::trUtf8(const char*, const char*, int)
    {36, 629, 213, 3, Smoke::mf_virtual, 519, 7},	//519 QGLWidget::qt_metacall(QMetaObject::Call, int, void**)
    {36, 123, 606, 3, Smoke::mf_ctor, 160, 8},	//520 QGLWidget::QGLWidget(QWidget*, const QGLWidget*, QFlags<Qt::WindowType>)
    {36, 123, 610, 4, Smoke::mf_ctor, 160, 9},	//521 QGLWidget::QGLWidget(QGLContext*, QWidget*, const QGLWidget*, QFlags<Qt::WindowType>)
    {36, 123, 615, 4, Smoke::mf_ctor, 160, 10},	//522 QGLWidget::QGLWidget(const QGLFormat&, QWidget*, const QGLWidget*, QFlags<Qt::WindowType>)
    {36, 588, 89, 1, Smoke::mf_const, 0, 11},	//523 QGLWidget::qglColor(const QColor&) const
    {36, 586, 89, 1, Smoke::mf_const, 0, 12},	//524 QGLWidget::qglClearColor(const QColor&) const
    {36, 301, 0, 0, Smoke::mf_const, 397, 13},	//525 QGLWidget::isValid() const
    {36, 300, 0, 0, Smoke::mf_const, 397, 14},	//526 QGLWidget::isSharing() const
    {36, 309, 0, 0, 0, 0, 15},	//527 QGLWidget::makeCurrent()
    {36, 230, 0, 0, 0, 0, 16},	//528 QGLWidget::doneCurrent()
    {36, 231, 0, 0, Smoke::mf_const, 397, 17},	//529 QGLWidget::doubleBuffer() const
    {36, 813, 0, 0, 0, 0, 18},	//530 QGLWidget::swapBuffers()
    {36, 261, 0, 0, Smoke::mf_const, 145, 19},	//531 QGLWidget::format() const
    {36, 730, 46, 1, 0, 0, 20},	//532 QGLWidget::setFormat(const QGLFormat&)
    {36, 206, 0, 0, Smoke::mf_const, 416, 21},	//533 QGLWidget::context() const
    {36, 704, 620, 3, 0, 0, 22},	//534 QGLWidget::setContext(QGLContext*, const QGLContext*, bool)
    {36, 651, 624, 3, 0, 221, 23},	//535 QGLWidget::renderPixmap(int, int, bool)
    {36, 272, 84, 1, 0, 174, 24},	//536 QGLWidget::grabFrameBuffer(bool)
    {36, 310, 0, 0, 0, 0, 25},	//537 QGLWidget::makeOverlayCurrent()
    {36, 384, 0, 0, Smoke::mf_const, 416, 26},	//538 QGLWidget::overlayContext() const
    {36, 208, 93, 1, Smoke::mf_static, 174, 27},	//539 QGLWidget::convertToGLFormat(const QImage&)
    {36, 748, 84, 1, 0, 0, 28},	//540 QGLWidget::setMouseTracking(bool)
    {36, 199, 0, 0, Smoke::mf_const, 415, 29},	//541 QGLWidget::colormap() const
    {36, 702, 24, 1, 0, 0, 30},	//542 QGLWidget::setColormap(const QGLColormap&)
    {36, 655, 628, 5, 0, 0, 31},	//543 QGLWidget::renderText(int, int, const QString&, const QFont&, int)
    {36, 655, 634, 6, 0, 0, 32},	//544 QGLWidget::renderText(double, double, double, const QString&, const QFont&, int)
    {36, 386, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 208, 33},	//545 QGLWidget::paintEngine() const
    {36, 177, 53, 4, 0, 528, 34},	//546 QGLWidget::bindTexture(const QImage&, unsigned int, int, QFlags<QGLContext::BindOption>)
    {36, 177, 58, 4, 0, 528, 35},	//547 QGLWidget::bindTexture(const QPixmap&, unsigned int, int, QFlags<QGLContext::BindOption>)
    {36, 177, 63, 3, 0, 528, 36},	//548 QGLWidget::bindTexture(const QImage&, unsigned int, int)
    {36, 177, 67, 3, 0, 528, 37},	//549 QGLWidget::bindTexture(const QPixmap&, unsigned int, int)
    {36, 177, 71, 1, 0, 528, 38},	//550 QGLWidget::bindTexture(const QString&)
    {36, 217, 36, 1, 0, 0, 39},	//551 QGLWidget::deleteTexture(unsigned int)
    {36, 235, 73, 3, 0, 0, 40},	//552 QGLWidget::drawTexture(const QRectF&, unsigned int, unsigned int)
    {36, 235, 77, 3, 0, 0, 41},	//553 QGLWidget::drawTexture(const QPointF&, unsigned int, unsigned int)
    {36, 841, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 0, 42},	//554 QGLWidget::updateGL()
    {36, 842, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 0, 43},	//555 QGLWidget::updateOverlayGL()
    {36, 247, 641, 1, Smoke::mf_protected|Smoke::mf_virtual, 397, 44},	//556 QGLWidget::event(QEvent*)
    {36, 289, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 45},	//557 QGLWidget::initializeGL()
    {36, 666, 116, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 46},	//558 QGLWidget::resizeGL(int, int)
    {36, 389, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 47},	//559 QGLWidget::paintGL()
    {36, 290, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 48},	//560 QGLWidget::initializeOverlayGL()
    {36, 668, 116, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 49},	//561 QGLWidget::resizeOverlayGL(int, int)
    {36, 390, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 50},	//562 QGLWidget::paintOverlayGL()
    {36, 698, 84, 1, Smoke::mf_protected, 0, 51},	//563 QGLWidget::setAutoBufferSwap(bool)
    {36, 171, 0, 0, Smoke::mf_const|Smoke::mf_protected, 397, 52},	//564 QGLWidget::autoBufferSwap() const
    {36, 387, 643, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 53},	//565 QGLWidget::paintEvent(QPaintEvent*)
    {36, 664, 645, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 54},	//566 QGLWidget::resizeEvent(QResizeEvent*)
    {36, 271, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 55},	//567 QGLWidget::glInit()
    {36, 270, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 56},	//568 QGLWidget::glDraw()
    {36, 258, 86, 2, Smoke::mf_protected, 519, 57},	//569 QGLWidget::fontDisplayListBase(const QFont&, int)
    {36, 823, 204, 1, Smoke::mf_static, 246, 58},	//570 QGLWidget::tr(const char*)
    {36, 827, 204, 1, Smoke::mf_static, 246, 59},	//571 QGLWidget::trUtf8(const char*)
    {36, 123, 0, 0, Smoke::mf_ctor, 160, 60},	//572 QGLWidget::QGLWidget()
    {36, 123, 647, 1, Smoke::mf_ctor, 160, 61},	//573 QGLWidget::QGLWidget(QWidget*)
    {36, 123, 649, 2, Smoke::mf_ctor, 160, 62},	//574 QGLWidget::QGLWidget(QWidget*, const QGLWidget*)
    {36, 123, 109, 1, Smoke::mf_ctor, 160, 63},	//575 QGLWidget::QGLWidget(QGLContext*)
    {36, 123, 652, 2, Smoke::mf_ctor, 160, 64},	//576 QGLWidget::QGLWidget(QGLContext*, QWidget*)
    {36, 123, 655, 3, Smoke::mf_ctor, 160, 65},	//577 QGLWidget::QGLWidget(QGLContext*, QWidget*, const QGLWidget*)
    {36, 123, 46, 1, Smoke::mf_ctor, 160, 66},	//578 QGLWidget::QGLWidget(const QGLFormat&)
    {36, 123, 659, 2, Smoke::mf_ctor, 160, 67},	//579 QGLWidget::QGLWidget(const QGLFormat&, QWidget*)
    {36, 123, 662, 3, Smoke::mf_ctor, 160, 68},	//580 QGLWidget::QGLWidget(const QGLFormat&, QWidget*, const QGLWidget*)
    {36, 704, 109, 1, 0, 0, 69},	//581 QGLWidget::setContext(QGLContext*)
    {36, 704, 666, 2, 0, 0, 70},	//582 QGLWidget::setContext(QGLContext*, const QGLContext*)
    {36, 651, 0, 0, 0, 221, 71},	//583 QGLWidget::renderPixmap()
    {36, 651, 20, 1, 0, 221, 72},	//584 QGLWidget::renderPixmap(int)
    {36, 651, 116, 2, 0, 221, 73},	//585 QGLWidget::renderPixmap(int, int)
    {36, 272, 0, 0, 0, 174, 74},	//586 QGLWidget::grabFrameBuffer()
    {36, 655, 669, 3, 0, 0, 75},	//587 QGLWidget::renderText(int, int, const QString&)
    {36, 655, 673, 4, 0, 0, 76},	//588 QGLWidget::renderText(int, int, const QString&, const QFont&)
    {36, 655, 678, 4, 0, 0, 77},	//589 QGLWidget::renderText(double, double, double, const QString&)
    {36, 655, 683, 5, 0, 0, 78},	//590 QGLWidget::renderText(double, double, double, const QString&, const QFont&)
    {36, 177, 93, 1, 0, 528, 79},	//591 QGLWidget::bindTexture(const QImage&)
    {36, 177, 95, 2, 0, 528, 80},	//592 QGLWidget::bindTexture(const QImage&, unsigned int)
    {36, 177, 98, 1, 0, 528, 81},	//593 QGLWidget::bindTexture(const QPixmap&)
    {36, 177, 100, 2, 0, 528, 82},	//594 QGLWidget::bindTexture(const QPixmap&, unsigned int)
    {36, 235, 103, 2, 0, 0, 83},	//595 QGLWidget::drawTexture(const QRectF&, unsigned int)
    {36, 235, 106, 2, 0, 0, 84},	//596 QGLWidget::drawTexture(const QPointF&, unsigned int)
    {36, 258, 689, 1, Smoke::mf_protected, 519, 85},	//597 QGLWidget::fontDisplayListBase(const QFont&)
    {36, 808, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 450, 86},	//598 QGLWidget::staticMetaObject() const
    {36, 859, 0, 0, Smoke::mf_dtor, 0, 87 },	//599 QGLWidget::~QGLWidget()
    {37, 381, 691, 2, Smoke::mf_static, 177, 1},	//600 QGlobalSpace::operator|(QDateTimeEdit::Section, int)
    {37, 401, 0, 0, Smoke::mf_static, 9, 2},	//601 QGlobalSpace::qAccessibleValueCastHelper()
    {37, 371, 694, 2, Smoke::mf_static, 397, 3},	//602 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {37, 512, 697, 1, Smoke::mf_static, 528, 4},	//603 QGlobalSpace::qHash(unsigned long long)
    {37, 524, 699, 1, Smoke::mf_static, 397, 5},	//604 QGlobalSpace::qIsInf(double)
    {37, 381, 701, 2, Smoke::mf_static, 177, 6},	//605 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {37, 342, 704, 2, Smoke::mf_static, 196, 7},	//606 QGlobalSpace::operator-(const QMatrix4x4&, const QMatrix4x4&)
    {37, 381, 707, 2, Smoke::mf_static, 177, 8},	//607 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {37, 362, 710, 2, Smoke::mf_static, 397, 9},	//608 QGlobalSpace::operator==(const QVector3D&, const QVector3D&)
    {37, 326, 713, 2, Smoke::mf_static, 397, 10},	//609 QGlobalSpace::operator!=(const QVector2D&, const QVector2D&)
    {37, 614, 422, 2, Smoke::mf_static, 528, 11},	//610 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {37, 536, 716, 3, Smoke::mf_static, 535, 12},	//611 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {37, 633, 0, 0, Smoke::mf_static, 0, 13},	//612 QGlobalSpace::qt_noop()
    {37, 375, 720, 2, Smoke::mf_static, 28, 14},	//613 QGlobalSpace::operator>>(QDataStream&, QIcon&)
    {37, 352, 723, 2, Smoke::mf_static, 32, 15},	//614 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {37, 333, 726, 2, Smoke::mf_static, 225, 16},	//615 QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    {37, 381, 729, 2, Smoke::mf_static, 89, 17},	//616 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>)
    {37, 362, 732, 2, Smoke::mf_static, 397, 18},	//617 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {37, 362, 735, 2, Smoke::mf_static, 397, 19},	//618 QGlobalSpace::operator==(const QSize&, const QSize&)
    {37, 352, 738, 2, Smoke::mf_static, 28, 20},	//619 QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    {37, 381, 741, 2, Smoke::mf_static, 106, 21},	//620 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag)
    {37, 375, 744, 2, Smoke::mf_static, 28, 22},	//621 QGlobalSpace::operator>>(QDataStream&, QStandardItem&)
    {37, 337, 747, 2, Smoke::mf_static, 403, 23},	//622 QGlobalSpace::operator+(const char*, const QByteArray&)
    {37, 381, 750, 2, Smoke::mf_static, 97, 24},	//623 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    {37, 381, 753, 2, Smoke::mf_static, 86, 25},	//624 QGlobalSpace::operator|(QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>)
    {37, 381, 756, 2, Smoke::mf_static, 63, 26},	//625 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {37, 375, 759, 2, Smoke::mf_static, 28, 27},	//626 QGlobalSpace::operator>>(QDataStream&, QQuaternion&)
    {37, 595, 747, 2, Smoke::mf_static, 519, 28},	//627 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {37, 362, 762, 2, Smoke::mf_static, 397, 29},	//628 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {37, 352, 765, 2, Smoke::mf_static, 28, 30},	//629 QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    {37, 413, 768, 2, Smoke::mf_static, 517, 31},	//630 QGlobalSpace::qAtan2(double, double)
    {37, 375, 771, 2, Smoke::mf_static, 28, 32},	//631 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {37, 371, 774, 2, Smoke::mf_static, 397, 33},	//632 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {37, 524, 777, 1, Smoke::mf_static, 397, 34},	//633 QGlobalSpace::qIsInf(float)
    {37, 584, 204, 1, Smoke::mf_static, 17, 35},	//634 QGlobalSpace::qgetenv(const char*)
    {37, 512, 779, 1, Smoke::mf_static, 528, 36},	//635 QGlobalSpace::qHash(signed char)
    {37, 381, 781, 2, Smoke::mf_static, 177, 37},	//636 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, int)
    {37, 362, 784, 2, Smoke::mf_static, 397, 38},	//637 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {37, 381, 787, 2, Smoke::mf_static, 177, 39},	//638 QGlobalSpace::operator|(QFileDialog::Option, int)
    {37, 367, 747, 2, Smoke::mf_static, 397, 40},	//639 QGlobalSpace::operator>(const char*, const QByteArray&)
    {37, 337, 704, 2, Smoke::mf_static, 196, 41},	//640 QGlobalSpace::operator+(const QMatrix4x4&, const QMatrix4x4&)
    {37, 518, 699, 1, Smoke::mf_static, 519, 42},	//641 QGlobalSpace::qIntCast(double)
    {37, 564, 790, 1, Smoke::mf_static, 277, 43},	//642 QGlobalSpace::qSetPadChar(QChar)
    {37, 352, 792, 2, Smoke::mf_static, 28, 44},	//643 QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    {37, 381, 795, 2, Smoke::mf_static, 88, 45},	//644 QGlobalSpace::operator|(QMessageBox::StandardButton, QMessageBox::StandardButton)
    {37, 333, 798, 2, Smoke::mf_static, 223, 46},	//645 QGlobalSpace::operator*(const QMatrix4x4&, const QPoint&)
    {37, 381, 801, 2, Smoke::mf_static, 96, 47},	//646 QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    {37, 352, 804, 2, Smoke::mf_static, 28, 48},	//647 QGlobalSpace::operator<<(QDataStream&, const QTextLength&)
    {37, 352, 807, 2, Smoke::mf_static, 32, 49},	//648 QGlobalSpace::operator<<(QDebug, const QBrush&)
    {37, 381, 810, 2, Smoke::mf_static, 72, 50},	//649 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag)
    {37, 362, 813, 2, Smoke::mf_static, 397, 51},	//650 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {37, 333, 816, 2, Smoke::mf_static, 294, 52},	//651 QGlobalSpace::operator*(const QMatrix4x4&, const QVector4D&)
    {37, 333, 704, 2, Smoke::mf_static, 196, 53},	//652 QGlobalSpace::operator*(const QMatrix4x4&, const QMatrix4x4&)
    {37, 362, 819, 2, Smoke::mf_static, 397, 54},	//653 QGlobalSpace::operator==(QChar, QChar)
    {37, 352, 822, 2, Smoke::mf_static, 32, 55},	//654 QGlobalSpace::operator<<(QDebug, const QQuaternion&)
    {37, 381, 825, 2, Smoke::mf_static, 128, 56},	//655 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {37, 342, 828, 1, Smoke::mf_static, 196, 57},	//656 QGlobalSpace::operator-(const QMatrix4x4&)
    {37, 512, 830, 1, Smoke::mf_static, 528, 58},	//657 QGlobalSpace::qHash(const QUrl&)
    {37, 512, 224, 1, Smoke::mf_static, 528, 59},	//658 QGlobalSpace::qHash(const QByteArray&)
    {37, 381, 832, 2, Smoke::mf_static, 177, 60},	//659 QGlobalSpace::operator|(QWidget::RenderFlag, int)
    {37, 333, 835, 2, Smoke::mf_static, 196, 61},	//660 QGlobalSpace::operator*(const QMatrix4x4&, double)
    {37, 352, 838, 2, Smoke::mf_static, 28, 62},	//661 QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    {37, 352, 841, 2, Smoke::mf_static, 32, 63},	//662 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {37, 375, 844, 2, Smoke::mf_static, 28, 64},	//663 QGlobalSpace::operator>>(QDataStream&, QColor&)
    {37, 348, 819, 2, Smoke::mf_static, 397, 65},	//664 QGlobalSpace::operator<(QChar, QChar)
    {37, 375, 847, 2, Smoke::mf_static, 28, 66},	//665 QGlobalSpace::operator>>(QDataStream&, QTableWidgetItem&)
    {37, 381, 850, 2, Smoke::mf_static, 85, 67},	//666 QGlobalSpace::operator|(QMainWindow::DockOption, QFlags<QMainWindow::DockOption>)
    {37, 371, 819, 2, Smoke::mf_static, 397, 68},	//667 QGlobalSpace::operator>=(QChar, QChar)
    {37, 326, 853, 2, Smoke::mf_static, 397, 69},	//668 QGlobalSpace::operator!=(QString::Null, const QString&)
    {37, 352, 856, 2, Smoke::mf_static, 32, 70},	//669 QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemFlag)
    {37, 348, 747, 2, Smoke::mf_static, 397, 71},	//670 QGlobalSpace::operator<(const char*, const QByteArray&)
    {37, 352, 859, 2, Smoke::mf_static, 32, 72},	//671 QGlobalSpace::operator<<(QDebug, const QGLFormat&)
    {37, 381, 862, 2, Smoke::mf_static, 113, 73},	//672 QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    {37, 381, 865, 2, Smoke::mf_static, 127, 74},	//673 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {37, 595, 206, 2, Smoke::mf_static, 519, 75},	//674 QGlobalSpace::qstrcmp(const char*, const char*)
    {37, 381, 868, 2, Smoke::mf_static, 177, 76},	//675 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, int)
    {37, 337, 710, 2, Smoke::mf_static, 502, 77},	//676 QGlobalSpace::operator+(const QVector3D&, const QVector3D&)
    {37, 427, 699, 1, Smoke::mf_static, 517, 78},	//677 QGlobalSpace::qCos(double)
    {37, 381, 871, 2, Smoke::mf_static, 84, 79},	//678 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {37, 367, 819, 2, Smoke::mf_static, 397, 80},	//679 QGlobalSpace::operator>(QChar, QChar)
    {37, 381, 874, 2, Smoke::mf_static, 130, 81},	//680 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {37, 333, 877, 2, Smoke::mf_static, 475, 82},	//681 QGlobalSpace::operator*(double, const QSizeF&)
    {37, 568, 0, 0, Smoke::mf_static, 397, 83},	//682 QGlobalSpace::qSharedBuild()
    {37, 362, 880, 2, Smoke::mf_static, 397, 84},	//683 QGlobalSpace::operator==(const QQuaternion&, const QQuaternion&)
    {37, 381, 883, 2, Smoke::mf_static, 177, 85},	//684 QGlobalSpace::operator|(QDir::Filter, int)
    {37, 381, 886, 2, Smoke::mf_static, 96, 86},	//685 QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    {37, 326, 694, 2, Smoke::mf_static, 397, 87},	//686 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {37, 342, 889, 2, Smoke::mf_static, 460, 88},	//687 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {37, 396, 0, 0, Smoke::mf_static, 9, 89},	//688 QGlobalSpace::qAccessibleEditableTextCastHelper()
    {37, 352, 892, 2, Smoke::mf_static, 28, 90},	//689 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {37, 381, 895, 2, Smoke::mf_static, 177, 91},	//690 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {37, 381, 898, 2, Smoke::mf_static, 126, 92},	//691 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {37, 381, 901, 2, Smoke::mf_static, 177, 93},	//692 QGlobalSpace::operator|(QMdiArea::AreaOption, int)
    {37, 342, 904, 2, Smoke::mf_static, 280, 94},	//693 QGlobalSpace::operator-(const QTransform&, double)
    {37, 381, 907, 2, Smoke::mf_static, 49, 95},	//694 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    {37, 512, 910, 1, Smoke::mf_static, 528, 96},	//695 QGlobalSpace::qHash(char)
    {37, 381, 912, 2, Smoke::mf_static, 114, 97},	//696 QGlobalSpace::operator|(QWizard::WizardOption, QWizard::WizardOption)
    {37, 333, 710, 2, Smoke::mf_static, 502, 98},	//697 QGlobalSpace::operator*(const QVector3D&, const QVector3D&)
    {37, 326, 732, 2, Smoke::mf_static, 397, 99},	//698 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {37, 381, 915, 2, Smoke::mf_static, 110, 100},	//699 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {37, 381, 918, 2, Smoke::mf_static, 177, 101},	//700 QGlobalSpace::operator|(QTextOption::Flag, int)
    {37, 352, 921, 2, Smoke::mf_static, 32, 102},	//701 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {37, 381, 924, 2, Smoke::mf_static, 177, 103},	//702 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {37, 381, 927, 2, Smoke::mf_static, 177, 104},	//703 QGlobalSpace::operator|(QFile::Permission, int)
    {37, 381, 930, 2, Smoke::mf_static, 72, 105},	//704 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>)
    {37, 346, 933, 2, Smoke::mf_static, 460, 106},	//705 QGlobalSpace::operator/(const QPoint&, double)
    {37, 479, 936, 8, Smoke::mf_static, 0, 107},	//706 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*)
    {37, 479, 945, 6, Smoke::mf_static, 0, 108},	//707 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&)
    {37, 479, 952, 7, Smoke::mf_static, 0, 109},	//708 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&, bool)
    {37, 337, 889, 2, Smoke::mf_static, 460, 110},	//709 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {37, 352, 960, 2, Smoke::mf_static, 28, 111},	//710 QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    {37, 381, 963, 2, Smoke::mf_static, 59, 112},	//711 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {37, 342, 966, 2, Smoke::mf_static, 475, 113},	//712 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {37, 333, 969, 2, Smoke::mf_static, 292, 114},	//713 QGlobalSpace::operator*(const QVector3D&, const QMatrix4x4&)
    {37, 502, 972, 2, Smoke::mf_static, 397, 115},	//714 QGlobalSpace::qFuzzyCompare(const QVector4D&, const QVector4D&)
    {37, 352, 975, 2, Smoke::mf_static, 32, 116},	//715 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {37, 342, 710, 2, Smoke::mf_static, 502, 117},	//716 QGlobalSpace::operator-(const QVector3D&, const QVector3D&)
    {37, 520, 699, 1, Smoke::mf_static, 397, 118},	//717 QGlobalSpace::qIsFinite(double)
    {37, 381, 978, 2, Smoke::mf_static, 64, 119},	//718 QGlobalSpace::operator|(QFileDialog::Option, QFlags<QFileDialog::Option>)
    {37, 326, 774, 2, Smoke::mf_static, 397, 120},	//719 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {37, 352, 981, 2, Smoke::mf_static, 28, 121},	//720 QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    {37, 381, 984, 2, Smoke::mf_static, 122, 122},	//721 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {37, 381, 987, 2, Smoke::mf_static, 177, 123},	//722 QGlobalSpace::operator|(QWizard::WizardOption, int)
    {37, 352, 990, 2, Smoke::mf_static, 32, 124},	//723 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {37, 406, 36, 1, Smoke::mf_static, 519, 125},	//724 QGlobalSpace::qAlpha(unsigned int)
    {37, 352, 993, 2, Smoke::mf_static, 32, 126},	//725 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {37, 381, 996, 2, Smoke::mf_static, 60, 127},	//726 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>)
    {37, 507, 999, 3, Smoke::mf_static, 519, 128},	//727 QGlobalSpace::qGray(int, int, int)
    {37, 381, 1003, 2, Smoke::mf_static, 77, 129},	//728 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag)
    {37, 381, 1006, 2, Smoke::mf_static, 68, 130},	//729 QGlobalSpace::operator|(QGLContext::BindOption, QFlags<QGLContext::BindOption>)
    {37, 352, 1009, 2, Smoke::mf_static, 28, 131},	//730 QGlobalSpace::operator<<(QDataStream&, const QPicture&)
    {37, 381, 1012, 2, Smoke::mf_static, 112, 132},	//731 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {37, 337, 735, 2, Smoke::mf_static, 473, 133},	//732 QGlobalSpace::operator+(const QSize&, const QSize&)
    {37, 381, 1015, 2, Smoke::mf_static, 128, 134},	//733 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {37, 381, 1018, 2, Smoke::mf_static, 119, 135},	//734 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {37, 625, 20, 1, Smoke::mf_static, 246, 136},	//735 QGlobalSpace::qt_error_string(int)
    {37, 625, 0, 0, Smoke::mf_static, 246, 137},	//736 QGlobalSpace::qt_error_string()
    {37, 337, 966, 2, Smoke::mf_static, 475, 138},	//737 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {37, 346, 835, 2, Smoke::mf_static, 196, 139},	//738 QGlobalSpace::operator/(const QMatrix4x4&, double)
    {37, 381, 1021, 2, Smoke::mf_static, 177, 140},	//739 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, int)
    {37, 381, 1024, 2, Smoke::mf_static, 49, 141},	//740 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    {37, 381, 1027, 2, Smoke::mf_static, 177, 142},	//741 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {37, 342, 972, 2, Smoke::mf_static, 505, 143},	//742 QGlobalSpace::operator-(const QVector4D&, const QVector4D&)
    {37, 577, 1030, 2, Smoke::mf_static, 17, 144},	//743 QGlobalSpace::qUncompress(const unsigned char*, int)
    {37, 608, 1033, 3, Smoke::mf_static, 519, 145},	//744 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {37, 575, 699, 1, Smoke::mf_static, 517, 146},	//745 QGlobalSpace::qTan(double)
    {37, 326, 1037, 2, Smoke::mf_static, 397, 147},	//746 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {37, 362, 1040, 2, Smoke::mf_static, 397, 148},	//747 QGlobalSpace::operator==(QKeyEvent*, QKeySequence::StandardKey)
    {37, 562, 20, 1, Smoke::mf_static, 277, 149},	//748 QGlobalSpace::qSetFieldWidth(int)
    {37, 381, 1043, 2, Smoke::mf_static, 99, 150},	//749 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    {37, 375, 1046, 2, Smoke::mf_static, 274, 151},	//750 QGlobalSpace::operator>>(QTextStream&, QSplitter&)
    {37, 512, 1049, 1, Smoke::mf_static, 528, 152},	//751 QGlobalSpace::qHash(const QItemSelectionRange&)
    {37, 547, 36, 1, Smoke::mf_static, 519, 153},	//752 QGlobalSpace::qRed(unsigned int)
    {37, 381, 1051, 2, Smoke::mf_static, 117, 154},	//753 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {37, 333, 904, 2, Smoke::mf_static, 280, 155},	//754 QGlobalSpace::operator*(const QTransform&, double)
    {37, 381, 1054, 2, Smoke::mf_static, 91, 156},	//755 QGlobalSpace::operator|(QPainter::RenderHint, QFlags<QPainter::RenderHint>)
    {37, 496, 699, 1, Smoke::mf_static, 519, 157},	//756 QGlobalSpace::qFloor(double)
    {37, 352, 1057, 2, Smoke::mf_static, 32, 158},	//757 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {37, 375, 1060, 2, Smoke::mf_static, 28, 159},	//758 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {37, 520, 777, 1, Smoke::mf_static, 397, 160},	//759 QGlobalSpace::qIsFinite(float)
    {37, 337, 1063, 2, Smoke::mf_static, 480, 161},	//760 QGlobalSpace::operator+(const QString&, QChar)
    {37, 326, 1066, 2, Smoke::mf_static, 397, 162},	//761 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {37, 333, 972, 2, Smoke::mf_static, 505, 163},	//762 QGlobalSpace::operator*(const QVector4D&, const QVector4D&)
    {37, 381, 1069, 2, Smoke::mf_static, 52, 164},	//763 QGlobalSpace::operator|(QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>)
    {37, 381, 1072, 2, Smoke::mf_static, 177, 165},	//764 QGlobalSpace::operator|(QGLShader::ShaderTypeBit, int)
    {37, 582, 1075, 3, Smoke::mf_static, 0, 166},	//765 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {37, 337, 774, 2, Smoke::mf_static, 403, 167},	//766 QGlobalSpace::operator+(const QByteArray&, const char*)
    {37, 400, 0, 0, Smoke::mf_static, 9, 168},	//767 QGlobalSpace::qAccessibleTextCastHelper()
    {37, 381, 1079, 2, Smoke::mf_static, 98, 169},	//768 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    {37, 381, 1082, 2, Smoke::mf_static, 104, 170},	//769 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {37, 381, 1085, 2, Smoke::mf_static, 125, 171},	//770 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {37, 381, 1088, 2, Smoke::mf_static, 70, 172},	//771 QGlobalSpace::operator|(QGLFunctions::OpenGLFeature, QGLFunctions::OpenGLFeature)
    {37, 545, 1091, 4, Smoke::mf_static, 535, 173},	//772 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {37, 352, 1096, 2, Smoke::mf_static, 28, 174},	//773 QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    {37, 375, 1099, 2, Smoke::mf_static, 28, 175},	//774 QGlobalSpace::operator>>(QDataStream&, QPalette&)
    {37, 512, 36, 1, Smoke::mf_static, 528, 176},	//775 QGlobalSpace::qHash(unsigned int)
    {37, 502, 880, 2, Smoke::mf_static, 397, 177},	//776 QGlobalSpace::qFuzzyCompare(const QQuaternion&, const QQuaternion&)
    {37, 381, 1102, 2, Smoke::mf_static, 127, 178},	//777 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {37, 512, 790, 1, Smoke::mf_static, 528, 179},	//778 QGlobalSpace::qHash(QChar)
    {37, 381, 1105, 2, Smoke::mf_static, 106, 180},	//779 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>)
    {37, 356, 774, 2, Smoke::mf_static, 397, 181},	//780 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {37, 518, 777, 1, Smoke::mf_static, 519, 182},	//781 QGlobalSpace::qIntCast(float)
    {37, 362, 1108, 2, Smoke::mf_static, 397, 183},	//782 QGlobalSpace::operator==(const QRect&, const QRect&)
    {37, 381, 1111, 2, Smoke::mf_static, 62, 184},	//783 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {37, 379, 1114, 2, Smoke::mf_static, 13, 185},	//784 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {37, 381, 1117, 2, Smoke::mf_static, 88, 186},	//785 QGlobalSpace::operator|(QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>)
    {37, 367, 1120, 2, Smoke::mf_static, 397, 187},	//786 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {37, 543, 1123, 2, Smoke::mf_static, 535, 188},	//787 QGlobalSpace::qRealloc(void*, size_t)
    {37, 512, 71, 1, Smoke::mf_static, 528, 189},	//788 QGlobalSpace::qHash(const QString&)
    {37, 337, 972, 2, Smoke::mf_static, 505, 190},	//789 QGlobalSpace::operator+(const QVector4D&, const QVector4D&)
    {37, 381, 1126, 2, Smoke::mf_static, 92, 191},	//790 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>)
    {37, 352, 1129, 2, Smoke::mf_static, 28, 192},	//791 QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    {37, 352, 1132, 2, Smoke::mf_static, 28, 193},	//792 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {37, 352, 1135, 2, Smoke::mf_static, 32, 194},	//793 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {37, 559, 699, 1, Smoke::mf_static, 522, 195},	//794 QGlobalSpace::qRound64(double)
    {37, 516, 1138, 1, Smoke::mf_static, 534, 196},	//795 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {37, 571, 699, 1, Smoke::mf_static, 517, 197},	//796 QGlobalSpace::qSqrt(double)
    {37, 381, 1140, 2, Smoke::mf_static, 177, 198},	//797 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, int)
    {37, 512, 1143, 1, Smoke::mf_static, 528, 199},	//798 QGlobalSpace::qHash(const QModelIndex&)
    {37, 381, 1145, 2, Smoke::mf_static, 55, 200},	//799 QGlobalSpace::operator|(QDateTimeEdit::Section, QDateTimeEdit::Section)
    {37, 381, 1148, 2, Smoke::mf_static, 103, 201},	//800 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    {37, 490, 699, 1, Smoke::mf_static, 517, 202},	//801 QGlobalSpace::qFastCos(double)
    {37, 352, 1151, 2, Smoke::mf_static, 32, 203},	//802 QGlobalSpace::operator<<(QDebug, const QEvent*)
    {37, 375, 1154, 2, Smoke::mf_static, 28, 204},	//803 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {37, 362, 1157, 2, Smoke::mf_static, 397, 205},	//804 QGlobalSpace::operator==(QBool, QBool)
    {37, 381, 1160, 2, Smoke::mf_static, 74, 206},	//805 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag)
    {37, 362, 1163, 2, Smoke::mf_static, 397, 207},	//806 QGlobalSpace::operator==(const char*, const QStringRef&)
    {37, 381, 1166, 2, Smoke::mf_static, 177, 208},	//807 QGlobalSpace::operator|(QFontComboBox::FontFilter, int)
    {37, 381, 1169, 2, Smoke::mf_static, 177, 209},	//808 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {37, 526, 777, 1, Smoke::mf_static, 397, 210},	//809 QGlobalSpace::qIsNaN(float)
    {37, 381, 1172, 2, Smoke::mf_static, 177, 211},	//810 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, int)
    {37, 381, 1175, 2, Smoke::mf_static, 80, 212},	//811 QGlobalSpace::operator|(QImageIOPlugin::Capability, QImageIOPlugin::Capability)
    {37, 381, 1178, 2, Smoke::mf_static, 67, 213},	//812 QGlobalSpace::operator|(QGL::FormatOption, QFlags<QGL::FormatOption>)
    {37, 356, 1120, 2, Smoke::mf_static, 397, 214},	//813 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {37, 375, 1181, 2, Smoke::mf_static, 28, 215},	//814 QGlobalSpace::operator>>(QDataStream&, QPen&)
    {37, 494, 204, 1, Smoke::mf_static, 508, 216},	//815 QGlobalSpace::qFlagLocation(const char*)
    {37, 337, 904, 2, Smoke::mf_static, 280, 217},	//816 QGlobalSpace::operator+(const QTransform&, double)
    {37, 333, 1184, 2, Smoke::mf_static, 185, 218},	//817 QGlobalSpace::operator*(const QLine&, const QTransform&)
    {37, 352, 1187, 2, Smoke::mf_static, 32, 219},	//818 QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    {37, 381, 1190, 2, Smoke::mf_static, 177, 220},	//819 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {37, 526, 699, 1, Smoke::mf_static, 397, 221},	//820 QGlobalSpace::qIsNaN(double)
    {37, 507, 36, 1, Smoke::mf_static, 519, 222},	//821 QGlobalSpace::qGray(unsigned int)
    {37, 337, 1193, 2, Smoke::mf_static, 480, 223},	//822 QGlobalSpace::operator+(QChar, const QString&)
    {37, 381, 1196, 2, Smoke::mf_static, 100, 224},	//823 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    {37, 381, 1199, 2, Smoke::mf_static, 177, 225},	//824 QGlobalSpace::operator|(QString::SectionFlag, int)
    {37, 381, 1202, 2, Smoke::mf_static, 177, 226},	//825 QGlobalSpace::operator|(QGLContext::BindOption, int)
    {37, 381, 1205, 2, Smoke::mf_static, 73, 227},	//826 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>)
    {37, 381, 1208, 2, Smoke::mf_static, 177, 228},	//827 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {37, 352, 1211, 2, Smoke::mf_static, 32, 229},	//828 QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemChange)
    {37, 375, 1214, 2, Smoke::mf_static, 28, 230},	//829 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {37, 619, 209, 3, Smoke::mf_static, 0, 231},	//830 QGlobalSpace::qt_assert(const char*, const char*, int)
    {37, 342, 1217, 1, Smoke::mf_static, 466, 232},	//831 QGlobalSpace::operator-(const QQuaternion&)
    {37, 512, 1219, 1, Smoke::mf_static, 528, 233},	//832 QGlobalSpace::qHash(long long)
    {37, 326, 1221, 2, Smoke::mf_static, 397, 234},	//833 QGlobalSpace::operator!=(const QString&, QString::Null)
    {37, 381, 1224, 2, Smoke::mf_static, 66, 235},	//834 QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFontDialog::FontDialogOption)
    {37, 502, 1227, 2, Smoke::mf_static, 397, 236},	//835 QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    {37, 381, 1230, 2, Smoke::mf_static, 177, 237},	//836 QGlobalSpace::operator|(QMainWindow::DockOption, int)
    {37, 375, 1233, 2, Smoke::mf_static, 28, 238},	//837 QGlobalSpace::operator>>(QDataStream&, QBrush&)
    {37, 381, 1236, 2, Smoke::mf_static, 177, 239},	//838 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {37, 553, 999, 3, Smoke::mf_static, 528, 240},	//839 QGlobalSpace::qRgb(int, int, int)
    {37, 381, 1239, 2, Smoke::mf_static, 104, 241},	//840 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {37, 326, 813, 2, Smoke::mf_static, 397, 242},	//841 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {37, 333, 1242, 2, Smoke::mf_static, 215, 243},	//842 QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    {37, 342, 762, 2, Smoke::mf_static, 462, 244},	//843 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {37, 362, 1066, 2, Smoke::mf_static, 397, 245},	//844 QGlobalSpace::operator==(QString::Null, QString::Null)
    {37, 381, 1245, 2, Smoke::mf_static, 120, 246},	//845 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {37, 381, 1248, 2, Smoke::mf_static, 177, 247},	//846 QGlobalSpace::operator|(QGLFormat::OpenGLVersionFlag, int)
    {37, 381, 1251, 2, Smoke::mf_static, 85, 248},	//847 QGlobalSpace::operator|(QMainWindow::DockOption, QMainWindow::DockOption)
    {37, 381, 1254, 2, Smoke::mf_static, 114, 249},	//848 QGlobalSpace::operator|(QWizard::WizardOption, QFlags<QWizard::WizardOption>)
    {37, 375, 1257, 2, Smoke::mf_static, 28, 250},	//849 QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    {37, 348, 1120, 2, Smoke::mf_static, 397, 251},	//850 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {37, 399, 0, 0, Smoke::mf_static, 9, 252},	//851 QGlobalSpace::qAccessibleTableCastHelper()
    {37, 381, 1260, 2, Smoke::mf_static, 130, 253},	//852 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {37, 436, 1263, 8, Smoke::mf_static, 0, 254},	//853 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&, int, const QBrush*)
    {37, 436, 1272, 6, Smoke::mf_static, 0, 255},	//854 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&)
    {37, 436, 1279, 7, Smoke::mf_static, 0, 256},	//855 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&, int)
    {37, 505, 777, 1, Smoke::mf_static, 397, 257},	//856 QGlobalSpace::qFuzzyIsNull(float)
    {37, 333, 1287, 2, Smoke::mf_static, 466, 258},	//857 QGlobalSpace::operator*(const QQuaternion&, double)
    {37, 381, 1290, 2, Smoke::mf_static, 124, 259},	//858 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {37, 600, 1293, 2, Smoke::mf_static, 399, 260},	//859 QGlobalSpace::qstrcpy(char*, const char*)
    {37, 381, 1296, 2, Smoke::mf_static, 92, 261},	//860 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag)
    {37, 512, 20, 1, Smoke::mf_static, 528, 262},	//861 QGlobalSpace::qHash(int)
    {37, 337, 762, 2, Smoke::mf_static, 462, 263},	//862 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {37, 333, 1299, 2, Smoke::mf_static, 235, 264},	//863 QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    {37, 381, 1302, 2, Smoke::mf_static, 115, 265},	//864 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {37, 362, 966, 2, Smoke::mf_static, 397, 266},	//865 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {37, 342, 1305, 1, Smoke::mf_static, 460, 267},	//866 QGlobalSpace::operator-(const QPoint&)
    {37, 381, 1307, 2, Smoke::mf_static, 177, 268},	//867 QGlobalSpace::operator|(Qt::DropAction, int)
    {37, 352, 1310, 2, Smoke::mf_static, 28, 269},	//868 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {37, 381, 1313, 2, Smoke::mf_static, 177, 270},	//869 QGlobalSpace::operator|(QDir::SortFlag, int)
    {37, 486, 699, 1, Smoke::mf_static, 517, 271},	//870 QGlobalSpace::qExp(double)
    {37, 566, 20, 1, Smoke::mf_static, 277, 272},	//871 QGlobalSpace::qSetRealNumberPrecision(int)
    {37, 362, 1316, 2, Smoke::mf_static, 397, 273},	//872 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {37, 530, 699, 1, Smoke::mf_static, 517, 274},	//873 QGlobalSpace::qLn(double)
    {37, 337, 713, 2, Smoke::mf_static, 499, 275},	//874 QGlobalSpace::operator+(const QVector2D&, const QVector2D&)
    {37, 461, 1319, 7, Smoke::mf_static, 0, 276},	//875 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int, int, const QBrush*)
    {37, 461, 1327, 3, Smoke::mf_static, 0, 277},	//876 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&)
    {37, 461, 1331, 4, Smoke::mf_static, 0, 278},	//877 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool)
    {37, 461, 1336, 5, Smoke::mf_static, 0, 279},	//878 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int)
    {37, 461, 1342, 6, Smoke::mf_static, 0, 280},	//879 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int, int)
    {37, 352, 1349, 2, Smoke::mf_static, 28, 281},	//880 QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    {37, 333, 1352, 2, Smoke::mf_static, 294, 282},	//881 QGlobalSpace::operator*(const QVector4D&, const QMatrix4x4&)
    {37, 381, 1355, 2, Smoke::mf_static, 177, 283},	//882 QGlobalSpace::operator|(QTextDocument::FindFlag, int)
    {37, 326, 966, 2, Smoke::mf_static, 397, 284},	//883 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {37, 352, 1358, 2, Smoke::mf_static, 32, 285},	//884 QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    {37, 549, 1361, 1, Smoke::mf_static, 0, 286},	//885 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {37, 381, 1363, 2, Smoke::mf_static, 60, 287},	//886 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature)
    {37, 352, 1366, 2, Smoke::mf_static, 32, 288},	//887 QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    {37, 420, 422, 2, Smoke::mf_static, 531, 289},	//888 QGlobalSpace::qChecksum(const char*, unsigned int)
    {37, 431, 1369, 4, Smoke::mf_static, 0, 290},	//889 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&)
    {37, 346, 1374, 2, Smoke::mf_static, 505, 291},	//890 QGlobalSpace::operator/(const QVector4D&, double)
    {37, 352, 1377, 2, Smoke::mf_static, 274, 292},	//891 QGlobalSpace::operator<<(QTextStream&, const QSplitter&)
    {37, 398, 0, 0, Smoke::mf_static, 9, 293},	//892 QGlobalSpace::qAccessibleTable2CastHelper()
    {37, 381, 1380, 2, Smoke::mf_static, 123, 294},	//893 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {37, 532, 1383, 1, Smoke::mf_static, 535, 295},	//894 QGlobalSpace::qMalloc(size_t)
    {37, 542, 0, 0, Smoke::mf_static, 517, 296},	//895 QGlobalSpace::qQNaN()
    {37, 381, 1385, 2, Smoke::mf_static, 116, 297},	//896 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {37, 375, 1388, 2, Smoke::mf_static, 28, 298},	//897 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {37, 590, 747, 2, Smoke::mf_static, 397, 299},	//898 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {37, 381, 1391, 2, Smoke::mf_static, 101, 300},	//899 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    {37, 381, 1394, 2, Smoke::mf_static, 82, 301},	//900 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    {37, 352, 1397, 2, Smoke::mf_static, 28, 302},	//901 QGlobalSpace::operator<<(QDataStream&, const QVector3D&)
    {37, 352, 1400, 2, Smoke::mf_static, 32, 303},	//902 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {37, 381, 1403, 2, Smoke::mf_static, 177, 304},	//903 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {37, 416, 36, 1, Smoke::mf_static, 519, 305},	//904 QGlobalSpace::qBlue(unsigned int)
    {37, 381, 1406, 2, Smoke::mf_static, 108, 306},	//905 QGlobalSpace::operator|(QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>)
    {37, 333, 713, 2, Smoke::mf_static, 499, 307},	//906 QGlobalSpace::operator*(const QVector2D&, const QVector2D&)
    {37, 352, 1409, 2, Smoke::mf_static, 28, 308},	//907 QGlobalSpace::operator<<(QDataStream&, const QVector2D&)
    {37, 352, 1412, 2, Smoke::mf_static, 28, 309},	//908 QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    {37, 472, 1415, 5, Smoke::mf_static, 0, 310},	//909 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&, bool, const QBrush*)
    {37, 472, 1327, 3, Smoke::mf_static, 0, 311},	//910 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&)
    {37, 472, 1331, 4, Smoke::mf_static, 0, 312},	//911 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&, bool)
    {37, 593, 36, 1, Smoke::mf_static, 0, 313},	//912 QGlobalSpace::qsrand(unsigned int)
    {37, 326, 880, 2, Smoke::mf_static, 397, 314},	//913 QGlobalSpace::operator!=(const QQuaternion&, const QQuaternion&)
    {37, 381, 1421, 2, Smoke::mf_static, 177, 315},	//914 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, int)
    {37, 512, 1424, 1, Smoke::mf_static, 528, 316},	//915 QGlobalSpace::qHash(long)
    {37, 352, 1426, 2, Smoke::mf_static, 28, 317},	//916 QGlobalSpace::operator<<(QDataStream&, const QTreeWidgetItem&)
    {37, 333, 371, 2, Smoke::mf_static, 460, 318},	//917 QGlobalSpace::operator*(int, const QPoint&)
    {37, 367, 694, 2, Smoke::mf_static, 397, 319},	//918 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {37, 512, 1429, 1, Smoke::mf_static, 528, 320},	//919 QGlobalSpace::qHash(unsigned short)
    {37, 381, 1431, 2, Smoke::mf_static, 107, 321},	//920 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag)
    {37, 375, 1434, 2, Smoke::mf_static, 28, 322},	//921 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {37, 326, 762, 2, Smoke::mf_static, 397, 323},	//922 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {37, 381, 1437, 2, Smoke::mf_static, 89, 324},	//923 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag)
    {37, 352, 1440, 2, Smoke::mf_static, 28, 325},	//924 QGlobalSpace::operator<<(QDataStream&, const QImage&)
    {37, 381, 1443, 2, Smoke::mf_static, 63, 326},	//925 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {37, 381, 1446, 2, Smoke::mf_static, 81, 327},	//926 QGlobalSpace::operator|(QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>)
    {37, 342, 713, 2, Smoke::mf_static, 499, 328},	//927 QGlobalSpace::operator-(const QVector2D&, const QVector2D&)
    {37, 452, 1449, 6, Smoke::mf_static, 0, 329},	//928 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool, int, const QBrush*)
    {37, 452, 1327, 3, Smoke::mf_static, 0, 330},	//929 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&)
    {37, 452, 1331, 4, Smoke::mf_static, 0, 331},	//930 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool)
    {37, 452, 1336, 5, Smoke::mf_static, 0, 332},	//931 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool, int)
    {37, 612, 1033, 3, Smoke::mf_static, 519, 333},	//932 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {37, 375, 1456, 2, Smoke::mf_static, 28, 334},	//933 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {37, 362, 853, 2, Smoke::mf_static, 397, 335},	//934 QGlobalSpace::operator==(QString::Null, const QString&)
    {37, 375, 1459, 2, Smoke::mf_static, 28, 336},	//935 QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    {37, 362, 1037, 2, Smoke::mf_static, 397, 337},	//936 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {37, 381, 1462, 2, Smoke::mf_static, 100, 338},	//937 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    {37, 381, 1465, 2, Smoke::mf_static, 177, 339},	//938 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, int)
    {37, 337, 1120, 2, Smoke::mf_static, 403, 340},	//939 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {37, 381, 1468, 2, Smoke::mf_static, 107, 341},	//940 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>)
    {37, 512, 1471, 1, Smoke::mf_static, 528, 342},	//941 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {37, 352, 1473, 2, Smoke::mf_static, 28, 343},	//942 QGlobalSpace::operator<<(QDataStream&, const QVector4D&)
    {37, 352, 1476, 2, Smoke::mf_static, 32, 344},	//943 QGlobalSpace::operator<<(QDebug, const QRegion&)
    {37, 352, 1479, 2, Smoke::mf_static, 28, 345},	//944 QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    {37, 352, 1482, 2, Smoke::mf_static, 28, 346},	//945 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {37, 375, 1485, 2, Smoke::mf_static, 28, 347},	//946 QGlobalSpace::operator>>(QDataStream&, QVector3D&)
    {37, 352, 1488, 2, Smoke::mf_static, 28, 348},	//947 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {37, 381, 1491, 2, Smoke::mf_static, 71, 349},	//948 QGlobalSpace::operator|(QGLShader::ShaderTypeBit, QFlags<QGLShader::ShaderTypeBit>)
    {37, 452, 1494, 9, Smoke::mf_static, 0, 350},	//949 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool, int, const QBrush*)
    {37, 452, 945, 6, Smoke::mf_static, 0, 351},	//950 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&)
    {37, 452, 952, 7, Smoke::mf_static, 0, 352},	//951 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool)
    {37, 452, 1504, 8, Smoke::mf_static, 0, 353},	//952 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {37, 634, 1513, 3, Smoke::mf_static, 204, 354},	//953 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {37, 381, 1517, 2, Smoke::mf_static, 94, 355},	//954 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {37, 375, 1520, 2, Smoke::mf_static, 28, 356},	//955 QGlobalSpace::operator>>(QDataStream&, QVector2D&)
    {37, 381, 1523, 2, Smoke::mf_static, 177, 357},	//956 QGlobalSpace::operator|(QMessageBox::StandardButton, int)
    {37, 346, 1526, 2, Smoke::mf_static, 499, 358},	//957 QGlobalSpace::operator/(const QVector2D&, double)
    {37, 381, 1529, 2, Smoke::mf_static, 98, 359},	//958 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    {37, 346, 1532, 2, Smoke::mf_static, 462, 360},	//959 QGlobalSpace::operator/(const QPointF&, double)
    {37, 326, 1535, 2, Smoke::mf_static, 397, 361},	//960 QGlobalSpace::operator!=(bool, QBool)
    {37, 381, 1538, 2, Smoke::mf_static, 78, 362},	//961 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag)
    {37, 381, 1541, 2, Smoke::mf_static, 81, 363},	//962 QGlobalSpace::operator|(QInputDialog::InputDialogOption, QInputDialog::InputDialogOption)
    {37, 346, 1544, 2, Smoke::mf_static, 502, 364},	//963 QGlobalSpace::operator/(const QVector3D&, double)
    {37, 381, 1547, 2, Smoke::mf_static, 82, 365},	//964 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    {37, 610, 1550, 3, Smoke::mf_static, 399, 366},	//965 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {37, 333, 1554, 2, Smoke::mf_static, 499, 367},	//966 QGlobalSpace::operator*(double, const QVector2D&)
    {37, 342, 1557, 1, Smoke::mf_static, 505, 368},	//967 QGlobalSpace::operator-(const QVector4D&)
    {37, 381, 1559, 2, Smoke::mf_static, 111, 369},	//968 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>)
    {37, 375, 1562, 2, Smoke::mf_static, 28, 370},	//969 QGlobalSpace::operator>>(QDataStream&, QMatrix4x4&)
    {37, 577, 224, 1, Smoke::mf_static, 17, 371},	//970 QGlobalSpace::qUncompress(const QByteArray&)
    {37, 381, 1565, 2, Smoke::mf_static, 101, 372},	//971 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    {37, 346, 904, 2, Smoke::mf_static, 280, 373},	//972 QGlobalSpace::operator/(const QTransform&, double)
    {37, 381, 1568, 2, Smoke::mf_static, 177, 374},	//973 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, int)
    {37, 502, 704, 2, Smoke::mf_static, 397, 375},	//974 QGlobalSpace::qFuzzyCompare(const QMatrix4x4&, const QMatrix4x4&)
    {37, 381, 1571, 2, Smoke::mf_static, 177, 376},	//975 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    {37, 352, 1574, 2, Smoke::mf_static, 28, 377},	//976 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {37, 375, 1577, 2, Smoke::mf_static, 28, 378},	//977 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {37, 395, 0, 0, Smoke::mf_static, 9, 379},	//978 QGlobalSpace::qAccessibleActionCastHelper()
    {37, 333, 1580, 2, Smoke::mf_static, 225, 380},	//979 QGlobalSpace::operator*(const QPointF&, const QMatrix4x4&)
    {37, 381, 1583, 2, Smoke::mf_static, 177, 381},	//980 QGlobalSpace::operator|(Qt::MouseButton, int)
    {37, 375, 1586, 2, Smoke::mf_static, 28, 382},	//981 QGlobalSpace::operator>>(QDataStream&, QImage&)
    {37, 342, 1589, 1, Smoke::mf_static, 462, 383},	//982 QGlobalSpace::operator-(const QPointF&)
    {37, 352, 1591, 2, Smoke::mf_static, 32, 384},	//983 QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    {37, 381, 1594, 2, Smoke::mf_static, 50, 385},	//984 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>)
    {37, 362, 1535, 2, Smoke::mf_static, 397, 386},	//985 QGlobalSpace::operator==(bool, QBool)
    {37, 375, 1597, 2, Smoke::mf_static, 28, 387},	//986 QGlobalSpace::operator>>(QDataStream&, QPicture&)
    {37, 381, 1600, 2, Smoke::mf_static, 177, 388},	//987 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, int)
    {37, 592, 0, 0, Smoke::mf_static, 519, 389},	//988 QGlobalSpace::qrand()
    {37, 381, 1603, 2, Smoke::mf_static, 177, 390},	//989 QGlobalSpace::operator|(QGL::FormatOption, int)
    {37, 352, 1606, 2, Smoke::mf_static, 32, 391},	//990 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {37, 375, 1609, 2, Smoke::mf_static, 28, 392},	//991 QGlobalSpace::operator>>(QDataStream&, QVector4D&)
    {37, 333, 1612, 2, Smoke::mf_static, 229, 393},	//992 QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    {37, 381, 1615, 2, Smoke::mf_static, 54, 394},	//993 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption)
    {37, 621, 1618, 4, Smoke::mf_static, 0, 395},	//994 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {37, 333, 1623, 2, Smoke::mf_static, 460, 396},	//995 QGlobalSpace::operator*(float, const QPoint&)
    {37, 331, 1114, 2, Smoke::mf_static, 13, 397},	//996 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {37, 371, 747, 2, Smoke::mf_static, 397, 398},	//997 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {37, 381, 1626, 2, Smoke::mf_static, 64, 399},	//998 QGlobalSpace::operator|(QFileDialog::Option, QFileDialog::Option)
    {37, 381, 1629, 2, Smoke::mf_static, 109, 400},	//999 QGlobalSpace::operator|(QTextOption::Flag, QTextOption::Flag)
    {37, 352, 1632, 2, Smoke::mf_static, 28, 401},	//1000 QGlobalSpace::operator<<(QDataStream&, const QMatrix4x4&)
    {37, 381, 1635, 2, Smoke::mf_static, 125, 402},	//1001 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {37, 502, 1638, 2, Smoke::mf_static, 397, 403},	//1002 QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    {37, 381, 1641, 2, Smoke::mf_static, 177, 404},	//1003 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {37, 326, 1644, 2, Smoke::mf_static, 397, 405},	//1004 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {37, 555, 1647, 4, Smoke::mf_static, 528, 406},	//1005 QGlobalSpace::qRgba(int, int, int, int)
    {37, 429, 0, 0, Smoke::mf_static, 32, 407},	//1006 QGlobalSpace::qCritical()
    {37, 333, 1374, 2, Smoke::mf_static, 505, 408},	//1007 QGlobalSpace::operator*(const QVector4D&, double)
    {37, 375, 1652, 2, Smoke::mf_static, 28, 409},	//1008 QGlobalSpace::operator>>(QDataStream&, QTransform&)
    {37, 352, 1655, 2, Smoke::mf_static, 32, 410},	//1009 QGlobalSpace::operator<<(QDebug, QGraphicsObject*)
    {37, 352, 1658, 2, Smoke::mf_static, 28, 411},	//1010 QGlobalSpace::operator<<(QDataStream&, const QStandardItem&)
    {37, 381, 1661, 2, Smoke::mf_static, 119, 412},	//1011 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {37, 326, 747, 2, Smoke::mf_static, 397, 413},	//1012 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {37, 326, 889, 2, Smoke::mf_static, 397, 414},	//1013 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {37, 333, 1664, 2, Smoke::mf_static, 505, 415},	//1014 QGlobalSpace::operator*(double, const QVector4D&)
    {37, 381, 1667, 2, Smoke::mf_static, 177, 416},	//1015 QGlobalSpace::operator|(QAccessible::RelationFlag, int)
    {37, 381, 1670, 2, Smoke::mf_static, 87, 417},	//1016 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>)
    {37, 362, 1644, 2, Smoke::mf_static, 397, 418},	//1017 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {37, 352, 1673, 2, Smoke::mf_static, 28, 419},	//1018 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {37, 352, 1676, 2, Smoke::mf_static, 32, 420},	//1019 QGlobalSpace::operator<<(QDebug, const QMatrix4x4&)
    {37, 337, 1679, 2, Smoke::mf_static, 403, 421},	//1020 QGlobalSpace::operator+(const QByteArray&, char)
    {37, 381, 1682, 2, Smoke::mf_static, 59, 422},	//1021 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {37, 381, 1685, 2, Smoke::mf_static, 57, 423},	//1022 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {37, 375, 1688, 2, Smoke::mf_static, 28, 424},	//1023 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {37, 346, 1691, 2, Smoke::mf_static, 475, 425},	//1024 QGlobalSpace::operator/(const QSizeF&, double)
    {37, 362, 972, 2, Smoke::mf_static, 397, 426},	//1025 QGlobalSpace::operator==(const QVector4D&, const QVector4D&)
    {37, 352, 1694, 2, Smoke::mf_static, 28, 427},	//1026 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {37, 381, 1697, 2, Smoke::mf_static, 177, 428},	//1027 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    {37, 362, 889, 2, Smoke::mf_static, 397, 429},	//1028 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {37, 404, 1700, 1, Smoke::mf_static, 0, 430},	//1029 QGlobalSpace::qAddPostRoutine(void(*)())
    {37, 381, 1702, 2, Smoke::mf_static, 93, 431},	//1030 QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    {37, 422, 1705, 3, Smoke::mf_static, 17, 432},	//1031 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {37, 422, 1030, 2, Smoke::mf_static, 17, 433},	//1032 QGlobalSpace::qCompress(const unsigned char*, int)
    {37, 356, 747, 2, Smoke::mf_static, 397, 434},	//1033 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {37, 492, 699, 1, Smoke::mf_static, 517, 435},	//1034 QGlobalSpace::qFastSin(double)
    {37, 356, 694, 2, Smoke::mf_static, 397, 436},	//1035 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {37, 352, 1709, 2, Smoke::mf_static, 28, 437},	//1036 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {37, 375, 1712, 2, Smoke::mf_static, 28, 438},	//1037 QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    {37, 381, 1715, 2, Smoke::mf_static, 56, 439},	//1038 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton)
    {37, 346, 1287, 2, Smoke::mf_static, 466, 440},	//1039 QGlobalSpace::operator/(const QQuaternion&, double)
    {37, 375, 1718, 2, Smoke::mf_static, 28, 441},	//1040 QGlobalSpace::operator>>(QDataStream&, QString&)
    {37, 408, 0, 0, Smoke::mf_static, 246, 442},	//1041 QGlobalSpace::qAppName()
    {37, 580, 0, 0, Smoke::mf_static, 508, 443},	//1042 QGlobalSpace::qVersion()
    {37, 381, 1721, 2, Smoke::mf_static, 95, 444},	//1043 QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    {37, 352, 1724, 2, Smoke::mf_static, 28, 445},	//1044 QGlobalSpace::operator<<(QDataStream&, const QListWidgetItem&)
    {37, 381, 1727, 2, Smoke::mf_static, 177, 446},	//1045 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    {37, 381, 1730, 2, Smoke::mf_static, 70, 447},	//1046 QGlobalSpace::operator|(QGLFunctions::OpenGLFeature, QFlags<QGLFunctions::OpenGLFeature>)
    {37, 498, 1733, 1, Smoke::mf_static, 0, 448},	//1047 QGlobalSpace::qFree(void*)
    {37, 352, 1735, 2, Smoke::mf_static, 32, 449},	//1048 QGlobalSpace::operator<<(QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>)
    {37, 333, 1738, 2, Smoke::mf_static, 187, 450},	//1049 QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    {37, 352, 1741, 2, Smoke::mf_static, 28, 451},	//1050 QGlobalSpace::operator<<(QDataStream&, const QTextFormat&)
    {37, 381, 1744, 2, Smoke::mf_static, 177, 452},	//1051 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {37, 500, 1733, 1, Smoke::mf_static, 0, 453},	//1052 QGlobalSpace::qFreeAligned(void*)
    {37, 375, 1747, 2, Smoke::mf_static, 28, 454},	//1053 QGlobalSpace::operator>>(QDataStream&, QTreeWidgetItem&)
    {37, 362, 1221, 2, Smoke::mf_static, 397, 455},	//1054 QGlobalSpace::operator==(const QString&, QString::Null)
    {37, 352, 1750, 2, Smoke::mf_static, 32, 456},	//1055 QGlobalSpace::operator<<(QDebug, const QDir&)
    {37, 352, 1753, 2, Smoke::mf_static, 274, 457},	//1056 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {37, 348, 774, 2, Smoke::mf_static, 397, 458},	//1057 QGlobalSpace::operator<(const QByteArray&, const char*)
    {37, 352, 1756, 2, Smoke::mf_static, 32, 459},	//1058 QGlobalSpace::operator<<(QDebug, const QPen&)
    {37, 333, 1526, 2, Smoke::mf_static, 499, 460},	//1059 QGlobalSpace::operator*(const QVector2D&, double)
    {37, 333, 1759, 2, Smoke::mf_static, 466, 461},	//1060 QGlobalSpace::operator*(double, const QQuaternion&)
    {37, 326, 1762, 2, Smoke::mf_static, 397, 462},	//1061 QGlobalSpace::operator!=(const QGLFormat&, const QGLFormat&)
    {37, 352, 1765, 2, Smoke::mf_static, 32, 463},	//1062 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {37, 326, 972, 2, Smoke::mf_static, 397, 464},	//1063 QGlobalSpace::operator!=(const QVector4D&, const QVector4D&)
    {37, 381, 1768, 2, Smoke::mf_static, 75, 465},	//1064 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>)
    {37, 352, 1771, 2, Smoke::mf_static, 32, 466},	//1065 QGlobalSpace::operator<<(QDebug, const QVector3D&)
    {37, 381, 1774, 2, Smoke::mf_static, 108, 467},	//1066 QGlobalSpace::operator|(QTextItem::RenderFlag, QTextItem::RenderFlag)
    {37, 333, 1544, 2, Smoke::mf_static, 502, 468},	//1067 QGlobalSpace::operator*(const QVector3D&, double)
    {37, 381, 1777, 2, Smoke::mf_static, 62, 469},	//1068 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {37, 512, 1780, 1, Smoke::mf_static, 528, 470},	//1069 QGlobalSpace::qHash(const QBitArray&)
    {37, 352, 1782, 2, Smoke::mf_static, 32, 471},	//1070 QGlobalSpace::operator<<(QDebug, const QVector2D&)
    {37, 381, 1785, 2, Smoke::mf_static, 80, 472},	//1071 QGlobalSpace::operator|(QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>)
    {37, 352, 1788, 2, Smoke::mf_static, 32, 473},	//1072 QGlobalSpace::operator<<(QDebug, const QTime&)
    {37, 352, 1791, 2, Smoke::mf_static, 274, 474},	//1073 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {37, 418, 699, 1, Smoke::mf_static, 519, 475},	//1074 QGlobalSpace::qCeil(double)
    {37, 352, 1794, 2, Smoke::mf_static, 32, 476},	//1075 QGlobalSpace::operator<<(QDebug, const QVector4D&)
    {37, 375, 1797, 2, Smoke::mf_static, 28, 477},	//1076 QGlobalSpace::operator>>(QDataStream&, QTextFormat&)
    {37, 326, 819, 2, Smoke::mf_static, 397, 478},	//1077 QGlobalSpace::operator!=(QChar, QChar)
    {37, 381, 1800, 2, Smoke::mf_static, 118, 479},	//1078 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {37, 573, 1803, 2, Smoke::mf_static, 397, 480},	//1079 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {37, 381, 1806, 2, Smoke::mf_static, 177, 481},	//1080 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    {37, 602, 204, 1, Smoke::mf_static, 399, 482},	//1081 QGlobalSpace::qstrdup(const char*)
    {37, 381, 1809, 2, Smoke::mf_static, 93, 483},	//1082 QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    {37, 397, 0, 0, Smoke::mf_static, 9, 484},	//1083 QGlobalSpace::qAccessibleImageCastHelper()
    {37, 381, 1812, 2, Smoke::mf_static, 113, 485},	//1084 QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    {37, 375, 1815, 2, Smoke::mf_static, 28, 486},	//1085 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {37, 375, 1818, 2, Smoke::mf_static, 28, 487},	//1086 QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    {37, 375, 1821, 2, Smoke::mf_static, 28, 488},	//1087 QGlobalSpace::operator>>(QDataStream&, QRegion&)
    {37, 326, 1163, 2, Smoke::mf_static, 397, 489},	//1088 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {37, 381, 1824, 2, Smoke::mf_static, 51, 490},	//1089 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    {37, 352, 1827, 2, Smoke::mf_static, 28, 491},	//1090 QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    {37, 381, 1830, 2, Smoke::mf_static, 102, 492},	//1091 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    {37, 381, 1833, 2, Smoke::mf_static, 177, 493},	//1092 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, int)
    {37, 430, 0, 0, Smoke::mf_static, 32, 494},	//1093 QGlobalSpace::qDebug()
    {37, 534, 1836, 2, Smoke::mf_static, 535, 495},	//1094 QGlobalSpace::qMallocAligned(size_t, size_t)
    {37, 381, 1839, 2, Smoke::mf_static, 76, 496},	//1095 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>)
    {37, 381, 1842, 2, Smoke::mf_static, 68, 497},	//1096 QGlobalSpace::operator|(QGLContext::BindOption, QGLContext::BindOption)
    {37, 333, 1845, 2, Smoke::mf_static, 223, 498},	//1097 QGlobalSpace::operator*(const QPoint&, const QTransform&)
    {37, 326, 1803, 2, Smoke::mf_static, 397, 499},	//1098 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {37, 510, 36, 1, Smoke::mf_static, 519, 500},	//1099 QGlobalSpace::qGreen(unsigned int)
    {37, 540, 768, 2, Smoke::mf_static, 517, 501},	//1100 QGlobalSpace::qPow(double, double)
    {37, 352, 1848, 2, Smoke::mf_static, 32, 502},	//1101 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {37, 381, 1851, 2, Smoke::mf_static, 177, 503},	//1102 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {37, 375, 1753, 2, Smoke::mf_static, 274, 504},	//1103 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {37, 337, 1854, 2, Smoke::mf_static, 403, 505},	//1104 QGlobalSpace::operator+(char, const QByteArray&)
    {37, 381, 1857, 2, Smoke::mf_static, 177, 506},	//1105 QGlobalSpace::operator|(QStyle::StateFlag, int)
    {37, 362, 747, 2, Smoke::mf_static, 397, 507},	//1106 QGlobalSpace::operator==(const char*, const QByteArray&)
    {37, 352, 1860, 2, Smoke::mf_static, 28, 508},	//1107 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {37, 381, 1863, 2, Smoke::mf_static, 102, 509},	//1108 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    {37, 342, 735, 2, Smoke::mf_static, 473, 510},	//1109 QGlobalSpace::operator-(const QSize&, const QSize&)
    {37, 352, 1866, 2, Smoke::mf_static, 32, 511},	//1110 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {37, 381, 1869, 2, Smoke::mf_static, 53, 512},	//1111 QGlobalSpace::operator|(QAccessible::StateFlag, QAccessible::StateFlag)
    {37, 381, 1872, 2, Smoke::mf_static, 91, 513},	//1112 QGlobalSpace::operator|(QPainter::RenderHint, QPainter::RenderHint)
    {37, 381, 1875, 2, Smoke::mf_static, 177, 514},	//1113 QGlobalSpace::operator|(Qt::WindowState, int)
    {37, 375, 1878, 2, Smoke::mf_static, 28, 515},	//1114 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {37, 375, 1881, 2, Smoke::mf_static, 28, 516},	//1115 QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    {37, 381, 1884, 2, Smoke::mf_static, 55, 517},	//1116 QGlobalSpace::operator|(QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>)
    {37, 326, 1316, 2, Smoke::mf_static, 397, 518},	//1117 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {37, 381, 1887, 2, Smoke::mf_static, 109, 519},	//1118 QGlobalSpace::operator|(QTextOption::Flag, QFlags<QTextOption::Flag>)
    {37, 352, 1890, 2, Smoke::mf_static, 32, 520},	//1119 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {37, 381, 1893, 2, Smoke::mf_static, 122, 521},	//1120 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {37, 333, 1896, 2, Smoke::mf_static, 462, 522},	//1121 QGlobalSpace::operator*(double, const QPointF&)
    {37, 375, 1899, 2, Smoke::mf_static, 28, 523},	//1122 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {37, 333, 1902, 2, Smoke::mf_static, 235, 524},	//1123 QGlobalSpace::operator*(const QRegion&, const QTransform&)
    {37, 381, 1905, 2, Smoke::mf_static, 117, 525},	//1124 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {37, 381, 1908, 2, Smoke::mf_static, 69, 526},	//1125 QGlobalSpace::operator|(QGLFormat::OpenGLVersionFlag, QFlags<QGLFormat::OpenGLVersionFlag>)
    {37, 362, 694, 2, Smoke::mf_static, 397, 527},	//1126 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {37, 333, 1911, 2, Smoke::mf_static, 473, 528},	//1127 QGlobalSpace::operator*(const QSize&, double)
    {37, 352, 1914, 2, Smoke::mf_static, 32, 529},	//1128 QGlobalSpace::operator<<(QDebug, const QDate&)
    {37, 502, 713, 2, Smoke::mf_static, 397, 530},	//1129 QGlobalSpace::qFuzzyCompare(const QVector2D&, const QVector2D&)
    {37, 333, 1917, 2, Smoke::mf_static, 215, 531},	//1130 QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    {37, 381, 1920, 2, Smoke::mf_static, 53, 532},	//1131 QGlobalSpace::operator|(QAccessible::StateFlag, QFlags<QAccessible::StateFlag>)
    {37, 381, 1923, 2, Smoke::mf_static, 57, 533},	//1132 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {37, 640, 1926, 4, Smoke::mf_static, 519, 534},	//1133 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {37, 362, 1762, 2, Smoke::mf_static, 397, 535},	//1134 QGlobalSpace::operator==(const QGLFormat&, const QGLFormat&)
    {37, 333, 1931, 2, Smoke::mf_static, 229, 536},	//1135 QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    {37, 333, 1934, 2, Smoke::mf_static, 460, 537},	//1136 QGlobalSpace::operator*(double, const QPoint&)
    {37, 538, 1937, 3, Smoke::mf_static, 535, 538},	//1137 QGlobalSpace::qMemSet(void*, int, size_t)
    {37, 352, 1941, 2, Smoke::mf_static, 28, 539},	//1138 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {37, 623, 247, 2, Smoke::mf_static, 0, 540},	//1139 QGlobalSpace::qt_check_pointer(const char*, int)
    {37, 479, 1415, 5, Smoke::mf_static, 0, 541},	//1140 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&, bool, const QBrush*)
    {37, 479, 1327, 3, Smoke::mf_static, 0, 542},	//1141 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&)
    {37, 479, 1331, 4, Smoke::mf_static, 0, 543},	//1142 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&, bool)
    {37, 512, 1944, 1, Smoke::mf_static, 528, 544},	//1143 QGlobalSpace::qHash(short)
    {37, 381, 1946, 2, Smoke::mf_static, 87, 545},	//1144 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption)
    {37, 381, 1949, 2, Smoke::mf_static, 79, 546},	//1145 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {37, 488, 699, 1, Smoke::mf_static, 517, 547},	//1146 QGlobalSpace::qFabs(double)
    {37, 381, 1952, 2, Smoke::mf_static, 116, 548},	//1147 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {37, 381, 1955, 2, Smoke::mf_static, 58, 549},	//1148 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {37, 595, 1120, 2, Smoke::mf_static, 519, 550},	//1149 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {37, 502, 1958, 2, Smoke::mf_static, 397, 551},	//1150 QGlobalSpace::qFuzzyCompare(float, float)
    {37, 381, 1961, 2, Smoke::mf_static, 177, 552},	//1151 QGlobalSpace::operator|(QInputDialog::InputDialogOption, int)
    {37, 362, 1964, 2, Smoke::mf_static, 397, 553},	//1152 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {37, 381, 1967, 2, Smoke::mf_static, 83, 554},	//1153 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {37, 381, 1970, 2, Smoke::mf_static, 111, 555},	//1154 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag)
    {37, 381, 1973, 2, Smoke::mf_static, 99, 556},	//1155 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    {37, 381, 1976, 2, Smoke::mf_static, 78, 557},	//1156 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>)
    {37, 402, 699, 1, Smoke::mf_static, 517, 558},	//1157 QGlobalSpace::qAcos(double)
    {37, 381, 1979, 2, Smoke::mf_static, 177, 559},	//1158 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {37, 381, 1982, 2, Smoke::mf_static, 120, 560},	//1159 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {37, 381, 1985, 2, Smoke::mf_static, 177, 561},	//1160 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, int)
    {37, 352, 1988, 2, Smoke::mf_static, 28, 562},	//1161 QGlobalSpace::operator<<(QDataStream&, const QPen&)
    {37, 371, 1120, 2, Smoke::mf_static, 397, 563},	//1162 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {37, 381, 1991, 2, Smoke::mf_static, 177, 564},	//1163 QGlobalSpace::operator|(QGLFunctions::OpenGLFeature, int)
    {37, 381, 1994, 2, Smoke::mf_static, 90, 565},	//1164 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature)
    {37, 375, 1997, 2, Smoke::mf_static, 28, 566},	//1165 QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    {37, 415, 0, 0, Smoke::mf_static, 0, 567},	//1166 QGlobalSpace::qBadAlloc()
    {37, 352, 2000, 2, Smoke::mf_static, 32, 568},	//1167 QGlobalSpace::operator<<(QDebug, const QLine&)
    {37, 381, 2003, 2, Smoke::mf_static, 126, 569},	//1168 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {37, 461, 2006, 10, Smoke::mf_static, 0, 570},	//1169 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int, int, const QBrush*)
    {37, 461, 945, 6, Smoke::mf_static, 0, 571},	//1170 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&)
    {37, 461, 952, 7, Smoke::mf_static, 0, 572},	//1171 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool)
    {37, 461, 1504, 8, Smoke::mf_static, 0, 573},	//1172 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {37, 461, 2017, 9, Smoke::mf_static, 0, 574},	//1173 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int, int)
    {37, 381, 2027, 2, Smoke::mf_static, 177, 575},	//1174 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {37, 375, 2030, 2, Smoke::mf_static, 28, 576},	//1175 QGlobalSpace::operator>>(QDataStream&, QTextLength&)
    {37, 352, 2033, 2, Smoke::mf_static, 32, 577},	//1176 QGlobalSpace::operator<<(QDebug, const QTransform&)
    {37, 381, 2036, 2, Smoke::mf_static, 177, 578},	//1177 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, int)
    {37, 505, 699, 1, Smoke::mf_static, 397, 579},	//1178 QGlobalSpace::qFuzzyIsNull(double)
    {37, 422, 250, 2, Smoke::mf_static, 17, 580},	//1179 QGlobalSpace::qCompress(const QByteArray&, int)
    {37, 422, 224, 1, Smoke::mf_static, 17, 581},	//1180 QGlobalSpace::qCompress(const QByteArray&)
    {37, 352, 2039, 2, Smoke::mf_static, 32, 582},	//1181 QGlobalSpace::operator<<(QDebug, const QPolygon&)
    {37, 381, 2042, 2, Smoke::mf_static, 112, 583},	//1182 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {37, 381, 2045, 2, Smoke::mf_static, 177, 584},	//1183 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    {37, 381, 2048, 2, Smoke::mf_static, 177, 585},	//1184 QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    {37, 381, 2051, 2, Smoke::mf_static, 76, 586},	//1185 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer)
    {37, 381, 2054, 2, Smoke::mf_static, 177, 587},	//1186 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {37, 381, 2057, 2, Smoke::mf_static, 129, 588},	//1187 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {37, 342, 2060, 1, Smoke::mf_static, 499, 589},	//1188 QGlobalSpace::operator-(const QVector2D&)
    {37, 381, 2062, 2, Smoke::mf_static, 177, 590},	//1189 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, int)
    {37, 381, 2065, 2, Smoke::mf_static, 48, 591},	//1190 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {37, 352, 2068, 2, Smoke::mf_static, 28, 592},	//1191 QGlobalSpace::operator<<(QDataStream&, const QColor&)
    {37, 333, 2071, 2, Smoke::mf_static, 196, 593},	//1192 QGlobalSpace::operator*(double, const QMatrix4x4&)
    {37, 352, 2074, 2, Smoke::mf_static, 28, 594},	//1193 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {37, 443, 2017, 9, Smoke::mf_static, 0, 595},	//1194 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool, int, int)
    {37, 443, 945, 6, Smoke::mf_static, 0, 596},	//1195 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&)
    {37, 443, 952, 7, Smoke::mf_static, 0, 597},	//1196 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool)
    {37, 443, 1504, 8, Smoke::mf_static, 0, 598},	//1197 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {37, 381, 2077, 2, Smoke::mf_static, 52, 599},	//1198 QGlobalSpace::operator|(QAccessible::RelationFlag, QAccessible::RelationFlag)
    {37, 333, 2080, 2, Smoke::mf_static, 185, 600},	//1199 QGlobalSpace::operator*(const QLine&, const QMatrix&)
    {37, 352, 2083, 2, Smoke::mf_static, 28, 601},	//1200 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {37, 352, 2086, 2, Smoke::mf_static, 28, 602},	//1201 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {37, 409, 699, 1, Smoke::mf_static, 517, 603},	//1202 QGlobalSpace::qAsin(double)
    {37, 352, 2089, 2, Smoke::mf_static, 32, 604},	//1203 QGlobalSpace::operator<<(QDebug, const QRect&)
    {37, 352, 2092, 2, Smoke::mf_static, 32, 605},	//1204 QGlobalSpace::operator<<(QDebug, const QFont&)
    {37, 381, 2095, 2, Smoke::mf_static, 58, 606},	//1205 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {37, 381, 2098, 2, Smoke::mf_static, 54, 607},	//1206 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>)
    {37, 381, 2101, 2, Smoke::mf_static, 177, 608},	//1207 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, int)
    {37, 326, 1108, 2, Smoke::mf_static, 397, 609},	//1208 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {37, 569, 699, 1, Smoke::mf_static, 517, 610},	//1209 QGlobalSpace::qSin(double)
    {37, 381, 2104, 2, Smoke::mf_static, 177, 611},	//1210 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {37, 362, 1120, 2, Smoke::mf_static, 397, 612},	//1211 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {37, 375, 2107, 2, Smoke::mf_static, 28, 613},	//1212 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {37, 381, 2110, 2, Smoke::mf_static, 86, 614},	//1213 QGlobalSpace::operator|(QMdiArea::AreaOption, QMdiArea::AreaOption)
    {37, 381, 1114, 2, Smoke::mf_static, 13, 615},	//1214 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {37, 352, 2113, 2, Smoke::mf_static, 28, 616},	//1215 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {37, 472, 936, 8, Smoke::mf_static, 0, 617},	//1216 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*)
    {37, 472, 945, 6, Smoke::mf_static, 0, 618},	//1217 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&)
    {37, 472, 952, 7, Smoke::mf_static, 0, 619},	//1218 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&, bool)
    {37, 502, 710, 2, Smoke::mf_static, 397, 620},	//1219 QGlobalSpace::qFuzzyCompare(const QVector3D&, const QVector3D&)
    {37, 352, 2116, 2, Smoke::mf_static, 28, 621},	//1220 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {37, 381, 2119, 2, Smoke::mf_static, 65, 622},	//1221 QGlobalSpace::operator|(QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>)
    {37, 362, 2122, 2, Smoke::mf_static, 397, 623},	//1222 QGlobalSpace::operator==(QKeySequence::StandardKey, QKeyEvent*)
    {37, 381, 2125, 2, Smoke::mf_static, 66, 624},	//1223 QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>)
    {37, 381, 2128, 2, Smoke::mf_static, 95, 625},	//1224 QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    {37, 381, 2131, 2, Smoke::mf_static, 177, 626},	//1225 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {37, 375, 2134, 2, Smoke::mf_static, 28, 627},	//1226 QGlobalSpace::operator>>(QDataStream&, QListWidgetItem&)
    {37, 352, 2137, 2, Smoke::mf_static, 28, 628},	//1227 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {37, 616, 247, 2, Smoke::mf_static, 246, 629},	//1228 QGlobalSpace::qtTrId(const char*, int)
    {37, 616, 204, 1, Smoke::mf_static, 246, 630},	//1229 QGlobalSpace::qtTrId(const char*)
    {37, 381, 2140, 2, Smoke::mf_static, 177, 631},	//1230 QGlobalSpace::operator|(QImageIOPlugin::Capability, int)
    {37, 381, 2143, 2, Smoke::mf_static, 105, 632},	//1231 QGlobalSpace::operator|(QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>)
    {37, 342, 2146, 1, Smoke::mf_static, 502, 633},	//1232 QGlobalSpace::operator-(const QVector3D&)
    {37, 352, 2148, 2, Smoke::mf_static, 32, 634},	//1233 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {37, 356, 819, 2, Smoke::mf_static, 397, 635},	//1234 QGlobalSpace::operator<=(QChar, QChar)
    {37, 381, 2151, 2, Smoke::mf_static, 129, 636},	//1235 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {37, 522, 36, 1, Smoke::mf_static, 397, 637},	//1236 QGlobalSpace::qIsGray(unsigned int)
    {37, 381, 2154, 2, Smoke::mf_static, 74, 638},	//1237 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>)
    {37, 326, 1964, 2, Smoke::mf_static, 397, 639},	//1238 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {37, 381, 2157, 2, Smoke::mf_static, 121, 640},	//1239 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {37, 375, 2160, 2, Smoke::mf_static, 28, 641},	//1240 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {37, 375, 2163, 2, Smoke::mf_static, 28, 642},	//1241 QGlobalSpace::operator>>(QDataStream&, QFont&)
    {37, 436, 2166, 5, Smoke::mf_static, 0, 643},	//1242 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&, int, const QBrush*)
    {37, 436, 2172, 3, Smoke::mf_static, 0, 644},	//1243 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&)
    {37, 436, 2176, 4, Smoke::mf_static, 0, 645},	//1244 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&, int)
    {37, 381, 2181, 2, Smoke::mf_static, 75, 646},	//1245 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag)
    {37, 375, 2184, 2, Smoke::mf_static, 28, 647},	//1246 QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    {37, 381, 2187, 2, Smoke::mf_static, 71, 648},	//1247 QGlobalSpace::operator|(QGLShader::ShaderTypeBit, QGLShader::ShaderTypeBit)
    {37, 381, 2190, 2, Smoke::mf_static, 177, 649},	//1248 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    {37, 333, 2193, 2, Smoke::mf_static, 460, 650},	//1249 QGlobalSpace::operator*(const QPoint&, int)
    {37, 375, 2196, 2, Smoke::mf_static, 28, 651},	//1250 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {37, 381, 2199, 2, Smoke::mf_static, 177, 652},	//1251 QGlobalSpace::operator|(QPainter::RenderHint, int)
    {37, 638, 2202, 3, Smoke::mf_static, 397, 653},	//1252 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {37, 352, 2206, 2, Smoke::mf_static, 32, 654},	//1253 QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    {37, 381, 2209, 2, Smoke::mf_static, 177, 655},	//1254 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    {37, 333, 2212, 2, Smoke::mf_static, 223, 656},	//1255 QGlobalSpace::operator*(const QPoint&, const QMatrix4x4&)
    {37, 346, 1911, 2, Smoke::mf_static, 473, 657},	//1256 QGlobalSpace::operator/(const QSize&, double)
    {37, 333, 2215, 2, Smoke::mf_static, 223, 658},	//1257 QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    {37, 528, 777, 1, Smoke::mf_static, 397, 659},	//1258 QGlobalSpace::qIsNull(float)
    {37, 381, 2218, 2, Smoke::mf_static, 50, 660},	//1259 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption)
    {37, 636, 2221, 5, Smoke::mf_static, 0, 661},	//1260 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {37, 362, 2227, 2, Smoke::mf_static, 397, 662},	//1261 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {37, 411, 699, 1, Smoke::mf_static, 517, 663},	//1262 QGlobalSpace::qAtan(double)
    {37, 375, 2230, 2, Smoke::mf_static, 28, 664},	//1263 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {37, 381, 2233, 2, Smoke::mf_static, 103, 665},	//1264 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    {37, 381, 2236, 2, Smoke::mf_static, 177, 666},	//1265 QGlobalSpace::operator|(Qt::Orientation, int)
    {37, 502, 768, 2, Smoke::mf_static, 397, 667},	//1266 QGlobalSpace::qFuzzyCompare(double, double)
    {37, 333, 2239, 2, Smoke::mf_static, 292, 668},	//1267 QGlobalSpace::operator*(const QMatrix4x4&, const QVector3D&)
    {37, 352, 2242, 2, Smoke::mf_static, 28, 669},	//1268 QGlobalSpace::operator<<(QDataStream&, const QTableWidgetItem&)
    {37, 352, 2245, 2, Smoke::mf_static, 32, 670},	//1269 QGlobalSpace::operator<<(QDebug, QGraphicsItem*)
    {37, 443, 2248, 7, Smoke::mf_static, 0, 671},	//1270 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int, int)
    {37, 443, 2256, 4, Smoke::mf_static, 0, 672},	//1271 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&)
    {37, 443, 2261, 5, Smoke::mf_static, 0, 673},	//1272 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool)
    {37, 443, 2267, 6, Smoke::mf_static, 0, 674},	//1273 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int)
    {37, 333, 933, 2, Smoke::mf_static, 460, 675},	//1274 QGlobalSpace::operator*(const QPoint&, double)
    {37, 381, 2274, 2, Smoke::mf_static, 118, 676},	//1275 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {37, 381, 2277, 2, Smoke::mf_static, 79, 677},	//1276 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {37, 561, 0, 0, Smoke::mf_static, 517, 678},	//1277 QGlobalSpace::qSNaN()
    {37, 333, 2280, 2, Smoke::mf_static, 225, 679},	//1278 QGlobalSpace::operator*(const QMatrix4x4&, const QPointF&)
    {37, 381, 2283, 2, Smoke::mf_static, 177, 680},	//1279 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, int)
    {37, 362, 774, 2, Smoke::mf_static, 397, 681},	//1280 QGlobalSpace::operator==(const QByteArray&, const char*)
    {37, 381, 2286, 2, Smoke::mf_static, 90, 682},	//1281 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>)
    {37, 352, 2289, 2, Smoke::mf_static, 28, 683},	//1282 QGlobalSpace::operator<<(QDataStream&, const QFont&)
    {37, 333, 1691, 2, Smoke::mf_static, 475, 684},	//1283 QGlobalSpace::operator*(const QSizeF&, double)
    {37, 381, 2292, 2, Smoke::mf_static, 73, 685},	//1284 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint)
    {37, 362, 1803, 2, Smoke::mf_static, 397, 686},	//1285 QGlobalSpace::operator==(const QStringRef&, const char*)
    {37, 326, 710, 2, Smoke::mf_static, 397, 687},	//1286 QGlobalSpace::operator!=(const QVector3D&, const QVector3D&)
    {37, 362, 713, 2, Smoke::mf_static, 397, 688},	//1287 QGlobalSpace::operator==(const QVector2D&, const QVector2D&)
    {37, 333, 2295, 2, Smoke::mf_static, 227, 689},	//1288 QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    {37, 381, 2298, 2, Smoke::mf_static, 69, 690},	//1289 QGlobalSpace::operator|(QGLFormat::OpenGLVersionFlag, QGLFormat::OpenGLVersionFlag)
    {37, 381, 2301, 2, Smoke::mf_static, 177, 691},	//1290 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, int)
    {37, 333, 2304, 2, Smoke::mf_static, 460, 692},	//1291 QGlobalSpace::operator*(const QPoint&, float)
    {37, 333, 2307, 2, Smoke::mf_static, 473, 693},	//1292 QGlobalSpace::operator*(double, const QSize&)
    {37, 381, 2310, 2, Smoke::mf_static, 177, 694},	//1293 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    {37, 348, 694, 2, Smoke::mf_static, 397, 695},	//1294 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {37, 326, 2313, 2, Smoke::mf_static, 397, 696},	//1295 QGlobalSpace::operator!=(QBool, bool)
    {37, 381, 2316, 2, Smoke::mf_static, 56, 697},	//1296 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>)
    {37, 326, 735, 2, Smoke::mf_static, 397, 698},	//1297 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {37, 375, 2319, 2, Smoke::mf_static, 28, 699},	//1298 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {37, 352, 2322, 2, Smoke::mf_static, 32, 700},	//1299 QGlobalSpace::operator<<(QDebug, const QSize&)
    {37, 381, 2325, 2, Smoke::mf_static, 177, 701},	//1300 QGlobalSpace::operator|(QStyle::SubControl, int)
    {37, 381, 2328, 2, Smoke::mf_static, 110, 702},	//1301 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {37, 333, 2331, 2, Smoke::mf_static, 187, 703},	//1302 QGlobalSpace::operator*(const QLineF&, const QTransform&)
    {37, 342, 880, 2, Smoke::mf_static, 466, 704},	//1303 QGlobalSpace::operator-(const QQuaternion&, const QQuaternion&)
    {37, 333, 1532, 2, Smoke::mf_static, 462, 705},	//1304 QGlobalSpace::operator*(const QPointF&, double)
    {37, 381, 2334, 2, Smoke::mf_static, 177, 706},	//1305 QGlobalSpace::operator|(QFontDialog::FontDialogOption, int)
    {37, 604, 206, 2, Smoke::mf_static, 519, 707},	//1306 QGlobalSpace::qstricmp(const char*, const char*)
    {37, 381, 2337, 2, Smoke::mf_static, 124, 708},	//1307 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {37, 326, 784, 2, Smoke::mf_static, 397, 709},	//1308 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {37, 557, 699, 1, Smoke::mf_static, 519, 710},	//1309 QGlobalSpace::qRound(double)
    {37, 515, 0, 0, Smoke::mf_static, 517, 711},	//1310 QGlobalSpace::qInf()
    {37, 352, 2340, 2, Smoke::mf_static, 28, 712},	//1311 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {37, 381, 2343, 2, Smoke::mf_static, 105, 713},	//1312 QGlobalSpace::operator|(QTextDocument::FindFlag, QTextDocument::FindFlag)
    {37, 333, 880, 2, Smoke::mf_static, 466, 714},	//1313 QGlobalSpace::operator*(const QQuaternion&, const QQuaternion&)
    {37, 381, 2346, 2, Smoke::mf_static, 177, 715},	//1314 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    {37, 381, 2349, 2, Smoke::mf_static, 121, 716},	//1315 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {37, 333, 2352, 2, Smoke::mf_static, 225, 717},	//1316 QGlobalSpace::operator*(const QPointF&, const QTransform&)
    {37, 352, 2355, 2, Smoke::mf_static, 32, 718},	//1317 QGlobalSpace::operator<<(QDebug, const QColor&)
    {37, 352, 2358, 2, Smoke::mf_static, 32, 719},	//1318 QGlobalSpace::operator<<(QDebug, const QMatrix&)
    {37, 352, 2361, 2, Smoke::mf_static, 28, 720},	//1319 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {37, 381, 2364, 2, Smoke::mf_static, 83, 721},	//1320 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {37, 381, 2367, 2, Smoke::mf_static, 177, 722},	//1321 QGlobalSpace::operator|(Qt::WindowType, int)
    {37, 595, 774, 2, Smoke::mf_static, 519, 723},	//1322 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {37, 381, 2370, 2, Smoke::mf_static, 177, 724},	//1323 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    {37, 551, 1700, 1, Smoke::mf_static, 0, 725},	//1324 QGlobalSpace::qRemovePostRoutine(void(*)())
    {37, 337, 880, 2, Smoke::mf_static, 466, 726},	//1325 QGlobalSpace::operator+(const QQuaternion&, const QQuaternion&)
    {37, 375, 2373, 2, Smoke::mf_static, 28, 727},	//1326 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {37, 381, 2376, 2, Smoke::mf_static, 97, 728},	//1327 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    {37, 381, 2379, 2, Smoke::mf_static, 77, 729},	//1328 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>)
    {37, 375, 2382, 2, Smoke::mf_static, 28, 730},	//1329 QGlobalSpace::operator>>(QDataStream&, QCursor&)
    {37, 381, 2385, 2, Smoke::mf_static, 177, 731},	//1330 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, int)
    {37, 352, 2388, 2, Smoke::mf_static, 28, 732},	//1331 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {37, 381, 2391, 2, Smoke::mf_static, 123, 733},	//1332 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {37, 381, 2394, 2, Smoke::mf_static, 115, 734},	//1333 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {37, 581, 0, 0, Smoke::mf_static, 32, 735},	//1334 QGlobalSpace::qWarning()
    {37, 606, 204, 1, Smoke::mf_static, 528, 736},	//1335 QGlobalSpace::qstrlen(const char*)
    {37, 362, 2313, 2, Smoke::mf_static, 397, 737},	//1336 QGlobalSpace::operator==(QBool, bool)
    {37, 375, 2397, 2, Smoke::mf_static, 28, 738},	//1337 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {37, 375, 2400, 2, Smoke::mf_static, 28, 739},	//1338 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {37, 512, 38, 1, Smoke::mf_static, 528, 740},	//1339 QGlobalSpace::qHash(unsigned long)
    {37, 352, 2403, 2, Smoke::mf_static, 28, 741},	//1340 QGlobalSpace::operator<<(QDataStream&, const QQuaternion&)
    {37, 381, 2406, 2, Smoke::mf_static, 177, 742},	//1341 QGlobalSpace::operator|(QAccessible::StateFlag, int)
    {37, 352, 2409, 2, Smoke::mf_static, 28, 743},	//1342 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {37, 381, 2412, 2, Smoke::mf_static, 67, 744},	//1343 QGlobalSpace::operator|(QGL::FormatOption, QGL::FormatOption)
    {37, 381, 2415, 2, Smoke::mf_static, 177, 745},	//1344 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, int)
    {37, 352, 2418, 2, Smoke::mf_static, 28, 746},	//1345 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {37, 381, 2421, 2, Smoke::mf_static, 84, 747},	//1346 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {37, 381, 2424, 2, Smoke::mf_static, 177, 748},	//1347 QGlobalSpace::operator|(QTextItem::RenderFlag, int)
    {37, 431, 2427, 8, Smoke::mf_static, 0, 749},	//1348 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&, QFlags<QDrawBorderPixmap::DrawingHint>)
    {37, 431, 2436, 6, Smoke::mf_static, 0, 750},	//1349 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&)
    {37, 431, 2443, 7, Smoke::mf_static, 0, 751},	//1350 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&)
    {37, 381, 2451, 2, Smoke::mf_static, 94, 752},	//1351 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {37, 337, 2454, 2, Smoke::mf_static, 480, 753},	//1352 QGlobalSpace::operator+(const QString&, const QString&)
    {37, 326, 1157, 2, Smoke::mf_static, 397, 754},	//1353 QGlobalSpace::operator!=(QBool, QBool)
    {37, 381, 2457, 2, Smoke::mf_static, 48, 755},	//1354 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {37, 627, 2460, 2, Smoke::mf_static, 0, 756},	//1355 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {37, 352, 2463, 2, Smoke::mf_static, 32, 757},	//1356 QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    {37, 333, 2466, 2, Smoke::mf_static, 502, 758},	//1357 QGlobalSpace::operator*(double, const QVector3D&)
    {37, 512, 2469, 1, Smoke::mf_static, 528, 759},	//1358 QGlobalSpace::qHash(const QStringRef&)
    {37, 528, 699, 1, Smoke::mf_static, 397, 760},	//1359 QGlobalSpace::qIsNull(double)
    {37, 381, 2471, 2, Smoke::mf_static, 177, 761},	//1360 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {37, 381, 2474, 2, Smoke::mf_static, 51, 762},	//1361 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    {37, 367, 774, 2, Smoke::mf_static, 397, 763},	//1362 QGlobalSpace::operator>(const QByteArray&, const char*)
    {37, 512, 2477, 1, Smoke::mf_static, 528, 764},	//1363 QGlobalSpace::qHash(unsigned char)
    {37, 375, 2479, 2, Smoke::mf_static, 28, 765},	//1364 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {37, 381, 2482, 2, Smoke::mf_static, 65, 766},	//1365 QGlobalSpace::operator|(QFontComboBox::FontFilter, QFontComboBox::FontFilter)
    {37, 333, 2485, 2, Smoke::mf_static, 227, 767},	//1366 QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    {37, 352, 2488, 2, Smoke::mf_static, 32, 768},	//1367 QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    {37, 352, 2491, 2, Smoke::mf_static, 32, 769},	//1368 QGlobalSpace::operator<<(QDebug, const QObject*)
    {37, 381, 2494, 2, Smoke::mf_static, 177, 770},	//1369 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {37, 326, 1120, 2, Smoke::mf_static, 397, 771},	//1370 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {37, 352, 2497, 2, Smoke::mf_static, 28, 772},	//1371 QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    {37, 375, 2500, 2, Smoke::mf_static, 28, 773},	//1372 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {37, 352, 2503, 2, Smoke::mf_static, 28, 774},	//1373 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {37, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 520, 775},	//1374 QGlobalSpace::KHRONOS_FALSE (enum)
    {37, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 520, 776},	//1375 QGlobalSpace::KHRONOS_TRUE (enum)
    {37, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 520, 777},	//1376 QGlobalSpace::KHRONOS_BOOLEAN_ENUM_FORCE_SIZE (enum)
    {37, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 385, 778},	//1377 QGlobalSpace::LicensedOpenGL (enum)
    {37, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 392, 779},	//1378 QGlobalSpace::LicensedSvg (enum)
    {37, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 386, 780},	//1379 QGlobalSpace::LicensedOpenVG (enum)
    {37, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 389, 781},	//1380 QGlobalSpace::LicensedScript (enum)
    {37, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 387, 782},	//1381 QGlobalSpace::LicensedQt3SupportLight (enum)
    {37, 130, 0, 0, Smoke::mf_static|Smoke::mf_enum, 376, 783},	//1382 QGlobalSpace::QtDebugMsg (enum)
    {37, 133, 0, 0, Smoke::mf_static|Smoke::mf_enum, 376, 784},	//1383 QGlobalSpace::QtWarningMsg (enum)
    {37, 129, 0, 0, Smoke::mf_static|Smoke::mf_enum, 376, 785},	//1384 QGlobalSpace::QtCriticalMsg (enum)
    {37, 131, 0, 0, Smoke::mf_static|Smoke::mf_enum, 376, 786},	//1385 QGlobalSpace::QtFatalMsg (enum)
    {37, 132, 0, 0, Smoke::mf_static|Smoke::mf_enum, 376, 787},	//1386 QGlobalSpace::QtSystemMsg (enum)
    {37, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 381, 788},	//1387 QGlobalSpace::LicensedGui (enum)
    {37, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 395, 789},	//1388 QGlobalSpace::LicensedXmlPatterns (enum)
    {37, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 391, 790},	//1389 QGlobalSpace::LicensedSql (enum)
    {37, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 377, 791},	//1390 QGlobalSpace::LicensedActiveQt (enum)
    {37, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 388, 792},	//1391 QGlobalSpace::LicensedQt3Support (enum)
    {37, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 379, 793},	//1392 QGlobalSpace::LicensedDBus (enum)
    {37, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 378, 794},	//1393 QGlobalSpace::LicensedCore (enum)
    {37, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 384, 795},	//1394 QGlobalSpace::LicensedNetwork (enum)
    {37, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 383, 796},	//1395 QGlobalSpace::LicensedMultimedia (enum)
    {37, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 393, 797},	//1396 QGlobalSpace::LicensedTest (enum)
    {37, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 390, 798},	//1397 QGlobalSpace::LicensedScriptTools (enum)
    {37, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 382, 799},	//1398 QGlobalSpace::LicensedHelp (enum)
    {37, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 394, 800},	//1399 QGlobalSpace::LicensedXml (enum)
    {37, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 380, 801},	//1400 QGlobalSpace::LicensedDeclarative (enum)
    {61, 247, 641, 1, Smoke::mf_virtual, 397, 0},	//1401 QObject::event(QEvent*)
    {61, 249, 2506, 2, Smoke::mf_virtual, 397, 0},	//1402 QObject::eventFilter(QObject*, QEvent*)
    {61, 821, 2509, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1403 QObject::timerEvent(QTimerEvent*)
    {61, 192, 2511, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1404 QObject::childEvent(QChildEvent*)
    {61, 214, 641, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1405 QObject::customEvent(QEvent*)
    {61, 205, 204, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1406 QObject::connectNotify(const char*)
    {61, 229, 204, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1407 QObject::disconnectNotify(const char*)
    {112, 223, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 519, 0},	//1408 QWidget::devType() const
    {112, 798, 84, 1, Smoke::mf_property|Smoke::mf_virtual|Smoke::mf_slot, 0, 0},	//1409 QWidget::setVisible(bool)
    {112, 806, 0, 0, Smoke::mf_const|Smoke::mf_property|Smoke::mf_virtual, 239, 0},	//1410 QWidget::sizeHint() const
    {112, 317, 0, 0, Smoke::mf_const|Smoke::mf_property|Smoke::mf_virtual, 239, 0},	//1411 QWidget::minimumSizeHint() const
    {112, 287, 20, 1, Smoke::mf_const|Smoke::mf_virtual, 519, 0},	//1412 QWidget::heightForWidth(int) const
    {112, 322, 2513, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1413 QWidget::mousePressEvent(QMouseEvent*)
    {112, 323, 2513, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1414 QWidget::mouseReleaseEvent(QMouseEvent*)
    {112, 320, 2513, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1415 QWidget::mouseDoubleClickEvent(QMouseEvent*)
    {112, 321, 2513, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1416 QWidget::mouseMoveEvent(QMouseEvent*)
    {112, 844, 2515, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1417 QWidget::wheelEvent(QWheelEvent*)
    {112, 302, 2517, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1418 QWidget::keyPressEvent(QKeyEvent*)
    {112, 303, 2517, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1419 QWidget::keyReleaseEvent(QKeyEvent*)
    {112, 254, 2519, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1420 QWidget::focusInEvent(QFocusEvent*)
    {112, 256, 2519, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1421 QWidget::focusOutEvent(QFocusEvent*)
    {112, 242, 641, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1422 QWidget::enterEvent(QEvent*)
    {112, 305, 641, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1423 QWidget::leaveEvent(QEvent*)
    {112, 324, 2521, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1424 QWidget::moveEvent(QMoveEvent*)
    {112, 196, 2523, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1425 QWidget::closeEvent(QCloseEvent*)
    {112, 207, 2525, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1426 QWidget::contextMenuEvent(QContextMenuEvent*)
    {112, 815, 2527, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1427 QWidget::tabletEvent(QTabletEvent*)
    {112, 152, 2529, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1428 QWidget::actionEvent(QActionEvent*)
    {112, 232, 2531, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1429 QWidget::dragEnterEvent(QDragEnterEvent*)
    {112, 234, 2533, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1430 QWidget::dragMoveEvent(QDragMoveEvent*)
    {112, 233, 2535, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1431 QWidget::dragLeaveEvent(QDragLeaveEvent*)
    {112, 238, 2537, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1432 QWidget::dropEvent(QDropEvent*)
    {112, 804, 2539, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1433 QWidget::showEvent(QShowEvent*)
    {112, 288, 2541, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1434 QWidget::hideEvent(QHideEvent*)
    {112, 849, 2543, 1, Smoke::mf_protected|Smoke::mf_virtual, 397, 0},	//1435 QWidget::x11Event(_XEvent*)
    {112, 191, 641, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1436 QWidget::changeEvent(QEvent*)
    {112, 315, 153, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 519, 0},	//1437 QWidget::metric(QPaintDevice::PaintDeviceMetric) const
    {112, 292, 2545, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1438 QWidget::inputMethodEvent(QInputMethodEvent*)
    {112, 293, 2547, 1, Smoke::mf_const|Smoke::mf_virtual, 287, 0},	//1439 QWidget::inputMethodQuery(Qt::InputMethodQuery) const
    {112, 255, 84, 1, Smoke::mf_protected|Smoke::mf_virtual, 397, 0},	//1440 QWidget::focusNextPrevChild(bool)
    {112, 812, 2549, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1441 QWidget::styleChange(QStyle&)
    {112, 241, 84, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1442 QWidget::enabledChange(bool)
    {112, 391, 2551, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1443 QWidget::paletteChange(const QPalette&)
    {112, 257, 689, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1444 QWidget::fontChange(const QFont&)
    {112, 845, 84, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1445 QWidget::windowActivationChange(bool)
    {112, 304, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1446 QWidget::languageChange()
    {112, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 298, 40},	//1447 QWidget::DrawWindowBackground (enum)
    {112, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 298, 41},	//1448 QWidget::DrawChildren (enum)
    {112, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 298, 42},	//1449 QWidget::IgnoreMask (enum)
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    573,  // QGLWidget::QGLWidget(QWidget*)
    575,  // QGLWidget::QGLWidget(QGLContext*)
    578,  // QGLWidget::QGLWidget(const QGLFormat&)
    0,
    574,  // QGLWidget::QGLWidget(QWidget*, const QGLWidget*)
    576,  // QGLWidget::QGLWidget(QGLContext*, QWidget*)
    579,  // QGLWidget::QGLWidget(const QGLFormat&, QWidget*)
    0,
    577,  // QGLWidget::QGLWidget(QGLContext*, QWidget*, const QGLWidget*)
    580,  // QGLWidget::QGLWidget(const QGLFormat&, QWidget*, const QGLWidget*)
    0,
    521,  // QGLWidget::QGLWidget(QGLContext*, QWidget*, const QGLWidget*, QFlags<Qt::WindowType>)
    522,  // QGLWidget::QGLWidget(const QGLFormat&, QWidget*, const QGLWidget*, QFlags<Qt::WindowType>)
    0,
    591,  // QGLWidget::bindTexture(const QImage&)
    593,  // QGLWidget::bindTexture(const QPixmap&)
    0,
    592,  // QGLWidget::bindTexture(const QImage&, unsigned int)
    594,  // QGLWidget::bindTexture(const QPixmap&, unsigned int)
    0,
    548,  // QGLWidget::bindTexture(const QImage&, unsigned int, int)
    549,  // QGLWidget::bindTexture(const QPixmap&, unsigned int, int)
    0,
    546,  // QGLWidget::bindTexture(const QImage&, unsigned int, int, QFlags<QGLContext::BindOption>)
    547,  // QGLWidget::bindTexture(const QPixmap&, unsigned int, int, QFlags<QGLContext::BindOption>)
    0,
    595,  // QGLWidget::drawTexture(const QRectF&, unsigned int)
    596,  // QGLWidget::drawTexture(const QPointF&, unsigned int)
    0,
    552,  // QGLWidget::drawTexture(const QRectF&, unsigned int, unsigned int)
    553,  // QGLWidget::drawTexture(const QPointF&, unsigned int, unsigned int)
    0,
    343,  // QGLShaderProgram::QGLShaderProgram(QObject*)
    497,  // QGLShaderProgram::QGLShaderProgram(const QGLContext*)
    0,
    348,  // QGLShaderProgram::addShaderFromSourceCode(QFlags<QGLShader::ShaderTypeBit>, const char*)
    350,  // QGLShaderProgram::addShaderFromSourceCode(QFlags<QGLShader::ShaderTypeBit>, const QString&)
    0,
    369,  // QGLShaderProgram::attributeLocation(const char*) const
    371,  // QGLShaderProgram::attributeLocation(const QString&) const
    0,
    366,  // QGLShaderProgram::bindAttributeLocation(const char*, int)
    368,  // QGLShaderProgram::bindAttributeLocation(const QString&, int)
    0,
    404,  // QGLShaderProgram::disableAttributeArray(int)
    405,  // QGLShaderProgram::disableAttributeArray(const char*)
    0,
    402,  // QGLShaderProgram::enableAttributeArray(int)
    403,  // QGLShaderProgram::enableAttributeArray(const char*)
    0,
    499,  // QGLShaderProgram::setAttributeArray(int, const QVector2D*)
    500,  // QGLShaderProgram::setAttributeArray(int, const QVector3D*)
    501,  // QGLShaderProgram::setAttributeArray(int, const QVector4D*)
    504,  // QGLShaderProgram::setAttributeArray(const char*, const QVector2D*)
    505,  // QGLShaderProgram::setAttributeArray(const char*, const QVector3D*)
    506,  // QGLShaderProgram::setAttributeArray(const char*, const QVector4D*)
    0,
    391,  // QGLShaderProgram::setAttributeArray(int, const QVector2D*, int)
    392,  // QGLShaderProgram::setAttributeArray(int, const QVector3D*, int)
    393,  // QGLShaderProgram::setAttributeArray(int, const QVector4D*, int)
    396,  // QGLShaderProgram::setAttributeArray(const char*, const QVector2D*, int)
    397,  // QGLShaderProgram::setAttributeArray(const char*, const QVector3D*, int)
    398,  // QGLShaderProgram::setAttributeArray(const char*, const QVector4D*, int)
    0,
    498,  // QGLShaderProgram::setAttributeArray(int, const float*, int)
    503,  // QGLShaderProgram::setAttributeArray(const char*, const float*, int)
    0,
    390,  // QGLShaderProgram::setAttributeArray(int, const float*, int, int)
    395,  // QGLShaderProgram::setAttributeArray(const char*, const float*, int, int)
    502,  // QGLShaderProgram::setAttributeArray(int, unsigned int, const void*, int)
    507,  // QGLShaderProgram::setAttributeArray(const char*, unsigned int, const void*, int)
    0,
    394,  // QGLShaderProgram::setAttributeArray(int, unsigned int, const void*, int, int)
    399,  // QGLShaderProgram::setAttributeArray(const char*, unsigned int, const void*, int, int)
    0,
    508,  // QGLShaderProgram::setAttributeBuffer(int, unsigned int, int, int)
    509,  // QGLShaderProgram::setAttributeBuffer(const char*, unsigned int, int, int)
    0,
    400,  // QGLShaderProgram::setAttributeBuffer(int, unsigned int, int, int, int)
    401,  // QGLShaderProgram::setAttributeBuffer(const char*, unsigned int, int, int, int)
    0,
    376,  // QGLShaderProgram::setAttributeValue(int, const QVector2D&)
    377,  // QGLShaderProgram::setAttributeValue(int, const QVector3D&)
    378,  // QGLShaderProgram::setAttributeValue(int, const QVector4D&)
    379,  // QGLShaderProgram::setAttributeValue(int, const QColor&)
    385,  // QGLShaderProgram::setAttributeValue(const char*, const QVector2D&)
    386,  // QGLShaderProgram::setAttributeValue(const char*, const QVector3D&)
    387,  // QGLShaderProgram::setAttributeValue(const char*, const QVector4D&)
    388,  // QGLShaderProgram::setAttributeValue(const char*, const QColor&)
    0,
    372,  // QGLShaderProgram::setAttributeValue(int, float)
    381,  // QGLShaderProgram::setAttributeValue(const char*, float)
    0,
    373,  // QGLShaderProgram::setAttributeValue(int, float, float)
    382,  // QGLShaderProgram::setAttributeValue(const char*, float, float)
    0,
    374,  // QGLShaderProgram::setAttributeValue(int, float, float, float)
    380,  // QGLShaderProgram::setAttributeValue(int, const float*, int, int)
    383,  // QGLShaderProgram::setAttributeValue(const char*, float, float, float)
    389,  // QGLShaderProgram::setAttributeValue(const char*, const float*, int, int)
    0,
    375,  // QGLShaderProgram::setAttributeValue(int, float, float, float, float)
    384,  // QGLShaderProgram::setAttributeValue(const char*, float, float, float, float)
    0,
    415,  // QGLShaderProgram::setUniformValue(int, const QVector2D&)
    416,  // QGLShaderProgram::setUniformValue(int, const QVector3D&)
    417,  // QGLShaderProgram::setUniformValue(int, const QVector4D&)
    418,  // QGLShaderProgram::setUniformValue(int, const QColor&)
    419,  // QGLShaderProgram::setUniformValue(int, const QPoint&)
    420,  // QGLShaderProgram::setUniformValue(int, const QPointF&)
    421,  // QGLShaderProgram::setUniformValue(int, const QSize&)
    422,  // QGLShaderProgram::setUniformValue(int, const QSizeF&)
    431,  // QGLShaderProgram::setUniformValue(int, const QMatrix4x4&)
    435,  // QGLShaderProgram::setUniformValue(int, const QTransform&)
    442,  // QGLShaderProgram::setUniformValue(const char*, const QVector2D&)
    443,  // QGLShaderProgram::setUniformValue(const char*, const QVector3D&)
    444,  // QGLShaderProgram::setUniformValue(const char*, const QVector4D&)
    445,  // QGLShaderProgram::setUniformValue(const char*, const QColor&)
    446,  // QGLShaderProgram::setUniformValue(const char*, const QPoint&)
    447,  // QGLShaderProgram::setUniformValue(const char*, const QPointF&)
    448,  // QGLShaderProgram::setUniformValue(const char*, const QSize&)
    449,  // QGLShaderProgram::setUniformValue(const char*, const QSizeF&)
    458,  // QGLShaderProgram::setUniformValue(const char*, const QMatrix4x4&)
    462,  // QGLShaderProgram::setUniformValue(const char*, const QTransform&)
    0,
    409,  // QGLShaderProgram::setUniformValue(int, float)
    410,  // QGLShaderProgram::setUniformValue(int, int)
    411,  // QGLShaderProgram::setUniformValue(int, unsigned int)
    432,  // QGLShaderProgram::setUniformValue(int, const float[2][2])
    433,  // QGLShaderProgram::setUniformValue(int, const float[3][3])
    434,  // QGLShaderProgram::setUniformValue(int, const float[4][4])
    436,  // QGLShaderProgram::setUniformValue(const char*, float)
    437,  // QGLShaderProgram::setUniformValue(const char*, int)
    438,  // QGLShaderProgram::setUniformValue(const char*, unsigned int)
    459,  // QGLShaderProgram::setUniformValue(const char*, const float[2][2])
    460,  // QGLShaderProgram::setUniformValue(const char*, const float[3][3])
    461,  // QGLShaderProgram::setUniformValue(const char*, const float[4][4])
    0,
    412,  // QGLShaderProgram::setUniformValue(int, float, float)
    439,  // QGLShaderProgram::setUniformValue(const char*, float, float)
    0,
    413,  // QGLShaderProgram::setUniformValue(int, float, float, float)
    440,  // QGLShaderProgram::setUniformValue(const char*, float, float, float)
    0,
    414,  // QGLShaderProgram::setUniformValue(int, float, float, float, float)
    441,  // QGLShaderProgram::setUniformValue(const char*, float, float, float, float)
    0,
    423,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<2,2,double>&)
    424,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<2,3,double>&)
    425,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<2,4,double>&)
    426,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<3,2,double>&)
    427,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<3,3,double>&)
    428,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<3,4,double>&)
    429,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<4,2,double>&)
    430,  // QGLShaderProgram::setUniformValue(int, const QGenericMatrix<4,3,double>&)
    450,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<2,2,double>&)
    451,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<2,3,double>&)
    452,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<2,4,double>&)
    453,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<3,2,double>&)
    454,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<3,3,double>&)
    455,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<3,4,double>&)
    456,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<4,2,double>&)
    457,  // QGLShaderProgram::setUniformValue(const char*, const QGenericMatrix<4,3,double>&)
    0,
    466,  // QGLShaderProgram::setUniformValueArray(int, const QVector2D*, int)
    467,  // QGLShaderProgram::setUniformValueArray(int, const QVector3D*, int)
    468,  // QGLShaderProgram::setUniformValueArray(int, const QVector4D*, int)
    477,  // QGLShaderProgram::setUniformValueArray(int, const QMatrix4x4*, int)
    481,  // QGLShaderProgram::setUniformValueArray(const char*, const QVector2D*, int)
    482,  // QGLShaderProgram::setUniformValueArray(const char*, const QVector3D*, int)
    483,  // QGLShaderProgram::setUniformValueArray(const char*, const QVector4D*, int)
    492,  // QGLShaderProgram::setUniformValueArray(const char*, const QMatrix4x4*, int)
    0,
    464,  // QGLShaderProgram::setUniformValueArray(int, const int*, int)
    465,  // QGLShaderProgram::setUniformValueArray(int, const unsigned int*, int)
    479,  // QGLShaderProgram::setUniformValueArray(const char*, const int*, int)
    480,  // QGLShaderProgram::setUniformValueArray(const char*, const unsigned int*, int)
    0,
    463,  // QGLShaderProgram::setUniformValueArray(int, const float*, int, int)
    478,  // QGLShaderProgram::setUniformValueArray(const char*, const float*, int, int)
    0,
    469,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<2,2,double>*, int)
    470,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<2,3,double>*, int)
    471,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<2,4,double>*, int)
    472,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<3,2,double>*, int)
    473,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<3,3,double>*, int)
    474,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<3,4,double>*, int)
    475,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<4,2,double>*, int)
    476,  // QGLShaderProgram::setUniformValueArray(int, const QGenericMatrix<4,3,double>*, int)
    484,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<2,2,double>*, int)
    485,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<2,3,double>*, int)
    486,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<2,4,double>*, int)
    487,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<3,2,double>*, int)
    488,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<3,3,double>*, int)
    489,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<3,4,double>*, int)
    490,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<4,2,double>*, int)
    491,  // QGLShaderProgram::setUniformValueArray(const char*, const QGenericMatrix<4,3,double>*, int)
    0,
    406,  // QGLShaderProgram::uniformLocation(const char*) const
    408,  // QGLShaderProgram::uniformLocation(const QString&) const
    0,
    314,  // QGLShader::QGLShader(QFlags<QGLShader::ShaderTypeBit>, QObject*)
    329,  // QGLShader::QGLShader(QFlags<QGLShader::ShaderTypeBit>, const QGLContext*)
    0,
    317,  // QGLShader::compileSourceCode(const char*)
    319,  // QGLShader::compileSourceCode(const QString&)
    0,
    119,  // QGLContext::bindTexture(const QImage&)
    121,  // QGLContext::bindTexture(const QPixmap&)
    0,
    120,  // QGLContext::bindTexture(const QImage&, unsigned int)
    122,  // QGLContext::bindTexture(const QPixmap&, unsigned int)
    0,
    94,  // QGLContext::bindTexture(const QImage&, unsigned int, int)
    95,  // QGLContext::bindTexture(const QPixmap&, unsigned int, int)
    0,
    92,  // QGLContext::bindTexture(const QImage&, unsigned int, int, QFlags<QGLContext::BindOption>)
    93,  // QGLContext::bindTexture(const QPixmap&, unsigned int, int, QFlags<QGLContext::BindOption>)
    0,
    123,  // QGLContext::drawTexture(const QRectF&, unsigned int)
    124,  // QGLContext::drawTexture(const QPointF&, unsigned int)
    0,
    98,  // QGLContext::drawTexture(const QRectF&, unsigned int, unsigned int)
    99,  // QGLContext::drawTexture(const QPointF&, unsigned int, unsigned int)
    0,
    220,  // QGLFramebufferObject::QGLFramebufferObject(const QSize&, unsigned int)
    247,  // QGLFramebufferObject::QGLFramebufferObject(const QSize&, QGLFramebufferObject::Attachment)
    0,
    221,  // QGLFramebufferObject::QGLFramebufferObject(int, int, unsigned int)
    249,  // QGLFramebufferObject::QGLFramebufferObject(int, int, QGLFramebufferObject::Attachment)
    0,
    251,  // QGLFramebufferObject::drawTexture(const QRectF&, unsigned int)
    252,  // QGLFramebufferObject::drawTexture(const QPointF&, unsigned int)
    0,
    239,  // QGLFramebufferObject::drawTexture(const QRectF&, unsigned int, unsigned int)
    240,  // QGLFramebufferObject::drawTexture(const QPointF&, unsigned int, unsigned int)
    0,
    609,  // QGlobalSpace::operator!=(const QVector2D&, const QVector2D&)
    686,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    746,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    761,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    841,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    883,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    913,  // QGlobalSpace::operator!=(const QQuaternion&, const QQuaternion&)
    922,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    1004,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    1013,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    1061,  // QGlobalSpace::operator!=(const QGLFormat&, const QGLFormat&)
    1063,  // QGlobalSpace::operator!=(const QVector4D&, const QVector4D&)
    1077,  // QGlobalSpace::operator!=(QChar, QChar)
    1117,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    1208,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    1238,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    1286,  // QGlobalSpace::operator!=(const QVector3D&, const QVector3D&)
    1297,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    1353,  // QGlobalSpace::operator!=(QBool, QBool)
    1370,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    0,
    668,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    698,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    719,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    1098,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    1295,  // QGlobalSpace::operator!=(QBool, bool)
    0,
    833,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    960,  // QGlobalSpace::operator!=(bool, QBool)
    1012,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    1088,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    1308,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    0,
    615,  // QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    645,  // QGlobalSpace::operator*(const QMatrix4x4&, const QPoint&)
    651,  // QGlobalSpace::operator*(const QMatrix4x4&, const QVector4D&)
    652,  // QGlobalSpace::operator*(const QMatrix4x4&, const QMatrix4x4&)
    697,  // QGlobalSpace::operator*(const QVector3D&, const QVector3D&)
    713,  // QGlobalSpace::operator*(const QVector3D&, const QMatrix4x4&)
    762,  // QGlobalSpace::operator*(const QVector4D&, const QVector4D&)
    817,  // QGlobalSpace::operator*(const QLine&, const QTransform&)
    842,  // QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    863,  // QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    881,  // QGlobalSpace::operator*(const QVector4D&, const QMatrix4x4&)
    906,  // QGlobalSpace::operator*(const QVector2D&, const QVector2D&)
    979,  // QGlobalSpace::operator*(const QPointF&, const QMatrix4x4&)
    992,  // QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    1049,  // QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    1097,  // QGlobalSpace::operator*(const QPoint&, const QTransform&)
    1123,  // QGlobalSpace::operator*(const QRegion&, const QTransform&)
    1130,  // QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    1135,  // QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    1199,  // QGlobalSpace::operator*(const QLine&, const QMatrix&)
    1255,  // QGlobalSpace::operator*(const QPoint&, const QMatrix4x4&)
    1257,  // QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    1267,  // QGlobalSpace::operator*(const QMatrix4x4&, const QVector3D&)
    1278,  // QGlobalSpace::operator*(const QMatrix4x4&, const QPointF&)
    1288,  // QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    1302,  // QGlobalSpace::operator*(const QLineF&, const QTransform&)
    1313,  // QGlobalSpace::operator*(const QQuaternion&, const QQuaternion&)
    1316,  // QGlobalSpace::operator*(const QPointF&, const QTransform&)
    1366,  // QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    0,
    660,  // QGlobalSpace::operator*(const QMatrix4x4&, double)
    754,  // QGlobalSpace::operator*(const QTransform&, double)
    857,  // QGlobalSpace::operator*(const QQuaternion&, double)
    1007,  // QGlobalSpace::operator*(const QVector4D&, double)
    1059,  // QGlobalSpace::operator*(const QVector2D&, double)
    1067,  // QGlobalSpace::operator*(const QVector3D&, double)
    1127,  // QGlobalSpace::operator*(const QSize&, double)
    1249,  // QGlobalSpace::operator*(const QPoint&, int)
    1274,  // QGlobalSpace::operator*(const QPoint&, double)
    1283,  // QGlobalSpace::operator*(const QSizeF&, double)
    1291,  // QGlobalSpace::operator*(const QPoint&, float)
    1304,  // QGlobalSpace::operator*(const QPointF&, double)
    0,
    681,  // QGlobalSpace::operator*(double, const QSizeF&)
    917,  // QGlobalSpace::operator*(int, const QPoint&)
    966,  // QGlobalSpace::operator*(double, const QVector2D&)
    995,  // QGlobalSpace::operator*(float, const QPoint&)
    1014,  // QGlobalSpace::operator*(double, const QVector4D&)
    1060,  // QGlobalSpace::operator*(double, const QQuaternion&)
    1121,  // QGlobalSpace::operator*(double, const QPointF&)
    1136,  // QGlobalSpace::operator*(double, const QPoint&)
    1192,  // QGlobalSpace::operator*(double, const QMatrix4x4&)
    1292,  // QGlobalSpace::operator*(double, const QSize&)
    1357,  // QGlobalSpace::operator*(double, const QVector3D&)
    0,
    640,  // QGlobalSpace::operator+(const QMatrix4x4&, const QMatrix4x4&)
    676,  // QGlobalSpace::operator+(const QVector3D&, const QVector3D&)
    709,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    732,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    737,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    789,  // QGlobalSpace::operator+(const QVector4D&, const QVector4D&)
    862,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    874,  // QGlobalSpace::operator+(const QVector2D&, const QVector2D&)
    939,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    1325,  // QGlobalSpace::operator+(const QQuaternion&, const QQuaternion&)
    0,
    766,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    816,  // QGlobalSpace::operator+(const QTransform&, double)
    822,  // QGlobalSpace::operator+(QChar, const QString&)
    1020,  // QGlobalSpace::operator+(const QByteArray&, char)
    0,
    622,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    760,  // QGlobalSpace::operator+(const QString&, QChar)
    1104,  // QGlobalSpace::operator+(char, const QByteArray&)
    0,
    656,  // QGlobalSpace::operator-(const QMatrix4x4&)
    831,  // QGlobalSpace::operator-(const QQuaternion&)
    866,  // QGlobalSpace::operator-(const QPoint&)
    967,  // QGlobalSpace::operator-(const QVector4D&)
    982,  // QGlobalSpace::operator-(const QPointF&)
    1188,  // QGlobalSpace::operator-(const QVector2D&)
    1232,  // QGlobalSpace::operator-(const QVector3D&)
    0,
    606,  // QGlobalSpace::operator-(const QMatrix4x4&, const QMatrix4x4&)
    687,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    712,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    716,  // QGlobalSpace::operator-(const QVector3D&, const QVector3D&)
    742,  // QGlobalSpace::operator-(const QVector4D&, const QVector4D&)
    843,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    927,  // QGlobalSpace::operator-(const QVector2D&, const QVector2D&)
    1109,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    1303,  // QGlobalSpace::operator-(const QQuaternion&, const QQuaternion&)
    0,
    705,  // QGlobalSpace::operator/(const QPoint&, double)
    738,  // QGlobalSpace::operator/(const QMatrix4x4&, double)
    890,  // QGlobalSpace::operator/(const QVector4D&, double)
    957,  // QGlobalSpace::operator/(const QVector2D&, double)
    959,  // QGlobalSpace::operator/(const QPointF&, double)
    963,  // QGlobalSpace::operator/(const QVector3D&, double)
    972,  // QGlobalSpace::operator/(const QTransform&, double)
    1024,  // QGlobalSpace::operator/(const QSizeF&, double)
    1039,  // QGlobalSpace::operator/(const QQuaternion&, double)
    1256,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    664,  // QGlobalSpace::operator<(QChar, QChar)
    850,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    1294,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    0,
    619,  // QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    629,  // QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    643,  // QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    647,  // QGlobalSpace::operator<<(QDataStream&, const QTextLength&)
    648,  // QGlobalSpace::operator<<(QDebug, const QBrush&)
    654,  // QGlobalSpace::operator<<(QDebug, const QQuaternion&)
    661,  // QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    662,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    671,  // QGlobalSpace::operator<<(QDebug, const QGLFormat&)
    689,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    701,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    710,  // QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    715,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    720,  // QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    723,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    725,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    730,  // QGlobalSpace::operator<<(QDataStream&, const QPicture&)
    757,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    773,  // QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    791,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    792,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    793,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    802,  // QGlobalSpace::operator<<(QDebug, const QEvent*)
    818,  // QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    868,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    880,  // QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    884,  // QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    887,  // QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    891,  // QGlobalSpace::operator<<(QTextStream&, const QSplitter&)
    901,  // QGlobalSpace::operator<<(QDataStream&, const QVector3D&)
    907,  // QGlobalSpace::operator<<(QDataStream&, const QVector2D&)
    908,  // QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    916,  // QGlobalSpace::operator<<(QDataStream&, const QTreeWidgetItem&)
    924,  // QGlobalSpace::operator<<(QDataStream&, const QImage&)
    942,  // QGlobalSpace::operator<<(QDataStream&, const QVector4D&)
    943,  // QGlobalSpace::operator<<(QDebug, const QRegion&)
    944,  // QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    947,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    976,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    983,  // QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    990,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    1000,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix4x4&)
    1009,  // QGlobalSpace::operator<<(QDebug, QGraphicsObject*)
    1010,  // QGlobalSpace::operator<<(QDataStream&, const QStandardItem&)
    1019,  // QGlobalSpace::operator<<(QDebug, const QMatrix4x4&)
    1026,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    1036,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    1044,  // QGlobalSpace::operator<<(QDataStream&, const QListWidgetItem&)
    1050,  // QGlobalSpace::operator<<(QDataStream&, const QTextFormat&)
    1055,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    1056,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    1058,  // QGlobalSpace::operator<<(QDebug, const QPen&)
    1062,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    1065,  // QGlobalSpace::operator<<(QDebug, const QVector3D&)
    1070,  // QGlobalSpace::operator<<(QDebug, const QVector2D&)
    1072,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    1073,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    1075,  // QGlobalSpace::operator<<(QDebug, const QVector4D&)
    1090,  // QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    1101,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    1107,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    1110,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    1128,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    1138,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    1161,  // QGlobalSpace::operator<<(QDataStream&, const QPen&)
    1167,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    1176,  // QGlobalSpace::operator<<(QDebug, const QTransform&)
    1181,  // QGlobalSpace::operator<<(QDebug, const QPolygon&)
    1191,  // QGlobalSpace::operator<<(QDataStream&, const QColor&)
    1193,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    1200,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    1201,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    1203,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    1204,  // QGlobalSpace::operator<<(QDebug, const QFont&)
    1215,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    1220,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    1227,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    1233,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    1268,  // QGlobalSpace::operator<<(QDataStream&, const QTableWidgetItem&)
    1269,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem*)
    1282,  // QGlobalSpace::operator<<(QDataStream&, const QFont&)
    1299,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    1317,  // QGlobalSpace::operator<<(QDebug, const QColor&)
    1318,  // QGlobalSpace::operator<<(QDebug, const QMatrix&)
    1319,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    1331,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    1340,  // QGlobalSpace::operator<<(QDataStream&, const QQuaternion&)
    1342,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    1345,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    1356,  // QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    1368,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    1371,  // QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    1373,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    0,
    614,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    669,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemFlag)
    828,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemChange)
    902,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    945,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    1048,  // QGlobalSpace::operator<<(QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>)
    1119,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    1253,  // QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    1311,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    1367,  // QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    0,
    813,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    1035,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    1234,  // QGlobalSpace::operator<=(QChar, QChar)
    0,
    608,  // QGlobalSpace::operator==(const QVector3D&, const QVector3D&)
    618,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    628,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    650,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    653,  // QGlobalSpace::operator==(QChar, QChar)
    683,  // QGlobalSpace::operator==(const QQuaternion&, const QQuaternion&)
    782,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    804,  // QGlobalSpace::operator==(QBool, QBool)
    844,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    865,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    872,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    936,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    1017,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    1025,  // QGlobalSpace::operator==(const QVector4D&, const QVector4D&)
    1028,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    1126,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    1134,  // QGlobalSpace::operator==(const QGLFormat&, const QGLFormat&)
    1152,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    1211,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    1261,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    1287,  // QGlobalSpace::operator==(const QVector2D&, const QVector2D&)
    0,
    617,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    747,  // QGlobalSpace::operator==(QKeyEvent*, QKeySequence::StandardKey)
    934,  // QGlobalSpace::operator==(QString::Null, const QString&)
    1280,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    1285,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    1336,  // QGlobalSpace::operator==(QBool, bool)
    0,
    637,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    806,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    985,  // QGlobalSpace::operator==(bool, QBool)
    1054,  // QGlobalSpace::operator==(const QString&, QString::Null)
    1106,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    1222,  // QGlobalSpace::operator==(QKeySequence::StandardKey, QKeyEvent*)
    0,
    679,  // QGlobalSpace::operator>(QChar, QChar)
    786,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    918,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    0,
    602,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    667,  // QGlobalSpace::operator>=(QChar, QChar)
    1162,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    0,
    613,  // QGlobalSpace::operator>>(QDataStream&, QIcon&)
    621,  // QGlobalSpace::operator>>(QDataStream&, QStandardItem&)
    626,  // QGlobalSpace::operator>>(QDataStream&, QQuaternion&)
    631,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    663,  // QGlobalSpace::operator>>(QDataStream&, QColor&)
    665,  // QGlobalSpace::operator>>(QDataStream&, QTableWidgetItem&)
    750,  // QGlobalSpace::operator>>(QTextStream&, QSplitter&)
    758,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    774,  // QGlobalSpace::operator>>(QDataStream&, QPalette&)
    803,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    814,  // QGlobalSpace::operator>>(QDataStream&, QPen&)
    829,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    837,  // QGlobalSpace::operator>>(QDataStream&, QBrush&)
    849,  // QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    921,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    933,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    935,  // QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    946,  // QGlobalSpace::operator>>(QDataStream&, QVector3D&)
    955,  // QGlobalSpace::operator>>(QDataStream&, QVector2D&)
    969,  // QGlobalSpace::operator>>(QDataStream&, QMatrix4x4&)
    977,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    981,  // QGlobalSpace::operator>>(QDataStream&, QImage&)
    986,  // QGlobalSpace::operator>>(QDataStream&, QPicture&)
    991,  // QGlobalSpace::operator>>(QDataStream&, QVector4D&)
    1008,  // QGlobalSpace::operator>>(QDataStream&, QTransform&)
    1023,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    1037,  // QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    1053,  // QGlobalSpace::operator>>(QDataStream&, QTreeWidgetItem&)
    1076,  // QGlobalSpace::operator>>(QDataStream&, QTextFormat&)
    1085,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    1086,  // QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    1087,  // QGlobalSpace::operator>>(QDataStream&, QRegion&)
    1103,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    1114,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    1115,  // QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    1122,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    1165,  // QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    1175,  // QGlobalSpace::operator>>(QDataStream&, QTextLength&)
    1212,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    1226,  // QGlobalSpace::operator>>(QDataStream&, QListWidgetItem&)
    1240,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    1241,  // QGlobalSpace::operator>>(QDataStream&, QFont&)
    1246,  // QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    1263,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    1298,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    1326,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    1329,  // QGlobalSpace::operator>>(QDataStream&, QCursor&)
    1337,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    1338,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    1364,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    1372,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    0,
    1040,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    1250,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    0,
    600,  // QGlobalSpace::operator|(QDateTimeEdit::Section, int)
    605,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    607,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    616,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>)
    620,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag)
    623,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    624,  // QGlobalSpace::operator|(QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>)
    625,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    636,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, int)
    638,  // QGlobalSpace::operator|(QFileDialog::Option, int)
    644,  // QGlobalSpace::operator|(QMessageBox::StandardButton, QMessageBox::StandardButton)
    646,  // QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    649,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag)
    655,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    659,  // QGlobalSpace::operator|(QWidget::RenderFlag, int)
    666,  // QGlobalSpace::operator|(QMainWindow::DockOption, QFlags<QMainWindow::DockOption>)
    672,  // QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    673,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    675,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, int)
    678,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    680,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    684,  // QGlobalSpace::operator|(QDir::Filter, int)
    685,  // QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    690,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    691,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    692,  // QGlobalSpace::operator|(QMdiArea::AreaOption, int)
    694,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    696,  // QGlobalSpace::operator|(QWizard::WizardOption, QWizard::WizardOption)
    699,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    700,  // QGlobalSpace::operator|(QTextOption::Flag, int)
    702,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    703,  // QGlobalSpace::operator|(QFile::Permission, int)
    704,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>)
    711,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    718,  // QGlobalSpace::operator|(QFileDialog::Option, QFlags<QFileDialog::Option>)
    721,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    722,  // QGlobalSpace::operator|(QWizard::WizardOption, int)
    726,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>)
    728,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag)
    729,  // QGlobalSpace::operator|(QGLContext::BindOption, QFlags<QGLContext::BindOption>)
    731,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    733,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    734,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    739,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, int)
    740,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    741,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    749,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    753,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    755,  // QGlobalSpace::operator|(QPainter::RenderHint, QFlags<QPainter::RenderHint>)
    763,  // QGlobalSpace::operator|(QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>)
    764,  // QGlobalSpace::operator|(QGLShader::ShaderTypeBit, int)
    768,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    769,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    770,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    771,  // QGlobalSpace::operator|(QGLFunctions::OpenGLFeature, QGLFunctions::OpenGLFeature)
    777,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    779,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>)
    783,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    785,  // QGlobalSpace::operator|(QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>)
    790,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>)
    797,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, int)
    799,  // QGlobalSpace::operator|(QDateTimeEdit::Section, QDateTimeEdit::Section)
    800,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    805,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag)
    807,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, int)
    808,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    810,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, int)
    811,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, QImageIOPlugin::Capability)
    812,  // QGlobalSpace::operator|(QGL::FormatOption, QFlags<QGL::FormatOption>)
    819,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    823,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    824,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    825,  // QGlobalSpace::operator|(QGLContext::BindOption, int)
    826,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>)
    827,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    834,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFontDialog::FontDialogOption)
    836,  // QGlobalSpace::operator|(QMainWindow::DockOption, int)
    838,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    840,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    845,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    846,  // QGlobalSpace::operator|(QGLFormat::OpenGLVersionFlag, int)
    847,  // QGlobalSpace::operator|(QMainWindow::DockOption, QMainWindow::DockOption)
    848,  // QGlobalSpace::operator|(QWizard::WizardOption, QFlags<QWizard::WizardOption>)
    852,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    858,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    860,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag)
    864,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    867,  // QGlobalSpace::operator|(Qt::DropAction, int)
    869,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    882,  // QGlobalSpace::operator|(QTextDocument::FindFlag, int)
    886,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature)
    893,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    896,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    899,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    900,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    903,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    905,  // QGlobalSpace::operator|(QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>)
    914,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, int)
    920,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag)
    923,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag)
    925,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    926,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>)
    937,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    938,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, int)
    940,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>)
    948,  // QGlobalSpace::operator|(QGLShader::ShaderTypeBit, QFlags<QGLShader::ShaderTypeBit>)
    954,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    956,  // QGlobalSpace::operator|(QMessageBox::StandardButton, int)
    958,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    961,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag)
    962,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, QInputDialog::InputDialogOption)
    964,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    968,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>)
    971,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    973,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, int)
    975,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    980,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    984,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>)
    987,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, int)
    989,  // QGlobalSpace::operator|(QGL::FormatOption, int)
    993,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption)
    998,  // QGlobalSpace::operator|(QFileDialog::Option, QFileDialog::Option)
    999,  // QGlobalSpace::operator|(QTextOption::Flag, QTextOption::Flag)
    1001,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    1003,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    1011,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    1015,  // QGlobalSpace::operator|(QAccessible::RelationFlag, int)
    1016,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>)
    1021,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    1022,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    1027,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    1030,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    1038,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton)
    1043,  // QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    1045,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    1046,  // QGlobalSpace::operator|(QGLFunctions::OpenGLFeature, QFlags<QGLFunctions::OpenGLFeature>)
    1051,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    1064,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>)
    1066,  // QGlobalSpace::operator|(QTextItem::RenderFlag, QTextItem::RenderFlag)
    1068,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    1071,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>)
    1078,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    1080,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    1082,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    1084,  // QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    1089,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    1091,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    1092,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, int)
    1095,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>)
    1096,  // QGlobalSpace::operator|(QGLContext::BindOption, QGLContext::BindOption)
    1102,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    1105,  // QGlobalSpace::operator|(QStyle::StateFlag, int)
    1108,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    1111,  // QGlobalSpace::operator|(QAccessible::StateFlag, QAccessible::StateFlag)
    1112,  // QGlobalSpace::operator|(QPainter::RenderHint, QPainter::RenderHint)
    1113,  // QGlobalSpace::operator|(Qt::WindowState, int)
    1116,  // QGlobalSpace::operator|(QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>)
    1118,  // QGlobalSpace::operator|(QTextOption::Flag, QFlags<QTextOption::Flag>)
    1120,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    1124,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    1125,  // QGlobalSpace::operator|(QGLFormat::OpenGLVersionFlag, QFlags<QGLFormat::OpenGLVersionFlag>)
    1131,  // QGlobalSpace::operator|(QAccessible::StateFlag, QFlags<QAccessible::StateFlag>)
    1132,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    1144,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption)
    1145,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    1147,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    1148,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    1151,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, int)
    1153,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    1154,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag)
    1155,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    1156,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>)
    1158,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    1159,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    1160,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, int)
    1163,  // QGlobalSpace::operator|(QGLFunctions::OpenGLFeature, int)
    1164,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature)
    1168,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    1174,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    1177,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, int)
    1182,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    1183,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    1184,  // QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    1185,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer)
    1186,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    1187,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    1189,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, int)
    1190,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    1198,  // QGlobalSpace::operator|(QAccessible::RelationFlag, QAccessible::RelationFlag)
    1205,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    1206,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>)
    1207,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, int)
    1210,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    1213,  // QGlobalSpace::operator|(QMdiArea::AreaOption, QMdiArea::AreaOption)
    1221,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>)
    1223,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>)
    1224,  // QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    1225,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    1230,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, int)
    1231,  // QGlobalSpace::operator|(QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>)
    1235,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    1237,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>)
    1239,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    1245,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag)
    1247,  // QGlobalSpace::operator|(QGLShader::ShaderTypeBit, QGLShader::ShaderTypeBit)
    1248,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    1251,  // QGlobalSpace::operator|(QPainter::RenderHint, int)
    1254,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    1259,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption)
    1264,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    1265,  // QGlobalSpace::operator|(Qt::Orientation, int)
    1275,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    1276,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    1279,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, int)
    1281,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>)
    1284,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint)
    1289,  // QGlobalSpace::operator|(QGLFormat::OpenGLVersionFlag, QGLFormat::OpenGLVersionFlag)
    1290,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, int)
    1293,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    1296,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>)
    1300,  // QGlobalSpace::operator|(QStyle::SubControl, int)
    1301,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    1305,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, int)
    1307,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    1312,  // QGlobalSpace::operator|(QTextDocument::FindFlag, QTextDocument::FindFlag)
    1314,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    1315,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    1320,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    1321,  // QGlobalSpace::operator|(Qt::WindowType, int)
    1323,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    1327,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    1328,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>)
    1330,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, int)
    1332,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    1333,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    1341,  // QGlobalSpace::operator|(QAccessible::StateFlag, int)
    1343,  // QGlobalSpace::operator|(QGL::FormatOption, QGL::FormatOption)
    1344,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, int)
    1346,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    1347,  // QGlobalSpace::operator|(QTextItem::RenderFlag, int)
    1351,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    1354,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    1360,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    1361,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    1365,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, QFontComboBox::FontFilter)
    1369,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    0,
    714,  // QGlobalSpace::qFuzzyCompare(const QVector4D&, const QVector4D&)
    776,  // QGlobalSpace::qFuzzyCompare(const QQuaternion&, const QQuaternion&)
    835,  // QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    974,  // QGlobalSpace::qFuzzyCompare(const QMatrix4x4&, const QMatrix4x4&)
    1002,  // QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    1129,  // QGlobalSpace::qFuzzyCompare(const QVector2D&, const QVector2D&)
    1219,  // QGlobalSpace::qFuzzyCompare(const QVector3D&, const QVector3D&)
    0,
    1150,  // QGlobalSpace::qFuzzyCompare(float, float)
    1266,  // QGlobalSpace::qFuzzyCompare(double, double)
    0,
    856,  // QGlobalSpace::qFuzzyIsNull(float)
    1178,  // QGlobalSpace::qFuzzyIsNull(double)
    0,
    657,  // QGlobalSpace::qHash(const QUrl&)
    658,  // QGlobalSpace::qHash(const QByteArray&)
    751,  // QGlobalSpace::qHash(const QItemSelectionRange&)
    778,  // QGlobalSpace::qHash(QChar)
    798,  // QGlobalSpace::qHash(const QModelIndex&)
    941,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    1069,  // QGlobalSpace::qHash(const QBitArray&)
    1358,  // QGlobalSpace::qHash(const QStringRef&)
    0,
    603,  // QGlobalSpace::qHash(unsigned long long)
    635,  // QGlobalSpace::qHash(signed char)
    695,  // QGlobalSpace::qHash(char)
    775,  // QGlobalSpace::qHash(unsigned int)
    788,  // QGlobalSpace::qHash(const QString&)
    832,  // QGlobalSpace::qHash(long long)
    861,  // QGlobalSpace::qHash(int)
    915,  // QGlobalSpace::qHash(long)
    919,  // QGlobalSpace::qHash(unsigned short)
    1143,  // QGlobalSpace::qHash(short)
    1339,  // QGlobalSpace::qHash(unsigned long)
    1363,  // QGlobalSpace::qHash(unsigned char)
    0,
    641,  // QGlobalSpace::qIntCast(double)
    781,  // QGlobalSpace::qIntCast(float)
    0,
    717,  // QGlobalSpace::qIsFinite(double)
    759,  // QGlobalSpace::qIsFinite(float)
    0,
    604,  // QGlobalSpace::qIsInf(double)
    633,  // QGlobalSpace::qIsInf(float)
    0,
    809,  // QGlobalSpace::qIsNaN(float)
    820,  // QGlobalSpace::qIsNaN(double)
    0,
    1258,  // QGlobalSpace::qIsNull(float)
    1359,  // QGlobalSpace::qIsNull(double)
    0,
    302,  // QGLPixelBuffer::bindTexture(const QImage&)
    303,  // QGLPixelBuffer::bindTexture(const QPixmap&)
    0,
    284,  // QGLPixelBuffer::bindTexture(const QImage&, unsigned int)
    285,  // QGLPixelBuffer::bindTexture(const QPixmap&, unsigned int)
    0,
    304,  // QGLPixelBuffer::drawTexture(const QRectF&, unsigned int)
    305,  // QGLPixelBuffer::drawTexture(const QPointF&, unsigned int)
    0,
    288,  // QGLPixelBuffer::drawTexture(const QRectF&, unsigned int, unsigned int)
    289,  // QGLPixelBuffer::drawTexture(const QPointF&, unsigned int, unsigned int)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {26, 1, 6},	// QGL::AccumBuffer
    {26, 2, 5},	// QGL::AlphaChannel
    {26, 4, 15},	// QGL::ColorIndex
    {26, 9, 12},	// QGL::DeprecatedFunctions
    {26, 11, 3},	// QGL::DepthBuffer
    {26, 12, 9},	// QGL::DirectRendering
    {26, 13, 2},	// QGL::DoubleBuffer
    {26, 21, 10},	// QGL::HasOverlay
    {26, 24, 20},	// QGL::IndirectRendering
    {26, 52, 17},	// QGL::NoAccumBuffer
    {26, 53, 16},	// QGL::NoAlphaChannel
    {26, 56, 23},	// QGL::NoDeprecatedFunctions
    {26, 57, 14},	// QGL::NoDepthBuffer
    {26, 58, 21},	// QGL::NoOverlay
    {26, 60, 22},	// QGL::NoSampleBuffers
    {26, 61, 18},	// QGL::NoStencilBuffer
    {26, 62, 19},	// QGL::NoStereoBuffers
    {26, 136, 4},	// QGL::Rgba
    {26, 137, 11},	// QGL::SampleBuffers
    {26, 138, 13},	// QGL::SingleBuffer
    {26, 142, 7},	// QGL::StencilBuffer
    {26, 143, 8},	// QGL::StereoBuffers
    {26, 757, 1},	// QGL::setPreferredPaintEngine$
    {27, 16, 57},	// QGLBuffer::DynamicCopy
    {27, 17, 55},	// QGLBuffer::DynamicDraw
    {27, 18, 56},	// QGLBuffer::DynamicRead
    {27, 23, 46},	// QGLBuffer::IndexBuffer
    {27, 81, 47},	// QGLBuffer::PixelPackBuffer
    {27, 82, 48},	// QGLBuffer::PixelUnpackBuffer
    {27, 84, 24},	// QGLBuffer::QGLBuffer
    {27, 85, 26},	// QGLBuffer::QGLBuffer#
    {27, 86, 25},	// QGLBuffer::QGLBuffer$
    {27, 134, 58},	// QGLBuffer::ReadOnly
    {27, 135, 60},	// QGLBuffer::ReadWrite
    {27, 139, 54},	// QGLBuffer::StaticCopy
    {27, 140, 52},	// QGLBuffer::StaticDraw
    {27, 141, 53},	// QGLBuffer::StaticRead
    {27, 144, 51},	// QGLBuffer::StreamCopy
    {27, 145, 49},	// QGLBuffer::StreamDraw
    {27, 146, 50},	// QGLBuffer::StreamRead
    {27, 148, 45},	// QGLBuffer::VertexBuffer
    {27, 149, 59},	// QGLBuffer::WriteOnly
    {27, 161, 42},	// QGLBuffer::allocate$
    {27, 162, 41},	// QGLBuffer::allocate$$
    {27, 172, 34},	// QGLBuffer::bind
    {27, 190, 37},	// QGLBuffer::bufferId
    {27, 210, 31},	// QGLBuffer::create
    {27, 221, 33},	// QGLBuffer::destroy
    {27, 297, 32},	// QGLBuffer::isCreated
    {27, 312, 43},	// QGLBuffer::map$
    {27, 361, 27},	// QGLBuffer::operator=#
    {27, 643, 39},	// QGLBuffer::read$$$
    {27, 645, 35},	// QGLBuffer::release
    {27, 646, 36},	// QGLBuffer::release$
    {27, 793, 30},	// QGLBuffer::setUsagePattern$
    {27, 805, 38},	// QGLBuffer::size
    {27, 834, 28},	// QGLBuffer::type
    {27, 838, 44},	// QGLBuffer::unmap
    {27, 843, 29},	// QGLBuffer::usagePattern
    {27, 848, 40},	// QGLBuffer::write$$$
    {27, 850, 61},	// QGLBuffer::~QGLBuffer
    {28, 87, 62},	// QGLColormap::QGLColormap
    {28, 88, 63},	// QGLColormap::QGLColormap#
    {28, 222, 67},	// QGLColormap::detach
    {28, 244, 72},	// QGLColormap::entryColor$
    {28, 246, 71},	// QGLColormap::entryRgb$
    {28, 251, 73},	// QGLColormap::find$
    {28, 253, 74},	// QGLColormap::findNearest$
    {28, 275, 75},	// QGLColormap::handle
    {28, 298, 65},	// QGLColormap::isEmpty
    {28, 361, 64},	// QGLColormap::operator=#
    {28, 725, 77},	// QGLColormap::setEntries$$
    {28, 726, 68},	// QGLColormap::setEntries$$$
    {28, 728, 70},	// QGLColormap::setEntry$#
    {28, 729, 69},	// QGLColormap::setEntry$$
    {28, 741, 76},	// QGLColormap::setHandle$
    {28, 805, 66},	// QGLColormap::size
    {28, 851, 78},	// QGLColormap::~QGLColormap
    {29, 3, 135},	// QGLContext::CanFlipNativePixmapBindOption
    {29, 8, 136},	// QGLContext::DefaultBindOption
    {29, 25, 137},	// QGLContext::InternalBindOption
    {29, 26, 130},	// QGLContext::InvertedYBindOption
    {29, 49, 133},	// QGLContext::LinearFilteringBindOption
    {29, 50, 134},	// QGLContext::MemoryManagedBindOption
    {29, 51, 131},	// QGLContext::MipmapBindOption
    {29, 55, 129},	// QGLContext::NoBindOption
    {29, 83, 132},	// QGLContext::PremultipliedAlphaBindOption
    {29, 90, 80},	// QGLContext::QGLContext#
    {29, 91, 79},	// QGLContext::QGLContext##
    {29, 166, 85},	// QGLContext::areSharing##
    {29, 178, -208},	// QGLContext::bindTexture#
    {29, 179, -211},	// QGLContext::bindTexture#$
    {29, 180, -214},	// QGLContext::bindTexture#$$
    {29, 181, -217},	// QGLContext::bindTexture#$$$
    {29, 182, 96},	// QGLContext::bindTexture$
    {29, 193, 125},	// QGLContext::chooseContext
    {29, 194, 106},	// QGLContext::chooseContext#
    {29, 195, 108},	// QGLContext::chooseVisual
    {29, 198, 115},	// QGLContext::colorIndex#
    {29, 210, 118},	// QGLContext::create
    {29, 211, 81},	// QGLContext::create#
    {29, 212, 105},	// QGLContext::currentContext
    {29, 213, 127},	// QGLContext::currentCtx
    {29, 218, 97},	// QGLContext::deleteTexture$
    {29, 224, 103},	// QGLContext::device
    {29, 225, 109},	// QGLContext::deviceIsPixmap
    {29, 230, 90},	// QGLContext::doneCurrent
    {29, 236, -220},	// QGLContext::drawTexture#$
    {29, 237, -223},	// QGLContext::drawTexture#$$
    {29, 261, 86},	// QGLContext::format
    {29, 264, 114},	// QGLContext::generateFontDisplayLists#$
    {29, 269, 102},	// QGLContext::getProcAddress$
    {29, 291, 112},	// QGLContext::initialized
    {29, 300, 83},	// QGLContext::isSharing
    {29, 301, 82},	// QGLContext::isValid
    {29, 309, 89},	// QGLContext::makeCurrent
    {29, 385, 104},	// QGLContext::overlayTransparentColor
    {29, 662, 87},	// QGLContext::requestedFormat
    {29, 663, 84},	// QGLContext::reset
    {29, 709, 128},	// QGLContext::setCurrentCtx#
    {29, 719, 117},	// QGLContext::setDevice#
    {29, 731, 88},	// QGLContext::setFormat#
    {29, 743, 113},	// QGLContext::setInitialized$
    {29, 777, 100},	// QGLContext::setTextureCacheLimit$
    {29, 795, 116},	// QGLContext::setValid$
    {29, 800, 111},	// QGLContext::setWindowCreated$
    {29, 813, 91},	// QGLContext::swapBuffers
    {29, 819, 101},	// QGLContext::textureCacheLimit
    {29, 832, 126},	// QGLContext::tryVisual#
    {29, 833, 107},	// QGLContext::tryVisual#$
    {29, 846, 110},	// QGLContext::windowCreated
    {29, 852, 138},	// QGLContext::~QGLContext
    {30, 6, 200},	// QGLFormat::CompatibilityProfile
    {30, 7, 199},	// QGLFormat::CoreProfile
    {30, 59, 198},	// QGLFormat::NoProfile
    {30, 63, 210},	// QGLFormat::OpenGL_ES_CommonLite_Version_1_0
    {30, 64, 212},	// QGLFormat::OpenGL_ES_CommonLite_Version_1_1
    {30, 65, 209},	// QGLFormat::OpenGL_ES_Common_Version_1_0
    {30, 66, 211},	// QGLFormat::OpenGL_ES_Common_Version_1_1
    {30, 67, 213},	// QGLFormat::OpenGL_ES_Version_2_0
    {30, 68, 202},	// QGLFormat::OpenGL_Version_1_1
    {30, 69, 203},	// QGLFormat::OpenGL_Version_1_2
    {30, 70, 204},	// QGLFormat::OpenGL_Version_1_3
    {30, 71, 205},	// QGLFormat::OpenGL_Version_1_4
    {30, 72, 206},	// QGLFormat::OpenGL_Version_1_5
    {30, 73, 207},	// QGLFormat::OpenGL_Version_2_0
    {30, 74, 208},	// QGLFormat::OpenGL_Version_2_1
    {30, 75, 214},	// QGLFormat::OpenGL_Version_3_0
    {30, 76, 215},	// QGLFormat::OpenGL_Version_3_1
    {30, 77, 216},	// QGLFormat::OpenGL_Version_3_2
    {30, 78, 217},	// QGLFormat::OpenGL_Version_3_3
    {30, 79, 218},	// QGLFormat::OpenGL_Version_4_0
    {30, 80, 201},	// QGLFormat::OpenGL_Version_None
    {30, 92, 139},	// QGLFormat::QGLFormat
    {30, 93, 141},	// QGLFormat::QGLFormat#
    {30, 94, 197},	// QGLFormat::QGLFormat$
    {30, 95, 140},	// QGLFormat::QGLFormat$$
    {30, 150, 171},	// QGLFormat::accum
    {30, 151, 146},	// QGLFormat::accumBufferSize
    {30, 163, 169},	// QGLFormat::alpha
    {30, 164, 154},	// QGLFormat::alphaBufferSize
    {30, 189, 152},	// QGLFormat::blueBufferSize
    {30, 215, 185},	// QGLFormat::defaultFormat
    {30, 216, 187},	// QGLFormat::defaultOverlayFormat
    {30, 219, 165},	// QGLFormat::depth
    {30, 220, 144},	// QGLFormat::depthBufferSize
    {30, 226, 177},	// QGLFormat::directRendering
    {30, 231, 163},	// QGLFormat::doubleBuffer
    {30, 274, 150},	// QGLFormat::greenBufferSize
    {30, 276, 189},	// QGLFormat::hasOpenGL
    {30, 279, 190},	// QGLFormat::hasOpenGLOverlays
    {30, 286, 179},	// QGLFormat::hasOverlay
    {30, 308, 192},	// QGLFormat::majorVersion
    {30, 318, 193},	// QGLFormat::minorVersion
    {30, 325, 196},	// QGLFormat::openGLVersionFlags
    {30, 361, 142},	// QGLFormat::operator=#
    {30, 392, 181},	// QGLFormat::plane
    {30, 393, 195},	// QGLFormat::profile
    {30, 644, 148},	// QGLFormat::redBufferSize
    {30, 670, 167},	// QGLFormat::rgba
    {30, 671, 158},	// QGLFormat::sampleBuffers
    {30, 672, 160},	// QGLFormat::samples
    {30, 674, 172},	// QGLFormat::setAccum$
    {30, 676, 145},	// QGLFormat::setAccumBufferSize$
    {30, 678, 170},	// QGLFormat::setAlpha$
    {30, 680, 153},	// QGLFormat::setAlphaBufferSize$
    {30, 701, 151},	// QGLFormat::setBlueBufferSize$
    {30, 711, 186},	// QGLFormat::setDefaultFormat#
    {30, 713, 188},	// QGLFormat::setDefaultOverlayFormat#
    {30, 715, 166},	// QGLFormat::setDepth$
    {30, 717, 143},	// QGLFormat::setDepthBufferSize$
    {30, 721, 178},	// QGLFormat::setDirectRendering$
    {30, 723, 164},	// QGLFormat::setDoubleBuffer$
    {30, 739, 149},	// QGLFormat::setGreenBufferSize$
    {30, 751, 183},	// QGLFormat::setOption$
    {30, 753, 180},	// QGLFormat::setOverlay$
    {30, 755, 182},	// QGLFormat::setPlane$
    {30, 759, 194},	// QGLFormat::setProfile$
    {30, 761, 147},	// QGLFormat::setRedBufferSize$
    {30, 763, 168},	// QGLFormat::setRgba$
    {30, 765, 157},	// QGLFormat::setSampleBuffers$
    {30, 767, 159},	// QGLFormat::setSamples$
    {30, 769, 174},	// QGLFormat::setStencil$
    {30, 771, 155},	// QGLFormat::setStencilBufferSize$
    {30, 773, 176},	// QGLFormat::setStereo$
    {30, 775, 161},	// QGLFormat::setSwapInterval$
    {30, 797, 191},	// QGLFormat::setVersion$$
    {30, 809, 173},	// QGLFormat::stencil
    {30, 810, 156},	// QGLFormat::stencilBufferSize
    {30, 811, 175},	// QGLFormat::stereo
    {30, 814, 162},	// QGLFormat::swapInterval
    {30, 817, 184},	// QGLFormat::testOption$
    {30, 853, 219},	// QGLFormat::~QGLFormat
    {31, 5, 256},	// QGLFramebufferObject::CombinedDepthStencil
    {31, 10, 257},	// QGLFramebufferObject::Depth
    {31, 54, 255},	// QGLFramebufferObject::NoAttachment
    {31, 97, 245},	// QGLFramebufferObject::QGLFramebufferObject#
    {31, 98, 224},	// QGLFramebufferObject::QGLFramebufferObject##
    {31, 99, -226},	// QGLFramebufferObject::QGLFramebufferObject#$
    {31, 100, 248},	// QGLFramebufferObject::QGLFramebufferObject#$$
    {31, 101, 222},	// QGLFramebufferObject::QGLFramebufferObject#$$$
    {31, 102, 246},	// QGLFramebufferObject::QGLFramebufferObject$$
    {31, 103, 225},	// QGLFramebufferObject::QGLFramebufferObject$$#
    {31, 104, -229},	// QGLFramebufferObject::QGLFramebufferObject$$$
    {31, 105, 250},	// QGLFramebufferObject::QGLFramebufferObject$$$$
    {31, 106, 223},	// QGLFramebufferObject::QGLFramebufferObject$$$$$
    {31, 167, 234},	// QGLFramebufferObject::attachment
    {31, 172, 229},	// QGLFramebufferObject::bind
    {31, 176, 237},	// QGLFramebufferObject::bindDefault
    {31, 186, 253},	// QGLFramebufferObject::blitFramebuffer####
    {31, 187, 254},	// QGLFramebufferObject::blitFramebuffer####$
    {31, 188, 242},	// QGLFramebufferObject::blitFramebuffer####$$
    {31, 223, 244},	// QGLFramebufferObject::devType
    {31, 236, -232},	// QGLFramebufferObject::drawTexture#$
    {31, 237, -235},	// QGLFramebufferObject::drawTexture#$$
    {31, 261, 226},	// QGLFramebufferObject::format
    {31, 275, 236},	// QGLFramebufferObject::handle
    {31, 277, 241},	// QGLFramebufferObject::hasOpenGLFramebufferBlit
    {31, 278, 238},	// QGLFramebufferObject::hasOpenGLFramebufferObjects
    {31, 295, 228},	// QGLFramebufferObject::isBound
    {31, 301, 227},	// QGLFramebufferObject::isValid
    {31, 316, 243},	// QGLFramebufferObject::metric$
    {31, 386, 235},	// QGLFramebufferObject::paintEngine
    {31, 645, 230},	// QGLFramebufferObject::release
    {31, 805, 232},	// QGLFramebufferObject::size
    {31, 818, 231},	// QGLFramebufferObject::texture
    {31, 822, 233},	// QGLFramebufferObject::toImage
    {31, 854, 258},	// QGLFramebufferObject::~QGLFramebufferObject
    {32, 107, 259},	// QGLFramebufferObjectFormat::QGLFramebufferObjectFormat
    {32, 108, 260},	// QGLFramebufferObjectFormat::QGLFramebufferObjectFormat#
    {32, 167, 267},	// QGLFramebufferObjectFormat::attachment
    {32, 294, 271},	// QGLFramebufferObjectFormat::internalTextureFormat
    {32, 319, 265},	// QGLFramebufferObjectFormat::mipmap
    {32, 327, 273},	// QGLFramebufferObjectFormat::operator!=#
    {32, 361, 261},	// QGLFramebufferObjectFormat::operator=#
    {32, 363, 272},	// QGLFramebufferObjectFormat::operator==#
    {32, 672, 263},	// QGLFramebufferObjectFormat::samples
    {32, 682, 266},	// QGLFramebufferObjectFormat::setAttachment$
    {32, 745, 270},	// QGLFramebufferObjectFormat::setInternalTextureFormat$
    {32, 747, 264},	// QGLFramebufferObjectFormat::setMipmap$
    {32, 767, 262},	// QGLFramebufferObjectFormat::setSamples$
    {32, 779, 268},	// QGLFramebufferObjectFormat::setTextureTarget$
    {32, 820, 269},	// QGLFramebufferObjectFormat::textureTarget
    {32, 855, 274},	// QGLFramebufferObjectFormat::~QGLFramebufferObjectFormat
    {33, 110, 298},	// QGLPixelBuffer::QGLPixelBuffer#
    {33, 111, 299},	// QGLPixelBuffer::QGLPixelBuffer##
    {33, 112, 275},	// QGLPixelBuffer::QGLPixelBuffer###
    {33, 113, 300},	// QGLPixelBuffer::QGLPixelBuffer$$
    {33, 114, 301},	// QGLPixelBuffer::QGLPixelBuffer$$#
    {33, 115, 276},	// QGLPixelBuffer::QGLPixelBuffer$$##
    {33, 178, -885},	// QGLPixelBuffer::bindTexture#
    {33, 179, -888},	// QGLPixelBuffer::bindTexture#$
    {33, 182, 286},	// QGLPixelBuffer::bindTexture$
    {33, 184, 281},	// QGLPixelBuffer::bindToDynamicTexture$
    {33, 218, 287},	// QGLPixelBuffer::deleteTexture$
    {33, 223, 297},	// QGLPixelBuffer::devType
    {33, 230, 279},	// QGLPixelBuffer::doneCurrent
    {33, 236, -891},	// QGLPixelBuffer::drawTexture#$
    {33, 237, -894},	// QGLPixelBuffer::drawTexture#$$
    {33, 261, 294},	// QGLPixelBuffer::format
    {33, 262, 280},	// QGLPixelBuffer::generateDynamicTexture
    {33, 275, 291},	// QGLPixelBuffer::handle
    {33, 280, 295},	// QGLPixelBuffer::hasOpenGLPbuffers
    {33, 301, 277},	// QGLPixelBuffer::isValid
    {33, 309, 278},	// QGLPixelBuffer::makeCurrent
    {33, 316, 296},	// QGLPixelBuffer::metric$
    {33, 386, 293},	// QGLPixelBuffer::paintEngine
    {33, 647, 282},	// QGLPixelBuffer::releaseFromDynamicTexture
    {33, 805, 290},	// QGLPixelBuffer::size
    {33, 822, 292},	// QGLPixelBuffer::toImage
    {33, 840, 283},	// QGLPixelBuffer::updateDynamicTexture$
    {33, 856, 306},	// QGLPixelBuffer::~QGLPixelBuffer
    {34, 19, 333},	// QGLShader::Fragment
    {34, 20, 334},	// QGLShader::Geometry
    {34, 117, 328},	// QGLShader::QGLShader$
    {34, 118, -202},	// QGLShader::QGLShader$#
    {34, 119, 315},	// QGLShader::QGLShader$##
    {34, 147, 332},	// QGLShader::Vertex
    {34, 201, 318},	// QGLShader::compileSourceCode#
    {34, 202, -205},	// QGLShader::compileSourceCode$
    {34, 204, 320},	// QGLShader::compileSourceFile$
    {34, 284, 330},	// QGLShader::hasOpenGLShaders$
    {34, 285, 325},	// QGLShader::hasOpenGLShaders$#
    {34, 296, 322},	// QGLShader::isCompiled
    {34, 307, 323},	// QGLShader::log
    {34, 314, 307},	// QGLShader::metaObject
    {34, 630, 313},	// QGLShader::qt_metacall$$?
    {34, 632, 308},	// QGLShader::qt_metacast$
    {34, 801, 324},	// QGLShader::shaderId
    {34, 802, 316},	// QGLShader::shaderType
    {34, 807, 321},	// QGLShader::sourceCode
    {34, 808, 331},	// QGLShader::staticMetaObject
    {34, 824, 326},	// QGLShader::tr$
    {34, 825, 309},	// QGLShader::tr$$
    {34, 826, 311},	// QGLShader::tr$$$
    {34, 828, 327},	// QGLShader::trUtf8$
    {34, 829, 310},	// QGLShader::trUtf8$$
    {34, 830, 312},	// QGLShader::trUtf8$$$
    {34, 857, 335},	// QGLShader::~QGLShader
    {35, 120, 496},	// QGLShaderProgram::QGLShaderProgram
    {35, 121, -33},	// QGLShaderProgram::QGLShaderProgram#
    {35, 122, 344},	// QGLShaderProgram::QGLShaderProgram##
    {35, 154, 345},	// QGLShaderProgram::addShader#
    {35, 156, 349},	// QGLShaderProgram::addShaderFromSourceCode$#
    {35, 157, -36},	// QGLShaderProgram::addShaderFromSourceCode$$
    {35, 159, 351},	// QGLShaderProgram::addShaderFromSourceFile$$
    {35, 169, 370},	// QGLShaderProgram::attributeLocation#
    {35, 170, -39},	// QGLShaderProgram::attributeLocation$
    {35, 172, 356},	// QGLShaderProgram::bind
    {35, 174, 367},	// QGLShaderProgram::bindAttributeLocation#$
    {35, 175, -42},	// QGLShaderProgram::bindAttributeLocation$$
    {35, 228, -45},	// QGLShaderProgram::disableAttributeArray$
    {35, 240, -48},	// QGLShaderProgram::enableAttributeArray$
    {35, 265, 363},	// QGLShaderProgram::geometryInputType
    {35, 266, 365},	// QGLShaderProgram::geometryOutputType
    {35, 267, 361},	// QGLShaderProgram::geometryOutputVertexCount
    {35, 281, 510},	// QGLShaderProgram::hasOpenGLShaderPrograms
    {35, 282, 493},	// QGLShaderProgram::hasOpenGLShaderPrograms#
    {35, 299, 354},	// QGLShaderProgram::isLinked
    {35, 306, 353},	// QGLShaderProgram::link
    {35, 307, 355},	// QGLShaderProgram::log
    {35, 313, 359},	// QGLShaderProgram::maxGeometryOutputVertices
    {35, 314, 336},	// QGLShaderProgram::metaObject
    {35, 394, 358},	// QGLShaderProgram::programId
    {35, 630, 342},	// QGLShaderProgram::qt_metacall$$?
    {35, 632, 337},	// QGLShaderProgram::qt_metacast$
    {35, 645, 357},	// QGLShaderProgram::release
    {35, 648, 352},	// QGLShaderProgram::removeAllShaders
    {35, 650, 346},	// QGLShaderProgram::removeShader#
    {35, 684, -51},	// QGLShaderProgram::setAttributeArray$#
    {35, 685, -58},	// QGLShaderProgram::setAttributeArray$#$
    {35, 686, -65},	// QGLShaderProgram::setAttributeArray$$$
    {35, 687, -68},	// QGLShaderProgram::setAttributeArray$$$$
    {35, 688, -73},	// QGLShaderProgram::setAttributeArray$$$$$
    {35, 690, -76},	// QGLShaderProgram::setAttributeBuffer$$$$
    {35, 691, -79},	// QGLShaderProgram::setAttributeBuffer$$$$$
    {35, 693, -82},	// QGLShaderProgram::setAttributeValue$#
    {35, 694, -91},	// QGLShaderProgram::setAttributeValue$$
    {35, 695, -94},	// QGLShaderProgram::setAttributeValue$$$
    {35, 696, -97},	// QGLShaderProgram::setAttributeValue$$$$
    {35, 697, -102},	// QGLShaderProgram::setAttributeValue$$$$$
    {35, 733, 362},	// QGLShaderProgram::setGeometryInputType$
    {35, 735, 364},	// QGLShaderProgram::setGeometryOutputType$
    {35, 737, 360},	// QGLShaderProgram::setGeometryOutputVertexCount$
    {35, 781, -105},	// QGLShaderProgram::setUniformValue$#
    {35, 782, -126},	// QGLShaderProgram::setUniformValue$$
    {35, 783, -139},	// QGLShaderProgram::setUniformValue$$$
    {35, 784, -142},	// QGLShaderProgram::setUniformValue$$$$
    {35, 785, -145},	// QGLShaderProgram::setUniformValue$$$$$
    {35, 786, -148},	// QGLShaderProgram::setUniformValue$?
    {35, 788, -165},	// QGLShaderProgram::setUniformValueArray$#$
    {35, 789, -174},	// QGLShaderProgram::setUniformValueArray$$$
    {35, 790, -179},	// QGLShaderProgram::setUniformValueArray$$$$
    {35, 791, -182},	// QGLShaderProgram::setUniformValueArray$?$
    {35, 803, 347},	// QGLShaderProgram::shaders
    {35, 808, 511},	// QGLShaderProgram::staticMetaObject
    {35, 824, 494},	// QGLShaderProgram::tr$
    {35, 825, 338},	// QGLShaderProgram::tr$$
    {35, 826, 340},	// QGLShaderProgram::tr$$$
    {35, 828, 495},	// QGLShaderProgram::trUtf8$
    {35, 829, 339},	// QGLShaderProgram::trUtf8$$
    {35, 830, 341},	// QGLShaderProgram::trUtf8$$$
    {35, 836, 407},	// QGLShaderProgram::uniformLocation#
    {35, 837, -199},	// QGLShaderProgram::uniformLocation$
    {35, 858, 512},	// QGLShaderProgram::~QGLShaderProgram
    {36, 123, 572},	// QGLWidget::QGLWidget
    {36, 124, -1},	// QGLWidget::QGLWidget#
    {36, 125, -5},	// QGLWidget::QGLWidget##
    {36, 126, -9},	// QGLWidget::QGLWidget###
    {36, 127, -12},	// QGLWidget::QGLWidget###$
    {36, 128, 520},	// QGLWidget::QGLWidget##$
    {36, 171, 564},	// QGLWidget::autoBufferSwap
    {36, 178, -15},	// QGLWidget::bindTexture#
    {36, 179, -18},	// QGLWidget::bindTexture#$
    {36, 180, -21},	// QGLWidget::bindTexture#$$
    {36, 181, -24},	// QGLWidget::bindTexture#$$$
    {36, 182, 550},	// QGLWidget::bindTexture$
    {36, 199, 541},	// QGLWidget::colormap
    {36, 206, 533},	// QGLWidget::context
    {36, 209, 539},	// QGLWidget::convertToGLFormat#
    {36, 218, 551},	// QGLWidget::deleteTexture$
    {36, 230, 528},	// QGLWidget::doneCurrent
    {36, 231, 529},	// QGLWidget::doubleBuffer
    {36, 236, -27},	// QGLWidget::drawTexture#$
    {36, 237, -30},	// QGLWidget::drawTexture#$$
    {36, 248, 556},	// QGLWidget::event#
    {36, 259, 597},	// QGLWidget::fontDisplayListBase#
    {36, 260, 569},	// QGLWidget::fontDisplayListBase#$
    {36, 261, 531},	// QGLWidget::format
    {36, 270, 568},	// QGLWidget::glDraw
    {36, 271, 567},	// QGLWidget::glInit
    {36, 272, 586},	// QGLWidget::grabFrameBuffer
    {36, 273, 536},	// QGLWidget::grabFrameBuffer$
    {36, 289, 557},	// QGLWidget::initializeGL
    {36, 290, 560},	// QGLWidget::initializeOverlayGL
    {36, 300, 526},	// QGLWidget::isSharing
    {36, 301, 525},	// QGLWidget::isValid
    {36, 309, 527},	// QGLWidget::makeCurrent
    {36, 310, 537},	// QGLWidget::makeOverlayCurrent
    {36, 314, 513},	// QGLWidget::metaObject
    {36, 384, 538},	// QGLWidget::overlayContext
    {36, 386, 545},	// QGLWidget::paintEngine
    {36, 388, 565},	// QGLWidget::paintEvent#
    {36, 389, 559},	// QGLWidget::paintGL
    {36, 390, 562},	// QGLWidget::paintOverlayGL
    {36, 587, 524},	// QGLWidget::qglClearColor#
    {36, 589, 523},	// QGLWidget::qglColor#
    {36, 630, 519},	// QGLWidget::qt_metacall$$?
    {36, 632, 514},	// QGLWidget::qt_metacast$
    {36, 651, 583},	// QGLWidget::renderPixmap
    {36, 652, 584},	// QGLWidget::renderPixmap$
    {36, 653, 585},	// QGLWidget::renderPixmap$$
    {36, 654, 535},	// QGLWidget::renderPixmap$$$
    {36, 656, 587},	// QGLWidget::renderText$$$
    {36, 657, 588},	// QGLWidget::renderText$$$#
    {36, 658, 543},	// QGLWidget::renderText$$$#$
    {36, 659, 589},	// QGLWidget::renderText$$$$
    {36, 660, 590},	// QGLWidget::renderText$$$$#
    {36, 661, 544},	// QGLWidget::renderText$$$$#$
    {36, 665, 566},	// QGLWidget::resizeEvent#
    {36, 667, 558},	// QGLWidget::resizeGL$$
    {36, 669, 561},	// QGLWidget::resizeOverlayGL$$
    {36, 699, 563},	// QGLWidget::setAutoBufferSwap$
    {36, 703, 542},	// QGLWidget::setColormap#
    {36, 705, 581},	// QGLWidget::setContext#
    {36, 706, 582},	// QGLWidget::setContext##
    {36, 707, 534},	// QGLWidget::setContext##$
    {36, 731, 532},	// QGLWidget::setFormat#
    {36, 749, 540},	// QGLWidget::setMouseTracking$
    {36, 808, 598},	// QGLWidget::staticMetaObject
    {36, 813, 530},	// QGLWidget::swapBuffers
    {36, 824, 570},	// QGLWidget::tr$
    {36, 825, 515},	// QGLWidget::tr$$
    {36, 826, 517},	// QGLWidget::tr$$$
    {36, 828, 571},	// QGLWidget::trUtf8$
    {36, 829, 516},	// QGLWidget::trUtf8$$
    {36, 830, 518},	// QGLWidget::trUtf8$$$
    {36, 841, 554},	// QGLWidget::updateGL
    {36, 842, 555},	// QGLWidget::updateOverlayGL
    {36, 859, 599},	// QGLWidget::~QGLWidget
    {37, 27, 1376},	// QGlobalSpace::KHRONOS_BOOLEAN_ENUM_FORCE_SIZE
    {37, 28, 1374},	// QGlobalSpace::KHRONOS_FALSE
    {37, 29, 1375},	// QGlobalSpace::KHRONOS_TRUE
    {37, 30, 1390},	// QGlobalSpace::LicensedActiveQt
    {37, 31, 1393},	// QGlobalSpace::LicensedCore
    {37, 32, 1392},	// QGlobalSpace::LicensedDBus
    {37, 33, 1400},	// QGlobalSpace::LicensedDeclarative
    {37, 34, 1387},	// QGlobalSpace::LicensedGui
    {37, 35, 1398},	// QGlobalSpace::LicensedHelp
    {37, 36, 1395},	// QGlobalSpace::LicensedMultimedia
    {37, 37, 1394},	// QGlobalSpace::LicensedNetwork
    {37, 38, 1377},	// QGlobalSpace::LicensedOpenGL
    {37, 39, 1379},	// QGlobalSpace::LicensedOpenVG
    {37, 40, 1391},	// QGlobalSpace::LicensedQt3Support
    {37, 41, 1381},	// QGlobalSpace::LicensedQt3SupportLight
    {37, 42, 1380},	// QGlobalSpace::LicensedScript
    {37, 43, 1397},	// QGlobalSpace::LicensedScriptTools
    {37, 44, 1389},	// QGlobalSpace::LicensedSql
    {37, 45, 1378},	// QGlobalSpace::LicensedSvg
    {37, 46, 1396},	// QGlobalSpace::LicensedTest
    {37, 47, 1399},	// QGlobalSpace::LicensedXml
    {37, 48, 1388},	// QGlobalSpace::LicensedXmlPatterns
    {37, 129, 1384},	// QGlobalSpace::QtCriticalMsg
    {37, 130, 1382},	// QGlobalSpace::QtDebugMsg
    {37, 131, 1385},	// QGlobalSpace::QtFatalMsg
    {37, 132, 1386},	// QGlobalSpace::QtSystemMsg
    {37, 133, 1383},	// QGlobalSpace::QtWarningMsg
    {37, 328, -238},	// QGlobalSpace::operator!=##
    {37, 329, -259},	// QGlobalSpace::operator!=#$
    {37, 330, -265},	// QGlobalSpace::operator!=$#
    {37, 332, 996},	// QGlobalSpace::operator&##
    {37, 334, -271},	// QGlobalSpace::operator*##
    {37, 335, -301},	// QGlobalSpace::operator*#$
    {37, 336, -314},	// QGlobalSpace::operator*$#
    {37, 338, -326},	// QGlobalSpace::operator+##
    {37, 339, -337},	// QGlobalSpace::operator+#$
    {37, 340, -342},	// QGlobalSpace::operator+$#
    {37, 341, 1352},	// QGlobalSpace::operator+$$
    {37, 343, -346},	// QGlobalSpace::operator-#
    {37, 344, -354},	// QGlobalSpace::operator-##
    {37, 345, 693},	// QGlobalSpace::operator-#$
    {37, 347, -364},	// QGlobalSpace::operator/#$
    {37, 349, -375},	// QGlobalSpace::operator<##
    {37, 350, 1057},	// QGlobalSpace::operator<#$
    {37, 351, 670},	// QGlobalSpace::operator<$#
    {37, 353, -379},	// QGlobalSpace::operator<<##
    {37, 354, -473},	// QGlobalSpace::operator<<#$
    {37, 355, 1018},	// QGlobalSpace::operator<<#?
    {37, 357, -484},	// QGlobalSpace::operator<=##
    {37, 358, 780},	// QGlobalSpace::operator<=#$
    {37, 359, 1033},	// QGlobalSpace::operator<=$#
    {37, 364, -488},	// QGlobalSpace::operator==##
    {37, 365, -510},	// QGlobalSpace::operator==#$
    {37, 366, -517},	// QGlobalSpace::operator==$#
    {37, 368, -524},	// QGlobalSpace::operator>##
    {37, 369, 1362},	// QGlobalSpace::operator>#$
    {37, 370, 639},	// QGlobalSpace::operator>$#
    {37, 372, -528},	// QGlobalSpace::operator>=##
    {37, 373, 632},	// QGlobalSpace::operator>=#$
    {37, 374, 997},	// QGlobalSpace::operator>=$#
    {37, 376, -532},	// QGlobalSpace::operator>>##
    {37, 377, -584},	// QGlobalSpace::operator>>#$
    {37, 378, 897},	// QGlobalSpace::operator>>#?
    {37, 380, 784},	// QGlobalSpace::operator^##
    {37, 382, 1214},	// QGlobalSpace::operator|##
    {37, 383, -587},	// QGlobalSpace::operator|$$
    {37, 395, 978},	// QGlobalSpace::qAccessibleActionCastHelper
    {37, 396, 688},	// QGlobalSpace::qAccessibleEditableTextCastHelper
    {37, 397, 1083},	// QGlobalSpace::qAccessibleImageCastHelper
    {37, 398, 892},	// QGlobalSpace::qAccessibleTable2CastHelper
    {37, 399, 851},	// QGlobalSpace::qAccessibleTableCastHelper
    {37, 400, 767},	// QGlobalSpace::qAccessibleTextCastHelper
    {37, 401, 601},	// QGlobalSpace::qAccessibleValueCastHelper
    {37, 403, 1157},	// QGlobalSpace::qAcos$
    {37, 405, 1029},	// QGlobalSpace::qAddPostRoutine$
    {37, 407, 724},	// QGlobalSpace::qAlpha$
    {37, 408, 1041},	// QGlobalSpace::qAppName
    {37, 410, 1202},	// QGlobalSpace::qAsin$
    {37, 412, 1262},	// QGlobalSpace::qAtan$
    {37, 414, 630},	// QGlobalSpace::qAtan2$$
    {37, 415, 1166},	// QGlobalSpace::qBadAlloc
    {37, 417, 904},	// QGlobalSpace::qBlue$
    {37, 419, 1074},	// QGlobalSpace::qCeil$
    {37, 421, 888},	// QGlobalSpace::qChecksum$$
    {37, 423, 1180},	// QGlobalSpace::qCompress#
    {37, 424, 1179},	// QGlobalSpace::qCompress#$
    {37, 425, 1032},	// QGlobalSpace::qCompress$$
    {37, 426, 1031},	// QGlobalSpace::qCompress$$$
    {37, 428, 677},	// QGlobalSpace::qCos$
    {37, 429, 1006},	// QGlobalSpace::qCritical
    {37, 430, 1093},	// QGlobalSpace::qDebug
    {37, 432, 889},	// QGlobalSpace::qDrawBorderPixmap####
    {37, 433, 1349},	// QGlobalSpace::qDrawBorderPixmap######
    {37, 434, 1350},	// QGlobalSpace::qDrawBorderPixmap#######
    {37, 435, 1348},	// QGlobalSpace::qDrawBorderPixmap#######$
    {37, 437, 1243},	// QGlobalSpace::qDrawPlainRect###
    {37, 438, 1244},	// QGlobalSpace::qDrawPlainRect###$
    {37, 439, 1242},	// QGlobalSpace::qDrawPlainRect###$#
    {37, 440, 854},	// QGlobalSpace::qDrawPlainRect#$$$$#
    {37, 441, 855},	// QGlobalSpace::qDrawPlainRect#$$$$#$
    {37, 442, 853},	// QGlobalSpace::qDrawPlainRect#$$$$#$#
    {37, 444, 1271},	// QGlobalSpace::qDrawShadeLine####
    {37, 445, 1272},	// QGlobalSpace::qDrawShadeLine####$
    {37, 446, 1273},	// QGlobalSpace::qDrawShadeLine####$$
    {37, 447, 1270},	// QGlobalSpace::qDrawShadeLine####$$$
    {37, 448, 1195},	// QGlobalSpace::qDrawShadeLine#$$$$#
    {37, 449, 1196},	// QGlobalSpace::qDrawShadeLine#$$$$#$
    {37, 450, 1197},	// QGlobalSpace::qDrawShadeLine#$$$$#$$
    {37, 451, 1194},	// QGlobalSpace::qDrawShadeLine#$$$$#$$$
    {37, 453, 929},	// QGlobalSpace::qDrawShadePanel###
    {37, 454, 930},	// QGlobalSpace::qDrawShadePanel###$
    {37, 455, 931},	// QGlobalSpace::qDrawShadePanel###$$
    {37, 456, 928},	// QGlobalSpace::qDrawShadePanel###$$#
    {37, 457, 950},	// QGlobalSpace::qDrawShadePanel#$$$$#
    {37, 458, 951},	// QGlobalSpace::qDrawShadePanel#$$$$#$
    {37, 459, 952},	// QGlobalSpace::qDrawShadePanel#$$$$#$$
    {37, 460, 949},	// QGlobalSpace::qDrawShadePanel#$$$$#$$#
    {37, 462, 876},	// QGlobalSpace::qDrawShadeRect###
    {37, 463, 877},	// QGlobalSpace::qDrawShadeRect###$
    {37, 464, 878},	// QGlobalSpace::qDrawShadeRect###$$
    {37, 465, 879},	// QGlobalSpace::qDrawShadeRect###$$$
    {37, 466, 875},	// QGlobalSpace::qDrawShadeRect###$$$#
    {37, 467, 1170},	// QGlobalSpace::qDrawShadeRect#$$$$#
    {37, 468, 1171},	// QGlobalSpace::qDrawShadeRect#$$$$#$
    {37, 469, 1172},	// QGlobalSpace::qDrawShadeRect#$$$$#$$
    {37, 470, 1173},	// QGlobalSpace::qDrawShadeRect#$$$$#$$$
    {37, 471, 1169},	// QGlobalSpace::qDrawShadeRect#$$$$#$$$#
    {37, 473, 910},	// QGlobalSpace::qDrawWinButton###
    {37, 474, 911},	// QGlobalSpace::qDrawWinButton###$
    {37, 475, 909},	// QGlobalSpace::qDrawWinButton###$#
    {37, 476, 1217},	// QGlobalSpace::qDrawWinButton#$$$$#
    {37, 477, 1218},	// QGlobalSpace::qDrawWinButton#$$$$#$
    {37, 478, 1216},	// QGlobalSpace::qDrawWinButton#$$$$#$#
    {37, 480, 1141},	// QGlobalSpace::qDrawWinPanel###
    {37, 481, 1142},	// QGlobalSpace::qDrawWinPanel###$
    {37, 482, 1140},	// QGlobalSpace::qDrawWinPanel###$#
    {37, 483, 707},	// QGlobalSpace::qDrawWinPanel#$$$$#
    {37, 484, 708},	// QGlobalSpace::qDrawWinPanel#$$$$#$
    {37, 485, 706},	// QGlobalSpace::qDrawWinPanel#$$$$#$#
    {37, 487, 870},	// QGlobalSpace::qExp$
    {37, 489, 1146},	// QGlobalSpace::qFabs$
    {37, 491, 801},	// QGlobalSpace::qFastCos$
    {37, 493, 1034},	// QGlobalSpace::qFastSin$
    {37, 495, 815},	// QGlobalSpace::qFlagLocation$
    {37, 497, 756},	// QGlobalSpace::qFloor$
    {37, 499, 1047},	// QGlobalSpace::qFree$
    {37, 501, 1052},	// QGlobalSpace::qFreeAligned$
    {37, 503, -834},	// QGlobalSpace::qFuzzyCompare##
    {37, 504, -842},	// QGlobalSpace::qFuzzyCompare$$
    {37, 506, -845},	// QGlobalSpace::qFuzzyIsNull$
    {37, 508, 821},	// QGlobalSpace::qGray$
    {37, 509, 727},	// QGlobalSpace::qGray$$$
    {37, 511, 1099},	// QGlobalSpace::qGreen$
    {37, 513, -848},	// QGlobalSpace::qHash#
    {37, 514, -857},	// QGlobalSpace::qHash$
    {37, 515, 1310},	// QGlobalSpace::qInf
    {37, 517, 795},	// QGlobalSpace::qInstallMsgHandler$
    {37, 519, -870},	// QGlobalSpace::qIntCast$
    {37, 521, -873},	// QGlobalSpace::qIsFinite$
    {37, 523, 1236},	// QGlobalSpace::qIsGray$
    {37, 525, -876},	// QGlobalSpace::qIsInf$
    {37, 527, -879},	// QGlobalSpace::qIsNaN$
    {37, 529, -882},	// QGlobalSpace::qIsNull$
    {37, 531, 873},	// QGlobalSpace::qLn$
    {37, 533, 894},	// QGlobalSpace::qMalloc$
    {37, 535, 1094},	// QGlobalSpace::qMallocAligned$$
    {37, 537, 611},	// QGlobalSpace::qMemCopy$$$
    {37, 539, 1137},	// QGlobalSpace::qMemSet$$$
    {37, 541, 1100},	// QGlobalSpace::qPow$$
    {37, 542, 895},	// QGlobalSpace::qQNaN
    {37, 544, 787},	// QGlobalSpace::qRealloc$$
    {37, 546, 772},	// QGlobalSpace::qReallocAligned$$$$
    {37, 548, 752},	// QGlobalSpace::qRed$
    {37, 550, 885},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {37, 552, 1324},	// QGlobalSpace::qRemovePostRoutine$
    {37, 554, 839},	// QGlobalSpace::qRgb$$$
    {37, 556, 1005},	// QGlobalSpace::qRgba$$$$
    {37, 558, 1309},	// QGlobalSpace::qRound$
    {37, 560, 794},	// QGlobalSpace::qRound64$
    {37, 561, 1277},	// QGlobalSpace::qSNaN
    {37, 563, 748},	// QGlobalSpace::qSetFieldWidth$
    {37, 565, 642},	// QGlobalSpace::qSetPadChar#
    {37, 567, 871},	// QGlobalSpace::qSetRealNumberPrecision$
    {37, 568, 682},	// QGlobalSpace::qSharedBuild
    {37, 570, 1209},	// QGlobalSpace::qSin$
    {37, 572, 796},	// QGlobalSpace::qSqrt$
    {37, 574, 1079},	// QGlobalSpace::qStringComparisonHelper#$
    {37, 576, 745},	// QGlobalSpace::qTan$
    {37, 578, 970},	// QGlobalSpace::qUncompress#
    {37, 579, 743},	// QGlobalSpace::qUncompress$$
    {37, 580, 1042},	// QGlobalSpace::qVersion
    {37, 581, 1334},	// QGlobalSpace::qWarning
    {37, 583, 765},	// QGlobalSpace::qbswap_helper$$$
    {37, 585, 634},	// QGlobalSpace::qgetenv$
    {37, 591, 898},	// QGlobalSpace::qputenv$#
    {37, 592, 988},	// QGlobalSpace::qrand
    {37, 594, 912},	// QGlobalSpace::qsrand$
    {37, 596, 1149},	// QGlobalSpace::qstrcmp##
    {37, 597, 1322},	// QGlobalSpace::qstrcmp#$
    {37, 598, 627},	// QGlobalSpace::qstrcmp$#
    {37, 599, 674},	// QGlobalSpace::qstrcmp$$
    {37, 601, 859},	// QGlobalSpace::qstrcpy$$
    {37, 603, 1081},	// QGlobalSpace::qstrdup$
    {37, 605, 1306},	// QGlobalSpace::qstricmp$$
    {37, 607, 1335},	// QGlobalSpace::qstrlen$
    {37, 609, 744},	// QGlobalSpace::qstrncmp$$$
    {37, 611, 965},	// QGlobalSpace::qstrncpy$$$
    {37, 613, 932},	// QGlobalSpace::qstrnicmp$$$
    {37, 615, 610},	// QGlobalSpace::qstrnlen$$
    {37, 617, 1229},	// QGlobalSpace::qtTrId$
    {37, 618, 1228},	// QGlobalSpace::qtTrId$$
    {37, 620, 830},	// QGlobalSpace::qt_assert$$$
    {37, 622, 994},	// QGlobalSpace::qt_assert_x$$$$
    {37, 624, 1139},	// QGlobalSpace::qt_check_pointer$$
    {37, 625, 736},	// QGlobalSpace::qt_error_string
    {37, 626, 735},	// QGlobalSpace::qt_error_string$
    {37, 628, 1355},	// QGlobalSpace::qt_message_output$$
    {37, 633, 612},	// QGlobalSpace::qt_noop
    {37, 635, 953},	// QGlobalSpace::qt_qFindChild_helper#$#
    {37, 637, 1260},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {37, 639, 1252},	// QGlobalSpace::qvariant_cast_helper#$$
    {37, 641, 1133},	// QGlobalSpace::qvsnprintf$$$?
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();
SMOKE_IMPORT void init_qtgui_Smoke();

static bool initialized = false;
Smoke *qtopengl_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtopengl_Smoke() {
    init_qtcore_Smoke();
    init_qtgui_Smoke();
    if (initialized) return;
    qtopengl_Smoke = new Smoke(
        "qtopengl",
        __smokeqtopengl::classes, 112,
        __smokeqtopengl::methods, 1450,
        __smokeqtopengl::methodMaps, 683,
        __smokeqtopengl::methodNames, 859,
        __smokeqtopengl::types, 537,
        __smokeqtopengl::inheritanceList,
        __smokeqtopengl::argumentList,
        __smokeqtopengl::ambiguousMethodList,
        __smokeqtopengl::cast );
    initialized = true;
}

void delete_qtopengl_Smoke() { delete qtopengl_Smoke; }

}
