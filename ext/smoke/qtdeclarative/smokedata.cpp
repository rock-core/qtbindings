#include <qtdeclarative_includes.h>

#include <smoke.h>
#include <qtdeclarative_smoke.h>

namespace __smokeqtdeclarative {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QAbstractScrollArea
      switch(to) {
        case 45: return (void*)(QFrame*)(QAbstractScrollArea*)xptr;
        case 142: return (void*)(QWidget*)(QAbstractScrollArea*)xptr;
        case 83: return (void*)(QObject*)(QAbstractScrollArea*)xptr;
        case 1: return (void*)(QAbstractScrollArea*)xptr;
        case 35: return (void*)(QDeclarativeView*)(QAbstractScrollArea*)xptr;
        default: return xptr;
      }
    case 2:   //QAccessible2Interface
      switch(to) {
        case 2: return (void*)(QAccessible2Interface*)xptr;
        default: return xptr;
      }
    case 3:   //QActionEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QActionEvent*)xptr;
        case 3: return (void*)(QActionEvent*)xptr;
        default: return xptr;
      }
    case 4:   //QBitArray
      switch(to) {
        case 4: return (void*)(QBitArray*)xptr;
        default: return xptr;
      }
    case 5:   //QBool
      switch(to) {
        case 5: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 6:   //QBrush
      switch(to) {
        case 6: return (void*)(QBrush*)xptr;
        default: return xptr;
      }
    case 7:   //QByteArray
      switch(to) {
        case 7: return (void*)(QByteArray*)xptr;
        default: return xptr;
      }
    case 8:   //QChar
      switch(to) {
        case 8: return (void*)(QChar*)xptr;
        default: return xptr;
      }
    case 9:   //QChildEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 9: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 10:   //QCloseEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QCloseEvent*)xptr;
        case 10: return (void*)(QCloseEvent*)xptr;
        default: return xptr;
      }
    case 11:   //QColor
      switch(to) {
        case 11: return (void*)(QColor*)xptr;
        default: return xptr;
      }
    case 12:   //QContextMenuEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QContextMenuEvent*)xptr;
        case 12: return (void*)(QContextMenuEvent*)xptr;
        default: return xptr;
      }
    case 13:   //QCursor
      switch(to) {
        case 13: return (void*)(QCursor*)xptr;
        default: return xptr;
      }
    case 14:   //QDataStream
      switch(to) {
        case 14: return (void*)(QDataStream*)xptr;
        default: return xptr;
      }
    case 15:   //QDate
      switch(to) {
        case 15: return (void*)(QDate*)xptr;
        default: return xptr;
      }
    case 16:   //QDateTime
      switch(to) {
        case 16: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 17:   //QDebug
      switch(to) {
        case 17: return (void*)(QDebug*)xptr;
        default: return xptr;
      }
    case 18:   //QDeclarativeComponent
      switch(to) {
        case 83: return (void*)(QObject*)(QDeclarativeComponent*)xptr;
        case 18: return (void*)(QDeclarativeComponent*)xptr;
        default: return xptr;
      }
    case 19:   //QDeclarativeComponentAttached
      switch(to) {
        case 19: return (void*)(QDeclarativeComponentAttached*)xptr;
        default: return xptr;
      }
    case 20:   //QDeclarativeContext
      switch(to) {
        case 83: return (void*)(QObject*)(QDeclarativeContext*)xptr;
        case 20: return (void*)(QDeclarativeContext*)xptr;
        default: return xptr;
      }
    case 21:   //QDeclarativeEngine
      switch(to) {
        case 83: return (void*)(QObject*)(QDeclarativeEngine*)xptr;
        case 21: return (void*)(QDeclarativeEngine*)xptr;
        default: return xptr;
      }
    case 22:   //QDeclarativeError
      switch(to) {
        case 22: return (void*)(QDeclarativeError*)xptr;
        default: return xptr;
      }
    case 23:   //QDeclarativeExpression
      switch(to) {
        case 83: return (void*)(QObject*)(QDeclarativeExpression*)xptr;
        case 23: return (void*)(QDeclarativeExpression*)xptr;
        default: return xptr;
      }
    case 24:   //QDeclarativeExtensionInterface
      switch(to) {
        case 24: return (void*)(QDeclarativeExtensionInterface*)xptr;
        case 25: return (void*)(QDeclarativeExtensionPlugin*)(QDeclarativeExtensionInterface*)xptr;
        default: return xptr;
      }
    case 25:   //QDeclarativeExtensionPlugin
      switch(to) {
        case 83: return (void*)(QObject*)(QDeclarativeExtensionPlugin*)xptr;
        case 24: return (void*)(QDeclarativeExtensionInterface*)(QDeclarativeExtensionPlugin*)xptr;
        case 25: return (void*)(QDeclarativeExtensionPlugin*)xptr;
        default: return xptr;
      }
    case 26:   //QDeclarativeImageProvider
      switch(to) {
        case 26: return (void*)(QDeclarativeImageProvider*)xptr;
        default: return xptr;
      }
    case 27:   //QDeclarativeInfo
      switch(to) {
        case 17: return (void*)(QDebug*)(QDeclarativeInfo*)xptr;
        case 27: return (void*)(QDeclarativeInfo*)xptr;
        default: return xptr;
      }
    case 28:   //QDeclarativeItem
      switch(to) {
        case 48: return (void*)(QGraphicsObject*)(QDeclarativeItem*)xptr;
        case 83: return (void*)(QObject*)(QDeclarativeItem*)xptr;
        case 47: return (void*)(QGraphicsItem*)(QDeclarativeItem*)xptr;
        case 31: return (void*)(QDeclarativeParserStatus*)(QDeclarativeItem*)xptr;
        case 28: return (void*)(QDeclarativeItem*)xptr;
        default: return xptr;
      }
    case 29:   //QDeclarativeListReference
      switch(to) {
        case 29: return (void*)(QDeclarativeListReference*)xptr;
        default: return xptr;
      }
    case 30:   //QDeclarativeNetworkAccessManagerFactory
      switch(to) {
        case 30: return (void*)(QDeclarativeNetworkAccessManagerFactory*)xptr;
        default: return xptr;
      }
    case 31:   //QDeclarativeParserStatus
      switch(to) {
        case 31: return (void*)(QDeclarativeParserStatus*)xptr;
        case 28: return (void*)(QDeclarativeItem*)(QDeclarativeParserStatus*)xptr;
        default: return xptr;
      }
    case 32:   //QDeclarativeProperty
      switch(to) {
        case 32: return (void*)(QDeclarativeProperty*)xptr;
        default: return xptr;
      }
    case 33:   //QDeclarativePropertyMap
      switch(to) {
        case 83: return (void*)(QObject*)(QDeclarativePropertyMap*)xptr;
        case 33: return (void*)(QDeclarativePropertyMap*)xptr;
        default: return xptr;
      }
    case 34:   //QDeclarativeScriptString
      switch(to) {
        case 34: return (void*)(QDeclarativeScriptString*)xptr;
        default: return xptr;
      }
    case 35:   //QDeclarativeView
      switch(to) {
        case 54: return (void*)(QGraphicsView*)(QDeclarativeView*)xptr;
        case 1: return (void*)(QAbstractScrollArea*)(QDeclarativeView*)xptr;
        case 45: return (void*)(QFrame*)(QDeclarativeView*)xptr;
        case 142: return (void*)(QWidget*)(QDeclarativeView*)xptr;
        case 83: return (void*)(QObject*)(QDeclarativeView*)xptr;
        case 35: return (void*)(QDeclarativeView*)xptr;
        default: return xptr;
      }
    case 36:   //QDir
      switch(to) {
        case 36: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 37:   //QDragEnterEvent
      switch(to) {
        case 39: return (void*)(QDragMoveEvent*)(QDragEnterEvent*)xptr;
        case 40: return (void*)(QDropEvent*)(QDragEnterEvent*)xptr;
        case 42: return (void*)(QEvent*)(QDragEnterEvent*)xptr;
        case 37: return (void*)(QDragEnterEvent*)xptr;
        default: return xptr;
      }
    case 38:   //QDragLeaveEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QDragLeaveEvent*)xptr;
        case 38: return (void*)(QDragLeaveEvent*)xptr;
        default: return xptr;
      }
    case 39:   //QDragMoveEvent
      switch(to) {
        case 40: return (void*)(QDropEvent*)(QDragMoveEvent*)xptr;
        case 42: return (void*)(QEvent*)(QDragMoveEvent*)xptr;
        case 39: return (void*)(QDragMoveEvent*)xptr;
        default: return xptr;
      }
    case 40:   //QDropEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QDropEvent*)xptr;
        case 40: return (void*)(QDropEvent*)xptr;
        default: return xptr;
      }
    case 41:   //QEasingCurve
      switch(to) {
        case 41: return (void*)(QEasingCurve*)xptr;
        default: return xptr;
      }
    case 42:   //QEvent
      switch(to) {
        case 42: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 43:   //QFocusEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QFocusEvent*)xptr;
        case 43: return (void*)(QFocusEvent*)xptr;
        default: return xptr;
      }
    case 44:   //QFont
      switch(to) {
        case 44: return (void*)(QFont*)xptr;
        default: return xptr;
      }
    case 45:   //QFrame
      switch(to) {
        case 142: return (void*)(QWidget*)(QFrame*)xptr;
        case 83: return (void*)(QObject*)(QFrame*)xptr;
        case 45: return (void*)(QFrame*)xptr;
        case 35: return (void*)(QDeclarativeView*)(QFrame*)xptr;
        default: return xptr;
      }
    case 47:   //QGraphicsItem
      switch(to) {
        case 47: return (void*)(QGraphicsItem*)xptr;
        case 28: return (void*)(QDeclarativeItem*)(QGraphicsItem*)xptr;
        default: return xptr;
      }
    case 48:   //QGraphicsObject
      switch(to) {
        case 83: return (void*)(QObject*)(QGraphicsObject*)xptr;
        case 47: return (void*)(QGraphicsItem*)(QGraphicsObject*)xptr;
        case 48: return (void*)(QGraphicsObject*)xptr;
        case 28: return (void*)(QDeclarativeItem*)(QGraphicsObject*)xptr;
        default: return xptr;
      }
    case 49:   //QGraphicsSceneContextMenuEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QGraphicsSceneContextMenuEvent*)xptr;
        case 49: return (void*)(QGraphicsSceneContextMenuEvent*)xptr;
        default: return xptr;
      }
    case 50:   //QGraphicsSceneDragDropEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QGraphicsSceneDragDropEvent*)xptr;
        case 50: return (void*)(QGraphicsSceneDragDropEvent*)xptr;
        default: return xptr;
      }
    case 51:   //QGraphicsSceneHoverEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QGraphicsSceneHoverEvent*)xptr;
        case 51: return (void*)(QGraphicsSceneHoverEvent*)xptr;
        default: return xptr;
      }
    case 52:   //QGraphicsSceneMouseEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QGraphicsSceneMouseEvent*)xptr;
        case 52: return (void*)(QGraphicsSceneMouseEvent*)xptr;
        default: return xptr;
      }
    case 53:   //QGraphicsSceneWheelEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QGraphicsSceneWheelEvent*)xptr;
        case 53: return (void*)(QGraphicsSceneWheelEvent*)xptr;
        default: return xptr;
      }
    case 54:   //QGraphicsView
      switch(to) {
        case 1: return (void*)(QAbstractScrollArea*)(QGraphicsView*)xptr;
        case 45: return (void*)(QFrame*)(QGraphicsView*)xptr;
        case 142: return (void*)(QWidget*)(QGraphicsView*)xptr;
        case 83: return (void*)(QObject*)(QGraphicsView*)xptr;
        case 54: return (void*)(QGraphicsView*)xptr;
        case 35: return (void*)(QDeclarativeView*)(QGraphicsView*)xptr;
        default: return xptr;
      }
    case 55:   //QHashDummyValue
      switch(to) {
        case 55: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 56:   //QHideEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QHideEvent*)xptr;
        case 56: return (void*)(QHideEvent*)xptr;
        default: return xptr;
      }
    case 57:   //QHostAddress
      switch(to) {
        case 57: return (void*)(QHostAddress*)xptr;
        default: return xptr;
      }
    case 58:   //QIcon
      switch(to) {
        case 58: return (void*)(QIcon*)xptr;
        default: return xptr;
      }
    case 59:   //QImage
      switch(to) {
        case 59: return (void*)(QImage*)xptr;
        default: return xptr;
      }
    case 60:   //QIncompatibleFlag
      switch(to) {
        case 60: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 61:   //QInputMethodEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QInputMethodEvent*)xptr;
        case 61: return (void*)(QInputMethodEvent*)xptr;
        default: return xptr;
      }
    case 62:   //QItemSelectionRange
      switch(to) {
        case 62: return (void*)(QItemSelectionRange*)xptr;
        default: return xptr;
      }
    case 63:   //QKeyEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QKeyEvent*)xptr;
        case 63: return (void*)(QKeyEvent*)xptr;
        default: return xptr;
      }
    case 64:   //QKeySequence
      switch(to) {
        case 64: return (void*)(QKeySequence*)xptr;
        default: return xptr;
      }
    case 65:   //QLatin1String
      switch(to) {
        case 65: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 66:   //QLine
      switch(to) {
        case 66: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 67:   //QLineF
      switch(to) {
        case 67: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 68:   //QListWidgetItem
      switch(to) {
        case 68: return (void*)(QListWidgetItem*)xptr;
        default: return xptr;
      }
    case 69:   //QLocale
      switch(to) {
        case 69: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 70:   //QMargins
      switch(to) {
        case 70: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 71:   //QMatrix
      switch(to) {
        case 71: return (void*)(QMatrix*)xptr;
        default: return xptr;
      }
    case 72:   //QMatrix4x4
      switch(to) {
        case 72: return (void*)(QMatrix4x4*)xptr;
        default: return xptr;
      }
    case 73:   //QMetaMethod
      switch(to) {
        case 73: return (void*)(QMetaMethod*)xptr;
        default: return xptr;
      }
    case 74:   //QMetaObject
      switch(to) {
        case 74: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 75:   //QMetaProperty
      switch(to) {
        case 75: return (void*)(QMetaProperty*)xptr;
        default: return xptr;
      }
    case 76:   //QModelIndex
      switch(to) {
        case 76: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 77:   //QMouseEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QMouseEvent*)xptr;
        case 77: return (void*)(QMouseEvent*)xptr;
        default: return xptr;
      }
    case 78:   //QMoveEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QMoveEvent*)xptr;
        case 78: return (void*)(QMoveEvent*)xptr;
        default: return xptr;
      }
    case 79:   //QNetworkAccessManager
      switch(to) {
        case 83: return (void*)(QObject*)(QNetworkAccessManager*)xptr;
        case 79: return (void*)(QNetworkAccessManager*)xptr;
        default: return xptr;
      }
    case 80:   //QNetworkCacheMetaData
      switch(to) {
        case 80: return (void*)(QNetworkCacheMetaData*)xptr;
        default: return xptr;
      }
    case 81:   //QNetworkCookie
      switch(to) {
        case 81: return (void*)(QNetworkCookie*)xptr;
        default: return xptr;
      }
    case 82:   //QNetworkInterface
      switch(to) {
        case 82: return (void*)(QNetworkInterface*)xptr;
        default: return xptr;
      }
    case 83:   //QObject
      switch(to) {
        case 83: return (void*)(QObject*)xptr;
        case 25: return (void*)(QDeclarativeExtensionPlugin*)(QObject*)xptr;
        case 28: return (void*)(QDeclarativeItem*)(QObject*)xptr;
        case 33: return (void*)(QDeclarativePropertyMap*)(QObject*)xptr;
        case 20: return (void*)(QDeclarativeContext*)(QObject*)xptr;
        case 18: return (void*)(QDeclarativeComponent*)(QObject*)xptr;
        case 35: return (void*)(QDeclarativeView*)(QObject*)xptr;
        case 21: return (void*)(QDeclarativeEngine*)(QObject*)xptr;
        case 23: return (void*)(QDeclarativeExpression*)(QObject*)xptr;
        default: return xptr;
      }
    case 84:   //QPaintEngine
      switch(to) {
        case 84: return (void*)(QPaintEngine*)xptr;
        default: return xptr;
      }
    case 85:   //QPaintEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QPaintEvent*)xptr;
        case 85: return (void*)(QPaintEvent*)xptr;
        default: return xptr;
      }
    case 86:   //QPainter
      switch(to) {
        case 86: return (void*)(QPainter*)xptr;
        default: return xptr;
      }
    case 87:   //QPainterPath
      switch(to) {
        case 87: return (void*)(QPainterPath*)xptr;
        default: return xptr;
      }
    case 88:   //QPalette
      switch(to) {
        case 88: return (void*)(QPalette*)xptr;
        default: return xptr;
      }
    case 89:   //QPen
      switch(to) {
        case 89: return (void*)(QPen*)xptr;
        default: return xptr;
      }
    case 90:   //QPersistentModelIndex
      switch(to) {
        case 90: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 91:   //QPicture
      switch(to) {
        case 91: return (void*)(QPicture*)xptr;
        default: return xptr;
      }
    case 92:   //QPixmap
      switch(to) {
        case 92: return (void*)(QPixmap*)xptr;
        default: return xptr;
      }
    case 93:   //QPoint
      switch(to) {
        case 93: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 94:   //QPointF
      switch(to) {
        case 94: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 95:   //QPolygon
      switch(to) {
        case 95: return (void*)(QPolygon*)xptr;
        default: return xptr;
      }
    case 96:   //QPolygonF
      switch(to) {
        case 96: return (void*)(QPolygonF*)xptr;
        default: return xptr;
      }
    case 97:   //QQuaternion
      switch(to) {
        case 97: return (void*)(QQuaternion*)xptr;
        default: return xptr;
      }
    case 98:   //QRect
      switch(to) {
        case 98: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 99:   //QRectF
      switch(to) {
        case 99: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 100:   //QRegExp
      switch(to) {
        case 100: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 101:   //QRegion
      switch(to) {
        case 101: return (void*)(QRegion*)xptr;
        default: return xptr;
      }
    case 102:   //QResizeEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QResizeEvent*)xptr;
        case 102: return (void*)(QResizeEvent*)xptr;
        default: return xptr;
      }
    case 103:   //QScriptContextInfo
      switch(to) {
        case 103: return (void*)(QScriptContextInfo*)xptr;
        default: return xptr;
      }
    case 104:   //QScriptEngine
      switch(to) {
        case 83: return (void*)(QObject*)(QScriptEngine*)xptr;
        case 104: return (void*)(QScriptEngine*)xptr;
        default: return xptr;
      }
    case 105:   //QScriptString
      switch(to) {
        case 105: return (void*)(QScriptString*)xptr;
        default: return xptr;
      }
    case 106:   //QScriptValue
      switch(to) {
        case 106: return (void*)(QScriptValue*)xptr;
        default: return xptr;
      }
    case 107:   //QShowEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QShowEvent*)xptr;
        case 107: return (void*)(QShowEvent*)xptr;
        default: return xptr;
      }
    case 108:   //QSize
      switch(to) {
        case 108: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 109:   //QSizeF
      switch(to) {
        case 109: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 110:   //QSizePolicy
      switch(to) {
        case 110: return (void*)(QSizePolicy*)xptr;
        default: return xptr;
      }
    case 111:   //QSplitter
      switch(to) {
        case 45: return (void*)(QFrame*)(QSplitter*)xptr;
        case 142: return (void*)(QWidget*)(QSplitter*)xptr;
        case 83: return (void*)(QObject*)(QSplitter*)xptr;
        case 111: return (void*)(QSplitter*)xptr;
        default: return xptr;
      }
    case 112:   //QSslCertificate
      switch(to) {
        case 112: return (void*)(QSslCertificate*)xptr;
        default: return xptr;
      }
    case 113:   //QSslCipher
      switch(to) {
        case 113: return (void*)(QSslCipher*)xptr;
        default: return xptr;
      }
    case 114:   //QSslError
      switch(to) {
        case 114: return (void*)(QSslError*)xptr;
        default: return xptr;
      }
    case 115:   //QSslKey
      switch(to) {
        case 115: return (void*)(QSslKey*)xptr;
        default: return xptr;
      }
    case 116:   //QStandardItem
      switch(to) {
        case 116: return (void*)(QStandardItem*)xptr;
        default: return xptr;
      }
    case 117:   //QString::Null
      switch(to) {
        case 117: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 118:   //QStringRef
      switch(to) {
        case 118: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 119:   //QStyle
      switch(to) {
        case 83: return (void*)(QObject*)(QStyle*)xptr;
        case 119: return (void*)(QStyle*)xptr;
        default: return xptr;
      }
    case 120:   //QStyleOption
      switch(to) {
        case 120: return (void*)(QStyleOption*)xptr;
        default: return xptr;
      }
    case 121:   //QStyleOptionGraphicsItem
      switch(to) {
        case 120: return (void*)(QStyleOption*)(QStyleOptionGraphicsItem*)xptr;
        case 121: return (void*)(QStyleOptionGraphicsItem*)xptr;
        default: return xptr;
      }
    case 122:   //QTableWidgetItem
      switch(to) {
        case 122: return (void*)(QTableWidgetItem*)xptr;
        default: return xptr;
      }
    case 123:   //QTabletEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QTabletEvent*)xptr;
        case 123: return (void*)(QTabletEvent*)xptr;
        default: return xptr;
      }
    case 124:   //QTextCodec
      switch(to) {
        case 124: return (void*)(QTextCodec*)xptr;
        default: return xptr;
      }
    case 125:   //QTextFormat
      switch(to) {
        case 125: return (void*)(QTextFormat*)xptr;
        default: return xptr;
      }
    case 126:   //QTextLength
      switch(to) {
        case 126: return (void*)(QTextLength*)xptr;
        default: return xptr;
      }
    case 127:   //QTextStream
      switch(to) {
        case 127: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 128:   //QTextStreamManipulator
      switch(to) {
        case 128: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 129:   //QTileRules
      switch(to) {
        case 129: return (void*)(QTileRules*)xptr;
        default: return xptr;
      }
    case 130:   //QTime
      switch(to) {
        case 130: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 131:   //QTimerEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 131: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 132:   //QTransform
      switch(to) {
        case 132: return (void*)(QTransform*)xptr;
        default: return xptr;
      }
    case 133:   //QTreeWidgetItem
      switch(to) {
        case 133: return (void*)(QTreeWidgetItem*)xptr;
        default: return xptr;
      }
    case 134:   //QUrl
      switch(to) {
        case 134: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 135:   //QUuid
      switch(to) {
        case 135: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 136:   //QVariant
      switch(to) {
        case 136: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 137:   //QVariantComparisonHelper
      switch(to) {
        case 137: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    case 138:   //QVector2D
      switch(to) {
        case 138: return (void*)(QVector2D*)xptr;
        default: return xptr;
      }
    case 139:   //QVector3D
      switch(to) {
        case 139: return (void*)(QVector3D*)xptr;
        default: return xptr;
      }
    case 140:   //QVector4D
      switch(to) {
        case 140: return (void*)(QVector4D*)xptr;
        default: return xptr;
      }
    case 141:   //QWheelEvent
      switch(to) {
        case 42: return (void*)(QEvent*)(QWheelEvent*)xptr;
        case 141: return (void*)(QWheelEvent*)xptr;
        default: return xptr;
      }
    case 142:   //QWidget
      switch(to) {
        case 83: return (void*)(QObject*)(QWidget*)xptr;
        case 142: return (void*)(QWidget*)xptr;
        case 35: return (void*)(QDeclarativeView*)(QWidget*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    83, 0,	// 1: QObject
    83, 24, 0,	// 3: QObject, QDeclarativeExtensionInterface
    48, 31, 0,	// 6: QGraphicsObject, QDeclarativeParserStatus
    54, 0,	// 9: QGraphicsView
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDeclarativeItem(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDeclarativeEngine(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDeclarativeView(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDeclarativeProperty(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDeclarativeImageProvider(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDeclarativeComponent(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QDeclarativeComponent(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeContext(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeEngine(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeError(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeExpression(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeExtensionPlugin(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeImageProvider(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeItem(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeListReference(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeNetworkAccessManagerFactory(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeParserStatus(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeProperty(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativePropertyMap(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeScriptString(Smoke::Index, void*, Smoke::Stack);
void xcall_QDeclarativeView(Smoke::Index, void*, Smoke::Stack);
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QAbstractScrollArea", true, 0, 0, 0, 0, 0 },	//1
    { "QAccessible2Interface", true, 0, 0, 0, 0, 0 },	//2
    { "QActionEvent", true, 0, 0, 0, 0, 0 },	//3
    { "QBitArray", true, 0, 0, 0, 0, 0 },	//4
    { "QBool", true, 0, 0, 0, 0, 0 },	//5
    { "QBrush", true, 0, 0, 0, 0, 0 },	//6
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//7
    { "QChar", true, 0, 0, 0, 0, 0 },	//8
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//9
    { "QCloseEvent", true, 0, 0, 0, 0, 0 },	//10
    { "QColor", true, 0, 0, 0, 0, 0 },	//11
    { "QContextMenuEvent", true, 0, 0, 0, 0, 0 },	//12
    { "QCursor", true, 0, 0, 0, 0, 0 },	//13
    { "QDataStream", true, 0, 0, 0, 0, 0 },	//14
    { "QDate", true, 0, 0, 0, 0, 0 },	//15
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//16
    { "QDebug", true, 0, 0, 0, 0, 0 },	//17
    { "QDeclarativeComponent", false, 1, xcall_QDeclarativeComponent, xenum_QDeclarativeComponent, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativeComponent) },	//18
    { "QDeclarativeComponentAttached", true, 0, 0, 0, 0, 0 },	//19
    { "QDeclarativeContext", false, 1, xcall_QDeclarativeContext, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativeContext) },	//20
    { "QDeclarativeEngine", false, 1, xcall_QDeclarativeEngine, xenum_QDeclarativeEngine, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativeEngine) },	//21
    { "QDeclarativeError", false, 0, xcall_QDeclarativeError, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDeclarativeError) },	//22
    { "QDeclarativeExpression", false, 1, xcall_QDeclarativeExpression, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativeExpression) },	//23
    { "QDeclarativeExtensionInterface", true, 0, 0, 0, 0, 0 },	//24
    { "QDeclarativeExtensionPlugin", false, 3, xcall_QDeclarativeExtensionPlugin, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativeExtensionPlugin) },	//25
    { "QDeclarativeImageProvider", false, 0, xcall_QDeclarativeImageProvider, xenum_QDeclarativeImageProvider, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QDeclarativeImageProvider) },	//26
    { "QDeclarativeInfo", true, 0, 0, 0, 0, 0 },	//27
    { "QDeclarativeItem", false, 6, xcall_QDeclarativeItem, xenum_QDeclarativeItem, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativeItem) },	//28
    { "QDeclarativeListReference", false, 0, xcall_QDeclarativeListReference, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDeclarativeListReference) },	//29
    { "QDeclarativeNetworkAccessManagerFactory", false, 0, xcall_QDeclarativeNetworkAccessManagerFactory, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QDeclarativeNetworkAccessManagerFactory) },	//30
    { "QDeclarativeParserStatus", false, 0, xcall_QDeclarativeParserStatus, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QDeclarativeParserStatus) },	//31
    { "QDeclarativeProperty", false, 0, xcall_QDeclarativeProperty, xenum_QDeclarativeProperty, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDeclarativeProperty) },	//32
    { "QDeclarativePropertyMap", false, 1, xcall_QDeclarativePropertyMap, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativePropertyMap) },	//33
    { "QDeclarativeScriptString", false, 0, xcall_QDeclarativeScriptString, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDeclarativeScriptString) },	//34
    { "QDeclarativeView", false, 9, xcall_QDeclarativeView, xenum_QDeclarativeView, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDeclarativeView) },	//35
    { "QDir", true, 0, 0, 0, 0, 0 },	//36
    { "QDragEnterEvent", true, 0, 0, 0, 0, 0 },	//37
    { "QDragLeaveEvent", true, 0, 0, 0, 0, 0 },	//38
    { "QDragMoveEvent", true, 0, 0, 0, 0, 0 },	//39
    { "QDropEvent", true, 0, 0, 0, 0, 0 },	//40
    { "QEasingCurve", true, 0, 0, 0, 0, 0 },	//41
    { "QEvent", true, 0, 0, 0, 0, 0 },	//42
    { "QFocusEvent", true, 0, 0, 0, 0, 0 },	//43
    { "QFont", true, 0, 0, 0, 0, 0 },	//44
    { "QFrame", true, 0, 0, 0, 0, 0 },	//45
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//46
    { "QGraphicsItem", true, 0, 0, 0, 0, 0 },	//47
    { "QGraphicsObject", true, 0, 0, 0, 0, 0 },	//48
    { "QGraphicsSceneContextMenuEvent", true, 0, 0, 0, 0, 0 },	//49
    { "QGraphicsSceneDragDropEvent", true, 0, 0, 0, 0, 0 },	//50
    { "QGraphicsSceneHoverEvent", true, 0, 0, 0, 0, 0 },	//51
    { "QGraphicsSceneMouseEvent", true, 0, 0, 0, 0, 0 },	//52
    { "QGraphicsSceneWheelEvent", true, 0, 0, 0, 0, 0 },	//53
    { "QGraphicsView", true, 0, 0, 0, 0, 0 },	//54
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//55
    { "QHideEvent", true, 0, 0, 0, 0, 0 },	//56
    { "QHostAddress", true, 0, 0, 0, 0, 0 },	//57
    { "QIcon", true, 0, 0, 0, 0, 0 },	//58
    { "QImage", true, 0, 0, 0, 0, 0 },	//59
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//60
    { "QInputMethodEvent", true, 0, 0, 0, 0, 0 },	//61
    { "QItemSelectionRange", true, 0, 0, 0, 0, 0 },	//62
    { "QKeyEvent", true, 0, 0, 0, 0, 0 },	//63
    { "QKeySequence", true, 0, 0, 0, 0, 0 },	//64
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//65
    { "QLine", true, 0, 0, 0, 0, 0 },	//66
    { "QLineF", true, 0, 0, 0, 0, 0 },	//67
    { "QListWidgetItem", true, 0, 0, 0, 0, 0 },	//68
    { "QLocale", true, 0, 0, 0, 0, 0 },	//69
    { "QMargins", true, 0, 0, 0, 0, 0 },	//70
    { "QMatrix", true, 0, 0, 0, 0, 0 },	//71
    { "QMatrix4x4", true, 0, 0, 0, 0, 0 },	//72
    { "QMetaMethod", true, 0, 0, 0, 0, 0 },	//73
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//74
    { "QMetaProperty", true, 0, 0, 0, 0, 0 },	//75
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//76
    { "QMouseEvent", true, 0, 0, 0, 0, 0 },	//77
    { "QMoveEvent", true, 0, 0, 0, 0, 0 },	//78
    { "QNetworkAccessManager", true, 0, 0, 0, 0, 0 },	//79
    { "QNetworkCacheMetaData", true, 0, 0, 0, 0, 0 },	//80
    { "QNetworkCookie", true, 0, 0, 0, 0, 0 },	//81
    { "QNetworkInterface", true, 0, 0, 0, 0, 0 },	//82
    { "QObject", true, 0, 0, 0, 0, 0 },	//83
    { "QPaintEngine", true, 0, 0, 0, 0, 0 },	//84
    { "QPaintEvent", true, 0, 0, 0, 0, 0 },	//85
    { "QPainter", true, 0, 0, 0, 0, 0 },	//86
    { "QPainterPath", true, 0, 0, 0, 0, 0 },	//87
    { "QPalette", true, 0, 0, 0, 0, 0 },	//88
    { "QPen", true, 0, 0, 0, 0, 0 },	//89
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//90
    { "QPicture", true, 0, 0, 0, 0, 0 },	//91
    { "QPixmap", true, 0, 0, 0, 0, 0 },	//92
    { "QPoint", true, 0, 0, 0, 0, 0 },	//93
    { "QPointF", true, 0, 0, 0, 0, 0 },	//94
    { "QPolygon", true, 0, 0, 0, 0, 0 },	//95
    { "QPolygonF", true, 0, 0, 0, 0, 0 },	//96
    { "QQuaternion", true, 0, 0, 0, 0, 0 },	//97
    { "QRect", true, 0, 0, 0, 0, 0 },	//98
    { "QRectF", true, 0, 0, 0, 0, 0 },	//99
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//100
    { "QRegion", true, 0, 0, 0, 0, 0 },	//101
    { "QResizeEvent", true, 0, 0, 0, 0, 0 },	//102
    { "QScriptContextInfo", true, 0, 0, 0, 0, 0 },	//103
    { "QScriptEngine", true, 0, 0, 0, 0, 0 },	//104
    { "QScriptString", true, 0, 0, 0, 0, 0 },	//105
    { "QScriptValue", true, 0, 0, 0, 0, 0 },	//106
    { "QShowEvent", true, 0, 0, 0, 0, 0 },	//107
    { "QSize", true, 0, 0, 0, 0, 0 },	//108
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//109
    { "QSizePolicy", true, 0, 0, 0, 0, 0 },	//110
    { "QSplitter", true, 0, 0, 0, 0, 0 },	//111
    { "QSslCertificate", true, 0, 0, 0, 0, 0 },	//112
    { "QSslCipher", true, 0, 0, 0, 0, 0 },	//113
    { "QSslError", true, 0, 0, 0, 0, 0 },	//114
    { "QSslKey", true, 0, 0, 0, 0, 0 },	//115
    { "QStandardItem", true, 0, 0, 0, 0, 0 },	//116
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//117
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//118
    { "QStyle", true, 0, 0, 0, 0, 0 },	//119
    { "QStyleOption", true, 0, 0, 0, 0, 0 },	//120
    { "QStyleOptionGraphicsItem", true, 0, 0, 0, 0, 0 },	//121
    { "QTableWidgetItem", true, 0, 0, 0, 0, 0 },	//122
    { "QTabletEvent", true, 0, 0, 0, 0, 0 },	//123
    { "QTextCodec", true, 0, 0, 0, 0, 0 },	//124
    { "QTextFormat", true, 0, 0, 0, 0, 0 },	//125
    { "QTextLength", true, 0, 0, 0, 0, 0 },	//126
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//127
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//128
    { "QTileRules", true, 0, 0, 0, 0, 0 },	//129
    { "QTime", true, 0, 0, 0, 0, 0 },	//130
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//131
    { "QTransform", true, 0, 0, 0, 0, 0 },	//132
    { "QTreeWidgetItem", true, 0, 0, 0, 0, 0 },	//133
    { "QUrl", true, 0, 0, 0, 0, 0 },	//134
    { "QUuid", true, 0, 0, 0, 0, 0 },	//135
    { "QVariant", true, 0, 0, 0, 0, 0 },	//136
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//137
    { "QVector2D", true, 0, 0, 0, 0, 0 },	//138
    { "QVector3D", true, 0, 0, 0, 0, 0 },	//139
    { "QVector4D", true, 0, 0, 0, 0, 0 },	//140
    { "QWheelEvent", true, 0, 0, 0, 0, 0 },	//141
    { "QWidget", true, 0, 0, 0, 0, 0 },	//142
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QAbstractItemView::EditTrigger", 0, Smoke::t_enum|Smoke::tf_stack },	//2
    { "QAbstractPrintDialog::PrintDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//3
    { "QAbstractSocket::SocketError", 0, Smoke::t_enum|Smoke::tf_stack },	//4
    { "QAbstractSocket::SocketState", 0, Smoke::t_enum|Smoke::tf_stack },	//5
    { "QAbstractSpinBox::StepEnabledFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//6
    { "QAccessible2::BoundaryType", 0, Smoke::t_enum|Smoke::tf_stack },	//7
    { "QAccessible2::CoordinateType", 0, Smoke::t_enum|Smoke::tf_stack },	//8
    { "QAccessible2::InterfaceType", 0, Smoke::t_enum|Smoke::tf_stack },	//9
    { "QAccessible2::TableModelChangeType", 0, Smoke::t_enum|Smoke::tf_stack },	//10
    { "QAccessible2Interface*", 2, Smoke::t_class|Smoke::tf_ptr },	//11
    { "QAccessible::RelationFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//12
    { "QAccessible::Role", 0, Smoke::t_enum|Smoke::tf_stack },	//13
    { "QAccessible::StateFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//14
    { "QActionEvent*", 3, Smoke::t_class|Smoke::tf_ptr },	//15
    { "QBitArray", 4, Smoke::t_class|Smoke::tf_stack },	//16
    { "QBitArray&", 4, Smoke::t_class|Smoke::tf_ref },	//17
    { "QBool", 5, Smoke::t_class|Smoke::tf_stack },	//18
    { "QBrush&", 6, Smoke::t_class|Smoke::tf_ref },	//19
    { "QByteArray", 7, Smoke::t_class|Smoke::tf_stack },	//20
    { "QByteArray&", 7, Smoke::t_class|Smoke::tf_ref },	//21
    { "QChar", 8, Smoke::t_class|Smoke::tf_stack },	//22
    { "QChar&", 8, Smoke::t_class|Smoke::tf_ref },	//23
    { "QChildEvent*", 9, Smoke::t_class|Smoke::tf_ptr },	//24
    { "QCloseEvent*", 10, Smoke::t_class|Smoke::tf_ptr },	//25
    { "QColor&", 11, Smoke::t_class|Smoke::tf_ref },	//26
    { "QColorDialog::ColorDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//27
    { "QContextMenuEvent*", 12, Smoke::t_class|Smoke::tf_ptr },	//28
    { "QCursor&", 13, Smoke::t_class|Smoke::tf_ref },	//29
    { "QDataStream&", 14, Smoke::t_class|Smoke::tf_ref },	//30
    { "QDate&", 15, Smoke::t_class|Smoke::tf_ref },	//31
    { "QDateTime&", 16, Smoke::t_class|Smoke::tf_ref },	//32
    { "QDateTimeEdit::Section", 0, Smoke::t_enum|Smoke::tf_stack },	//33
    { "QDebug", 17, Smoke::t_class|Smoke::tf_stack },	//34
    { "QDeclarativeComponent*", 18, Smoke::t_class|Smoke::tf_ptr },	//35
    { "QDeclarativeComponent::Status", 18, Smoke::t_enum|Smoke::tf_stack },	//36
    { "QDeclarativeComponentAttached*", 19, Smoke::t_class|Smoke::tf_ptr },	//37
    { "QDeclarativeContext*", 20, Smoke::t_class|Smoke::tf_ptr },	//38
    { "QDeclarativeEngine*", 21, Smoke::t_class|Smoke::tf_ptr },	//39
    { "QDeclarativeEngine::ObjectOwnership", 21, Smoke::t_enum|Smoke::tf_stack },	//40
    { "QDeclarativeError", 22, Smoke::t_class|Smoke::tf_stack },	//41
    { "QDeclarativeError&", 22, Smoke::t_class|Smoke::tf_ref },	//42
    { "QDeclarativeError*", 22, Smoke::t_class|Smoke::tf_ptr },	//43
    { "QDeclarativeExpression*", 23, Smoke::t_class|Smoke::tf_ptr },	//44
    { "QDeclarativeExtensionPlugin*", 25, Smoke::t_class|Smoke::tf_ptr },	//45
    { "QDeclarativeImageProvider*", 26, Smoke::t_class|Smoke::tf_ptr },	//46
    { "QDeclarativeImageProvider::ImageType", 26, Smoke::t_enum|Smoke::tf_stack },	//47
    { "QDeclarativeInfo", 27, Smoke::t_class|Smoke::tf_stack },	//48
    { "QDeclarativeItem*", 28, Smoke::t_class|Smoke::tf_ptr },	//49
    { "QDeclarativeItem::TransformOrigin", 28, Smoke::t_enum|Smoke::tf_stack },	//50
    { "QDeclarativeListProperty<QGraphicsTransform>", 0, Smoke::t_voidp|Smoke::tf_stack },	//51
    { "QDeclarativeListReference&", 29, Smoke::t_class|Smoke::tf_ref },	//52
    { "QDeclarativeListReference*", 29, Smoke::t_class|Smoke::tf_ptr },	//53
    { "QDeclarativeNetworkAccessManagerFactory*", 30, Smoke::t_class|Smoke::tf_ptr },	//54
    { "QDeclarativeParserStatus*", 31, Smoke::t_class|Smoke::tf_ptr },	//55
    { "QDeclarativePrivate::AutoParentResult", 0, Smoke::t_enum|Smoke::tf_stack },	//56
    { "QDeclarativePrivate::RegistrationType", 0, Smoke::t_enum|Smoke::tf_stack },	//57
    { "QDeclarativeProperty&", 32, Smoke::t_class|Smoke::tf_ref },	//58
    { "QDeclarativeProperty*", 32, Smoke::t_class|Smoke::tf_ptr },	//59
    { "QDeclarativeProperty::PropertyTypeCategory", 32, Smoke::t_enum|Smoke::tf_stack },	//60
    { "QDeclarativeProperty::Type", 32, Smoke::t_enum|Smoke::tf_stack },	//61
    { "QDeclarativePropertyMap*", 33, Smoke::t_class|Smoke::tf_ptr },	//62
    { "QDeclarativeScriptString&", 34, Smoke::t_class|Smoke::tf_ref },	//63
    { "QDeclarativeScriptString*", 34, Smoke::t_class|Smoke::tf_ptr },	//64
    { "QDeclarativeView*", 35, Smoke::t_class|Smoke::tf_ptr },	//65
    { "QDeclarativeView::ResizeMode", 35, Smoke::t_enum|Smoke::tf_stack },	//66
    { "QDeclarativeView::Status", 35, Smoke::t_enum|Smoke::tf_stack },	//67
    { "QDialogButtonBox::StandardButton", 0, Smoke::t_enum|Smoke::tf_stack },	//68
    { "QDir::Filter", 36, Smoke::t_enum|Smoke::tf_stack },	//69
    { "QDir::SortFlag", 36, Smoke::t_enum|Smoke::tf_stack },	//70
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//71
    { "QDockWidget::DockWidgetFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//72
    { "QDragEnterEvent*", 37, Smoke::t_class|Smoke::tf_ptr },	//73
    { "QDragLeaveEvent*", 38, Smoke::t_class|Smoke::tf_ptr },	//74
    { "QDragMoveEvent*", 39, Smoke::t_class|Smoke::tf_ptr },	//75
    { "QDrawBorderPixmap::DrawingHint", 0, Smoke::t_enum|Smoke::tf_stack },	//76
    { "QDropEvent*", 40, Smoke::t_class|Smoke::tf_ptr },	//77
    { "QEasingCurve&", 41, Smoke::t_class|Smoke::tf_ref },	//78
    { "QEvent*", 42, Smoke::t_class|Smoke::tf_ptr },	//79
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//80
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//81
    { "QFileDialog::Option", 0, Smoke::t_enum|Smoke::tf_stack },	//82
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//83
    { "QFlags<QAbstractItemView::EditTrigger>", 0, Smoke::t_uint|Smoke::tf_stack },	//84
    { "QFlags<QAbstractPrintDialog::PrintDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//85
    { "QFlags<QAbstractSpinBox::StepEnabledFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//86
    { "QFlags<QAccessible::RelationFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//87
    { "QFlags<QAccessible::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//88
    { "QFlags<QColorDialog::ColorDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//89
    { "QFlags<QDateTimeEdit::Section>", 0, Smoke::t_uint|Smoke::tf_stack },	//90
    { "QFlags<QDialogButtonBox::StandardButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//91
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//92
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//93
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//94
    { "QFlags<QDockWidget::DockWidgetFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//95
    { "QFlags<QDrawBorderPixmap::DrawingHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//96
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//97
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//98
    { "QFlags<QFileDialog::Option>", 0, Smoke::t_uint|Smoke::tf_stack },	//99
    { "QFlags<QFontComboBox::FontFilter>", 0, Smoke::t_uint|Smoke::tf_stack },	//100
    { "QFlags<QFontDialog::FontDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//101
    { "QFlags<QGestureRecognizer::ResultFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//102
    { "QFlags<QGraphicsBlurEffect::BlurHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//103
    { "QFlags<QGraphicsEffect::ChangeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//104
    { "QFlags<QGraphicsItem::GraphicsItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//105
    { "QFlags<QGraphicsScene::SceneLayer>", 0, Smoke::t_uint|Smoke::tf_stack },	//106
    { "QFlags<QGraphicsView::CacheModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//107
    { "QFlags<QGraphicsView::OptimizationFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//108
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//109
    { "QFlags<QImageIOPlugin::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//110
    { "QFlags<QInputDialog::InputDialogOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//111
    { "QFlags<QItemSelectionModel::SelectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//112
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//113
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//114
    { "QFlags<QMainWindow::DockOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//115
    { "QFlags<QMdiArea::AreaOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//116
    { "QFlags<QMdiSubWindow::SubWindowOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//117
    { "QFlags<QMessageBox::StandardButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//118
    { "QFlags<QNetworkConfigurationManager::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//119
    { "QFlags<QNetworkInterface::InterfaceFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//120
    { "QFlags<QNetworkProxy::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//121
    { "QFlags<QPaintEngine::DirtyFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//122
    { "QFlags<QPaintEngine::PaintEngineFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//123
    { "QFlags<QPainter::RenderHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//124
    { "QFlags<QPinchGesture::ChangeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//125
    { "QFlags<QScriptClass::QueryFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//126
    { "QFlags<QScriptEngine::QObjectWrapOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//127
    { "QFlags<QScriptValue::PropertyFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//128
    { "QFlags<QScriptValue::ResolveFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//129
    { "QFlags<QSizePolicy::ControlType>", 0, Smoke::t_uint|Smoke::tf_stack },	//130
    { "QFlags<QSsl::SslOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//131
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//132
    { "QFlags<QStyle::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//133
    { "QFlags<QStyle::SubControl>", 0, Smoke::t_uint|Smoke::tf_stack },	//134
    { "QFlags<QStyleOptionButton::ButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//135
    { "QFlags<QStyleOptionFrameV2::FrameFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//136
    { "QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//137
    { "QFlags<QStyleOptionTab::CornerWidget>", 0, Smoke::t_uint|Smoke::tf_stack },	//138
    { "QFlags<QStyleOptionToolBar::ToolBarFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//139
    { "QFlags<QStyleOptionToolButton::ToolButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//140
    { "QFlags<QStyleOptionViewItemV2::ViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//141
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//142
    { "QFlags<QTextDocument::FindFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//143
    { "QFlags<QTextEdit::AutoFormattingFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//144
    { "QFlags<QTextFormat::PageBreakFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//145
    { "QFlags<QTextItem::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//146
    { "QFlags<QTextOption::Flag>", 0, Smoke::t_uint|Smoke::tf_stack },	//147
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//148
    { "QFlags<QTreeWidgetItemIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//149
    { "QFlags<QUdpSocket::BindFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//150
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//151
    { "QFlags<QWidget::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//152
    { "QFlags<QWizard::WizardOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//153
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//154
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//155
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//156
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//157
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//158
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//159
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//160
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//161
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//162
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//163
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//164
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//165
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//166
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//167
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//168
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//169
    { "QFocusEvent*", 43, Smoke::t_class|Smoke::tf_ptr },	//170
    { "QFont&", 44, Smoke::t_class|Smoke::tf_ref },	//171
    { "QFontComboBox::FontFilter", 0, Smoke::t_enum|Smoke::tf_stack },	//172
    { "QFontDialog::FontDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//173
    { "QGestureRecognizer::ResultFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//174
    { "QGraphicsBlurEffect::BlurHint", 0, Smoke::t_enum|Smoke::tf_stack },	//175
    { "QGraphicsEffect::ChangeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//176
    { "QGraphicsItem*", 47, Smoke::t_class|Smoke::tf_ptr },	//177
    { "QGraphicsItem**", 47, Smoke::t_class|Smoke::tf_ptr },	//178
    { "QGraphicsItem::Extension", 47, Smoke::t_enum|Smoke::tf_stack },	//179
    { "QGraphicsItem::GraphicsItemChange", 47, Smoke::t_enum|Smoke::tf_stack },	//180
    { "QGraphicsItem::GraphicsItemFlag", 47, Smoke::t_enum|Smoke::tf_stack },	//181
    { "QGraphicsObject*", 48, Smoke::t_class|Smoke::tf_ptr },	//182
    { "QGraphicsScene::SceneLayer", 0, Smoke::t_enum|Smoke::tf_stack },	//183
    { "QGraphicsSceneContextMenuEvent*", 49, Smoke::t_class|Smoke::tf_ptr },	//184
    { "QGraphicsSceneDragDropEvent*", 50, Smoke::t_class|Smoke::tf_ptr },	//185
    { "QGraphicsSceneHoverEvent*", 51, Smoke::t_class|Smoke::tf_ptr },	//186
    { "QGraphicsSceneMouseEvent*", 52, Smoke::t_class|Smoke::tf_ptr },	//187
    { "QGraphicsSceneWheelEvent*", 53, Smoke::t_class|Smoke::tf_ptr },	//188
    { "QGraphicsView::CacheModeFlag", 54, Smoke::t_enum|Smoke::tf_stack },	//189
    { "QGraphicsView::OptimizationFlag", 54, Smoke::t_enum|Smoke::tf_stack },	//190
    { "QHideEvent*", 56, Smoke::t_class|Smoke::tf_ptr },	//191
    { "QHostAddress&", 57, Smoke::t_class|Smoke::tf_ref },	//192
    { "QHostAddress::SpecialAddress", 57, Smoke::t_enum|Smoke::tf_stack },	//193
    { "QIODevice::OpenModeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//194
    { "QIcon&", 58, Smoke::t_class|Smoke::tf_ref },	//195
    { "QImage", 59, Smoke::t_class|Smoke::tf_stack },	//196
    { "QImage&", 59, Smoke::t_class|Smoke::tf_ref },	//197
    { "QImageIOPlugin::Capability", 0, Smoke::t_enum|Smoke::tf_stack },	//198
    { "QIncompatibleFlag", 60, Smoke::t_class|Smoke::tf_stack },	//199
    { "QInputDialog::InputDialogOption", 0, Smoke::t_enum|Smoke::tf_stack },	//200
    { "QInputMethodEvent*", 61, Smoke::t_class|Smoke::tf_ptr },	//201
    { "QItemSelectionModel::SelectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//202
    { "QKeyEvent*", 63, Smoke::t_class|Smoke::tf_ptr },	//203
    { "QKeySequence&", 64, Smoke::t_class|Smoke::tf_ref },	//204
    { "QKeySequence::StandardKey", 64, Smoke::t_enum|Smoke::tf_stack },	//205
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//206
    { "QLine", 66, Smoke::t_class|Smoke::tf_stack },	//207
    { "QLine&", 66, Smoke::t_class|Smoke::tf_ref },	//208
    { "QLineF", 67, Smoke::t_class|Smoke::tf_stack },	//209
    { "QLineF&", 67, Smoke::t_class|Smoke::tf_ref },	//210
    { "QList<QDeclarativeError>", 0, Smoke::t_voidp|Smoke::tf_stack },	//211
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//212
    { "QListWidgetItem&", 68, Smoke::t_class|Smoke::tf_ref },	//213
    { "QLocalSocket::LocalSocketError", 0, Smoke::t_enum|Smoke::tf_stack },	//214
    { "QLocalSocket::LocalSocketState", 0, Smoke::t_enum|Smoke::tf_stack },	//215
    { "QLocale&", 69, Smoke::t_class|Smoke::tf_ref },	//216
    { "QLocale::NumberOption", 69, Smoke::t_enum|Smoke::tf_stack },	//217
    { "QMainWindow::DockOption", 0, Smoke::t_enum|Smoke::tf_stack },	//218
    { "QMatrix&", 71, Smoke::t_class|Smoke::tf_ref },	//219
    { "QMatrix4x4", 72, Smoke::t_class|Smoke::tf_stack },	//220
    { "QMatrix4x4&", 72, Smoke::t_class|Smoke::tf_ref },	//221
    { "QMdiArea::AreaOption", 0, Smoke::t_enum|Smoke::tf_stack },	//222
    { "QMdiSubWindow::SubWindowOption", 0, Smoke::t_enum|Smoke::tf_stack },	//223
    { "QMessageBox::StandardButton", 0, Smoke::t_enum|Smoke::tf_stack },	//224
    { "QMetaMethod", 73, Smoke::t_class|Smoke::tf_stack },	//225
    { "QMetaObject::Call", 74, Smoke::t_enum|Smoke::tf_stack },	//226
    { "QMetaProperty", 75, Smoke::t_class|Smoke::tf_stack },	//227
    { "QMouseEvent*", 77, Smoke::t_class|Smoke::tf_ptr },	//228
    { "QMoveEvent*", 78, Smoke::t_class|Smoke::tf_ptr },	//229
    { "QNetworkAccessManager*", 79, Smoke::t_class|Smoke::tf_ptr },	//230
    { "QNetworkCacheMetaData&", 80, Smoke::t_class|Smoke::tf_ref },	//231
    { "QNetworkConfigurationManager::Capability", 0, Smoke::t_enum|Smoke::tf_stack },	//232
    { "QNetworkInterface::InterfaceFlag", 82, Smoke::t_enum|Smoke::tf_stack },	//233
    { "QNetworkProxy::Capability", 0, Smoke::t_enum|Smoke::tf_stack },	//234
    { "QObject*", 83, Smoke::t_class|Smoke::tf_ptr },	//235
    { "QObject*(*)()", 83, Smoke::t_class|Smoke::tf_ptr },	//236
    { "QPaintDevice::PaintDeviceMetric", 0, Smoke::t_enum|Smoke::tf_stack },	//237
    { "QPaintEngine*", 84, Smoke::t_class|Smoke::tf_ptr },	//238
    { "QPaintEngine::DirtyFlag", 84, Smoke::t_enum|Smoke::tf_stack },	//239
    { "QPaintEngine::PaintEngineFeature", 84, Smoke::t_enum|Smoke::tf_stack },	//240
    { "QPaintEvent*", 85, Smoke::t_class|Smoke::tf_ptr },	//241
    { "QPainter*", 86, Smoke::t_class|Smoke::tf_ptr },	//242
    { "QPainter::RenderHint", 86, Smoke::t_enum|Smoke::tf_stack },	//243
    { "QPainterPath", 87, Smoke::t_class|Smoke::tf_stack },	//244
    { "QPainterPath&", 87, Smoke::t_class|Smoke::tf_ref },	//245
    { "QPalette&", 88, Smoke::t_class|Smoke::tf_ref },	//246
    { "QPen&", 89, Smoke::t_class|Smoke::tf_ref },	//247
    { "QPicture&", 91, Smoke::t_class|Smoke::tf_ref },	//248
    { "QPinchGesture::ChangeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//249
    { "QPixmap", 92, Smoke::t_class|Smoke::tf_stack },	//250
    { "QPixmap&", 92, Smoke::t_class|Smoke::tf_ref },	//251
    { "QPoint", 93, Smoke::t_class|Smoke::tf_stack },	//252
    { "QPoint&", 93, Smoke::t_class|Smoke::tf_ref },	//253
    { "QPointF", 94, Smoke::t_class|Smoke::tf_stack },	//254
    { "QPointF&", 94, Smoke::t_class|Smoke::tf_ref },	//255
    { "QPolygon", 95, Smoke::t_class|Smoke::tf_stack },	//256
    { "QPolygon&", 95, Smoke::t_class|Smoke::tf_ref },	//257
    { "QPolygonF", 96, Smoke::t_class|Smoke::tf_stack },	//258
    { "QPolygonF&", 96, Smoke::t_class|Smoke::tf_ref },	//259
    { "QQuaternion&", 97, Smoke::t_class|Smoke::tf_ref },	//260
    { "QRect&", 98, Smoke::t_class|Smoke::tf_ref },	//261
    { "QRectF", 99, Smoke::t_class|Smoke::tf_stack },	//262
    { "QRectF&", 99, Smoke::t_class|Smoke::tf_ref },	//263
    { "QRegExp&", 100, Smoke::t_class|Smoke::tf_ref },	//264
    { "QRegion", 101, Smoke::t_class|Smoke::tf_stack },	//265
    { "QRegion&", 101, Smoke::t_class|Smoke::tf_ref },	//266
    { "QResizeEvent*", 102, Smoke::t_class|Smoke::tf_ptr },	//267
    { "QScriptClass::QueryFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//268
    { "QScriptContextInfo&", 103, Smoke::t_class|Smoke::tf_ref },	//269
    { "QScriptEngine*", 104, Smoke::t_class|Smoke::tf_ptr },	//270
    { "QScriptEngine::QObjectWrapOption", 104, Smoke::t_enum|Smoke::tf_stack },	//271
    { "QScriptValue", 106, Smoke::t_class|Smoke::tf_stack },	//272
    { "QScriptValue(*)(QScriptEngine*,const void*)", 106, Smoke::t_class|Smoke::tf_stack },	//273
    { "QScriptValue::PropertyFlag", 106, Smoke::t_enum|Smoke::tf_stack },	//274
    { "QScriptValue::ResolveFlag", 106, Smoke::t_enum|Smoke::tf_stack },	//275
    { "QShowEvent*", 107, Smoke::t_class|Smoke::tf_ptr },	//276
    { "QSize", 108, Smoke::t_class|Smoke::tf_stack },	//277
    { "QSize&", 108, Smoke::t_class|Smoke::tf_ref },	//278
    { "QSize*", 108, Smoke::t_class|Smoke::tf_ptr },	//279
    { "QSizeF&", 109, Smoke::t_class|Smoke::tf_ref },	//280
    { "QSizePolicy&", 110, Smoke::t_class|Smoke::tf_ref },	//281
    { "QSizePolicy::ControlType", 110, Smoke::t_enum|Smoke::tf_stack },	//282
    { "QSplitter&", 111, Smoke::t_class|Smoke::tf_ref },	//283
    { "QSsl::AlternateNameEntryType", 0, Smoke::t_enum|Smoke::tf_stack },	//284
    { "QSsl::EncodingFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//285
    { "QSsl::KeyAlgorithm", 0, Smoke::t_enum|Smoke::tf_stack },	//286
    { "QSsl::KeyType", 0, Smoke::t_enum|Smoke::tf_stack },	//287
    { "QSsl::SslOption", 0, Smoke::t_enum|Smoke::tf_stack },	//288
    { "QSsl::SslProtocol", 0, Smoke::t_enum|Smoke::tf_stack },	//289
    { "QSslCertificate::SubjectInfo", 112, Smoke::t_enum|Smoke::tf_stack },	//290
    { "QStandardItem&", 116, Smoke::t_class|Smoke::tf_ref },	//291
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//292
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//293
    { "QString*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//294
    { "QString::Null", 117, Smoke::t_class|Smoke::tf_stack },	//295
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//296
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//297
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//298
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//299
    { "QStyle&", 119, Smoke::t_class|Smoke::tf_ref },	//300
    { "QStyle::StateFlag", 119, Smoke::t_enum|Smoke::tf_stack },	//301
    { "QStyle::SubControl", 119, Smoke::t_enum|Smoke::tf_stack },	//302
    { "QStyleOptionButton::ButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//303
    { "QStyleOptionFrameV2::FrameFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//304
    { "QStyleOptionQ3ListViewItem::Q3ListViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//305
    { "QStyleOptionTab::CornerWidget", 0, Smoke::t_enum|Smoke::tf_stack },	//306
    { "QStyleOptionToolBar::ToolBarFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//307
    { "QStyleOptionToolButton::ToolButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//308
    { "QStyleOptionViewItemV2::ViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//309
    { "QTableWidgetItem&", 122, Smoke::t_class|Smoke::tf_ref },	//310
    { "QTabletEvent*", 123, Smoke::t_class|Smoke::tf_ptr },	//311
    { "QTextCodec*", 124, Smoke::t_class|Smoke::tf_ptr },	//312
    { "QTextCodec::ConversionFlag", 124, Smoke::t_enum|Smoke::tf_stack },	//313
    { "QTextDocument::FindFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//314
    { "QTextEdit::AutoFormattingFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//315
    { "QTextFormat&", 125, Smoke::t_class|Smoke::tf_ref },	//316
    { "QTextFormat::PageBreakFlag", 125, Smoke::t_enum|Smoke::tf_stack },	//317
    { "QTextItem::RenderFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//318
    { "QTextLength&", 126, Smoke::t_class|Smoke::tf_ref },	//319
    { "QTextOption::Flag", 0, Smoke::t_enum|Smoke::tf_stack },	//320
    { "QTextStream&", 127, Smoke::t_class|Smoke::tf_ref },	//321
    { "QTextStream&(*)(QTextStream&)", 127, Smoke::t_class|Smoke::tf_ref },	//322
    { "QTextStream::NumberFlag", 127, Smoke::t_enum|Smoke::tf_stack },	//323
    { "QTextStreamManipulator", 128, Smoke::t_class|Smoke::tf_stack },	//324
    { "QTime&", 130, Smoke::t_class|Smoke::tf_ref },	//325
    { "QTimerEvent*", 131, Smoke::t_class|Smoke::tf_ptr },	//326
    { "QTransform", 132, Smoke::t_class|Smoke::tf_stack },	//327
    { "QTransform&", 132, Smoke::t_class|Smoke::tf_ref },	//328
    { "QTreeWidgetItem&", 133, Smoke::t_class|Smoke::tf_ref },	//329
    { "QTreeWidgetItemIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//330
    { "QUdpSocket::BindFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//331
    { "QUrl", 134, Smoke::t_class|Smoke::tf_stack },	//332
    { "QUrl&", 134, Smoke::t_class|Smoke::tf_ref },	//333
    { "QUrl::FormattingOption", 134, Smoke::t_enum|Smoke::tf_stack },	//334
    { "QUuid&", 135, Smoke::t_class|Smoke::tf_ref },	//335
    { "QVariant", 136, Smoke::t_class|Smoke::tf_stack },	//336
    { "QVariant&", 136, Smoke::t_class|Smoke::tf_ref },	//337
    { "QVariant::Type", 136, Smoke::t_enum|Smoke::tf_stack },	//338
    { "QVariant::Type&", 136, Smoke::t_enum|Smoke::tf_ref },	//339
    { "QVector2D&", 138, Smoke::t_class|Smoke::tf_ref },	//340
    { "QVector3D", 139, Smoke::t_class|Smoke::tf_stack },	//341
    { "QVector3D&", 139, Smoke::t_class|Smoke::tf_ref },	//342
    { "QVector4D", 140, Smoke::t_class|Smoke::tf_stack },	//343
    { "QVector4D&", 140, Smoke::t_class|Smoke::tf_ref },	//344
    { "QWheelEvent*", 141, Smoke::t_class|Smoke::tf_ptr },	//345
    { "QWidget*", 142, Smoke::t_class|Smoke::tf_ptr },	//346
    { "QWidget::RenderFlag", 142, Smoke::t_enum|Smoke::tf_stack },	//347
    { "QWizard::WizardOption", 0, Smoke::t_enum|Smoke::tf_stack },	//348
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//349
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//350
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//351
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//352
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//353
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//354
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//355
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//356
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//357
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//358
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//359
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//360
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//361
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//362
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//363
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//364
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//365
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//366
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//367
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//368
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//369
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//370
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//371
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//372
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//373
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//374
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//375
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//376
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//377
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//378
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//379
    { "Qt::HitTestAccuracy", 0, Smoke::t_enum|Smoke::tf_stack },	//380
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//381
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//382
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//383
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//384
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//385
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//386
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//387
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//388
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//389
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//390
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//391
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//392
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//393
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//394
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//395
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//396
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//397
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//398
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//399
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//400
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//401
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//402
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//403
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//404
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//405
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//406
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//407
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//408
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//409
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//410
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//411
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//412
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//413
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//414
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//415
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//416
    { "Qt::WhiteSpaceMode", 0, Smoke::t_enum|Smoke::tf_stack },	//417
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//418
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//419
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//420
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//421
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//422
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//423
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//424
    { "QtMsgType", 46, Smoke::t_enum|Smoke::tf_stack },	//425
    { "QtValidLicenseForActiveQtModule", 46, Smoke::t_enum|Smoke::tf_stack },	//426
    { "QtValidLicenseForCoreModule", 46, Smoke::t_enum|Smoke::tf_stack },	//427
    { "QtValidLicenseForDBusModule", 46, Smoke::t_enum|Smoke::tf_stack },	//428
    { "QtValidLicenseForDeclarativeModule", 46, Smoke::t_enum|Smoke::tf_stack },	//429
    { "QtValidLicenseForGuiModule", 46, Smoke::t_enum|Smoke::tf_stack },	//430
    { "QtValidLicenseForHelpModule", 46, Smoke::t_enum|Smoke::tf_stack },	//431
    { "QtValidLicenseForMultimediaModule", 46, Smoke::t_enum|Smoke::tf_stack },	//432
    { "QtValidLicenseForNetworkModule", 46, Smoke::t_enum|Smoke::tf_stack },	//433
    { "QtValidLicenseForOpenGLModule", 46, Smoke::t_enum|Smoke::tf_stack },	//434
    { "QtValidLicenseForOpenVGModule", 46, Smoke::t_enum|Smoke::tf_stack },	//435
    { "QtValidLicenseForQt3SupportLightModule", 46, Smoke::t_enum|Smoke::tf_stack },	//436
    { "QtValidLicenseForQt3SupportModule", 46, Smoke::t_enum|Smoke::tf_stack },	//437
    { "QtValidLicenseForScriptModule", 46, Smoke::t_enum|Smoke::tf_stack },	//438
    { "QtValidLicenseForScriptToolsModule", 46, Smoke::t_enum|Smoke::tf_stack },	//439
    { "QtValidLicenseForSqlModule", 46, Smoke::t_enum|Smoke::tf_stack },	//440
    { "QtValidLicenseForSvgModule", 46, Smoke::t_enum|Smoke::tf_stack },	//441
    { "QtValidLicenseForTestModule", 46, Smoke::t_enum|Smoke::tf_stack },	//442
    { "QtValidLicenseForXmlModule", 46, Smoke::t_enum|Smoke::tf_stack },	//443
    { "QtValidLicenseForXmlPatternsModule", 46, Smoke::t_enum|Smoke::tf_stack },	//444
    { "_XEvent*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//445
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//446
    { "bool*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//447
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//448
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//449
    { "const QBitArray&", 4, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//450
    { "const QBrush&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//451
    { "const QBrush*", 6, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//452
    { "const QByteArray", 7, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//453
    { "const QByteArray&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//454
    { "const QChar&", 8, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//455
    { "const QColor&", 11, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//456
    { "const QCursor&", 13, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//457
    { "const QDate&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//458
    { "const QDateTime&", 16, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//459
    { "const QDeclarativeError&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//460
    { "const QDeclarativeImageProvider&", 26, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//461
    { "const QDeclarativeListReference&", 29, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//462
    { "const QDeclarativeNetworkAccessManagerFactory&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//463
    { "const QDeclarativeParserStatus&", 31, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//464
    { "const QDeclarativeProperty&", 32, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//465
    { "const QDeclarativeScriptString&", 34, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//466
    { "const QDir&", 36, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//467
    { "const QEasingCurve&", 41, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//468
    { "const QEvent*", 42, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//469
    { "const QFont&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//470
    { "const QGraphicsItem*", 47, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//471
    { "const QHashDummyValue&", 55, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//472
    { "const QHostAddress&", 57, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//473
    { "const QIcon&", 58, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//474
    { "const QImage&", 59, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//475
    { "const QItemSelectionRange&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//476
    { "const QKeySequence&", 64, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//477
    { "const QLatin1String&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//478
    { "const QLine&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//479
    { "const QLineF&", 67, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//480
    { "const QList<QDeclarativeError>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//481
    { "const QListWidgetItem&", 68, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//482
    { "const QLocale&", 69, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//483
    { "const QMargins&", 70, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//484
    { "const QMatrix&", 71, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//485
    { "const QMatrix4x4&", 72, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//486
    { "const QMetaObject&", 74, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//487
    { "const QMetaObject*", 74, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//488
    { "const QModelIndex&", 76, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//489
    { "const QNetworkCacheMetaData&", 80, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//490
    { "const QNetworkCookie&", 81, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//491
    { "const QNetworkInterface&", 82, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//492
    { "const QObject*", 83, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//493
    { "const QPainterPath&", 87, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//494
    { "const QPalette&", 88, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//495
    { "const QPen&", 89, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//496
    { "const QPersistentModelIndex&", 90, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//497
    { "const QPicture&", 91, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//498
    { "const QPixmap&", 92, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//499
    { "const QPoint", 93, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//500
    { "const QPoint&", 93, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//501
    { "const QPointF", 94, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//502
    { "const QPointF&", 94, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//503
    { "const QPolygon&", 95, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//504
    { "const QPolygonF&", 96, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//505
    { "const QQuaternion", 97, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//506
    { "const QQuaternion&", 97, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//507
    { "const QRect&", 98, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//508
    { "const QRectF&", 99, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//509
    { "const QRegExp&", 100, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//510
    { "const QRegExp*", 100, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//511
    { "const QRegion&", 101, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//512
    { "const QScriptContextInfo&", 103, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//513
    { "const QScriptString&", 105, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//514
    { "const QScriptValue&", 106, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//515
    { "const QSize", 108, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//516
    { "const QSize&", 108, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//517
    { "const QSizeF", 109, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//518
    { "const QSizeF&", 109, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//519
    { "const QSizePolicy&", 110, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//520
    { "const QSplitter&", 111, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//521
    { "const QSslCertificate&", 112, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//522
    { "const QSslCipher&", 113, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//523
    { "const QSslError&", 114, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//524
    { "const QSslError::SslError&", 114, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//525
    { "const QSslKey&", 115, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//526
    { "const QStandardItem&", 116, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//527
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//528
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//529
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//530
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//531
    { "const QStringRef&", 118, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//532
    { "const QStyleOption&", 120, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//533
    { "const QStyleOption::OptionType&", 120, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//534
    { "const QStyleOptionGraphicsItem*", 121, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//535
    { "const QTableWidgetItem&", 122, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//536
    { "const QTextFormat&", 125, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//537
    { "const QTextLength&", 126, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//538
    { "const QTileRules&", 129, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//539
    { "const QTime&", 130, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//540
    { "const QTransform&", 132, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//541
    { "const QTreeWidgetItem&", 133, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//542
    { "const QUrl&", 134, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//543
    { "const QUuid&", 135, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//544
    { "const QVariant&", 136, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//545
    { "const QVariant::Type", 136, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//546
    { "const QVariantComparisonHelper&", 137, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//547
    { "const QVector2D", 138, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//548
    { "const QVector2D&", 138, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//549
    { "const QVector3D", 139, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//550
    { "const QVector3D&", 139, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//551
    { "const QVector4D", 140, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//552
    { "const QVector4D&", 140, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//553
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//554
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//555
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//556
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//557
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//558
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//559
    { "int*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//560
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//561
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//562
    { "qreal", 0, Smoke::t_double|Smoke::tf_stack },	//563
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//564
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//565
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//566
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//567
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//568
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//569
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//570
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//571
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//572
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//573
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//574
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//575
    { "void(*)(const QScriptValue&,void*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//576
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//577
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//578
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//579
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    554, 0,	//1  const char*
    554, 554, 0,	//3  const char*, const char*
    554, 554, 559, 0,	//6  const char*, const char*, int
    226, 559, 578, 0,	//10  QMetaObject::Call, int, void**
    235, 0,	//14  QObject*
    39, 235, 0,	//16  QDeclarativeEngine*, QObject*
    39, 529, 235, 0,	//19  QDeclarativeEngine*, const QString&, QObject*
    39, 543, 235, 0,	//23  QDeclarativeEngine*, const QUrl&, QObject*
    38, 0,	//27  QDeclarativeContext*
    543, 0,	//29  const QUrl&
    454, 543, 0,	//31  const QByteArray&, const QUrl&
    36, 0,	//34  QDeclarativeComponent::Status
    563, 0,	//36  qreal
    235, 515, 0,	//38  QObject*, const QScriptValue&
    39, 0,	//41  QDeclarativeEngine*
    39, 529, 0,	//43  QDeclarativeEngine*, const QString&
    39, 543, 0,	//46  QDeclarativeEngine*, const QUrl&
    38, 235, 0,	//49  QDeclarativeContext*, QObject*
    529, 0,	//52  const QString&
    529, 235, 0,	//54  const QString&, QObject*
    529, 545, 0,	//57  const QString&, const QVariant&
    530, 0,	//60  const QStringList&
    529, 529, 294, 0,	//62  const QString&, const QString&, QString*
    54, 0,	//66  QDeclarativeNetworkAccessManagerFactory*
    529, 46, 0,	//68  const QString&, QDeclarativeImageProvider*
    446, 0,	//71  bool
    493, 0,	//73  const QObject*
    235, 38, 0,	//75  QObject*, QDeclarativeContext*
    235, 40, 0,	//78  QObject*, QDeclarativeEngine::ObjectOwnership
    481, 0,	//81  const QList<QDeclarativeError>&
    460, 0,	//83  const QDeclarativeError&
    559, 0,	//85  int
    38, 235, 529, 235, 0,	//87  QDeclarativeContext*, QObject*, const QString&, QObject*
    529, 559, 0,	//92  const QString&, int
    447, 0,	//95  bool*
    38, 235, 529, 0,	//97  QDeclarativeContext*, QObject*, const QString&
    39, 554, 0,	//101  QDeclarativeEngine*, const char*
    47, 0,	//104  QDeclarativeImageProvider::ImageType
    529, 279, 517, 0,	//106  const QString&, QSize*, const QSize&
    461, 0,	//110  const QDeclarativeImageProvider&
    49, 0,	//112  QDeclarativeItem*
    557, 0,	//114  double
    519, 0,	//116  const QSizeF&
    50, 0,	//118  QDeclarativeItem::TransformOrigin
    13, 0,	//120  QAccessible::Role
    242, 535, 346, 0,	//122  QPainter*, const QStyleOptionGraphicsItem*, QWidget*
    515, 557, 557, 0,	//126  const QScriptValue&, double, double
    557, 557, 0,	//130  double, double
    509, 0,	//133  const QRectF&
    79, 0,	//135  QEvent*
    180, 545, 0,	//137  QGraphicsItem::GraphicsItemChange, const QVariant&
    203, 0,	//140  QKeyEvent*
    201, 0,	//142  QInputMethodEvent*
    384, 0,	//144  Qt::InputMethodQuery
    509, 509, 0,	//146  const QRectF&, const QRectF&
    235, 554, 39, 0,	//149  QObject*, const char*, QDeclarativeEngine*
    462, 0,	//153  const QDeclarativeListReference&
    235, 554, 0,	//155  QObject*, const char*
    463, 0,	//158  const QDeclarativeNetworkAccessManagerFactory&
    464, 0,	//160  const QDeclarativeParserStatus&
    235, 39, 0,	//162  QObject*, QDeclarativeEngine*
    235, 529, 0,	//165  QObject*, const QString&
    235, 529, 38, 0,	//168  QObject*, const QString&, QDeclarativeContext*
    235, 529, 39, 0,	//172  QObject*, const QString&, QDeclarativeEngine*
    465, 0,	//176  const QDeclarativeProperty&
    545, 0,	//178  const QVariant&
    235, 529, 545, 0,	//180  QObject*, const QString&, const QVariant&
    235, 529, 545, 38, 0,	//184  QObject*, const QString&, const QVariant&, QDeclarativeContext*
    235, 529, 545, 39, 0,	//189  QObject*, const QString&, const QVariant&, QDeclarativeEngine*
    235, 559, 0,	//194  QObject*, int
    466, 0,	//197  const QDeclarativeScriptString&
    346, 0,	//199  QWidget*
    543, 346, 0,	//201  const QUrl&, QWidget*
    66, 0,	//204  QDeclarativeView::ResizeMode
    277, 0,	//206  QSize
    67, 0,	//208  QDeclarativeView::Status
    267, 0,	//210  QResizeEvent*
    241, 0,	//212  QPaintEvent*
    326, 0,	//214  QTimerEvent*
    235, 79, 0,	//216  QObject*, QEvent*
    450, 450, 0,	//219  const QBitArray&, const QBitArray&
    497, 0,	//222  const QPersistentModelIndex&
    369, 559, 0,	//224  Qt::DockWidgetArea, int
    174, 174, 0,	//227  QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag
    501, 557, 0,	//230  const QPoint&, double
    34, 476, 0,	//233  QDebug, const QItemSelectionRange&
    34, 526, 0,	//236  QDebug, const QSslKey&
    557, 503, 0,	//239  double, const QPointF&
    394, 163, 0,	//242  Qt::MouseButton, QFlags<Qt::MouseButton>
    484, 484, 0,	//245  const QMargins&, const QMargins&
    34, 533, 0,	//248  QDebug, const QStyleOption&
    193, 473, 0,	//251  QHostAddress::SpecialAddress, const QHostAddress&
    557, 519, 0,	//254  double, const QSizeF&
    70, 559, 0,	//257  QDir::SortFlag, int
    2, 2, 0,	//260  QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger
    34, 497, 0,	//263  QDebug, const QPersistentModelIndex&
    30, 197, 0,	//266  QDataStream&, QImage&
    30, 520, 0,	//269  QDataStream&, const QSizePolicy&
    383, 559, 0,	//272  Qt::InputMethodHint, int
    307, 559, 0,	//275  QStyleOptionToolBar::ToolBarFeature, int
    34, 541, 0,	//278  QDebug, const QTransform&
    449, 554, 0,	//281  char*, const char*
    508, 508, 0,	//284  const QRect&, const QRect&
    517, 517, 0,	//287  const QSize&, const QSize&
    30, 541, 0,	//290  QDataStream&, const QTransform&
    313, 313, 0,	//293  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    34, 501, 0,	//296  QDebug, const QPoint&
    486, 486, 0,	//299  const QMatrix4x4&, const QMatrix4x4&
    567, 0,	//302  unsigned char
    69, 92, 0,	//304  QDir::Filter, QFlags<QDir::Filter>
    553, 553, 0,	//307  const QVector4D&, const QVector4D&
    503, 485, 0,	//310  const QPointF&, const QMatrix&
    240, 240, 0,	//313  QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature
    479, 541, 0,	//316  const QLine&, const QTransform&
    549, 549, 0,	//319  const QVector2D&, const QVector2D&
    80, 97, 0,	//322  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    421, 168, 0,	//325  Qt::WindowState, QFlags<Qt::WindowState>
    519, 557, 0,	//328  const QSizeF&, double
    30, 479, 0,	//331  QDataStream&, const QLine&
    69, 559, 0,	//334  QDir::Filter, int
    541, 541, 0,	//337  const QTransform&, const QTransform&
    569, 0,	//340  unsigned int
    82, 99, 0,	//342  QFileDialog::Option, QFlags<QFileDialog::Option>
    519, 519, 0,	//345  const QSizeF&, const QSizeF&
    454, 454, 0,	//348  const QByteArray&, const QByteArray&
    478, 532, 0,	//351  const QLatin1String&, const QStringRef&
    507, 0,	//354  const QQuaternion&
    3, 3, 0,	//356  QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption
    30, 269, 0,	//359  QDataStream&, QScriptContextInfo&
    394, 394, 0,	//362  Qt::MouseButton, Qt::MouseButton
    34, 546, 0,	//365  QDebug, const QVariant::Type
    545, 547, 0,	//368  const QVariant&, const QVariantComparisonHelper&
    507, 557, 0,	//371  const QQuaternion&, double
    18, 18, 0,	//374  QBool, QBool
    306, 306, 0,	//377  QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget
    305, 305, 0,	//380  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature
    172, 172, 0,	//383  QFontComboBox::FontFilter, QFontComboBox::FontFilter
    349, 154, 0,	//386  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    532, 0,	//389  const QStringRef&
    317, 317, 0,	//391  QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag
    295, 295, 0,	//394  QString::Null, QString::Null
    34, 470, 0,	//397  QDebug, const QFont&
    34, 504, 0,	//400  QDebug, const QPolygon&
    30, 509, 0,	//403  QDataStream&, const QRectF&
    30, 216, 0,	//406  QDataStream&, QLocale&
    302, 559, 0,	//409  QStyle::SubControl, int
    72, 72, 0,	//412  QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature
    22, 529, 0,	//415  QChar, const QString&
    232, 119, 0,	//418  QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>
    288, 131, 0,	//421  QSsl::SslOption, QFlags<QSsl::SslOption>
    274, 128, 0,	//424  QScriptValue::PropertyFlag, QFlags<QScriptValue::PropertyFlag>
    194, 109, 0,	//427  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    242, 508, 495, 446, 559, 452, 0,	//430  QPainter*, const QRect&, const QPalette&, bool, int, const QBrush*
    242, 508, 495, 0,	//437  QPainter*, const QRect&, const QPalette&
    242, 508, 495, 446, 0,	//441  QPainter*, const QRect&, const QPalette&, bool
    242, 508, 495, 446, 559, 0,	//446  QPainter*, const QRect&, const QPalette&, bool, int
    549, 0,	//452  const QVector2D&
    69, 69, 0,	//454  QDir::Filter, QDir::Filter
    30, 495, 0,	//457  QDataStream&, const QPalette&
    34, 540, 0,	//460  QDebug, const QTime&
    314, 143, 0,	//463  QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>
    507, 507, 0,	//466  const QQuaternion&, const QQuaternion&
    30, 454, 0,	//469  QDataStream&, const QByteArray&
    34, 458, 0,	//472  QDebug, const QDate&
    450, 0,	//475  const QBitArray&
    315, 144, 0,	//477  QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>
    555, 568, 559, 0,	//480  const unsigned char*, unsigned char*, int
    14, 88, 0,	//484  QAccessible::StateFlag, QFlags<QAccessible::StateFlag>
    505, 541, 0,	//487  const QPolygonF&, const QTransform&
    545, 338, 577, 0,	//490  const QVariant&, QVariant::Type, void*
    572, 0,	//494  unsigned short
    236, 0,	//496  QObject*(*)()
    561, 0,	//498  long
    411, 411, 0,	//500  Qt::ToolBarArea, Qt::ToolBarArea
    562, 0,	//503  long long
    34, 505, 0,	//505  QDebug, const QPolygonF&
    249, 125, 0,	//508  QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>
    242, 559, 559, 559, 559, 495, 446, 452, 0,	//511  QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*
    242, 559, 559, 559, 559, 495, 0,	//520  QPainter*, int, int, int, int, const QPalette&
    242, 559, 559, 559, 559, 495, 446, 0,	//527  QPainter*, int, int, int, int, const QPalette&, bool
    347, 559, 0,	//535  QWidget::RenderFlag, int
    34, 456, 0,	//538  QDebug, const QColor&
    330, 559, 0,	//541  QTreeWidgetItemIterator::IteratorFlag, int
    371, 559, 0,	//544  Qt::DropAction, int
    242, 559, 559, 559, 559, 495, 446, 559, 559, 452, 0,	//547  QPainter*, int, int, int, int, const QPalette&, bool, int, int, const QBrush*
    242, 559, 559, 559, 559, 495, 446, 559, 0,	//558  QPainter*, int, int, int, int, const QPalette&, bool, int
    242, 559, 559, 559, 559, 495, 446, 559, 559, 0,	//567  QPainter*, int, int, int, int, const QPalette&, bool, int, int
    30, 530, 0,	//577  QDataStream&, const QStringList&
    1, 1, 0,	//580  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    30, 247, 0,	//583  QDataStream&, QPen&
    558, 0,	//586  float
    174, 102, 0,	//588  QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>
    349, 349, 0,	//591  Qt::AlignmentFlag, Qt::AlignmentFlag
    30, 26, 0,	//594  QDataStream&, QColor&
    71, 559, 0,	//597  QDirIterator::IteratorFlag, int
    30, 510, 0,	//600  QDataStream&, const QRegExp&
    268, 126, 0,	//603  QScriptClass::QueryFlag, QFlags<QScriptClass::QueryFlag>
    334, 559, 0,	//606  QUrl::FormattingOption, int
    71, 94, 0,	//609  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    454, 554, 0,	//612  const QByteArray&, const char*
    176, 176, 0,	//615  QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag
    173, 559, 0,	//618  QFontDialog::FontDialogOption, int
    34, 519, 0,	//621  QDebug, const QSizeF&
    369, 155, 0,	//624  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    305, 559, 0,	//627  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int
    271, 559, 0,	//630  QScriptEngine::QObjectWrapOption, int
    479, 485, 0,	//633  const QLine&, const QMatrix&
    30, 473, 0,	//636  QDataStream&, const QHostAddress&
    239, 239, 0,	//639  QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag
    559, 559, 559, 0,	//642  int, int, int
    480, 485, 0,	//646  const QLineF&, const QMatrix&
    396, 396, 0,	//649  Qt::Orientation, Qt::Orientation
    494, 485, 0,	//652  const QPainterPath&, const QMatrix&
    411, 559, 0,	//655  Qt::ToolBarArea, int
    551, 551, 0,	//658  const QVector3D&, const QVector3D&
    30, 255, 0,	//661  QDataStream&, QPointF&
    30, 477, 0,	//664  QDataStream&, const QKeySequence&
    392, 559, 0,	//667  Qt::MatchFlag, int
    30, 536, 0,	//670  QDataStream&, const QTableWidgetItem&
    34, 180, 0,	//673  QDebug, QGraphicsItem::GraphicsItemChange
    34, 468, 0,	//676  QDebug, const QEasingCurve&
    202, 559, 0,	//679  QItemSelectionModel::SelectionFlag, int
    30, 457, 0,	//682  QDataStream&, const QCursor&
    224, 118, 0,	//685  QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>
    376, 376, 0,	//688  Qt::GestureFlag, Qt::GestureFlag
    30, 31, 0,	//691  QDataStream&, QDate&
    30, 498, 0,	//694  QDataStream&, const QPicture&
    194, 194, 0,	//697  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    224, 224, 0,	//700  QMessageBox::StandardButton, QMessageBox::StandardButton
    80, 559, 0,	//703  QEventLoop::ProcessEventsFlag, int
    448, 454, 0,	//706  char, const QByteArray&
    30, 344, 0,	//709  QDataStream&, QVector4D&
    223, 117, 0,	//712  QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>
    34, 133, 0,	//715  QDebug, QFlags<QStyle::StateFlag>
    554, 454, 0,	//718  const char*, const QByteArray&
    173, 173, 0,	//721  QFontDialog::FontDialogOption, QFontDialog::FontDialogOption
    30, 335, 0,	//724  QDataStream&, QUuid&
    30, 21, 0,	//727  QDataStream&, QByteArray&
    30, 337, 0,	//730  QDataStream&, QVariant&
    30, 542, 0,	//733  QDataStream&, const QTreeWidgetItem&
    30, 264, 0,	//736  QDataStream&, QRegExp&
    243, 243, 0,	//739  QPainter::RenderHint, QPainter::RenderHint
    503, 503, 0,	//742  const QPointF&, const QPointF&
    541, 557, 0,	//745  const QTransform&, double
    321, 521, 0,	//748  QTextStream&, const QSplitter&
    6, 86, 0,	//751  QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>
    549, 557, 0,	//754  const QVector2D&, double
    30, 513, 0,	//757  QDataStream&, const QScriptContextInfo&
    330, 330, 0,	//760  QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag
    515, 559, 577, 0,	//763  const QScriptValue&, int, void*
    34, 492, 0,	//767  QDebug, const QNetworkInterface&
    303, 303, 0,	//770  QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature
    532, 532, 0,	//773  const QStringRef&, const QStringRef&
    553, 557, 0,	//776  const QVector4D&, double
    303, 559, 0,	//779  QStyleOptionButton::ButtonFeature, int
    81, 559, 0,	//782  QFile::Permission, int
    34, 480, 0,	//785  QDebug, const QLineF&
    22, 22, 0,	//788  QChar, QChar
    560, 493, 488, 446, 0,	//791  int*, const QObject*, const QMetaObject*, bool
    486, 557, 0,	//796  const QMatrix4x4&, double
    494, 541, 0,	//799  const QPainterPath&, const QTransform&
    30, 451, 0,	//802  QDataStream&, const QBrush&
    34, 290, 0,	//805  QDebug, QSslCertificate::SubjectInfo
    222, 116, 0,	//808  QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>
    554, 554, 569, 0,	//811  const char*, const char*, unsigned int
    454, 0,	//815  const QByteArray&
    6, 6, 0,	//817  QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag
    200, 559, 0,	//820  QInputDialog::InputDialogOption, int
    301, 559, 0,	//823  QStyle::StateFlag, int
    34, 92, 0,	//826  QDebug, QFlags<QDir::Filter>
    473, 0,	//829  const QHostAddress&
    554, 559, 0,	//831  const char*, int
    30, 266, 0,	//834  QDataStream&, QRegion&
    243, 559, 0,	//837  QPainter::RenderHint, int
    306, 559, 0,	//840  QStyleOptionTab::CornerWidget, int
    348, 348, 0,	//843  QWizard::WizardOption, QWizard::WizardOption
    232, 232, 0,	//846  QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability
    323, 148, 0,	//849  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    30, 17, 0,	//852  QDataStream&, QBitArray&
    348, 153, 0,	//855  QWizard::WizardOption, QFlags<QWizard::WizardOption>
    503, 557, 0,	//858  const QPointF&, double
    240, 123, 0,	//861  QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>
    181, 181, 0,	//864  QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag
    30, 231, 0,	//867  QDataStream&, QNetworkCacheMetaData&
    22, 0,	//870  QChar
    242, 559, 559, 559, 559, 495, 446, 559, 452, 0,	//872  QPainter*, int, int, int, int, const QPalette&, bool, int, const QBrush*
    1, 83, 0,	//882  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    575, 0,	//885  void(*)(QtMsgType,const char*)
    30, 458, 0,	//887  QDataStream&, const QDate&
    493, 529, 487, 0,	//890  const QObject*, const QString&, const QMetaObject&
    559, 493, 446, 0,	//894  int, const QObject*, bool
    559, 493, 0,	//898  int, const QObject*
    392, 162, 0,	//901  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    551, 486, 0,	//904  const QVector3D&, const QMatrix4x4&
    376, 559, 0,	//907  Qt::GestureFlag, int
    242, 508, 495, 446, 452, 0,	//910  QPainter*, const QRect&, const QPalette&, bool, const QBrush*
    313, 559, 0,	//916  QTextCodec::ConversionFlag, int
    282, 282, 0,	//919  QSizePolicy::ControlType, QSizePolicy::ControlType
    172, 559, 0,	//922  QFontComboBox::FontFilter, int
    314, 559, 0,	//925  QTextDocument::FindFlag, int
    30, 29, 0,	//928  QDataStream&, QCursor&
    389, 161, 0,	//931  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    551, 557, 0,	//934  const QVector3D&, double
    392, 392, 0,	//937  Qt::MatchFlag, Qt::MatchFlag
    30, 328, 0,	//940  QDataStream&, QTransform&
    504, 485, 0,	//943  const QPolygon&, const QMatrix&
    577, 0,	//946  void*
    34, 215, 0,	//948  QDebug, QLocalSocket::LocalSocketState
    306, 138, 0,	//951  QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>
    529, 295, 0,	//954  const QString&, QString::Null
    34, 496, 0,	//957  QDebug, const QPen&
    308, 308, 0,	//960  QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature
    206, 559, 0,	//963  QLibrary::LoadHint, int
    30, 280, 0,	//966  QDataStream&, QSizeF&
    532, 554, 0,	//969  const QStringRef&, const char*
    242, 508, 495, 446, 559, 559, 452, 0,	//972  QPainter*, const QRect&, const QPalette&, bool, int, int, const QBrush*
    242, 508, 495, 446, 559, 559, 0,	//980  QPainter*, const QRect&, const QPalette&, bool, int, int
    315, 315, 0,	//987  QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag
    239, 559, 0,	//990  QPaintEngine::DirtyFlag, int
    181, 559, 0,	//993  QGraphicsItem::GraphicsItemFlag, int
    503, 0,	//996  const QPointF&
    577, 566, 566, 566, 0,	//998  void*, size_t, size_t, size_t
    386, 386, 0,	//1003  Qt::ItemFlag, Qt::ItemFlag
    30, 499, 0,	//1006  QDataStream&, const QPixmap&
    571, 0,	//1009  unsigned long long
    422, 169, 0,	//1011  Qt::WindowType, QFlags<Qt::WindowType>
    34, 517, 0,	//1014  QDebug, const QSize&
    503, 541, 0,	//1017  const QPointF&, const QTransform&
    386, 160, 0,	//1020  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    34, 551, 0,	//1023  QDebug, const QVector3D&
    414, 167, 0,	//1026  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    72, 95, 0,	//1029  QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>
    176, 559, 0,	//1032  QGraphicsEffect::ChangeFlag, int
    242, 559, 559, 559, 559, 456, 559, 452, 0,	//1035  QPainter*, int, int, int, int, const QColor&, int, const QBrush*
    242, 559, 559, 559, 559, 456, 0,	//1044  QPainter*, int, int, int, int, const QColor&
    242, 559, 559, 559, 559, 456, 559, 0,	//1051  QPainter*, int, int, int, int, const QColor&, int
    233, 233, 0,	//1059  QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag
    34, 491, 0,	//1062  QDebug, const QNetworkCookie&
    30, 543, 0,	//1065  QDataStream&, const QUrl&
    577, 559, 566, 0,	//1068  void*, int, size_t
    282, 130, 0,	//1072  QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>
    30, 192, 0,	//1075  QDataStream&, QHostAddress&
    30, 545, 0,	//1078  QDataStream&, const QVariant&
    30, 208, 0,	//1081  QDataStream&, QLine&
    454, 559, 0,	//1084  const QByteArray&, int
    274, 559, 0,	//1087  QScriptValue::PropertyFlag, int
    6, 559, 0,	//1090  QAbstractSpinBox::StepEnabledFlag, int
    34, 549, 0,	//1093  QDebug, const QVector2D&
    389, 389, 0,	//1096  Qt::KeyboardModifier, Qt::KeyboardModifier
    486, 553, 0,	//1099  const QMatrix4x4&, const QVector4D&
    14, 559, 0,	//1102  QAccessible::StateFlag, int
    242, 508, 456, 559, 452, 0,	//1105  QPainter*, const QRect&, const QColor&, int, const QBrush*
    242, 508, 456, 0,	//1111  QPainter*, const QRect&, const QColor&
    242, 508, 456, 559, 0,	//1115  QPainter*, const QRect&, const QColor&, int
    249, 249, 0,	//1120  QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag
    33, 559, 0,	//1123  QDateTimeEdit::Section, int
    574, 0,	//1126  void(*)()
    349, 559, 0,	//1128  Qt::AlignmentFlag, int
    501, 485, 0,	//1131  const QPoint&, const QMatrix&
    389, 559, 0,	//1134  Qt::KeyboardModifier, int
    386, 559, 0,	//1137  Qt::ItemFlag, int
    381, 158, 0,	//1140  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    30, 496, 0,	//1143  QDataStream&, const QPen&
    501, 501, 0,	//1146  const QPoint&, const QPoint&
    296, 559, 0,	//1149  QString::SectionFlag, int
    422, 559, 0,	//1152  Qt::WindowType, int
    347, 347, 0,	//1155  QWidget::RenderFlag, QWidget::RenderFlag
    532, 529, 0,	//1158  const QStringRef&, const QString&
    242, 508, 484, 499, 508, 484, 539, 96, 0,	//1161  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&, QFlags<QDrawBorderPixmap::DrawingHint>
    242, 508, 484, 499, 508, 484, 0,	//1170  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&
    242, 508, 484, 499, 508, 484, 539, 0,	//1177  QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&
    472, 472, 0,	//1185  const QHashDummyValue&, const QHashDummyValue&
    554, 569, 0,	//1188  const char*, unsigned int
    334, 334, 0,	//1191  QUrl::FormattingOption, QUrl::FormattingOption
    27, 559, 0,	//1194  QColorDialog::ColorDialogOption, int
    30, 195, 0,	//1197  QDataStream&, QIcon&
    232, 559, 0,	//1200  QNetworkConfigurationManager::Capability, int
    30, 504, 0,	//1203  QDataStream&, const QPolygon&
    414, 559, 0,	//1206  Qt::TouchPointState, int
    347, 152, 0,	//1209  QWidget::RenderFlag, QFlags<QWidget::RenderFlag>
    34, 484, 0,	//1212  QDebug, const QMargins&
    317, 559, 0,	//1215  QTextFormat::PageBreakFlag, int
    198, 559, 0,	//1218  QImageIOPlugin::Capability, int
    34, 105, 0,	//1221  QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>
    189, 559, 0,	//1224  QGraphicsView::CacheModeFlag, int
    2, 559, 0,	//1227  QAbstractItemView::EditTrigger, int
    34, 473, 0,	//1230  QDebug, const QHostAddress&
    34, 553, 0,	//1233  QDebug, const QVector4D&
    321, 322, 0,	//1236  QTextStream&, QTextStream&(*)(QTextStream&)
    348, 559, 0,	//1239  QWizard::WizardOption, int
    82, 559, 0,	//1242  QFileDialog::Option, int
    301, 133, 0,	//1245  QStyle::StateFlag, QFlags<QStyle::StateFlag>
    486, 501, 0,	//1248  const QMatrix4x4&, const QPoint&
    270, 559, 556, 0,	//1251  QScriptEngine*, int, const void*
    308, 140, 0,	//1255  QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>
    30, 78, 0,	//1258  QDataStream&, QEasingCurve&
    183, 106, 0,	//1261  QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>
    222, 222, 0,	//1264  QMdiArea::AreaOption, QMdiArea::AreaOption
    30, 291, 0,	//1267  QDataStream&, QStandardItem&
    30, 480, 0,	//1270  QDataStream&, const QLineF&
    81, 98, 0,	//1273  QFile::Permission, QFlags<QFile::Permission>
    240, 559, 0,	//1276  QPaintEngine::PaintEngineFeature, int
    34, 494, 0,	//1279  QDebug, const QPainterPath&
    449, 554, 569, 0,	//1282  char*, const char*, unsigned int
    27, 89, 0,	//1286  QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>
    30, 19, 0,	//1289  QDataStream&, QBrush&
    30, 503, 0,	//1292  QDataStream&, const QPointF&
    30, 221, 0,	//1295  QDataStream&, QMatrix4x4&
    553, 0,	//1298  const QVector4D&
    34, 486, 0,	//1300  QDebug, const QMatrix4x4&
    190, 559, 0,	//1303  QGraphicsView::OptimizationFlag, int
    30, 316, 0,	//1306  QDataStream&, QTextFormat&
    501, 558, 0,	//1309  const QPoint&, float
    217, 559, 0,	//1312  QLocale::NumberOption, int
    30, 213, 0,	//1315  QDataStream&, QListWidgetItem&
    577, 566, 0,	//1318  void*, size_t
    176, 104, 0,	//1321  QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>
    175, 103, 0,	//1324  QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>
    529, 529, 0,	//1327  const QString&, const QString&
    308, 559, 0,	//1330  QStyleOptionToolButton::ToolButtonFeature, int
    224, 559, 0,	//1333  QMessageBox::StandardButton, int
    554, 554, 554, 559, 0,	//1336  const char*, const char*, const char*, int
    529, 532, 0,	//1341  const QString&, const QStringRef&
    34, 181, 0,	//1344  QDebug, QGraphicsItem::GraphicsItemFlag
    288, 288, 0,	//1347  QSsl::SslOption, QSsl::SslOption
    12, 87, 0,	//1350  QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>
    205, 203, 0,	//1353  QKeySequence::StandardKey, QKeyEvent*
    282, 559, 0,	//1356  QSizePolicy::ControlType, int
    30, 281, 0,	//1359  QDataStream&, QSizePolicy&
    34, 4, 0,	//1362  QDebug, QAbstractSocket::SocketError
    554, 532, 0,	//1365  const char*, const QStringRef&
    331, 150, 0,	//1368  QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>
    30, 219, 0,	//1371  QDataStream&, QMatrix&
    394, 559, 0,	//1374  Qt::MouseButton, int
    305, 137, 0,	//1377  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>
    30, 278, 0,	//1380  QDataStream&, QSize&
    288, 559, 0,	//1383  QSsl::SslOption, int
    71, 71, 0,	//1386  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    383, 383, 0,	//1389  Qt::InputMethodHint, Qt::InputMethodHint
    323, 323, 0,	//1392  QTextStream::NumberFlag, QTextStream::NumberFlag
    486, 503, 0,	//1395  const QMatrix4x4&, const QPointF&
    486, 0,	//1398  const QMatrix4x4&
    3, 85, 0,	//1400  QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>
    557, 549, 0,	//1403  double, const QVector2D&
    200, 200, 0,	//1406  QInputDialog::InputDialogOption, QInputDialog::InputDialogOption
    3, 559, 0,	//1409  QAbstractPrintDialog::PrintDialogOption, int
    30, 339, 0,	//1412  QDataStream&, QVariant::Type&
    408, 165, 0,	//1415  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    30, 551, 0,	//1418  QDataStream&, const QVector3D&
    480, 541, 0,	//1421  const QLineF&, const QTransform&
    34, 523, 0,	//1424  QDebug, const QSslCipher&
    532, 478, 0,	//1427  const QStringRef&, const QLatin1String&
    565, 0,	//1430  signed char
    30, 505, 0,	//1432  QDataStream&, const QPolygonF&
    30, 519, 0,	//1435  QDataStream&, const QSizeF&
    411, 166, 0,	//1438  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    557, 551, 0,	//1441  double, const QVector3D&
    30, 470, 0,	//1444  QDataStream&, const QFont&
    320, 147, 0,	//1447  QTextOption::Flag, QFlags<QTextOption::Flag>
    30, 310, 0,	//1450  QDataStream&, QTableWidgetItem&
    302, 134, 0,	//1453  QStyle::SubControl, QFlags<QStyle::SubControl>
    30, 549, 0,	//1456  QDataStream&, const QVector2D&
    30, 485, 0,	//1459  QDataStream&, const QMatrix&
    243, 124, 0,	//1462  QPainter::RenderHint, QFlags<QPainter::RenderHint>
    206, 206, 0,	//1465  QLibrary::LoadHint, QLibrary::LoadHint
    557, 486, 0,	//1468  double, const QMatrix4x4&
    190, 108, 0,	//1471  QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>
    421, 421, 0,	//1474  Qt::WindowState, Qt::WindowState
    318, 318, 0,	//1477  QTextItem::RenderFlag, QTextItem::RenderFlag
    34, 543, 0,	//1480  QDebug, const QUrl&
    189, 189, 0,	//1483  QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag
    234, 559, 0,	//1486  QNetworkProxy::Capability, int
    334, 151, 0,	//1489  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    30, 259, 0,	//1492  QDataStream&, QPolygonF&
    330, 149, 0,	//1495  QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>
    30, 246, 0,	//1498  QDataStream&, QPalette&
    30, 494, 0,	//1501  QDataStream&, const QPainterPath&
    14, 14, 0,	//1504  QAccessible::StateFlag, QAccessible::StateFlag
    514, 0,	//1507  const QScriptString&
    557, 517, 0,	//1509  double, const QSize&
    203, 205, 0,	//1512  QKeyEvent*, QKeySequence::StandardKey
    81, 81, 0,	//1515  QFile::Permission, QFile::Permission
    489, 0,	//1518  const QModelIndex&
    189, 107, 0,	//1520  QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>
    302, 302, 0,	//1523  QStyle::SubControl, QStyle::SubControl
    234, 121, 0,	//1526  QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>
    34, 479, 0,	//1529  QDebug, const QLine&
    2, 84, 0,	//1532  QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>
    249, 559, 0,	//1535  QPinchGesture::ChangeFlag, int
    30, 260, 0,	//1538  QDataStream&, QQuaternion&
    553, 486, 0,	//1541  const QVector4D&, const QMatrix4x4&
    30, 450, 0,	//1544  QDataStream&, const QBitArray&
    485, 485, 0,	//1547  const QMatrix&, const QMatrix&
    309, 309, 0,	//1550  QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature
    270, 559, 273, 576, 515, 0,	//1553  QScriptEngine*, int, QScriptValue(*)(QScriptEngine*,const void*), void(*)(const QScriptValue&,void*), const QScriptValue&
    577, 556, 566, 0,	//1559  void*, const void*, size_t
    557, 501, 0,	//1563  double, const QPoint&
    218, 115, 0,	//1566  QMainWindow::DockOption, QFlags<QMainWindow::DockOption>
    34, 182, 0,	//1569  QDebug, QGraphicsObject*
    34, 489, 0,	//1572  QDebug, const QModelIndex&
    564, 0,	//1575  short
    34, 459, 0,	//1577  QDebug, const QDateTime&
    223, 223, 0,	//1580  QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption
    30, 501, 0,	//1583  QDataStream&, const QPoint&
    30, 475, 0,	//1586  QDataStream&, const QImage&
    331, 559, 0,	//1589  QUdpSocket::BindFlag, int
    557, 507, 0,	//1592  double, const QQuaternion&
    454, 448, 0,	//1595  const QByteArray&, char
    314, 314, 0,	//1598  QTextDocument::FindFlag, QTextDocument::FindFlag
    34, 477, 0,	//1601  QDebug, const QKeySequence&
    239, 122, 0,	//1604  QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>
    68, 68, 0,	//1607  QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton
    12, 12, 0,	//1610  QAccessible::RelationFlag, QAccessible::RelationFlag
    34, 493, 0,	//1613  QDebug, const QObject*
    268, 268, 0,	//1616  QScriptClass::QueryFlag, QScriptClass::QueryFlag
    183, 183, 0,	//1619  QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer
    34, 469, 0,	//1622  QDebug, const QEvent*
    274, 274, 0,	//1625  QScriptValue::PropertyFlag, QScriptValue::PropertyFlag
    34, 214, 0,	//1628  QDebug, QLocalSocket::LocalSocketError
    558, 558, 0,	//1631  float, float
    30, 171, 0,	//1634  QDataStream&, QFont&
    70, 93, 0,	//1637  QDir::SortFlag, QFlags<QDir::SortFlag>
    449, 566, 554, 573, 0,	//1640  char*, size_t, const char*, va_list
    200, 111, 0,	//1645  QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>
    275, 129, 0,	//1648  QScriptValue::ResolveFlag, QFlags<QScriptValue::ResolveFlag>
    296, 132, 0,	//1651  QString::SectionFlag, QFlags<QString::SectionFlag>
    30, 517, 0,	//1654  QDataStream&, const QSize&
    202, 112, 0,	//1657  QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>
    271, 271, 0,	//1660  QScriptEngine::QObjectWrapOption, QScriptEngine::QObjectWrapOption
    30, 263, 0,	//1663  QDataStream&, QRectF&
    313, 142, 0,	//1666  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    34, 109, 0,	//1669  QDebug, QFlags<QIODevice::OpenModeFlag>
    30, 455, 0,	//1672  QDataStream&, const QChar&
    446, 18, 0,	//1675  bool, QBool
    570, 0,	//1678  unsigned long
    34, 509, 0,	//1680  QDebug, const QRectF&
    174, 559, 0,	//1683  QGestureRecognizer::ResultFlag, int
    504, 541, 0,	//1686  const QPolygon&, const QTransform&
    18, 446, 0,	//1689  QBool, bool
    421, 559, 0,	//1692  Qt::WindowState, int
    309, 141, 0,	//1695  QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>
    30, 319, 0,	//1698  QDataStream&, QTextLength&
    30, 298, 0,	//1701  QDataStream&, QStringList&
    30, 508, 0,	//1704  QDataStream&, const QRect&
    30, 512, 0,	//1707  QDataStream&, const QRegion&
    369, 369, 0,	//1710  Qt::DockWidgetArea, Qt::DockWidgetArea
    34, 485, 0,	//1713  QDebug, const QMatrix&
    175, 559, 0,	//1716  QGraphicsBlurEffect::BlurHint, int
    271, 127, 0,	//1719  QScriptEngine::QObjectWrapOption, QFlags<QScriptEngine::QObjectWrapOption>
    217, 114, 0,	//1722  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    320, 320, 0,	//1725  QTextOption::Flag, QTextOption::Flag
    30, 456, 0,	//1728  QDataStream&, const QColor&
    422, 422, 0,	//1731  Qt::WindowType, Qt::WindowType
    33, 33, 0,	//1734  QDateTimeEdit::Section, QDateTimeEdit::Section
    34, 5, 0,	//1737  QDebug, QAbstractSocket::SocketState
    517, 557, 0,	//1740  const QSize&, double
    486, 551, 0,	//1743  const QMatrix4x4&, const QVector3D&
    295, 529, 0,	//1746  QString::Null, const QString&
    34, 451, 0,	//1749  QDebug, const QBrush&
    70, 70, 0,	//1752  QDir::SortFlag, QDir::SortFlag
    383, 159, 0,	//1755  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    30, 253, 0,	//1758  QDataStream&, QPoint&
    34, 503, 0,	//1761  QDebug, const QPointF&
    493, 529, 511, 487, 212, 0,	//1764  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    304, 304, 0,	//1770  QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature
    30, 32, 0,	//1773  QDataStream&, QDateTime&
    30, 540, 0,	//1776  QDataStream&, const QTime&
    30, 329, 0,	//1779  QDataStream&, QTreeWidgetItem&
    30, 204, 0,	//1782  QDataStream&, QKeySequence&
    275, 275, 0,	//1785  QScriptValue::ResolveFlag, QScriptValue::ResolveFlag
    315, 559, 0,	//1788  QTextEdit::AutoFormattingFlag, int
    30, 544, 0,	//1791  QDataStream&, const QUuid&
    275, 559, 0,	//1794  QScriptValue::ResolveFlag, int
    321, 324, 0,	//1797  QTextStream&, QTextStreamManipulator
    198, 110, 0,	//1800  QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>
    30, 538, 0,	//1803  QDataStream&, const QTextLength&
    512, 541, 0,	//1806  const QRegion&, const QTransform&
    503, 486, 0,	//1809  const QPointF&, const QMatrix4x4&
    34, 177, 0,	//1812  QDebug, QGraphicsItem*
    72, 559, 0,	//1815  QDockWidget::DockWidgetFeature, int
    30, 482, 0,	//1818  QDataStream&, const QListWidgetItem&
    296, 296, 0,	//1821  QString::SectionFlag, QString::SectionFlag
    566, 566, 0,	//1824  size_t, size_t
    183, 559, 0,	//1827  QGraphicsScene::SceneLayer, int
    323, 559, 0,	//1830  QTextStream::NumberFlag, int
    555, 559, 559, 0,	//1833  const unsigned char*, int, int
    555, 559, 0,	//1837  const unsigned char*, int
    194, 559, 0,	//1840  QIODevice::OpenModeFlag, int
    559, 501, 0,	//1843  int, const QPoint&
    34, 534, 0,	//1846  QDebug, const QStyleOption::OptionType&
    376, 157, 0,	//1849  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    30, 527, 0,	//1852  QDataStream&, const QStandardItem&
    505, 485, 0,	//1855  const QPolygonF&, const QMatrix&
    12, 559, 0,	//1858  QAccessible::RelationFlag, int
    501, 0,	//1861  const QPoint&
    30, 257, 0,	//1863  QDataStream&, QPolygon&
    242, 508, 484, 499, 0,	//1866  QPainter*, const QRect&, const QMargins&, const QPixmap&
    34, 460, 0,	//1871  QDebug, const QDeclarativeError&
    172, 100, 0,	//1874  QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>
    268, 559, 0,	//1877  QScriptClass::QueryFlag, int
    82, 82, 0,	//1880  QFileDialog::Option, QFileDialog::Option
    222, 559, 0,	//1883  QMdiArea::AreaOption, int
    34, 49, 0,	//1886  QDebug, QDeclarativeItem*
    235, 554, 515, 515, 0,	//1889  QObject*, const char*, const QScriptValue&, const QScriptValue&
    30, 293, 0,	//1894  QDataStream&, QString&
    33, 90, 0,	//1897  QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>
    68, 91, 0,	//1900  QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>
    242, 501, 501, 495, 446, 559, 559, 0,	//1903  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int, int
    242, 501, 501, 495, 0,	//1911  QPainter*, const QPoint&, const QPoint&, const QPalette&
    242, 501, 501, 495, 446, 0,	//1916  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool
    242, 501, 501, 495, 446, 559, 0,	//1922  QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int
    202, 202, 0,	//1929  QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag
    493, 481, 0,	//1932  const QObject*, const QList<QDeclarativeError>&
    30, 529, 0,	//1935  QDataStream&, const QString&
    30, 468, 0,	//1938  QDataStream&, const QEasingCurve&
    321, 283, 0,	//1941  QTextStream&, QSplitter&
    30, 486, 0,	//1944  QDataStream&, const QMatrix4x4&
    30, 23, 0,	//1947  QDataStream&, QChar&
    30, 553, 0,	//1950  QDataStream&, const QVector4D&
    301, 301, 0,	//1953  QStyle::StateFlag, QStyle::StateFlag
    476, 0,	//1956  const QItemSelectionRange&
    408, 408, 0,	//1958  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    30, 251, 0,	//1961  QDataStream&, QPixmap&
    80, 80, 0,	//1964  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    34, 525, 0,	//1967  QDebug, const QSslError::SslError&
    501, 486, 0,	//1970  const QPoint&, const QMatrix4x4&
    30, 261, 0,	//1973  QDataStream&, QRect&
    1, 559, 0,	//1976  QAbstractFileEngine::FileFlag, int
    173, 101, 0,	//1979  QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>
    190, 190, 0,	//1982  QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag
    34, 522, 0,	//1985  QDebug, const QSslCertificate&
    425, 554, 0,	//1988  QtMsgType, const char*
    381, 559, 0,	//1991  Qt::ImageConversionFlag, int
    551, 0,	//1994  const QVector3D&
    493, 460, 0,	//1996  const QObject*, const QDeclarativeError&
    303, 135, 0,	//1999  QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>
    27, 27, 0,	//2002  QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption
    34, 508, 0,	//2005  QDebug, const QRect&
    30, 474, 0,	//2008  QDataStream&, const QIcon&
    30, 546, 0,	//2011  QDataStream&, const QVariant::Type
    30, 342, 0,	//2014  QDataStream&, QVector3D&
    309, 559, 0,	//2017  QStyleOptionViewItemV2::ViewItemFeature, int
    557, 553, 0,	//2020  double, const QVector4D&
    30, 210, 0,	//2023  QDataStream&, QLineF&
    30, 245, 0,	//2026  QDataStream&, QPainterPath&
    181, 105, 0,	//2029  QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>
    30, 248, 0,	//2032  QDataStream&, QPicture&
    414, 414, 0,	//2035  Qt::TouchPointState, Qt::TouchPointState
    318, 146, 0,	//2038  QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>
    408, 559, 0,	//2041  Qt::TextInteractionFlag, int
    501, 541, 0,	//2044  const QPoint&, const QTransform&
    304, 559, 0,	//2047  QStyleOptionFrameV2::FrameFeature, int
    68, 559, 0,	//2050  QDialogButtonBox::StandardButton, int
    307, 307, 0,	//2053  QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature
    318, 559, 0,	//2056  QTextItem::RenderFlag, int
    30, 340, 0,	//2059  QDataStream&, QVector2D&
    34, 524, 0,	//2062  QDebug, const QSslError&
    448, 0,	//2065  char
    30, 459, 0,	//2067  QDataStream&, const QDateTime&
    233, 120, 0,	//2070  QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>
    218, 559, 0,	//2073  QMainWindow::DockOption, int
    30, 325, 0,	//2076  QDataStream&, QTime&
    317, 145, 0,	//2079  QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>
    501, 559, 0,	//2082  const QPoint&, int
    381, 381, 0,	//2085  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    34, 507, 0,	//2088  QDebug, const QQuaternion&
    30, 490, 0,	//2091  QDataStream&, const QNetworkCacheMetaData&
    331, 331, 0,	//2094  QUdpSocket::BindFlag, QUdpSocket::BindFlag
    304, 136, 0,	//2097  QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>
    30, 537, 0,	//2100  QDataStream&, const QTextFormat&
    371, 156, 0,	//2103  Qt::DropAction, QFlags<Qt::DropAction>
    223, 559, 0,	//2106  QMdiSubWindow::SubWindowOption, int
    371, 371, 0,	//2109  Qt::DropAction, Qt::DropAction
    175, 175, 0,	//2112  QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint
    396, 559, 0,	//2115  Qt::Orientation, int
    198, 198, 0,	//2118  QImageIOPlugin::Capability, QImageIOPlugin::Capability
    30, 507, 0,	//2121  QDataStream&, const QQuaternion&
    34, 467, 0,	//2124  QDebug, const QDir&
    512, 485, 0,	//2127  const QRegion&, const QMatrix&
    34, 512, 0,	//2130  QDebug, const QRegion&
    234, 234, 0,	//2133  QNetworkProxy::Capability, QNetworkProxy::Capability
    558, 501, 0,	//2136  float, const QPoint&
    30, 333, 0,	//2139  QDataStream&, QUrl&
    206, 113, 0,	//2142  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    320, 559, 0,	//2145  QTextOption::Flag, int
    529, 22, 0,	//2148  const QString&, QChar
    559, 559, 559, 559, 0,	//2151  int, int, int, int
    396, 164, 0,	//2156  Qt::Orientation, QFlags<Qt::Orientation>
    307, 139, 0,	//2159  QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>
    218, 218, 0,	//2162  QMainWindow::DockOption, QMainWindow::DockOption
    566, 0,	//2165  size_t
    34, 545, 0,	//2167  QDebug, const QVariant&
    233, 559, 0,	//2170  QNetworkInterface::InterfaceFlag, int
    217, 217, 0,	//2173  QLocale::NumberOption, QLocale::NumberOption
    30, 483, 0,	//2176  QDataStream&, const QLocale&
    471, 387, 0,	//2179  const QGraphicsItem*, Qt::ItemSelectionMode
    494, 387, 0,	//2182  const QPainterPath&, Qt::ItemSelectionMode
    471, 0,	//2185  const QGraphicsItem*
    177, 79, 0,	//2187  QGraphicsItem*, QEvent*
    184, 0,	//2190  QGraphicsSceneContextMenuEvent*
    185, 0,	//2192  QGraphicsSceneDragDropEvent*
    170, 0,	//2194  QFocusEvent*
    186, 0,	//2196  QGraphicsSceneHoverEvent*
    187, 0,	//2198  QGraphicsSceneMouseEvent*
    188, 0,	//2200  QGraphicsSceneWheelEvent*
    179, 0,	//2202  QGraphicsItem::Extension
    179, 545, 0,	//2204  QGraphicsItem::Extension, const QVariant&
    28, 0,	//2207  QContextMenuEvent*
    73, 0,	//2209  QDragEnterEvent*
    74, 0,	//2211  QDragLeaveEvent*
    75, 0,	//2213  QDragMoveEvent*
    77, 0,	//2215  QDropEvent*
    228, 0,	//2217  QMouseEvent*
    345, 0,	//2219  QWheelEvent*
    559, 559, 0,	//2221  int, int
    276, 0,	//2224  QShowEvent*
    242, 509, 0,	//2226  QPainter*, const QRectF&
    242, 559, 178, 535, 0,	//2229  QPainter*, int, QGraphicsItem**, const QStyleOptionGraphicsItem*
    24, 0,	//2234  QChildEvent*
    229, 0,	//2236  QMoveEvent*
    25, 0,	//2238  QCloseEvent*
    311, 0,	//2240  QTabletEvent*
    15, 0,	//2242  QActionEvent*
    191, 0,	//2244  QHideEvent*
    445, 0,	//2246  _XEvent*
    237, 0,	//2248  QPaintDevice::PaintDeviceMetric
    300, 0,	//2250  QStyle&
    495, 0,	//2252  const QPalette&
    470, 0,	//2254  const QFont&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "AnchorUnderMouse",	//1
    "AnchorViewCenter",	//2
    "Bottom",	//3
    "BottomLeft",	//4
    "BottomRight",	//5
    "BoundingRectViewportUpdate",	//6
    "Box",	//7
    "CacheBackground",	//8
    "CacheNone",	//9
    "Center",	//10
    "CppOwnership",	//11
    "DeviceCoordinateCache",	//12
    "DontAdjustForAntialiasing",	//13
    "DontClipPainter",	//14
    "DontSavePainterState",	//15
    "DrawChildren",	//16
    "DrawWindowBackground",	//17
    "Error",	//18
    "FullViewportUpdate",	//19
    "HLine",	//20
    "IgnoreMask",	//21
    "Image",	//22
    "IndirectPainting",	//23
    "Invalid",	//24
    "InvalidCategory",	//25
    "ItemAcceptsInputMethod",	//26
    "ItemChildAddedChange",	//27
    "ItemChildRemovedChange",	//28
    "ItemClipsChildrenToShape",	//29
    "ItemClipsToShape",	//30
    "ItemCoordinateCache",	//31
    "ItemCursorChange",	//32
    "ItemCursorHasChanged",	//33
    "ItemDoesntPropagateOpacityToChildren",	//34
    "ItemEnabledChange",	//35
    "ItemEnabledHasChanged",	//36
    "ItemFlagsChange",	//37
    "ItemFlagsHaveChanged",	//38
    "ItemHasNoContents",	//39
    "ItemIgnoresParentOpacity",	//40
    "ItemIgnoresTransformations",	//41
    "ItemIsFocusScope",	//42
    "ItemIsFocusable",	//43
    "ItemIsMovable",	//44
    "ItemIsPanel",	//45
    "ItemIsSelectable",	//46
    "ItemMatrixChange",	//47
    "ItemNegativeZStacksBehindParent",	//48
    "ItemOpacityChange",	//49
    "ItemOpacityHasChanged",	//50
    "ItemParentChange",	//51
    "ItemParentHasChanged",	//52
    "ItemPositionChange",	//53
    "ItemPositionHasChanged",	//54
    "ItemRotationChange",	//55
    "ItemRotationHasChanged",	//56
    "ItemScaleChange",	//57
    "ItemScaleHasChanged",	//58
    "ItemSceneChange",	//59
    "ItemSceneHasChanged",	//60
    "ItemScenePositionHasChanged",	//61
    "ItemSelectedChange",	//62
    "ItemSelectedHasChanged",	//63
    "ItemSendsGeometryChanges",	//64
    "ItemSendsScenePositionChanges",	//65
    "ItemStacksBehindParent",	//66
    "ItemStopsClickFocusPropagation",	//67
    "ItemStopsFocusHandling",	//68
    "ItemToolTipChange",	//69
    "ItemToolTipHasChanged",	//70
    "ItemTransformChange",	//71
    "ItemTransformHasChanged",	//72
    "ItemTransformOriginPointChange",	//73
    "ItemTransformOriginPointHasChanged",	//74
    "ItemUsesExtendedStyleOption",	//75
    "ItemVisibleChange",	//76
    "ItemVisibleHasChanged",	//77
    "ItemZValueChange",	//78
    "ItemZValueHasChanged",	//79
    "JavaScriptOwnership",	//80
    "Left",	//81
    "LicensedActiveQt",	//82
    "LicensedCore",	//83
    "LicensedDBus",	//84
    "LicensedDeclarative",	//85
    "LicensedGui",	//86
    "LicensedHelp",	//87
    "LicensedMultimedia",	//88
    "LicensedNetwork",	//89
    "LicensedOpenGL",	//90
    "LicensedOpenVG",	//91
    "LicensedQt3Support",	//92
    "LicensedQt3SupportLight",	//93
    "LicensedScript",	//94
    "LicensedScriptTools",	//95
    "LicensedSql",	//96
    "LicensedSvg",	//97
    "LicensedTest",	//98
    "LicensedXml",	//99
    "LicensedXmlPatterns",	//100
    "List",	//101
    "Loading",	//102
    "MinimalViewportUpdate",	//103
    "NoAnchor",	//104
    "NoCache",	//105
    "NoDrag",	//106
    "NoFrame",	//107
    "NoViewportUpdate",	//108
    "NonModal",	//109
    "Normal",	//110
    "Null",	//111
    "Object",	//112
    "Panel",	//113
    "PanelModal",	//114
    "Pixmap",	//115
    "Plain",	//116
    "Property",	//117
    "QDeclarativeComponent",	//118
    "QDeclarativeComponent#",	//119
    "QDeclarativeComponent##",	//120
    "QDeclarativeComponent###",	//121
    "QDeclarativeComponent#$",	//122
    "QDeclarativeComponent#$#",	//123
    "QDeclarativeContext",	//124
    "QDeclarativeContext#",	//125
    "QDeclarativeContext##",	//126
    "QDeclarativeEngine",	//127
    "QDeclarativeEngine#",	//128
    "QDeclarativeError",	//129
    "QDeclarativeError#",	//130
    "QDeclarativeExpression",	//131
    "QDeclarativeExpression##$",	//132
    "QDeclarativeExpression##$#",	//133
    "QDeclarativeExtensionPlugin",	//134
    "QDeclarativeExtensionPlugin#",	//135
    "QDeclarativeImageProvider",	//136
    "QDeclarativeImageProvider#",	//137
    "QDeclarativeImageProvider$",	//138
    "QDeclarativeItem",	//139
    "QDeclarativeItem#",	//140
    "QDeclarativeListReference",	//141
    "QDeclarativeListReference#",	//142
    "QDeclarativeListReference#$",	//143
    "QDeclarativeListReference#$#",	//144
    "QDeclarativeNetworkAccessManagerFactory",	//145
    "QDeclarativeNetworkAccessManagerFactory#",	//146
    "QDeclarativeParserStatus",	//147
    "QDeclarativeParserStatus#",	//148
    "QDeclarativeProperty",	//149
    "QDeclarativeProperty#",	//150
    "QDeclarativeProperty##",	//151
    "QDeclarativeProperty#$",	//152
    "QDeclarativeProperty#$#",	//153
    "QDeclarativePropertyMap",	//154
    "QDeclarativePropertyMap#",	//155
    "QDeclarativeScriptString",	//156
    "QDeclarativeScriptString#",	//157
    "QDeclarativeView",	//158
    "QDeclarativeView#",	//159
    "QDeclarativeView##",	//160
    "QML_HAS_ATTACHED_PROPERTIES",	//161
    "QtCriticalMsg",	//162
    "QtDebugMsg",	//163
    "QtFatalMsg",	//164
    "QtSystemMsg",	//165
    "QtWarningMsg",	//166
    "Raised",	//167
    "Ready",	//168
    "Right",	//169
    "RubberBandDrag",	//170
    "SceneModal",	//171
    "ScrollHandDrag",	//172
    "Shadow_Mask",	//173
    "Shape_Mask",	//174
    "SignalProperty",	//175
    "SizeRootObjectToView",	//176
    "SizeViewToRootObject",	//177
    "SmartViewportUpdate",	//178
    "StyledPanel",	//179
    "Sunken",	//180
    "Top",	//181
    "TopLeft",	//182
    "TopRight",	//183
    "Type",	//184
    "UserExtension",	//185
    "UserType",	//186
    "VLine",	//187
    "WinPanel",	//188
    "accessibleRole",	//189
    "actionEvent",	//190
    "activeFocusChanged",	//191
    "activeFocusChanged$",	//192
    "addImageProvider",	//193
    "addImageProvider$#",	//194
    "addImportPath",	//195
    "addImportPath$",	//196
    "addPluginPath",	//197
    "addPluginPath$",	//198
    "advance",	//199
    "append",	//200
    "append#",	//201
    "at",	//202
    "at$",	//203
    "baseUrl",	//204
    "baselineOffset",	//205
    "baselineOffsetChanged",	//206
    "baselineOffsetChanged$",	//207
    "beginCreate",	//208
    "beginCreate#",	//209
    "boundingRect",	//210
    "canAppend",	//211
    "canAt",	//212
    "canClear",	//213
    "canCount",	//214
    "changeEvent",	//215
    "childAt",	//216
    "childAt$$",	//217
    "childEvent",	//218
    "childrenRect",	//219
    "childrenRectChanged",	//220
    "childrenRectChanged#",	//221
    "classBegin",	//222
    "clear",	//223
    "clear$",	//224
    "clearComponentCache",	//225
    "clearError",	//226
    "clip",	//227
    "clipChanged",	//228
    "clipChanged$",	//229
    "closeEvent",	//230
    "collidesWithItem",	//231
    "collidesWithPath",	//232
    "column",	//233
    "completeCreate",	//234
    "componentComplete",	//235
    "connectNotify",	//236
    "connectNotifySignal",	//237
    "connectNotifySignal#$",	//238
    "contains",	//239
    "contains$",	//240
    "context",	//241
    "contextForObject",	//242
    "contextForObject#",	//243
    "contextMenuEvent",	//244
    "contextObject",	//245
    "contextProperty",	//246
    "contextProperty$",	//247
    "count",	//248
    "create",	//249
    "create#",	//250
    "createObject",	//251
    "createObject#",	//252
    "createObject##",	//253
    "creationContext",	//254
    "customEvent",	//255
    "description",	//256
    "devType",	//257
    "disconnectNotify",	//258
    "dragEnterEvent",	//259
    "dragLeaveEvent",	//260
    "dragMoveEvent",	//261
    "drawBackground",	//262
    "drawForeground",	//263
    "drawItems",	//264
    "dropEvent",	//265
    "enabledChange",	//266
    "engine",	//267
    "enterEvent",	//268
    "error",	//269
    "errorString",	//270
    "errors",	//271
    "evaluate",	//272
    "evaluate$",	//273
    "event",	//274
    "event#",	//275
    "eventFilter",	//276
    "eventFilter##",	//277
    "expression",	//278
    "extension",	//279
    "focusChanged",	//280
    "focusChanged$",	//281
    "focusInEvent",	//282
    "focusNextPrevChild",	//283
    "focusOutEvent",	//284
    "fontChange",	//285
    "forceActiveFocus",	//286
    "geometryChanged",	//287
    "geometryChanged##",	//288
    "hasActiveFocus",	//289
    "hasError",	//290
    "hasFocus",	//291
    "hasNotifySignal",	//292
    "height",	//293
    "heightForWidth",	//294
    "heightValid",	//295
    "hideEvent",	//296
    "hoverEnterEvent",	//297
    "hoverLeaveEvent",	//298
    "hoverMoveEvent",	//299
    "imageProvider",	//300
    "imageProvider$",	//301
    "imageType",	//302
    "implicitHeight",	//303
    "implicitHeightChanged",	//304
    "implicitWidth",	//305
    "implicitWidthChanged",	//306
    "importPathList",	//307
    "importPlugin",	//308
    "importPlugin$$$",	//309
    "index",	//310
    "initialSize",	//311
    "initializeEngine",	//312
    "initializeEngine#$",	//313
    "inputMethodEvent",	//314
    "inputMethodEvent#",	//315
    "inputMethodPreHandler",	//316
    "inputMethodPreHandler#",	//317
    "inputMethodQuery",	//318
    "inputMethodQuery$",	//319
    "insert",	//320
    "insert$#",	//321
    "isComponentComplete",	//322
    "isDesignable",	//323
    "isEmpty",	//324
    "isError",	//325
    "isLoading",	//326
    "isNull",	//327
    "isObscuredBy",	//328
    "isProperty",	//329
    "isReady",	//330
    "isResettable",	//331
    "isSignalProperty",	//332
    "isValid",	//333
    "isWritable",	//334
    "itemChange",	//335
    "itemChange$#",	//336
    "keepMouseGrab",	//337
    "keyPressEvent",	//338
    "keyPressEvent#",	//339
    "keyPressPreHandler",	//340
    "keyPressPreHandler#",	//341
    "keyReleaseEvent",	//342
    "keyReleaseEvent#",	//343
    "keyReleasePreHandler",	//344
    "keyReleasePreHandler#",	//345
    "keys",	//346
    "languageChange",	//347
    "leaveEvent",	//348
    "line",	//349
    "lineNumber",	//350
    "listElementType",	//351
    "loadUrl",	//352
    "loadUrl#",	//353
    "mapFromItem",	//354
    "mapFromItem#$$",	//355
    "mapToItem",	//356
    "mapToItem#$$",	//357
    "metaObject",	//358
    "method",	//359
    "metric",	//360
    "minimumSizeHint",	//361
    "mouseDoubleClickEvent",	//362
    "mouseMoveEvent",	//363
    "mousePressEvent",	//364
    "mouseReleaseEvent",	//365
    "moveEvent",	//366
    "name",	//367
    "needsNotifySignal",	//368
    "networkAccessManager",	//369
    "networkAccessManagerFactory",	//370
    "notifyOnValueChanged",	//371
    "object",	//372
    "objectOwnership",	//373
    "objectOwnership#",	//374
    "offlineStoragePath",	//375
    "opaqueArea",	//376
    "operator!=",	//377
    "operator!=##",	//378
    "operator!=#$",	//379
    "operator!=$#",	//380
    "operator&",	//381
    "operator&##",	//382
    "operator*",	//383
    "operator*##",	//384
    "operator*#$",	//385
    "operator*$#",	//386
    "operator+",	//387
    "operator+##",	//388
    "operator+#$",	//389
    "operator+$#",	//390
    "operator+$$",	//391
    "operator-",	//392
    "operator-#",	//393
    "operator-##",	//394
    "operator-#$",	//395
    "operator/",	//396
    "operator/#$",	//397
    "operator<",	//398
    "operator<##",	//399
    "operator<#$",	//400
    "operator<$#",	//401
    "operator<<",	//402
    "operator<<##",	//403
    "operator<<#$",	//404
    "operator<<#?",	//405
    "operator<=",	//406
    "operator<=##",	//407
    "operator<=#$",	//408
    "operator<=$#",	//409
    "operator=",	//410
    "operator=#",	//411
    "operator==",	//412
    "operator==#",	//413
    "operator==##",	//414
    "operator==#$",	//415
    "operator==$#",	//416
    "operator>",	//417
    "operator>##",	//418
    "operator>#$",	//419
    "operator>$#",	//420
    "operator>=",	//421
    "operator>=##",	//422
    "operator>=#$",	//423
    "operator>=$#",	//424
    "operator>>",	//425
    "operator>>##",	//426
    "operator>>#$",	//427
    "operator>>#?",	//428
    "operator[]",	//429
    "operator[]$",	//430
    "operator^",	//431
    "operator^##",	//432
    "operator|",	//433
    "operator|##",	//434
    "operator|$$",	//435
    "outputWarningsToStandardError",	//436
    "paint",	//437
    "paint###",	//438
    "paintEngine",	//439
    "paintEvent",	//440
    "paintEvent#",	//441
    "paletteChange",	//442
    "parentChanged",	//443
    "parentChanged#",	//444
    "parentContext",	//445
    "parentItem",	//446
    "pluginPathList",	//447
    "progress",	//448
    "progressChanged",	//449
    "progressChanged$",	//450
    "property",	//451
    "propertyType",	//452
    "propertyTypeCategory",	//453
    "propertyTypeName",	//454
    "qAccessibleActionCastHelper",	//455
    "qAccessibleEditableTextCastHelper",	//456
    "qAccessibleImageCastHelper",	//457
    "qAccessibleTable2CastHelper",	//458
    "qAccessibleTableCastHelper",	//459
    "qAccessibleTextCastHelper",	//460
    "qAccessibleValueCastHelper",	//461
    "qAcos",	//462
    "qAcos$",	//463
    "qAddPostRoutine",	//464
    "qAddPostRoutine$",	//465
    "qAlpha",	//466
    "qAlpha$",	//467
    "qAppName",	//468
    "qAsin",	//469
    "qAsin$",	//470
    "qAtan",	//471
    "qAtan$",	//472
    "qAtan2",	//473
    "qAtan2$$",	//474
    "qBadAlloc",	//475
    "qBlue",	//476
    "qBlue$",	//477
    "qCeil",	//478
    "qCeil$",	//479
    "qChecksum",	//480
    "qChecksum$$",	//481
    "qCompress",	//482
    "qCompress#",	//483
    "qCompress#$",	//484
    "qCompress$$",	//485
    "qCompress$$$",	//486
    "qCos",	//487
    "qCos$",	//488
    "qCritical",	//489
    "qDebug",	//490
    "qDrawBorderPixmap",	//491
    "qDrawBorderPixmap####",	//492
    "qDrawBorderPixmap######",	//493
    "qDrawBorderPixmap#######",	//494
    "qDrawBorderPixmap#######$",	//495
    "qDrawPlainRect",	//496
    "qDrawPlainRect###",	//497
    "qDrawPlainRect###$",	//498
    "qDrawPlainRect###$#",	//499
    "qDrawPlainRect#$$$$#",	//500
    "qDrawPlainRect#$$$$#$",	//501
    "qDrawPlainRect#$$$$#$#",	//502
    "qDrawShadeLine",	//503
    "qDrawShadeLine####",	//504
    "qDrawShadeLine####$",	//505
    "qDrawShadeLine####$$",	//506
    "qDrawShadeLine####$$$",	//507
    "qDrawShadeLine#$$$$#",	//508
    "qDrawShadeLine#$$$$#$",	//509
    "qDrawShadeLine#$$$$#$$",	//510
    "qDrawShadeLine#$$$$#$$$",	//511
    "qDrawShadePanel",	//512
    "qDrawShadePanel###",	//513
    "qDrawShadePanel###$",	//514
    "qDrawShadePanel###$$",	//515
    "qDrawShadePanel###$$#",	//516
    "qDrawShadePanel#$$$$#",	//517
    "qDrawShadePanel#$$$$#$",	//518
    "qDrawShadePanel#$$$$#$$",	//519
    "qDrawShadePanel#$$$$#$$#",	//520
    "qDrawShadeRect",	//521
    "qDrawShadeRect###",	//522
    "qDrawShadeRect###$",	//523
    "qDrawShadeRect###$$",	//524
    "qDrawShadeRect###$$$",	//525
    "qDrawShadeRect###$$$#",	//526
    "qDrawShadeRect#$$$$#",	//527
    "qDrawShadeRect#$$$$#$",	//528
    "qDrawShadeRect#$$$$#$$",	//529
    "qDrawShadeRect#$$$$#$$$",	//530
    "qDrawShadeRect#$$$$#$$$#",	//531
    "qDrawWinButton",	//532
    "qDrawWinButton###",	//533
    "qDrawWinButton###$",	//534
    "qDrawWinButton###$#",	//535
    "qDrawWinButton#$$$$#",	//536
    "qDrawWinButton#$$$$#$",	//537
    "qDrawWinButton#$$$$#$#",	//538
    "qDrawWinPanel",	//539
    "qDrawWinPanel###",	//540
    "qDrawWinPanel###$",	//541
    "qDrawWinPanel###$#",	//542
    "qDrawWinPanel#$$$$#",	//543
    "qDrawWinPanel#$$$$#$",	//544
    "qDrawWinPanel#$$$$#$#",	//545
    "qExp",	//546
    "qExp$",	//547
    "qFabs",	//548
    "qFabs$",	//549
    "qFastCos",	//550
    "qFastCos$",	//551
    "qFastSin",	//552
    "qFastSin$",	//553
    "qFlagLocation",	//554
    "qFlagLocation$",	//555
    "qFloor",	//556
    "qFloor$",	//557
    "qFree",	//558
    "qFree$",	//559
    "qFreeAligned",	//560
    "qFreeAligned$",	//561
    "qFuzzyCompare",	//562
    "qFuzzyCompare##",	//563
    "qFuzzyCompare$$",	//564
    "qFuzzyIsNull",	//565
    "qFuzzyIsNull$",	//566
    "qGray",	//567
    "qGray$",	//568
    "qGray$$$",	//569
    "qGreen",	//570
    "qGreen$",	//571
    "qHash",	//572
    "qHash#",	//573
    "qHash$",	//574
    "qInf",	//575
    "qInstallMsgHandler",	//576
    "qInstallMsgHandler$",	//577
    "qIntCast",	//578
    "qIntCast$",	//579
    "qIsFinite",	//580
    "qIsFinite$",	//581
    "qIsGray",	//582
    "qIsGray$",	//583
    "qIsInf",	//584
    "qIsInf$",	//585
    "qIsNaN",	//586
    "qIsNaN$",	//587
    "qIsNull",	//588
    "qIsNull$",	//589
    "qLn",	//590
    "qLn$",	//591
    "qMalloc",	//592
    "qMalloc$",	//593
    "qMallocAligned",	//594
    "qMallocAligned$$",	//595
    "qMemCopy",	//596
    "qMemCopy$$$",	//597
    "qMemSet",	//598
    "qMemSet$$$",	//599
    "qPow",	//600
    "qPow$$",	//601
    "qQNaN",	//602
    "qRealloc",	//603
    "qRealloc$$",	//604
    "qReallocAligned",	//605
    "qReallocAligned$$$$",	//606
    "qRed",	//607
    "qRed$",	//608
    "qRegisterStaticPluginInstanceFunction",	//609
    "qRegisterStaticPluginInstanceFunction#",	//610
    "qRemovePostRoutine",	//611
    "qRemovePostRoutine$",	//612
    "qRgb",	//613
    "qRgb$$$",	//614
    "qRgba",	//615
    "qRgba$$$$",	//616
    "qRound",	//617
    "qRound$",	//618
    "qRound64",	//619
    "qRound64$",	//620
    "qSNaN",	//621
    "qScriptConnect",	//622
    "qScriptConnect#$##",	//623
    "qScriptDisconnect",	//624
    "qScriptDisconnect#$##",	//625
    "qScriptRegisterMetaType_helper",	//626
    "qScriptRegisterMetaType_helper#$#$#",	//627
    "qScriptValueFromValue_helper",	//628
    "qScriptValueFromValue_helper#$$",	//629
    "qSetFieldWidth",	//630
    "qSetFieldWidth$",	//631
    "qSetPadChar",	//632
    "qSetPadChar#",	//633
    "qSetRealNumberPrecision",	//634
    "qSetRealNumberPrecision$",	//635
    "qSharedBuild",	//636
    "qSin",	//637
    "qSin$",	//638
    "qSqrt",	//639
    "qSqrt$",	//640
    "qStringComparisonHelper",	//641
    "qStringComparisonHelper#$",	//642
    "qTan",	//643
    "qTan$",	//644
    "qUncompress",	//645
    "qUncompress#",	//646
    "qUncompress$$",	//647
    "qVersion",	//648
    "qWarning",	//649
    "qbswap_helper",	//650
    "qbswap_helper$$$",	//651
    "qgetenv",	//652
    "qgetenv$",	//653
    "qmlAttachedProperties",	//654
    "qmlAttachedProperties#",	//655
    "qmlAttachedPropertiesObject",	//656
    "qmlAttachedPropertiesObject$##$",	//657
    "qmlAttachedPropertiesObjectById",	//658
    "qmlAttachedPropertiesObjectById$#",	//659
    "qmlAttachedPropertiesObjectById$#$",	//660
    "qmlContext",	//661
    "qmlContext#",	//662
    "qmlEngine",	//663
    "qmlEngine#",	//664
    "qmlExecuteDeferred",	//665
    "qmlExecuteDeferred#",	//666
    "qmlInfo",	//667
    "qmlInfo#",	//668
    "qmlInfo##",	//669
    "qmlInfo#?",	//670
    "qputenv",	//671
    "qputenv$#",	//672
    "qrand",	//673
    "qscriptvalue_cast_helper",	//674
    "qscriptvalue_cast_helper#$$",	//675
    "qsrand",	//676
    "qsrand$",	//677
    "qstrcmp",	//678
    "qstrcmp##",	//679
    "qstrcmp#$",	//680
    "qstrcmp$#",	//681
    "qstrcmp$$",	//682
    "qstrcpy",	//683
    "qstrcpy$$",	//684
    "qstrdup",	//685
    "qstrdup$",	//686
    "qstricmp",	//687
    "qstricmp$$",	//688
    "qstrlen",	//689
    "qstrlen$",	//690
    "qstrncmp",	//691
    "qstrncmp$$$",	//692
    "qstrncpy",	//693
    "qstrncpy$$$",	//694
    "qstrnicmp",	//695
    "qstrnicmp$$$",	//696
    "qstrnlen",	//697
    "qstrnlen$$",	//698
    "qtTrId",	//699
    "qtTrId$",	//700
    "qtTrId$$",	//701
    "qt_assert",	//702
    "qt_assert$$$",	//703
    "qt_assert_x",	//704
    "qt_assert_x$$$$",	//705
    "qt_check_pointer",	//706
    "qt_check_pointer$$",	//707
    "qt_error_string",	//708
    "qt_error_string$",	//709
    "qt_message_output",	//710
    "qt_message_output$$",	//711
    "qt_metacall",	//712
    "qt_metacall$$?",	//713
    "qt_metacast",	//714
    "qt_metacast$",	//715
    "qt_noop",	//716
    "qt_qFindChild_helper",	//717
    "qt_qFindChild_helper#$#",	//718
    "qt_qFindChildren_helper",	//719
    "qt_qFindChildren_helper#$##?",	//720
    "quit",	//721
    "qvariant_cast_helper",	//722
    "qvariant_cast_helper#$$",	//723
    "qvsnprintf",	//724
    "qvsnprintf$$$?",	//725
    "read",	//726
    "read#$",	//727
    "read#$#",	//728
    "registerTypes",	//729
    "registerTypes$",	//730
    "removeImageProvider",	//731
    "removeImageProvider$",	//732
    "requestImage",	//733
    "requestImage$##",	//734
    "requestPixmap",	//735
    "requestPixmap$##",	//736
    "reset",	//737
    "resetHeight",	//738
    "resetWidth",	//739
    "resizeEvent",	//740
    "resizeEvent#",	//741
    "resizeMode",	//742
    "resolvedUrl",	//743
    "resolvedUrl#",	//744
    "rootContext",	//745
    "rootObject",	//746
    "sceneEvent",	//747
    "sceneEvent#",	//748
    "sceneEventFilter",	//749
    "sceneResized",	//750
    "sceneResized#",	//751
    "scopeObject",	//752
    "script",	//753
    "scrollContentsBy",	//754
    "setAccessibleRole",	//755
    "setAccessibleRole$",	//756
    "setBaseUrl",	//757
    "setBaseUrl#",	//758
    "setBaselineOffset",	//759
    "setBaselineOffset$",	//760
    "setClip",	//761
    "setClip$",	//762
    "setColumn",	//763
    "setColumn$",	//764
    "setContext",	//765
    "setContext#",	//766
    "setContextForObject",	//767
    "setContextForObject##",	//768
    "setContextObject",	//769
    "setContextObject#",	//770
    "setContextProperty",	//771
    "setContextProperty$#",	//772
    "setData",	//773
    "setData##",	//774
    "setDescription",	//775
    "setDescription$",	//776
    "setExpression",	//777
    "setExpression$",	//778
    "setExtension",	//779
    "setFocus",	//780
    "setFocus$",	//781
    "setHeight",	//782
    "setHeight$",	//783
    "setImplicitHeight",	//784
    "setImplicitHeight$",	//785
    "setImplicitWidth",	//786
    "setImplicitWidth$",	//787
    "setImportPathList",	//788
    "setImportPathList?",	//789
    "setKeepMouseGrab",	//790
    "setKeepMouseGrab$",	//791
    "setLine",	//792
    "setLine$",	//793
    "setNetworkAccessManagerFactory",	//794
    "setNetworkAccessManagerFactory#",	//795
    "setNotifyOnValueChanged",	//796
    "setNotifyOnValueChanged$",	//797
    "setObjectOwnership",	//798
    "setObjectOwnership#$",	//799
    "setOfflineStoragePath",	//800
    "setOfflineStoragePath$",	//801
    "setOutputWarningsToStandardError",	//802
    "setOutputWarningsToStandardError$",	//803
    "setParentItem",	//804
    "setParentItem#",	//805
    "setPluginPathList",	//806
    "setPluginPathList?",	//807
    "setResizeMode",	//808
    "setResizeMode$",	//809
    "setRootObject",	//810
    "setRootObject#",	//811
    "setScopeObject",	//812
    "setScopeObject#",	//813
    "setScript",	//814
    "setScript$",	//815
    "setSize",	//816
    "setSize#",	//817
    "setSmooth",	//818
    "setSmooth$",	//819
    "setSource",	//820
    "setSource#",	//821
    "setSourceLocation",	//822
    "setSourceLocation$$",	//823
    "setTransformOrigin",	//824
    "setTransformOrigin$",	//825
    "setUrl",	//826
    "setUrl#",	//827
    "setVisible",	//828
    "setWidth",	//829
    "setWidth$",	//830
    "shape",	//831
    "showEvent",	//832
    "size",	//833
    "sizeHint",	//834
    "smooth",	//835
    "smoothChanged",	//836
    "smoothChanged$",	//837
    "source",	//838
    "sourceFile",	//839
    "stateChanged",	//840
    "stateChanged$",	//841
    "staticMetaObject",	//842
    "status",	//843
    "statusChanged",	//844
    "statusChanged$",	//845
    "styleChange",	//846
    "supportsExtension",	//847
    "tabletEvent",	//848
    "timerEvent",	//849
    "timerEvent#",	//850
    "toString",	//851
    "tr",	//852
    "tr$",	//853
    "tr$$",	//854
    "tr$$$",	//855
    "trUtf8",	//856
    "trUtf8$",	//857
    "trUtf8$$",	//858
    "trUtf8$$$",	//859
    "transform",	//860
    "transformOrigin",	//861
    "transformOriginChanged",	//862
    "transformOriginChanged$",	//863
    "type",	//864
    "url",	//865
    "value",	//866
    "value$",	//867
    "valueChanged",	//868
    "valueChanged$#",	//869
    "viewportEvent",	//870
    "warnings",	//871
    "warnings?",	//872
    "wheelEvent",	//873
    "width",	//874
    "widthValid",	//875
    "windowActivationChange",	//876
    "write",	//877
    "write#",	//878
    "write#$#",	//879
    "write#$##",	//880
    "x11Event",	//881
    "~QDeclarativeComponent",	//882
    "~QDeclarativeContext",	//883
    "~QDeclarativeEngine",	//884
    "~QDeclarativeError",	//885
    "~QDeclarativeExpression",	//886
    "~QDeclarativeExtensionPlugin",	//887
    "~QDeclarativeImageProvider",	//888
    "~QDeclarativeItem",	//889
    "~QDeclarativeListReference",	//890
    "~QDeclarativeNetworkAccessManagerFactory",	//891
    "~QDeclarativeParserStatus",	//892
    "~QDeclarativeProperty",	//893
    "~QDeclarativePropertyMap",	//894
    "~QDeclarativeScriptString",	//895
    "~QDeclarativeView",	//896
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {1, 361, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 277, 0},	//1 QAbstractScrollArea::minimumSizeHint() const
    {18, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//2 QDeclarativeComponent::metaObject() const
    {18, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//3 QDeclarativeComponent::qt_metacast(const char*)
    {18, 852, 3, 2, Smoke::mf_static, 292, 3},	//4 QDeclarativeComponent::tr(const char*, const char*)
    {18, 856, 3, 2, Smoke::mf_static, 292, 4},	//5 QDeclarativeComponent::trUtf8(const char*, const char*)
    {18, 852, 6, 3, Smoke::mf_static, 292, 5},	//6 QDeclarativeComponent::tr(const char*, const char*, int)
    {18, 856, 6, 3, Smoke::mf_static, 292, 6},	//7 QDeclarativeComponent::trUtf8(const char*, const char*, int)
    {18, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//8 QDeclarativeComponent::qt_metacall(QMetaObject::Call, int, void**)
    {18, 118, 14, 1, Smoke::mf_ctor, 35, 8},	//9 QDeclarativeComponent::QDeclarativeComponent(QObject*)
    {18, 118, 16, 2, Smoke::mf_ctor, 35, 9},	//10 QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*, QObject*)
    {18, 118, 19, 3, Smoke::mf_ctor, 35, 10},	//11 QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*, const QString&, QObject*)
    {18, 118, 23, 3, Smoke::mf_ctor, 35, 11},	//12 QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*, const QUrl&, QObject*)
    {18, 843, 0, 0, Smoke::mf_const|Smoke::mf_property, 36, 12},	//13 QDeclarativeComponent::status() const
    {18, 327, 0, 0, Smoke::mf_const, 446, 13},	//14 QDeclarativeComponent::isNull() const
    {18, 330, 0, 0, Smoke::mf_const, 446, 14},	//15 QDeclarativeComponent::isReady() const
    {18, 325, 0, 0, Smoke::mf_const, 446, 15},	//16 QDeclarativeComponent::isError() const
    {18, 326, 0, 0, Smoke::mf_const, 446, 16},	//17 QDeclarativeComponent::isLoading() const
    {18, 271, 0, 0, Smoke::mf_const, 211, 17},	//18 QDeclarativeComponent::errors() const
    {18, 270, 0, 0, Smoke::mf_const, 292, 18},	//19 QDeclarativeComponent::errorString() const
    {18, 448, 0, 0, Smoke::mf_const, 557, 19},	//20 QDeclarativeComponent::progress() const
    {18, 865, 0, 0, Smoke::mf_const|Smoke::mf_property, 332, 20},	//21 QDeclarativeComponent::url() const
    {18, 249, 27, 1, Smoke::mf_virtual, 235, 21},	//22 QDeclarativeComponent::create(QDeclarativeContext*)
    {18, 208, 27, 1, Smoke::mf_virtual, 235, 22},	//23 QDeclarativeComponent::beginCreate(QDeclarativeContext*)
    {18, 234, 0, 0, Smoke::mf_virtual, 0, 23},	//24 QDeclarativeComponent::completeCreate()
    {18, 352, 29, 1, 0, 0, 24},	//25 QDeclarativeComponent::loadUrl(const QUrl&)
    {18, 773, 31, 2, 0, 0, 25},	//26 QDeclarativeComponent::setData(const QByteArray&, const QUrl&)
    {18, 254, 0, 0, Smoke::mf_const, 38, 26},	//27 QDeclarativeComponent::creationContext() const
    {18, 654, 14, 1, Smoke::mf_static, 37, 27},	//28 QDeclarativeComponent::qmlAttachedProperties(QObject*)
    {18, 844, 34, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 28},	//29 QDeclarativeComponent::statusChanged(QDeclarativeComponent::Status)
    {18, 449, 36, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 29},	//30 QDeclarativeComponent::progressChanged(qreal)
    {18, 251, 14, 1, Smoke::mf_protected, 272, 30},	//31 QDeclarativeComponent::createObject(QObject*)
    {18, 251, 38, 2, Smoke::mf_protected, 272, 31},	//32 QDeclarativeComponent::createObject(QObject*, const QScriptValue&)
    {18, 852, 1, 1, Smoke::mf_static, 292, 32},	//33 QDeclarativeComponent::tr(const char*)
    {18, 856, 1, 1, Smoke::mf_static, 292, 33},	//34 QDeclarativeComponent::trUtf8(const char*)
    {18, 118, 0, 0, Smoke::mf_ctor, 35, 34},	//35 QDeclarativeComponent::QDeclarativeComponent()
    {18, 118, 41, 1, Smoke::mf_ctor, 35, 35},	//36 QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*)
    {18, 118, 43, 2, Smoke::mf_ctor, 35, 36},	//37 QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*, const QString&)
    {18, 118, 46, 2, Smoke::mf_ctor, 35, 37},	//38 QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*, const QUrl&)
    {18, 249, 0, 0, 0, 235, 38},	//39 QDeclarativeComponent::create()
    {18, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 39},	//40 QDeclarativeComponent::staticMetaObject() const
    {18, 111, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 40},	//41 QDeclarativeComponent::Null (enum)
    {18, 168, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 41},	//42 QDeclarativeComponent::Ready (enum)
    {18, 102, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 42},	//43 QDeclarativeComponent::Loading (enum)
    {18, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 43},	//44 QDeclarativeComponent::Error (enum)
    {18, 882, 0, 0, Smoke::mf_dtor, 0, 44 },	//45 QDeclarativeComponent::~QDeclarativeComponent()
    {20, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//46 QDeclarativeContext::metaObject() const
    {20, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//47 QDeclarativeContext::qt_metacast(const char*)
    {20, 852, 3, 2, Smoke::mf_static, 292, 3},	//48 QDeclarativeContext::tr(const char*, const char*)
    {20, 856, 3, 2, Smoke::mf_static, 292, 4},	//49 QDeclarativeContext::trUtf8(const char*, const char*)
    {20, 852, 6, 3, Smoke::mf_static, 292, 5},	//50 QDeclarativeContext::tr(const char*, const char*, int)
    {20, 856, 6, 3, Smoke::mf_static, 292, 6},	//51 QDeclarativeContext::trUtf8(const char*, const char*, int)
    {20, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//52 QDeclarativeContext::qt_metacall(QMetaObject::Call, int, void**)
    {20, 124, 16, 2, Smoke::mf_ctor, 38, 8},	//53 QDeclarativeContext::QDeclarativeContext(QDeclarativeEngine*, QObject*)
    {20, 124, 49, 2, Smoke::mf_ctor, 38, 9},	//54 QDeclarativeContext::QDeclarativeContext(QDeclarativeContext*, QObject*)
    {20, 333, 0, 0, Smoke::mf_const, 446, 10},	//55 QDeclarativeContext::isValid() const
    {20, 267, 0, 0, Smoke::mf_const, 39, 11},	//56 QDeclarativeContext::engine() const
    {20, 445, 0, 0, Smoke::mf_const, 38, 12},	//57 QDeclarativeContext::parentContext() const
    {20, 245, 0, 0, Smoke::mf_const, 235, 13},	//58 QDeclarativeContext::contextObject() const
    {20, 769, 14, 1, 0, 0, 14},	//59 QDeclarativeContext::setContextObject(QObject*)
    {20, 246, 52, 1, Smoke::mf_const, 336, 15},	//60 QDeclarativeContext::contextProperty(const QString&) const
    {20, 771, 54, 2, 0, 0, 16},	//61 QDeclarativeContext::setContextProperty(const QString&, QObject*)
    {20, 771, 57, 2, 0, 0, 17},	//62 QDeclarativeContext::setContextProperty(const QString&, const QVariant&)
    {20, 743, 29, 1, 0, 332, 18},	//63 QDeclarativeContext::resolvedUrl(const QUrl&)
    {20, 757, 29, 1, 0, 0, 19},	//64 QDeclarativeContext::setBaseUrl(const QUrl&)
    {20, 204, 0, 0, Smoke::mf_const, 332, 20},	//65 QDeclarativeContext::baseUrl() const
    {20, 852, 1, 1, Smoke::mf_static, 292, 21},	//66 QDeclarativeContext::tr(const char*)
    {20, 856, 1, 1, Smoke::mf_static, 292, 22},	//67 QDeclarativeContext::trUtf8(const char*)
    {20, 124, 41, 1, Smoke::mf_ctor, 38, 23},	//68 QDeclarativeContext::QDeclarativeContext(QDeclarativeEngine*)
    {20, 124, 27, 1, Smoke::mf_ctor, 38, 24},	//69 QDeclarativeContext::QDeclarativeContext(QDeclarativeContext*)
    {20, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 25},	//70 QDeclarativeContext::staticMetaObject() const
    {20, 883, 0, 0, Smoke::mf_dtor, 0, 26 },	//71 QDeclarativeContext::~QDeclarativeContext()
    {21, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//72 QDeclarativeEngine::metaObject() const
    {21, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//73 QDeclarativeEngine::qt_metacast(const char*)
    {21, 852, 3, 2, Smoke::mf_static, 292, 3},	//74 QDeclarativeEngine::tr(const char*, const char*)
    {21, 856, 3, 2, Smoke::mf_static, 292, 4},	//75 QDeclarativeEngine::trUtf8(const char*, const char*)
    {21, 852, 6, 3, Smoke::mf_static, 292, 5},	//76 QDeclarativeEngine::tr(const char*, const char*, int)
    {21, 856, 6, 3, Smoke::mf_static, 292, 6},	//77 QDeclarativeEngine::trUtf8(const char*, const char*, int)
    {21, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//78 QDeclarativeEngine::qt_metacall(QMetaObject::Call, int, void**)
    {21, 127, 14, 1, Smoke::mf_ctor, 39, 8},	//79 QDeclarativeEngine::QDeclarativeEngine(QObject*)
    {21, 745, 0, 0, Smoke::mf_const, 38, 9},	//80 QDeclarativeEngine::rootContext() const
    {21, 225, 0, 0, 0, 0, 10},	//81 QDeclarativeEngine::clearComponentCache()
    {21, 307, 0, 0, Smoke::mf_const, 297, 11},	//82 QDeclarativeEngine::importPathList() const
    {21, 788, 60, 1, 0, 0, 12},	//83 QDeclarativeEngine::setImportPathList(const QStringList&)
    {21, 195, 52, 1, 0, 0, 13},	//84 QDeclarativeEngine::addImportPath(const QString&)
    {21, 447, 0, 0, Smoke::mf_const, 297, 14},	//85 QDeclarativeEngine::pluginPathList() const
    {21, 806, 60, 1, 0, 0, 15},	//86 QDeclarativeEngine::setPluginPathList(const QStringList&)
    {21, 197, 52, 1, 0, 0, 16},	//87 QDeclarativeEngine::addPluginPath(const QString&)
    {21, 308, 62, 3, 0, 446, 17},	//88 QDeclarativeEngine::importPlugin(const QString&, const QString&, QString*)
    {21, 794, 66, 1, 0, 0, 18},	//89 QDeclarativeEngine::setNetworkAccessManagerFactory(QDeclarativeNetworkAccessManagerFactory*)
    {21, 370, 0, 0, Smoke::mf_const, 54, 19},	//90 QDeclarativeEngine::networkAccessManagerFactory() const
    {21, 369, 0, 0, Smoke::mf_const, 230, 20},	//91 QDeclarativeEngine::networkAccessManager() const
    {21, 193, 68, 2, 0, 0, 21},	//92 QDeclarativeEngine::addImageProvider(const QString&, QDeclarativeImageProvider*)
    {21, 300, 52, 1, Smoke::mf_const, 46, 22},	//93 QDeclarativeEngine::imageProvider(const QString&) const
    {21, 731, 52, 1, 0, 0, 23},	//94 QDeclarativeEngine::removeImageProvider(const QString&)
    {21, 800, 52, 1, Smoke::mf_property, 0, 24},	//95 QDeclarativeEngine::setOfflineStoragePath(const QString&)
    {21, 375, 0, 0, Smoke::mf_const|Smoke::mf_property, 292, 25},	//96 QDeclarativeEngine::offlineStoragePath() const
    {21, 204, 0, 0, Smoke::mf_const, 332, 26},	//97 QDeclarativeEngine::baseUrl() const
    {21, 757, 29, 1, 0, 0, 27},	//98 QDeclarativeEngine::setBaseUrl(const QUrl&)
    {21, 436, 0, 0, Smoke::mf_const, 446, 28},	//99 QDeclarativeEngine::outputWarningsToStandardError() const
    {21, 802, 71, 1, 0, 0, 29},	//100 QDeclarativeEngine::setOutputWarningsToStandardError(bool)
    {21, 242, 73, 1, Smoke::mf_static, 38, 30},	//101 QDeclarativeEngine::contextForObject(const QObject*)
    {21, 767, 75, 2, Smoke::mf_static, 0, 31},	//102 QDeclarativeEngine::setContextForObject(QObject*, QDeclarativeContext*)
    {21, 798, 78, 2, Smoke::mf_static, 0, 32},	//103 QDeclarativeEngine::setObjectOwnership(QObject*, QDeclarativeEngine::ObjectOwnership)
    {21, 373, 14, 1, Smoke::mf_static, 40, 33},	//104 QDeclarativeEngine::objectOwnership(QObject*)
    {21, 721, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 34},	//105 QDeclarativeEngine::quit()
    {21, 871, 81, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 35},	//106 QDeclarativeEngine::warnings(const QList<QDeclarativeError>&)
    {21, 852, 1, 1, Smoke::mf_static, 292, 36},	//107 QDeclarativeEngine::tr(const char*)
    {21, 856, 1, 1, Smoke::mf_static, 292, 37},	//108 QDeclarativeEngine::trUtf8(const char*)
    {21, 127, 0, 0, Smoke::mf_ctor, 39, 38},	//109 QDeclarativeEngine::QDeclarativeEngine()
    {21, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 39},	//110 QDeclarativeEngine::staticMetaObject() const
    {21, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 40, 40},	//111 QDeclarativeEngine::CppOwnership (enum)
    {21, 80, 0, 0, Smoke::mf_static|Smoke::mf_enum, 40, 41},	//112 QDeclarativeEngine::JavaScriptOwnership (enum)
    {21, 884, 0, 0, Smoke::mf_dtor, 0, 42 },	//113 QDeclarativeEngine::~QDeclarativeEngine()
    {22, 129, 0, 0, Smoke::mf_ctor, 43, 1},	//114 QDeclarativeError::QDeclarativeError()
    {22, 129, 83, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 43, 2},	//115 QDeclarativeError::QDeclarativeError(const QDeclarativeError&)
    {22, 410, 83, 1, 0, 42, 3},	//116 QDeclarativeError::operator=(const QDeclarativeError&)
    {22, 333, 0, 0, Smoke::mf_const, 446, 4},	//117 QDeclarativeError::isValid() const
    {22, 865, 0, 0, Smoke::mf_const, 332, 5},	//118 QDeclarativeError::url() const
    {22, 826, 29, 1, 0, 0, 6},	//119 QDeclarativeError::setUrl(const QUrl&)
    {22, 256, 0, 0, Smoke::mf_const, 292, 7},	//120 QDeclarativeError::description() const
    {22, 775, 52, 1, 0, 0, 8},	//121 QDeclarativeError::setDescription(const QString&)
    {22, 349, 0, 0, Smoke::mf_const, 559, 9},	//122 QDeclarativeError::line() const
    {22, 792, 85, 1, 0, 0, 10},	//123 QDeclarativeError::setLine(int)
    {22, 233, 0, 0, Smoke::mf_const, 559, 11},	//124 QDeclarativeError::column() const
    {22, 763, 85, 1, 0, 0, 12},	//125 QDeclarativeError::setColumn(int)
    {22, 851, 0, 0, Smoke::mf_const, 292, 13},	//126 QDeclarativeError::toString() const
    {22, 885, 0, 0, Smoke::mf_dtor, 0, 14 },	//127 QDeclarativeError::~QDeclarativeError()
    {23, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//128 QDeclarativeExpression::metaObject() const
    {23, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//129 QDeclarativeExpression::qt_metacast(const char*)
    {23, 852, 3, 2, Smoke::mf_static, 292, 3},	//130 QDeclarativeExpression::tr(const char*, const char*)
    {23, 856, 3, 2, Smoke::mf_static, 292, 4},	//131 QDeclarativeExpression::trUtf8(const char*, const char*)
    {23, 852, 6, 3, Smoke::mf_static, 292, 5},	//132 QDeclarativeExpression::tr(const char*, const char*, int)
    {23, 856, 6, 3, Smoke::mf_static, 292, 6},	//133 QDeclarativeExpression::trUtf8(const char*, const char*, int)
    {23, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//134 QDeclarativeExpression::qt_metacall(QMetaObject::Call, int, void**)
    {23, 131, 0, 0, Smoke::mf_ctor, 44, 8},	//135 QDeclarativeExpression::QDeclarativeExpression()
    {23, 131, 87, 4, Smoke::mf_ctor, 44, 9},	//136 QDeclarativeExpression::QDeclarativeExpression(QDeclarativeContext*, QObject*, const QString&, QObject*)
    {23, 267, 0, 0, Smoke::mf_const, 39, 10},	//137 QDeclarativeExpression::engine() const
    {23, 241, 0, 0, Smoke::mf_const, 38, 11},	//138 QDeclarativeExpression::context() const
    {23, 278, 0, 0, Smoke::mf_const, 292, 12},	//139 QDeclarativeExpression::expression() const
    {23, 777, 52, 1, 0, 0, 13},	//140 QDeclarativeExpression::setExpression(const QString&)
    {23, 371, 0, 0, Smoke::mf_const, 446, 14},	//141 QDeclarativeExpression::notifyOnValueChanged() const
    {23, 796, 71, 1, 0, 0, 15},	//142 QDeclarativeExpression::setNotifyOnValueChanged(bool)
    {23, 839, 0, 0, Smoke::mf_const, 292, 16},	//143 QDeclarativeExpression::sourceFile() const
    {23, 350, 0, 0, Smoke::mf_const, 559, 17},	//144 QDeclarativeExpression::lineNumber() const
    {23, 822, 92, 2, 0, 0, 18},	//145 QDeclarativeExpression::setSourceLocation(const QString&, int)
    {23, 752, 0, 0, Smoke::mf_const, 235, 19},	//146 QDeclarativeExpression::scopeObject() const
    {23, 290, 0, 0, Smoke::mf_const, 446, 20},	//147 QDeclarativeExpression::hasError() const
    {23, 226, 0, 0, 0, 0, 21},	//148 QDeclarativeExpression::clearError()
    {23, 269, 0, 0, Smoke::mf_const, 41, 22},	//149 QDeclarativeExpression::error() const
    {23, 272, 95, 1, 0, 336, 23},	//150 QDeclarativeExpression::evaluate(bool*)
    {23, 868, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 24},	//151 QDeclarativeExpression::valueChanged()
    {23, 852, 1, 1, Smoke::mf_static, 292, 25},	//152 QDeclarativeExpression::tr(const char*)
    {23, 856, 1, 1, Smoke::mf_static, 292, 26},	//153 QDeclarativeExpression::trUtf8(const char*)
    {23, 131, 97, 3, Smoke::mf_ctor, 44, 27},	//154 QDeclarativeExpression::QDeclarativeExpression(QDeclarativeContext*, QObject*, const QString&)
    {23, 272, 0, 0, 0, 336, 28},	//155 QDeclarativeExpression::evaluate()
    {23, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 29},	//156 QDeclarativeExpression::staticMetaObject() const
    {23, 886, 0, 0, Smoke::mf_dtor, 0, 30 },	//157 QDeclarativeExpression::~QDeclarativeExpression()
    {25, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//158 QDeclarativeExtensionPlugin::metaObject() const
    {25, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//159 QDeclarativeExtensionPlugin::qt_metacast(const char*)
    {25, 852, 3, 2, Smoke::mf_static, 292, 3},	//160 QDeclarativeExtensionPlugin::tr(const char*, const char*)
    {25, 856, 3, 2, Smoke::mf_static, 292, 4},	//161 QDeclarativeExtensionPlugin::trUtf8(const char*, const char*)
    {25, 852, 6, 3, Smoke::mf_static, 292, 5},	//162 QDeclarativeExtensionPlugin::tr(const char*, const char*, int)
    {25, 856, 6, 3, Smoke::mf_static, 292, 6},	//163 QDeclarativeExtensionPlugin::trUtf8(const char*, const char*, int)
    {25, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//164 QDeclarativeExtensionPlugin::qt_metacall(QMetaObject::Call, int, void**)
    {25, 134, 14, 1, Smoke::mf_ctor, 45, 8},	//165 QDeclarativeExtensionPlugin::QDeclarativeExtensionPlugin(QObject*)
    {25, 729, 1, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 9},	//166 QDeclarativeExtensionPlugin::registerTypes(const char*) [pure virtual]
    {25, 312, 101, 2, Smoke::mf_virtual, 0, 10},	//167 QDeclarativeExtensionPlugin::initializeEngine(QDeclarativeEngine*, const char*)
    {25, 852, 1, 1, Smoke::mf_static, 292, 11},	//168 QDeclarativeExtensionPlugin::tr(const char*)
    {25, 856, 1, 1, Smoke::mf_static, 292, 12},	//169 QDeclarativeExtensionPlugin::trUtf8(const char*)
    {25, 134, 0, 0, Smoke::mf_ctor, 45, 13},	//170 QDeclarativeExtensionPlugin::QDeclarativeExtensionPlugin()
    {25, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 14},	//171 QDeclarativeExtensionPlugin::staticMetaObject() const
    {25, 887, 0, 0, Smoke::mf_dtor, 0, 15 },	//172 QDeclarativeExtensionPlugin::~QDeclarativeExtensionPlugin()
    {26, 136, 104, 1, Smoke::mf_ctor, 46, 1},	//173 QDeclarativeImageProvider::QDeclarativeImageProvider(QDeclarativeImageProvider::ImageType)
    {26, 302, 0, 0, Smoke::mf_const, 47, 2},	//174 QDeclarativeImageProvider::imageType() const
    {26, 733, 106, 3, Smoke::mf_virtual, 196, 3},	//175 QDeclarativeImageProvider::requestImage(const QString&, QSize*, const QSize&)
    {26, 735, 106, 3, Smoke::mf_virtual, 250, 4},	//176 QDeclarativeImageProvider::requestPixmap(const QString&, QSize*, const QSize&)
    {26, 136, 110, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 46, 5},	//177 QDeclarativeImageProvider::QDeclarativeImageProvider(const QDeclarativeImageProvider&)
    {26, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 47, 6},	//178 QDeclarativeImageProvider::Image (enum)
    {26, 115, 0, 0, Smoke::mf_static|Smoke::mf_enum, 47, 7},	//179 QDeclarativeImageProvider::Pixmap (enum)
    {26, 888, 0, 0, Smoke::mf_dtor, 0, 8 },	//180 QDeclarativeImageProvider::~QDeclarativeImageProvider()
    {28, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//181 QDeclarativeItem::metaObject() const
    {28, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//182 QDeclarativeItem::qt_metacast(const char*)
    {28, 852, 3, 2, Smoke::mf_static, 292, 3},	//183 QDeclarativeItem::tr(const char*, const char*)
    {28, 856, 3, 2, Smoke::mf_static, 292, 4},	//184 QDeclarativeItem::trUtf8(const char*, const char*)
    {28, 852, 6, 3, Smoke::mf_static, 292, 5},	//185 QDeclarativeItem::tr(const char*, const char*, int)
    {28, 856, 6, 3, Smoke::mf_static, 292, 6},	//186 QDeclarativeItem::trUtf8(const char*, const char*, int)
    {28, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//187 QDeclarativeItem::qt_metacall(QMetaObject::Call, int, void**)
    {28, 139, 112, 1, Smoke::mf_ctor, 49, 8},	//188 QDeclarativeItem::QDeclarativeItem(QDeclarativeItem*)
    {28, 446, 0, 0, Smoke::mf_const, 49, 9},	//189 QDeclarativeItem::parentItem() const
    {28, 804, 112, 1, 0, 0, 10},	//190 QDeclarativeItem::setParentItem(QDeclarativeItem*)
    {28, 219, 0, 0, Smoke::mf_property, 262, 11},	//191 QDeclarativeItem::childrenRect()
    {28, 227, 0, 0, Smoke::mf_const|Smoke::mf_property, 446, 12},	//192 QDeclarativeItem::clip() const
    {28, 761, 71, 1, Smoke::mf_property, 0, 13},	//193 QDeclarativeItem::setClip(bool)
    {28, 205, 0, 0, Smoke::mf_const, 557, 14},	//194 QDeclarativeItem::baselineOffset() const
    {28, 759, 114, 1, 0, 0, 15},	//195 QDeclarativeItem::setBaselineOffset(double)
    {28, 860, 0, 0, Smoke::mf_property, 51, 16},	//196 QDeclarativeItem::transform()
    {28, 874, 0, 0, Smoke::mf_const, 557, 17},	//197 QDeclarativeItem::width() const
    {28, 829, 114, 1, 0, 0, 18},	//198 QDeclarativeItem::setWidth(double)
    {28, 739, 0, 0, 0, 0, 19},	//199 QDeclarativeItem::resetWidth()
    {28, 305, 0, 0, Smoke::mf_const, 557, 20},	//200 QDeclarativeItem::implicitWidth() const
    {28, 293, 0, 0, Smoke::mf_const, 557, 21},	//201 QDeclarativeItem::height() const
    {28, 782, 114, 1, 0, 0, 22},	//202 QDeclarativeItem::setHeight(double)
    {28, 738, 0, 0, 0, 0, 23},	//203 QDeclarativeItem::resetHeight()
    {28, 303, 0, 0, Smoke::mf_const, 557, 24},	//204 QDeclarativeItem::implicitHeight() const
    {28, 816, 116, 1, 0, 0, 25},	//205 QDeclarativeItem::setSize(const QSizeF&)
    {28, 861, 0, 0, Smoke::mf_const|Smoke::mf_property, 50, 26},	//206 QDeclarativeItem::transformOrigin() const
    {28, 824, 118, 1, Smoke::mf_property, 0, 27},	//207 QDeclarativeItem::setTransformOrigin(QDeclarativeItem::TransformOrigin)
    {28, 835, 0, 0, Smoke::mf_const|Smoke::mf_property, 446, 28},	//208 QDeclarativeItem::smooth() const
    {28, 818, 71, 1, Smoke::mf_property, 0, 29},	//209 QDeclarativeItem::setSmooth(bool)
    {28, 189, 0, 0, Smoke::mf_const, 13, 30},	//210 QDeclarativeItem::accessibleRole() const
    {28, 755, 120, 1, 0, 0, 31},	//211 QDeclarativeItem::setAccessibleRole(QAccessible::Role)
    {28, 210, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 262, 32},	//212 QDeclarativeItem::boundingRect() const
    {28, 437, 122, 3, Smoke::mf_virtual, 0, 33},	//213 QDeclarativeItem::paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*)
    {28, 289, 0, 0, Smoke::mf_const|Smoke::mf_property, 446, 34},	//214 QDeclarativeItem::hasActiveFocus() const
    {28, 291, 0, 0, Smoke::mf_const|Smoke::mf_property, 446, 35},	//215 QDeclarativeItem::hasFocus() const
    {28, 780, 71, 1, Smoke::mf_property, 0, 36},	//216 QDeclarativeItem::setFocus(bool)
    {28, 337, 0, 0, Smoke::mf_const, 446, 37},	//217 QDeclarativeItem::keepMouseGrab() const
    {28, 790, 71, 1, 0, 0, 38},	//218 QDeclarativeItem::setKeepMouseGrab(bool)
    {28, 354, 126, 3, Smoke::mf_const, 272, 39},	//219 QDeclarativeItem::mapFromItem(const QScriptValue&, double, double) const
    {28, 356, 126, 3, Smoke::mf_const, 272, 40},	//220 QDeclarativeItem::mapToItem(const QScriptValue&, double, double) const
    {28, 286, 0, 0, 0, 0, 41},	//221 QDeclarativeItem::forceActiveFocus()
    {28, 216, 130, 2, Smoke::mf_const, 49, 42},	//222 QDeclarativeItem::childAt(double, double) const
    {28, 220, 133, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 43},	//223 QDeclarativeItem::childrenRectChanged(const QRectF&)
    {28, 206, 36, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 44},	//224 QDeclarativeItem::baselineOffsetChanged(qreal)
    {28, 840, 52, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 45},	//225 QDeclarativeItem::stateChanged(const QString&)
    {28, 280, 71, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 46},	//226 QDeclarativeItem::focusChanged(bool)
    {28, 191, 71, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 47},	//227 QDeclarativeItem::activeFocusChanged(bool)
    {28, 443, 112, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 48},	//228 QDeclarativeItem::parentChanged(QDeclarativeItem*)
    {28, 862, 118, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 49},	//229 QDeclarativeItem::transformOriginChanged(QDeclarativeItem::TransformOrigin)
    {28, 836, 71, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 50},	//230 QDeclarativeItem::smoothChanged(bool)
    {28, 228, 71, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 51},	//231 QDeclarativeItem::clipChanged(bool)
    {28, 306, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 52},	//232 QDeclarativeItem::implicitWidthChanged()
    {28, 304, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 53},	//233 QDeclarativeItem::implicitHeightChanged()
    {28, 322, 0, 0, Smoke::mf_const|Smoke::mf_protected, 446, 54},	//234 QDeclarativeItem::isComponentComplete() const
    {28, 747, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 446, 55},	//235 QDeclarativeItem::sceneEvent(QEvent*)
    {28, 274, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 446, 56},	//236 QDeclarativeItem::event(QEvent*)
    {28, 335, 137, 2, Smoke::mf_protected|Smoke::mf_virtual, 336, 57},	//237 QDeclarativeItem::itemChange(QGraphicsItem::GraphicsItemChange, const QVariant&)
    {28, 786, 114, 1, Smoke::mf_protected, 0, 58},	//238 QDeclarativeItem::setImplicitWidth(double)
    {28, 875, 0, 0, Smoke::mf_const|Smoke::mf_protected, 446, 59},	//239 QDeclarativeItem::widthValid() const
    {28, 784, 114, 1, Smoke::mf_protected, 0, 60},	//240 QDeclarativeItem::setImplicitHeight(double)
    {28, 295, 0, 0, Smoke::mf_const|Smoke::mf_protected, 446, 61},	//241 QDeclarativeItem::heightValid() const
    {28, 222, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 62},	//242 QDeclarativeItem::classBegin()
    {28, 235, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 63},	//243 QDeclarativeItem::componentComplete()
    {28, 338, 140, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 64},	//244 QDeclarativeItem::keyPressEvent(QKeyEvent*)
    {28, 342, 140, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 65},	//245 QDeclarativeItem::keyReleaseEvent(QKeyEvent*)
    {28, 314, 142, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 66},	//246 QDeclarativeItem::inputMethodEvent(QInputMethodEvent*)
    {28, 318, 144, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 336, 67},	//247 QDeclarativeItem::inputMethodQuery(Qt::InputMethodQuery) const
    {28, 340, 140, 1, Smoke::mf_protected, 0, 68},	//248 QDeclarativeItem::keyPressPreHandler(QKeyEvent*)
    {28, 344, 140, 1, Smoke::mf_protected, 0, 69},	//249 QDeclarativeItem::keyReleasePreHandler(QKeyEvent*)
    {28, 316, 142, 1, Smoke::mf_protected, 0, 70},	//250 QDeclarativeItem::inputMethodPreHandler(QInputMethodEvent*)
    {28, 287, 146, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 71},	//251 QDeclarativeItem::geometryChanged(const QRectF&, const QRectF&)
    {28, 852, 1, 1, Smoke::mf_static, 292, 72},	//252 QDeclarativeItem::tr(const char*)
    {28, 856, 1, 1, Smoke::mf_static, 292, 73},	//253 QDeclarativeItem::trUtf8(const char*)
    {28, 139, 0, 0, Smoke::mf_ctor, 49, 74},	//254 QDeclarativeItem::QDeclarativeItem()
    {28, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 75},	//255 QDeclarativeItem::staticMetaObject() const
    {28, 182, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 76},	//256 QDeclarativeItem::TopLeft (enum)
    {28, 181, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 77},	//257 QDeclarativeItem::Top (enum)
    {28, 183, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 78},	//258 QDeclarativeItem::TopRight (enum)
    {28, 81, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 79},	//259 QDeclarativeItem::Left (enum)
    {28, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 80},	//260 QDeclarativeItem::Center (enum)
    {28, 169, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 81},	//261 QDeclarativeItem::Right (enum)
    {28, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 82},	//262 QDeclarativeItem::BottomLeft (enum)
    {28, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 83},	//263 QDeclarativeItem::Bottom (enum)
    {28, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 84},	//264 QDeclarativeItem::BottomRight (enum)
    {28, 889, 0, 0, Smoke::mf_dtor, 0, 85 },	//265 QDeclarativeItem::~QDeclarativeItem()
    {29, 141, 0, 0, Smoke::mf_ctor, 53, 1},	//266 QDeclarativeListReference::QDeclarativeListReference()
    {29, 141, 149, 3, Smoke::mf_ctor, 53, 2},	//267 QDeclarativeListReference::QDeclarativeListReference(QObject*, const char*, QDeclarativeEngine*)
    {29, 141, 153, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 53, 3},	//268 QDeclarativeListReference::QDeclarativeListReference(const QDeclarativeListReference&)
    {29, 410, 153, 1, 0, 52, 4},	//269 QDeclarativeListReference::operator=(const QDeclarativeListReference&)
    {29, 333, 0, 0, Smoke::mf_const, 446, 5},	//270 QDeclarativeListReference::isValid() const
    {29, 372, 0, 0, Smoke::mf_const, 235, 6},	//271 QDeclarativeListReference::object() const
    {29, 351, 0, 0, Smoke::mf_const, 488, 7},	//272 QDeclarativeListReference::listElementType() const
    {29, 211, 0, 0, Smoke::mf_const, 446, 8},	//273 QDeclarativeListReference::canAppend() const
    {29, 212, 0, 0, Smoke::mf_const, 446, 9},	//274 QDeclarativeListReference::canAt() const
    {29, 213, 0, 0, Smoke::mf_const, 446, 10},	//275 QDeclarativeListReference::canClear() const
    {29, 214, 0, 0, Smoke::mf_const, 446, 11},	//276 QDeclarativeListReference::canCount() const
    {29, 200, 14, 1, Smoke::mf_const, 446, 12},	//277 QDeclarativeListReference::append(QObject*) const
    {29, 202, 85, 1, Smoke::mf_const, 235, 13},	//278 QDeclarativeListReference::at(int) const
    {29, 223, 0, 0, Smoke::mf_const, 446, 14},	//279 QDeclarativeListReference::clear() const
    {29, 248, 0, 0, Smoke::mf_const, 559, 15},	//280 QDeclarativeListReference::count() const
    {29, 141, 155, 2, Smoke::mf_ctor, 53, 16},	//281 QDeclarativeListReference::QDeclarativeListReference(QObject*, const char*)
    {29, 890, 0, 0, Smoke::mf_dtor, 0, 17 },	//282 QDeclarativeListReference::~QDeclarativeListReference()
    {30, 249, 14, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 230, 1},	//283 QDeclarativeNetworkAccessManagerFactory::create(QObject*) [pure virtual]
    {30, 145, 0, 0, Smoke::mf_ctor, 54, 2},	//284 QDeclarativeNetworkAccessManagerFactory::QDeclarativeNetworkAccessManagerFactory()
    {30, 145, 158, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 54, 3},	//285 QDeclarativeNetworkAccessManagerFactory::QDeclarativeNetworkAccessManagerFactory(const QDeclarativeNetworkAccessManagerFactory&)
    {30, 891, 0, 0, Smoke::mf_dtor, 0, 4 },	//286 QDeclarativeNetworkAccessManagerFactory::~QDeclarativeNetworkAccessManagerFactory()
    {31, 147, 0, 0, Smoke::mf_ctor, 55, 1},	//287 QDeclarativeParserStatus::QDeclarativeParserStatus()
    {31, 222, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 2},	//288 QDeclarativeParserStatus::classBegin() [pure virtual]
    {31, 235, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 3},	//289 QDeclarativeParserStatus::componentComplete() [pure virtual]
    {31, 147, 160, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 55, 4},	//290 QDeclarativeParserStatus::QDeclarativeParserStatus(const QDeclarativeParserStatus&)
    {31, 892, 0, 0, Smoke::mf_dtor, 0, 5 },	//291 QDeclarativeParserStatus::~QDeclarativeParserStatus()
    {32, 149, 0, 0, Smoke::mf_ctor, 59, 1},	//292 QDeclarativeProperty::QDeclarativeProperty()
    {32, 149, 14, 1, Smoke::mf_ctor, 59, 2},	//293 QDeclarativeProperty::QDeclarativeProperty(QObject*)
    {32, 149, 75, 2, Smoke::mf_ctor, 59, 3},	//294 QDeclarativeProperty::QDeclarativeProperty(QObject*, QDeclarativeContext*)
    {32, 149, 162, 2, Smoke::mf_ctor, 59, 4},	//295 QDeclarativeProperty::QDeclarativeProperty(QObject*, QDeclarativeEngine*)
    {32, 149, 165, 2, Smoke::mf_ctor, 59, 5},	//296 QDeclarativeProperty::QDeclarativeProperty(QObject*, const QString&)
    {32, 149, 168, 3, Smoke::mf_ctor, 59, 6},	//297 QDeclarativeProperty::QDeclarativeProperty(QObject*, const QString&, QDeclarativeContext*)
    {32, 149, 172, 3, Smoke::mf_ctor, 59, 7},	//298 QDeclarativeProperty::QDeclarativeProperty(QObject*, const QString&, QDeclarativeEngine*)
    {32, 149, 176, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 59, 8},	//299 QDeclarativeProperty::QDeclarativeProperty(const QDeclarativeProperty&)
    {32, 410, 176, 1, 0, 58, 9},	//300 QDeclarativeProperty::operator=(const QDeclarativeProperty&)
    {32, 412, 176, 1, Smoke::mf_const, 446, 10},	//301 QDeclarativeProperty::operator==(const QDeclarativeProperty&) const
    {32, 864, 0, 0, Smoke::mf_const, 61, 11},	//302 QDeclarativeProperty::type() const
    {32, 333, 0, 0, Smoke::mf_const, 446, 12},	//303 QDeclarativeProperty::isValid() const
    {32, 329, 0, 0, Smoke::mf_const, 446, 13},	//304 QDeclarativeProperty::isProperty() const
    {32, 332, 0, 0, Smoke::mf_const, 446, 14},	//305 QDeclarativeProperty::isSignalProperty() const
    {32, 452, 0, 0, Smoke::mf_const, 559, 15},	//306 QDeclarativeProperty::propertyType() const
    {32, 453, 0, 0, Smoke::mf_const, 60, 16},	//307 QDeclarativeProperty::propertyTypeCategory() const
    {32, 454, 0, 0, Smoke::mf_const, 554, 17},	//308 QDeclarativeProperty::propertyTypeName() const
    {32, 367, 0, 0, Smoke::mf_const, 292, 18},	//309 QDeclarativeProperty::name() const
    {32, 726, 0, 0, Smoke::mf_const, 336, 19},	//310 QDeclarativeProperty::read() const
    {32, 726, 165, 2, Smoke::mf_static, 336, 20},	//311 QDeclarativeProperty::read(QObject*, const QString&)
    {32, 726, 168, 3, Smoke::mf_static, 336, 21},	//312 QDeclarativeProperty::read(QObject*, const QString&, QDeclarativeContext*)
    {32, 726, 172, 3, Smoke::mf_static, 336, 22},	//313 QDeclarativeProperty::read(QObject*, const QString&, QDeclarativeEngine*)
    {32, 877, 178, 1, Smoke::mf_const, 446, 23},	//314 QDeclarativeProperty::write(const QVariant&) const
    {32, 877, 180, 3, Smoke::mf_static, 446, 24},	//315 QDeclarativeProperty::write(QObject*, const QString&, const QVariant&)
    {32, 877, 184, 4, Smoke::mf_static, 446, 25},	//316 QDeclarativeProperty::write(QObject*, const QString&, const QVariant&, QDeclarativeContext*)
    {32, 877, 189, 4, Smoke::mf_static, 446, 26},	//317 QDeclarativeProperty::write(QObject*, const QString&, const QVariant&, QDeclarativeEngine*)
    {32, 737, 0, 0, Smoke::mf_const, 446, 27},	//318 QDeclarativeProperty::reset() const
    {32, 292, 0, 0, Smoke::mf_const, 446, 28},	//319 QDeclarativeProperty::hasNotifySignal() const
    {32, 368, 0, 0, Smoke::mf_const, 446, 29},	//320 QDeclarativeProperty::needsNotifySignal() const
    {32, 237, 155, 2, Smoke::mf_const, 446, 30},	//321 QDeclarativeProperty::connectNotifySignal(QObject*, const char*) const
    {32, 237, 194, 2, Smoke::mf_const, 446, 31},	//322 QDeclarativeProperty::connectNotifySignal(QObject*, int) const
    {32, 334, 0, 0, Smoke::mf_const, 446, 32},	//323 QDeclarativeProperty::isWritable() const
    {32, 323, 0, 0, Smoke::mf_const, 446, 33},	//324 QDeclarativeProperty::isDesignable() const
    {32, 331, 0, 0, Smoke::mf_const, 446, 34},	//325 QDeclarativeProperty::isResettable() const
    {32, 372, 0, 0, Smoke::mf_const, 235, 35},	//326 QDeclarativeProperty::object() const
    {32, 310, 0, 0, Smoke::mf_const, 559, 36},	//327 QDeclarativeProperty::index() const
    {32, 451, 0, 0, Smoke::mf_const, 227, 37},	//328 QDeclarativeProperty::property() const
    {32, 359, 0, 0, Smoke::mf_const, 225, 38},	//329 QDeclarativeProperty::method() const
    {32, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 60, 39},	//330 QDeclarativeProperty::InvalidCategory (enum)
    {32, 101, 0, 0, Smoke::mf_static|Smoke::mf_enum, 60, 40},	//331 QDeclarativeProperty::List (enum)
    {32, 112, 0, 0, Smoke::mf_static|Smoke::mf_enum, 60, 41},	//332 QDeclarativeProperty::Object (enum)
    {32, 110, 0, 0, Smoke::mf_static|Smoke::mf_enum, 60, 42},	//333 QDeclarativeProperty::Normal (enum)
    {32, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 61, 43},	//334 QDeclarativeProperty::Invalid (enum)
    {32, 117, 0, 0, Smoke::mf_static|Smoke::mf_enum, 61, 44},	//335 QDeclarativeProperty::Property (enum)
    {32, 175, 0, 0, Smoke::mf_static|Smoke::mf_enum, 61, 45},	//336 QDeclarativeProperty::SignalProperty (enum)
    {32, 893, 0, 0, Smoke::mf_dtor, 0, 46 },	//337 QDeclarativeProperty::~QDeclarativeProperty()
    {33, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//338 QDeclarativePropertyMap::metaObject() const
    {33, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//339 QDeclarativePropertyMap::qt_metacast(const char*)
    {33, 852, 3, 2, Smoke::mf_static, 292, 3},	//340 QDeclarativePropertyMap::tr(const char*, const char*)
    {33, 856, 3, 2, Smoke::mf_static, 292, 4},	//341 QDeclarativePropertyMap::trUtf8(const char*, const char*)
    {33, 852, 6, 3, Smoke::mf_static, 292, 5},	//342 QDeclarativePropertyMap::tr(const char*, const char*, int)
    {33, 856, 6, 3, Smoke::mf_static, 292, 6},	//343 QDeclarativePropertyMap::trUtf8(const char*, const char*, int)
    {33, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//344 QDeclarativePropertyMap::qt_metacall(QMetaObject::Call, int, void**)
    {33, 154, 14, 1, Smoke::mf_ctor, 62, 8},	//345 QDeclarativePropertyMap::QDeclarativePropertyMap(QObject*)
    {33, 866, 52, 1, Smoke::mf_const, 336, 9},	//346 QDeclarativePropertyMap::value(const QString&) const
    {33, 320, 57, 2, 0, 0, 10},	//347 QDeclarativePropertyMap::insert(const QString&, const QVariant&)
    {33, 223, 52, 1, 0, 0, 11},	//348 QDeclarativePropertyMap::clear(const QString&)
    {33, 346, 0, 0, Smoke::mf_const, 297, 12},	//349 QDeclarativePropertyMap::keys() const
    {33, 248, 0, 0, Smoke::mf_const, 559, 13},	//350 QDeclarativePropertyMap::count() const
    {33, 833, 0, 0, Smoke::mf_const, 559, 14},	//351 QDeclarativePropertyMap::size() const
    {33, 324, 0, 0, Smoke::mf_const, 446, 15},	//352 QDeclarativePropertyMap::isEmpty() const
    {33, 239, 52, 1, Smoke::mf_const, 446, 16},	//353 QDeclarativePropertyMap::contains(const QString&) const
    {33, 429, 52, 1, 0, 337, 17},	//354 QDeclarativePropertyMap::operator[](const QString&)
    {33, 429, 52, 1, Smoke::mf_const, 336, 18},	//355 QDeclarativePropertyMap::operator[](const QString&) const
    {33, 868, 57, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 19},	//356 QDeclarativePropertyMap::valueChanged(const QString&, const QVariant&)
    {33, 852, 1, 1, Smoke::mf_static, 292, 20},	//357 QDeclarativePropertyMap::tr(const char*)
    {33, 856, 1, 1, Smoke::mf_static, 292, 21},	//358 QDeclarativePropertyMap::trUtf8(const char*)
    {33, 154, 0, 0, Smoke::mf_ctor, 62, 22},	//359 QDeclarativePropertyMap::QDeclarativePropertyMap()
    {33, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 23},	//360 QDeclarativePropertyMap::staticMetaObject() const
    {33, 894, 0, 0, Smoke::mf_dtor, 0, 24 },	//361 QDeclarativePropertyMap::~QDeclarativePropertyMap()
    {34, 156, 0, 0, Smoke::mf_ctor, 64, 1},	//362 QDeclarativeScriptString::QDeclarativeScriptString()
    {34, 156, 197, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 64, 2},	//363 QDeclarativeScriptString::QDeclarativeScriptString(const QDeclarativeScriptString&)
    {34, 410, 197, 1, 0, 63, 3},	//364 QDeclarativeScriptString::operator=(const QDeclarativeScriptString&)
    {34, 241, 0, 0, Smoke::mf_const, 38, 4},	//365 QDeclarativeScriptString::context() const
    {34, 765, 27, 1, 0, 0, 5},	//366 QDeclarativeScriptString::setContext(QDeclarativeContext*)
    {34, 752, 0, 0, Smoke::mf_const, 235, 6},	//367 QDeclarativeScriptString::scopeObject() const
    {34, 812, 14, 1, 0, 0, 7},	//368 QDeclarativeScriptString::setScopeObject(QObject*)
    {34, 753, 0, 0, Smoke::mf_const, 292, 8},	//369 QDeclarativeScriptString::script() const
    {34, 814, 52, 1, 0, 0, 9},	//370 QDeclarativeScriptString::setScript(const QString&)
    {34, 895, 0, 0, Smoke::mf_dtor, 0, 10 },	//371 QDeclarativeScriptString::~QDeclarativeScriptString()
    {35, 358, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 488, 1},	//372 QDeclarativeView::metaObject() const
    {35, 714, 1, 1, Smoke::mf_virtual, 577, 2},	//373 QDeclarativeView::qt_metacast(const char*)
    {35, 852, 3, 2, Smoke::mf_static, 292, 3},	//374 QDeclarativeView::tr(const char*, const char*)
    {35, 856, 3, 2, Smoke::mf_static, 292, 4},	//375 QDeclarativeView::trUtf8(const char*, const char*)
    {35, 852, 6, 3, Smoke::mf_static, 292, 5},	//376 QDeclarativeView::tr(const char*, const char*, int)
    {35, 856, 6, 3, Smoke::mf_static, 292, 6},	//377 QDeclarativeView::trUtf8(const char*, const char*, int)
    {35, 712, 10, 3, Smoke::mf_virtual, 559, 7},	//378 QDeclarativeView::qt_metacall(QMetaObject::Call, int, void**)
    {35, 158, 199, 1, Smoke::mf_ctor, 65, 8},	//379 QDeclarativeView::QDeclarativeView(QWidget*)
    {35, 158, 201, 2, Smoke::mf_ctor, 65, 9},	//380 QDeclarativeView::QDeclarativeView(const QUrl&, QWidget*)
    {35, 838, 0, 0, Smoke::mf_const|Smoke::mf_property, 332, 10},	//381 QDeclarativeView::source() const
    {35, 820, 29, 1, Smoke::mf_property, 0, 11},	//382 QDeclarativeView::setSource(const QUrl&)
    {35, 267, 0, 0, Smoke::mf_const, 39, 12},	//383 QDeclarativeView::engine() const
    {35, 745, 0, 0, Smoke::mf_const, 38, 13},	//384 QDeclarativeView::rootContext() const
    {35, 746, 0, 0, Smoke::mf_const, 182, 14},	//385 QDeclarativeView::rootObject() const
    {35, 742, 0, 0, Smoke::mf_const|Smoke::mf_property, 66, 15},	//386 QDeclarativeView::resizeMode() const
    {35, 808, 204, 1, Smoke::mf_property, 0, 16},	//387 QDeclarativeView::setResizeMode(QDeclarativeView::ResizeMode)
    {35, 843, 0, 0, Smoke::mf_const|Smoke::mf_property, 67, 17},	//388 QDeclarativeView::status() const
    {35, 271, 0, 0, Smoke::mf_const, 211, 18},	//389 QDeclarativeView::errors() const
    {35, 834, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 277, 19},	//390 QDeclarativeView::sizeHint() const
    {35, 311, 0, 0, Smoke::mf_const, 277, 20},	//391 QDeclarativeView::initialSize() const
    {35, 750, 206, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 21},	//392 QDeclarativeView::sceneResized(QSize)
    {35, 844, 208, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 22},	//393 QDeclarativeView::statusChanged(QDeclarativeView::Status)
    {35, 740, 210, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 23},	//394 QDeclarativeView::resizeEvent(QResizeEvent*)
    {35, 440, 212, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 24},	//395 QDeclarativeView::paintEvent(QPaintEvent*)
    {35, 849, 214, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 25},	//396 QDeclarativeView::timerEvent(QTimerEvent*)
    {35, 810, 14, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 26},	//397 QDeclarativeView::setRootObject(QObject*)
    {35, 276, 216, 2, Smoke::mf_protected|Smoke::mf_virtual, 446, 27},	//398 QDeclarativeView::eventFilter(QObject*, QEvent*)
    {35, 852, 1, 1, Smoke::mf_static, 292, 28},	//399 QDeclarativeView::tr(const char*)
    {35, 856, 1, 1, Smoke::mf_static, 292, 29},	//400 QDeclarativeView::trUtf8(const char*)
    {35, 158, 0, 0, Smoke::mf_ctor, 65, 30},	//401 QDeclarativeView::QDeclarativeView()
    {35, 158, 29, 1, Smoke::mf_ctor, 65, 31},	//402 QDeclarativeView::QDeclarativeView(const QUrl&)
    {35, 842, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 487, 32},	//403 QDeclarativeView::staticMetaObject() const
    {35, 177, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 33},	//404 QDeclarativeView::SizeViewToRootObject (enum)
    {35, 176, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 34},	//405 QDeclarativeView::SizeRootObjectToView (enum)
    {35, 111, 0, 0, Smoke::mf_static|Smoke::mf_enum, 67, 35},	//406 QDeclarativeView::Null (enum)
    {35, 168, 0, 0, Smoke::mf_static|Smoke::mf_enum, 67, 36},	//407 QDeclarativeView::Ready (enum)
    {35, 102, 0, 0, Smoke::mf_static|Smoke::mf_enum, 67, 37},	//408 QDeclarativeView::Loading (enum)
    {35, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 67, 38},	//409 QDeclarativeView::Error (enum)
    {35, 896, 0, 0, Smoke::mf_dtor, 0, 39 },	//410 QDeclarativeView::~QDeclarativeView()
    {45, 215, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//411 QFrame::changeEvent(QEvent*)
    {46, 381, 219, 2, Smoke::mf_static, 16, 1},	//412 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {46, 489, 0, 0, Smoke::mf_static, 34, 2},	//413 QGlobalSpace::qCritical()
    {46, 572, 222, 1, Smoke::mf_static, 569, 3},	//414 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {46, 433, 224, 2, Smoke::mf_static, 199, 4},	//415 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {46, 702, 6, 3, Smoke::mf_static, 0, 5},	//416 QGlobalSpace::qt_assert(const char*, const char*, int)
    {46, 433, 227, 2, Smoke::mf_static, 102, 6},	//417 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag)
    {46, 383, 230, 2, Smoke::mf_static, 500, 7},	//418 QGlobalSpace::operator*(const QPoint&, double)
    {46, 584, 114, 1, Smoke::mf_static, 446, 8},	//419 QGlobalSpace::qIsInf(double)
    {46, 402, 233, 2, Smoke::mf_static, 34, 9},	//420 QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    {46, 402, 236, 2, Smoke::mf_static, 34, 10},	//421 QGlobalSpace::operator<<(QDebug, const QSslKey&)
    {46, 383, 239, 2, Smoke::mf_static, 502, 11},	//422 QGlobalSpace::operator*(double, const QPointF&)
    {46, 433, 242, 2, Smoke::mf_static, 163, 12},	//423 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {46, 377, 245, 2, Smoke::mf_static, 446, 13},	//424 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {46, 402, 248, 2, Smoke::mf_static, 34, 14},	//425 QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    {46, 412, 251, 2, Smoke::mf_static, 446, 15},	//426 QGlobalSpace::operator==(QHostAddress::SpecialAddress, const QHostAddress&)
    {46, 383, 254, 2, Smoke::mf_static, 518, 16},	//427 QGlobalSpace::operator*(double, const QSizeF&)
    {46, 433, 257, 2, Smoke::mf_static, 199, 17},	//428 QGlobalSpace::operator|(QDir::SortFlag, int)
    {46, 433, 260, 2, Smoke::mf_static, 84, 18},	//429 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    {46, 402, 263, 2, Smoke::mf_static, 34, 19},	//430 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {46, 425, 266, 2, Smoke::mf_static, 30, 20},	//431 QGlobalSpace::operator>>(QDataStream&, QImage&)
    {46, 402, 269, 2, Smoke::mf_static, 30, 21},	//432 QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    {46, 433, 272, 2, Smoke::mf_static, 199, 22},	//433 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {46, 433, 275, 2, Smoke::mf_static, 199, 23},	//434 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    {46, 402, 278, 2, Smoke::mf_static, 34, 24},	//435 QGlobalSpace::operator<<(QDebug, const QTransform&)
    {46, 683, 281, 2, Smoke::mf_static, 449, 25},	//436 QGlobalSpace::qstrcpy(char*, const char*)
    {46, 377, 284, 2, Smoke::mf_static, 446, 26},	//437 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {46, 387, 287, 2, Smoke::mf_static, 516, 27},	//438 QGlobalSpace::operator+(const QSize&, const QSize&)
    {46, 548, 114, 1, Smoke::mf_static, 557, 28},	//439 QGlobalSpace::qFabs(double)
    {46, 402, 290, 2, Smoke::mf_static, 30, 29},	//440 QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    {46, 433, 293, 2, Smoke::mf_static, 142, 30},	//441 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {46, 402, 296, 2, Smoke::mf_static, 34, 31},	//442 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {46, 602, 0, 0, Smoke::mf_static, 557, 32},	//443 QGlobalSpace::qQNaN()
    {46, 392, 299, 2, Smoke::mf_static, 220, 33},	//444 QGlobalSpace::operator-(const QMatrix4x4&, const QMatrix4x4&)
    {46, 572, 302, 1, Smoke::mf_static, 569, 34},	//445 QGlobalSpace::qHash(unsigned char)
    {46, 433, 304, 2, Smoke::mf_static, 92, 35},	//446 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {46, 392, 307, 2, Smoke::mf_static, 552, 36},	//447 QGlobalSpace::operator-(const QVector4D&, const QVector4D&)
    {46, 383, 310, 2, Smoke::mf_static, 254, 37},	//448 QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    {46, 433, 313, 2, Smoke::mf_static, 123, 38},	//449 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature)
    {46, 383, 316, 2, Smoke::mf_static, 207, 39},	//450 QGlobalSpace::operator*(const QLine&, const QTransform&)
    {46, 648, 0, 0, Smoke::mf_static, 554, 40},	//451 QGlobalSpace::qVersion()
    {46, 562, 319, 2, Smoke::mf_static, 446, 41},	//452 QGlobalSpace::qFuzzyCompare(const QVector2D&, const QVector2D&)
    {46, 433, 322, 2, Smoke::mf_static, 97, 42},	//453 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {46, 412, 245, 2, Smoke::mf_static, 446, 43},	//454 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {46, 433, 325, 2, Smoke::mf_static, 168, 44},	//455 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {46, 383, 328, 2, Smoke::mf_static, 518, 45},	//456 QGlobalSpace::operator*(const QSizeF&, double)
    {46, 402, 331, 2, Smoke::mf_static, 30, 46},	//457 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {46, 433, 334, 2, Smoke::mf_static, 199, 47},	//458 QGlobalSpace::operator|(QDir::Filter, int)
    {46, 562, 337, 2, Smoke::mf_static, 446, 48},	//459 QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    {46, 478, 114, 1, Smoke::mf_static, 559, 49},	//460 QGlobalSpace::qCeil(double)
    {46, 673, 0, 0, Smoke::mf_static, 559, 50},	//461 QGlobalSpace::qrand()
    {46, 567, 340, 1, Smoke::mf_static, 559, 51},	//462 QGlobalSpace::qGray(unsigned int)
    {46, 433, 342, 2, Smoke::mf_static, 99, 52},	//463 QGlobalSpace::operator|(QFileDialog::Option, QFlags<QFileDialog::Option>)
    {46, 392, 345, 2, Smoke::mf_static, 518, 53},	//464 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {46, 421, 348, 2, Smoke::mf_static, 446, 54},	//465 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {46, 412, 351, 2, Smoke::mf_static, 446, 55},	//466 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {46, 392, 354, 1, Smoke::mf_static, 506, 56},	//467 QGlobalSpace::operator-(const QQuaternion&)
    {46, 433, 356, 2, Smoke::mf_static, 85, 57},	//468 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption)
    {46, 425, 359, 2, Smoke::mf_static, 30, 58},	//469 QGlobalSpace::operator>>(QDataStream&, QScriptContextInfo&)
    {46, 433, 362, 2, Smoke::mf_static, 163, 59},	//470 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {46, 402, 365, 2, Smoke::mf_static, 34, 60},	//471 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {46, 607, 340, 1, Smoke::mf_static, 559, 61},	//472 QGlobalSpace::qRed(unsigned int)
    {46, 377, 368, 2, Smoke::mf_static, 446, 62},	//473 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {46, 383, 371, 2, Smoke::mf_static, 506, 63},	//474 QGlobalSpace::operator*(const QQuaternion&, double)
    {46, 412, 374, 2, Smoke::mf_static, 446, 64},	//475 QGlobalSpace::operator==(QBool, QBool)
    {46, 433, 377, 2, Smoke::mf_static, 138, 65},	//476 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    {46, 433, 380, 2, Smoke::mf_static, 137, 66},	//477 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    {46, 433, 383, 2, Smoke::mf_static, 100, 67},	//478 QGlobalSpace::operator|(QFontComboBox::FontFilter, QFontComboBox::FontFilter)
    {46, 433, 386, 2, Smoke::mf_static, 154, 68},	//479 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {46, 572, 389, 1, Smoke::mf_static, 569, 69},	//480 QGlobalSpace::qHash(const QStringRef&)
    {46, 433, 391, 2, Smoke::mf_static, 145, 70},	//481 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag)
    {46, 412, 394, 2, Smoke::mf_static, 446, 71},	//482 QGlobalSpace::operator==(QString::Null, QString::Null)
    {46, 402, 397, 2, Smoke::mf_static, 34, 72},	//483 QGlobalSpace::operator<<(QDebug, const QFont&)
    {46, 402, 400, 2, Smoke::mf_static, 34, 73},	//484 QGlobalSpace::operator<<(QDebug, const QPolygon&)
    {46, 402, 403, 2, Smoke::mf_static, 30, 74},	//485 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {46, 425, 406, 2, Smoke::mf_static, 30, 75},	//486 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {46, 466, 340, 1, Smoke::mf_static, 559, 76},	//487 QGlobalSpace::qAlpha(unsigned int)
    {46, 433, 409, 2, Smoke::mf_static, 199, 77},	//488 QGlobalSpace::operator|(QStyle::SubControl, int)
    {46, 433, 412, 2, Smoke::mf_static, 95, 78},	//489 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature)
    {46, 387, 415, 2, Smoke::mf_static, 528, 79},	//490 QGlobalSpace::operator+(QChar, const QString&)
    {46, 433, 418, 2, Smoke::mf_static, 119, 80},	//491 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>)
    {46, 433, 421, 2, Smoke::mf_static, 131, 81},	//492 QGlobalSpace::operator|(QSsl::SslOption, QFlags<QSsl::SslOption>)
    {46, 433, 424, 2, Smoke::mf_static, 128, 82},	//493 QGlobalSpace::operator|(QScriptValue::PropertyFlag, QFlags<QScriptValue::PropertyFlag>)
    {46, 570, 340, 1, Smoke::mf_static, 559, 83},	//494 QGlobalSpace::qGreen(unsigned int)
    {46, 433, 427, 2, Smoke::mf_static, 109, 84},	//495 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {46, 512, 430, 6, Smoke::mf_static, 0, 85},	//496 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool, int, const QBrush*)
    {46, 512, 437, 3, Smoke::mf_static, 0, 86},	//497 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&)
    {46, 512, 441, 4, Smoke::mf_static, 0, 87},	//498 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool)
    {46, 512, 446, 5, Smoke::mf_static, 0, 88},	//499 QGlobalSpace::qDrawShadePanel(QPainter*, const QRect&, const QPalette&, bool, int)
    {46, 392, 452, 1, Smoke::mf_static, 548, 89},	//500 QGlobalSpace::operator-(const QVector2D&)
    {46, 433, 454, 2, Smoke::mf_static, 92, 90},	//501 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {46, 402, 457, 2, Smoke::mf_static, 30, 91},	//502 QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    {46, 402, 460, 2, Smoke::mf_static, 34, 92},	//503 QGlobalSpace::operator<<(QDebug, const QTime&)
    {46, 383, 307, 2, Smoke::mf_static, 552, 93},	//504 QGlobalSpace::operator*(const QVector4D&, const QVector4D&)
    {46, 433, 463, 2, Smoke::mf_static, 143, 94},	//505 QGlobalSpace::operator|(QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>)
    {46, 383, 466, 2, Smoke::mf_static, 506, 95},	//506 QGlobalSpace::operator*(const QQuaternion&, const QQuaternion&)
    {46, 402, 469, 2, Smoke::mf_static, 30, 96},	//507 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {46, 402, 472, 2, Smoke::mf_static, 34, 97},	//508 QGlobalSpace::operator<<(QDebug, const QDate&)
    {46, 572, 475, 1, Smoke::mf_static, 569, 98},	//509 QGlobalSpace::qHash(const QBitArray&)
    {46, 433, 477, 2, Smoke::mf_static, 144, 99},	//510 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>)
    {46, 471, 114, 1, Smoke::mf_static, 557, 100},	//511 QGlobalSpace::qAtan(double)
    {46, 650, 480, 3, Smoke::mf_static, 0, 101},	//512 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {46, 433, 484, 2, Smoke::mf_static, 88, 102},	//513 QGlobalSpace::operator|(QAccessible::StateFlag, QFlags<QAccessible::StateFlag>)
    {46, 383, 487, 2, Smoke::mf_static, 258, 103},	//514 QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    {46, 722, 490, 3, Smoke::mf_static, 446, 104},	//515 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {46, 572, 52, 1, Smoke::mf_static, 569, 105},	//516 QGlobalSpace::qHash(const QString&)
    {46, 572, 176, 1, Smoke::mf_static, 569, 106},	//517 QGlobalSpace::qHash(const QDeclarativeProperty&)
    {46, 572, 494, 1, Smoke::mf_static, 569, 107},	//518 QGlobalSpace::qHash(unsigned short)
    {46, 609, 496, 1, Smoke::mf_static, 0, 108},	//519 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {46, 572, 498, 1, Smoke::mf_static, 569, 109},	//520 QGlobalSpace::qHash(long)
    {46, 433, 500, 2, Smoke::mf_static, 166, 110},	//521 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {46, 572, 503, 1, Smoke::mf_static, 569, 111},	//522 QGlobalSpace::qHash(long long)
    {46, 402, 505, 2, Smoke::mf_static, 34, 112},	//523 QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    {46, 387, 345, 2, Smoke::mf_static, 518, 113},	//524 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {46, 433, 508, 2, Smoke::mf_static, 125, 114},	//525 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>)
    {46, 532, 511, 8, Smoke::mf_static, 0, 115},	//526 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*)
    {46, 532, 520, 6, Smoke::mf_static, 0, 116},	//527 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&)
    {46, 532, 527, 7, Smoke::mf_static, 0, 117},	//528 QGlobalSpace::qDrawWinButton(QPainter*, int, int, int, int, const QPalette&, bool)
    {46, 433, 535, 2, Smoke::mf_static, 199, 118},	//529 QGlobalSpace::operator|(QWidget::RenderFlag, int)
    {46, 402, 538, 2, Smoke::mf_static, 34, 119},	//530 QGlobalSpace::operator<<(QDebug, const QColor&)
    {46, 433, 541, 2, Smoke::mf_static, 199, 120},	//531 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, int)
    {46, 433, 544, 2, Smoke::mf_static, 199, 121},	//532 QGlobalSpace::operator|(Qt::DropAction, int)
    {46, 521, 547, 10, Smoke::mf_static, 0, 122},	//533 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int, int, const QBrush*)
    {46, 521, 520, 6, Smoke::mf_static, 0, 123},	//534 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&)
    {46, 521, 527, 7, Smoke::mf_static, 0, 124},	//535 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool)
    {46, 521, 558, 8, Smoke::mf_static, 0, 125},	//536 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {46, 521, 567, 9, Smoke::mf_static, 0, 126},	//537 QGlobalSpace::qDrawShadeRect(QPainter*, int, int, int, int, const QPalette&, bool, int, int)
    {46, 487, 114, 1, Smoke::mf_static, 557, 127},	//538 QGlobalSpace::qCos(double)
    {46, 402, 577, 2, Smoke::mf_static, 30, 128},	//539 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {46, 433, 580, 2, Smoke::mf_static, 83, 129},	//540 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {46, 425, 583, 2, Smoke::mf_static, 30, 130},	//541 QGlobalSpace::operator>>(QDataStream&, QPen&)
    {46, 676, 340, 1, Smoke::mf_static, 0, 131},	//542 QGlobalSpace::qsrand(unsigned int)
    {46, 584, 586, 1, Smoke::mf_static, 446, 132},	//543 QGlobalSpace::qIsInf(float)
    {46, 433, 588, 2, Smoke::mf_static, 102, 133},	//544 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>)
    {46, 433, 591, 2, Smoke::mf_static, 154, 134},	//545 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {46, 425, 594, 2, Smoke::mf_static, 30, 135},	//546 QGlobalSpace::operator>>(QDataStream&, QColor&)
    {46, 433, 597, 2, Smoke::mf_static, 199, 136},	//547 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {46, 402, 600, 2, Smoke::mf_static, 30, 137},	//548 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {46, 433, 603, 2, Smoke::mf_static, 126, 138},	//549 QGlobalSpace::operator|(QScriptClass::QueryFlag, QFlags<QScriptClass::QueryFlag>)
    {46, 433, 606, 2, Smoke::mf_static, 199, 139},	//550 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {46, 433, 609, 2, Smoke::mf_static, 94, 140},	//551 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {46, 398, 612, 2, Smoke::mf_static, 446, 141},	//552 QGlobalSpace::operator<(const QByteArray&, const char*)
    {46, 433, 615, 2, Smoke::mf_static, 104, 142},	//553 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag)
    {46, 433, 618, 2, Smoke::mf_static, 199, 143},	//554 QGlobalSpace::operator|(QFontDialog::FontDialogOption, int)
    {46, 402, 621, 2, Smoke::mf_static, 34, 144},	//555 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {46, 433, 624, 2, Smoke::mf_static, 155, 145},	//556 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {46, 433, 627, 2, Smoke::mf_static, 199, 146},	//557 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    {46, 433, 630, 2, Smoke::mf_static, 199, 147},	//558 QGlobalSpace::operator|(QScriptEngine::QObjectWrapOption, int)
    {46, 383, 633, 2, Smoke::mf_static, 207, 148},	//559 QGlobalSpace::operator*(const QLine&, const QMatrix&)
    {46, 649, 0, 0, Smoke::mf_static, 34, 149},	//560 QGlobalSpace::qWarning()
    {46, 402, 636, 2, Smoke::mf_static, 30, 150},	//561 QGlobalSpace::operator<<(QDataStream&, const QHostAddress&)
    {46, 433, 639, 2, Smoke::mf_static, 122, 151},	//562 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag)
    {46, 387, 307, 2, Smoke::mf_static, 552, 152},	//563 QGlobalSpace::operator+(const QVector4D&, const QVector4D&)
    {46, 567, 642, 3, Smoke::mf_static, 559, 153},	//564 QGlobalSpace::qGray(int, int, int)
    {46, 383, 646, 2, Smoke::mf_static, 209, 154},	//565 QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    {46, 433, 649, 2, Smoke::mf_static, 164, 155},	//566 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {46, 383, 652, 2, Smoke::mf_static, 244, 156},	//567 QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    {46, 433, 655, 2, Smoke::mf_static, 199, 157},	//568 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {46, 412, 658, 2, Smoke::mf_static, 446, 158},	//569 QGlobalSpace::operator==(const QVector3D&, const QVector3D&)
    {46, 377, 319, 2, Smoke::mf_static, 446, 159},	//570 QGlobalSpace::operator!=(const QVector2D&, const QVector2D&)
    {46, 425, 661, 2, Smoke::mf_static, 30, 160},	//571 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {46, 402, 664, 2, Smoke::mf_static, 30, 161},	//572 QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    {46, 433, 667, 2, Smoke::mf_static, 199, 162},	//573 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {46, 402, 670, 2, Smoke::mf_static, 30, 163},	//574 QGlobalSpace::operator<<(QDataStream&, const QTableWidgetItem&)
    {46, 402, 673, 2, Smoke::mf_static, 34, 164},	//575 QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemChange)
    {46, 402, 676, 2, Smoke::mf_static, 34, 165},	//576 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {46, 433, 679, 2, Smoke::mf_static, 199, 166},	//577 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    {46, 402, 682, 2, Smoke::mf_static, 30, 167},	//578 QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    {46, 433, 685, 2, Smoke::mf_static, 118, 168},	//579 QGlobalSpace::operator|(QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>)
    {46, 433, 688, 2, Smoke::mf_static, 157, 169},	//580 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {46, 425, 691, 2, Smoke::mf_static, 30, 170},	//581 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {46, 402, 694, 2, Smoke::mf_static, 30, 171},	//582 QGlobalSpace::operator<<(QDataStream&, const QPicture&)
    {46, 433, 697, 2, Smoke::mf_static, 109, 172},	//583 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {46, 433, 700, 2, Smoke::mf_static, 118, 173},	//584 QGlobalSpace::operator|(QMessageBox::StandardButton, QMessageBox::StandardButton)
    {46, 433, 703, 2, Smoke::mf_static, 199, 174},	//585 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {46, 387, 706, 2, Smoke::mf_static, 453, 175},	//586 QGlobalSpace::operator+(char, const QByteArray&)
    {46, 396, 230, 2, Smoke::mf_static, 500, 176},	//587 QGlobalSpace::operator/(const QPoint&, double)
    {46, 425, 709, 2, Smoke::mf_static, 30, 177},	//588 QGlobalSpace::operator>>(QDataStream&, QVector4D&)
    {46, 387, 319, 2, Smoke::mf_static, 548, 178},	//589 QGlobalSpace::operator+(const QVector2D&, const QVector2D&)
    {46, 433, 712, 2, Smoke::mf_static, 117, 179},	//590 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>)
    {46, 402, 715, 2, Smoke::mf_static, 34, 180},	//591 QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    {46, 412, 718, 2, Smoke::mf_static, 446, 181},	//592 QGlobalSpace::operator==(const char*, const QByteArray&)
    {46, 433, 721, 2, Smoke::mf_static, 101, 182},	//593 QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFontDialog::FontDialogOption)
    {46, 425, 724, 2, Smoke::mf_static, 30, 183},	//594 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {46, 586, 586, 1, Smoke::mf_static, 446, 184},	//595 QGlobalSpace::qIsNaN(float)
    {46, 562, 130, 2, Smoke::mf_static, 446, 185},	//596 QGlobalSpace::qFuzzyCompare(double, double)
    {46, 588, 586, 1, Smoke::mf_static, 446, 186},	//597 QGlobalSpace::qIsNull(float)
    {46, 425, 727, 2, Smoke::mf_static, 30, 187},	//598 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {46, 425, 730, 2, Smoke::mf_static, 30, 188},	//599 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {46, 402, 733, 2, Smoke::mf_static, 30, 189},	//600 QGlobalSpace::operator<<(QDataStream&, const QTreeWidgetItem&)
    {46, 425, 736, 2, Smoke::mf_static, 30, 190},	//601 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {46, 433, 739, 2, Smoke::mf_static, 124, 191},	//602 QGlobalSpace::operator|(QPainter::RenderHint, QPainter::RenderHint)
    {46, 412, 742, 2, Smoke::mf_static, 446, 192},	//603 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {46, 396, 745, 2, Smoke::mf_static, 327, 193},	//604 QGlobalSpace::operator/(const QTransform&, double)
    {46, 402, 748, 2, Smoke::mf_static, 321, 194},	//605 QGlobalSpace::operator<<(QTextStream&, const QSplitter&)
    {46, 433, 751, 2, Smoke::mf_static, 86, 195},	//606 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    {46, 383, 754, 2, Smoke::mf_static, 548, 196},	//607 QGlobalSpace::operator*(const QVector2D&, double)
    {46, 402, 757, 2, Smoke::mf_static, 30, 197},	//608 QGlobalSpace::operator<<(QDataStream&, const QScriptContextInfo&)
    {46, 433, 760, 2, Smoke::mf_static, 149, 198},	//609 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag)
    {46, 674, 763, 3, Smoke::mf_static, 446, 199},	//610 QGlobalSpace::qscriptvalue_cast_helper(const QScriptValue&, int, void*)
    {46, 402, 767, 2, Smoke::mf_static, 34, 200},	//611 QGlobalSpace::operator<<(QDebug, const QNetworkInterface&)
    {46, 433, 770, 2, Smoke::mf_static, 135, 201},	//612 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    {46, 377, 773, 2, Smoke::mf_static, 446, 202},	//613 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {46, 383, 776, 2, Smoke::mf_static, 552, 203},	//614 QGlobalSpace::operator*(const QVector4D&, double)
    {46, 433, 779, 2, Smoke::mf_static, 199, 204},	//615 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    {46, 433, 782, 2, Smoke::mf_static, 199, 205},	//616 QGlobalSpace::operator|(QFile::Permission, int)
    {46, 402, 785, 2, Smoke::mf_static, 34, 206},	//617 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {46, 398, 788, 2, Smoke::mf_static, 446, 207},	//618 QGlobalSpace::operator<(QChar, QChar)
    {46, 460, 0, 0, Smoke::mf_static, 11, 208},	//619 QGlobalSpace::qAccessibleTextCastHelper()
    {46, 412, 466, 2, Smoke::mf_static, 446, 209},	//620 QGlobalSpace::operator==(const QQuaternion&, const QQuaternion&)
    {46, 656, 791, 4, Smoke::mf_static, 235, 210},	//621 QGlobalSpace::qmlAttachedPropertiesObject(int*, const QObject*, const QMetaObject*, bool)
    {46, 562, 299, 2, Smoke::mf_static, 446, 211},	//622 QGlobalSpace::qFuzzyCompare(const QMatrix4x4&, const QMatrix4x4&)
    {46, 396, 796, 2, Smoke::mf_static, 220, 212},	//623 QGlobalSpace::operator/(const QMatrix4x4&, double)
    {46, 383, 799, 2, Smoke::mf_static, 244, 213},	//624 QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    {46, 402, 802, 2, Smoke::mf_static, 30, 214},	//625 QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    {46, 402, 805, 2, Smoke::mf_static, 34, 215},	//626 QGlobalSpace::operator<<(QDebug, QSslCertificate::SubjectInfo)
    {46, 433, 808, 2, Smoke::mf_static, 116, 216},	//627 QGlobalSpace::operator|(QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>)
    {46, 695, 811, 3, Smoke::mf_static, 559, 217},	//628 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {46, 572, 815, 1, Smoke::mf_static, 569, 218},	//629 QGlobalSpace::qHash(const QByteArray&)
    {46, 433, 817, 2, Smoke::mf_static, 86, 219},	//630 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    {46, 433, 820, 2, Smoke::mf_static, 199, 220},	//631 QGlobalSpace::operator|(QInputDialog::InputDialogOption, int)
    {46, 433, 823, 2, Smoke::mf_static, 199, 221},	//632 QGlobalSpace::operator|(QStyle::StateFlag, int)
    {46, 387, 299, 2, Smoke::mf_static, 220, 222},	//633 QGlobalSpace::operator+(const QMatrix4x4&, const QMatrix4x4&)
    {46, 667, 73, 1, Smoke::mf_static, 48, 223},	//634 QGlobalSpace::qmlInfo(const QObject*)
    {46, 402, 826, 2, Smoke::mf_static, 34, 224},	//635 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {46, 572, 829, 1, Smoke::mf_static, 569, 225},	//636 QGlobalSpace::qHash(const QHostAddress&)
    {46, 383, 319, 2, Smoke::mf_static, 548, 226},	//637 QGlobalSpace::operator*(const QVector2D&, const QVector2D&)
    {46, 706, 831, 2, Smoke::mf_static, 0, 227},	//638 QGlobalSpace::qt_check_pointer(const char*, int)
    {46, 425, 834, 2, Smoke::mf_static, 30, 228},	//639 QGlobalSpace::operator>>(QDataStream&, QRegion&)
    {46, 433, 837, 2, Smoke::mf_static, 199, 229},	//640 QGlobalSpace::operator|(QPainter::RenderHint, int)
    {46, 433, 840, 2, Smoke::mf_static, 199, 230},	//641 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    {46, 433, 843, 2, Smoke::mf_static, 153, 231},	//642 QGlobalSpace::operator|(QWizard::WizardOption, QWizard::WizardOption)
    {46, 433, 846, 2, Smoke::mf_static, 119, 232},	//643 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability)
    {46, 433, 849, 2, Smoke::mf_static, 148, 233},	//644 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {46, 425, 852, 2, Smoke::mf_static, 30, 234},	//645 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {46, 433, 855, 2, Smoke::mf_static, 153, 235},	//646 QGlobalSpace::operator|(QWizard::WizardOption, QFlags<QWizard::WizardOption>)
    {46, 383, 858, 2, Smoke::mf_static, 502, 236},	//647 QGlobalSpace::operator*(const QPointF&, double)
    {46, 678, 348, 2, Smoke::mf_static, 559, 237},	//648 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {46, 433, 861, 2, Smoke::mf_static, 123, 238},	//649 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>)
    {46, 433, 864, 2, Smoke::mf_static, 105, 239},	//650 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag)
    {46, 425, 867, 2, Smoke::mf_static, 30, 240},	//651 QGlobalSpace::operator>>(QDataStream&, QNetworkCacheMetaData&)
    {46, 632, 870, 1, Smoke::mf_static, 324, 241},	//652 QGlobalSpace::qSetPadChar(QChar)
    {46, 678, 612, 2, Smoke::mf_static, 559, 242},	//653 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {46, 412, 287, 2, Smoke::mf_static, 446, 243},	//654 QGlobalSpace::operator==(const QSize&, const QSize&)
    {46, 512, 872, 9, Smoke::mf_static, 0, 244},	//655 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool, int, const QBrush*)
    {46, 512, 520, 6, Smoke::mf_static, 0, 245},	//656 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&)
    {46, 512, 527, 7, Smoke::mf_static, 0, 246},	//657 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool)
    {46, 512, 558, 8, Smoke::mf_static, 0, 247},	//658 QGlobalSpace::qDrawShadePanel(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {46, 636, 0, 0, Smoke::mf_static, 446, 248},	//659 QGlobalSpace::qSharedBuild()
    {46, 387, 466, 2, Smoke::mf_static, 506, 249},	//660 QGlobalSpace::operator+(const QQuaternion&, const QQuaternion&)
    {46, 433, 882, 2, Smoke::mf_static, 83, 250},	//661 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {46, 576, 885, 1, Smoke::mf_static, 575, 251},	//662 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {46, 402, 887, 2, Smoke::mf_static, 30, 252},	//663 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {46, 717, 890, 3, Smoke::mf_static, 235, 253},	//664 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {46, 658, 894, 3, Smoke::mf_static, 235, 254},	//665 QGlobalSpace::qmlAttachedPropertiesObjectById(int, const QObject*, bool)
    {46, 658, 898, 2, Smoke::mf_static, 235, 255},	//666 QGlobalSpace::qmlAttachedPropertiesObjectById(int, const QObject*)
    {46, 433, 901, 2, Smoke::mf_static, 162, 256},	//667 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {46, 383, 904, 2, Smoke::mf_static, 341, 257},	//668 QGlobalSpace::operator*(const QVector3D&, const QMatrix4x4&)
    {46, 433, 907, 2, Smoke::mf_static, 199, 258},	//669 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {46, 377, 348, 2, Smoke::mf_static, 446, 259},	//670 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {46, 532, 910, 5, Smoke::mf_static, 0, 260},	//671 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&, bool, const QBrush*)
    {46, 532, 437, 3, Smoke::mf_static, 0, 261},	//672 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&)
    {46, 532, 441, 4, Smoke::mf_static, 0, 262},	//673 QGlobalSpace::qDrawWinButton(QPainter*, const QRect&, const QPalette&, bool)
    {46, 433, 916, 2, Smoke::mf_static, 199, 263},	//674 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {46, 433, 919, 2, Smoke::mf_static, 130, 264},	//675 QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    {46, 433, 922, 2, Smoke::mf_static, 199, 265},	//676 QGlobalSpace::operator|(QFontComboBox::FontFilter, int)
    {46, 433, 925, 2, Smoke::mf_static, 199, 266},	//677 QGlobalSpace::operator|(QTextDocument::FindFlag, int)
    {46, 425, 928, 2, Smoke::mf_static, 30, 267},	//678 QGlobalSpace::operator>>(QDataStream&, QCursor&)
    {46, 392, 319, 2, Smoke::mf_static, 548, 268},	//679 QGlobalSpace::operator-(const QVector2D&, const QVector2D&)
    {46, 433, 931, 2, Smoke::mf_static, 161, 269},	//680 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {46, 396, 328, 2, Smoke::mf_static, 518, 270},	//681 QGlobalSpace::operator/(const QSizeF&, double)
    {46, 383, 934, 2, Smoke::mf_static, 550, 271},	//682 QGlobalSpace::operator*(const QVector3D&, double)
    {46, 433, 937, 2, Smoke::mf_static, 162, 272},	//683 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {46, 425, 940, 2, Smoke::mf_static, 30, 273},	//684 QGlobalSpace::operator>>(QDataStream&, QTransform&)
    {46, 383, 943, 2, Smoke::mf_static, 256, 274},	//685 QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    {46, 417, 788, 2, Smoke::mf_static, 446, 275},	//686 QGlobalSpace::operator>(QChar, QChar)
    {46, 421, 718, 2, Smoke::mf_static, 446, 276},	//687 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {46, 560, 946, 1, Smoke::mf_static, 0, 277},	//688 QGlobalSpace::qFreeAligned(void*)
    {46, 402, 948, 2, Smoke::mf_static, 34, 278},	//689 QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketState)
    {46, 433, 951, 2, Smoke::mf_static, 138, 279},	//690 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    {46, 412, 954, 2, Smoke::mf_static, 446, 280},	//691 QGlobalSpace::operator==(const QString&, QString::Null)
    {46, 402, 957, 2, Smoke::mf_static, 34, 281},	//692 QGlobalSpace::operator<<(QDebug, const QPen&)
    {46, 578, 586, 1, Smoke::mf_static, 559, 282},	//693 QGlobalSpace::qIntCast(float)
    {46, 398, 348, 2, Smoke::mf_static, 446, 283},	//694 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {46, 433, 960, 2, Smoke::mf_static, 140, 284},	//695 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    {46, 671, 718, 2, Smoke::mf_static, 446, 285},	//696 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {46, 433, 963, 2, Smoke::mf_static, 199, 286},	//697 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {46, 425, 966, 2, Smoke::mf_static, 30, 287},	//698 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {46, 641, 969, 2, Smoke::mf_static, 446, 288},	//699 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {46, 691, 811, 3, Smoke::mf_static, 559, 289},	//700 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {46, 521, 972, 7, Smoke::mf_static, 0, 290},	//701 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int, int, const QBrush*)
    {46, 521, 437, 3, Smoke::mf_static, 0, 291},	//702 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&)
    {46, 521, 441, 4, Smoke::mf_static, 0, 292},	//703 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool)
    {46, 521, 446, 5, Smoke::mf_static, 0, 293},	//704 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int)
    {46, 521, 980, 6, Smoke::mf_static, 0, 294},	//705 QGlobalSpace::qDrawShadeRect(QPainter*, const QRect&, const QPalette&, bool, int, int)
    {46, 433, 987, 2, Smoke::mf_static, 144, 295},	//706 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag)
    {46, 433, 990, 2, Smoke::mf_static, 199, 296},	//707 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, int)
    {46, 433, 993, 2, Smoke::mf_static, 199, 297},	//708 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, int)
    {46, 392, 996, 1, Smoke::mf_static, 502, 298},	//709 QGlobalSpace::operator-(const QPointF&)
    {46, 605, 998, 4, Smoke::mf_static, 577, 299},	//710 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {46, 433, 1003, 2, Smoke::mf_static, 160, 300},	//711 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {46, 402, 1006, 2, Smoke::mf_static, 30, 301},	//712 QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    {46, 572, 1009, 1, Smoke::mf_static, 569, 302},	//713 QGlobalSpace::qHash(unsigned long long)
    {46, 433, 1011, 2, Smoke::mf_static, 169, 303},	//714 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {46, 402, 1014, 2, Smoke::mf_static, 34, 304},	//715 QGlobalSpace::operator<<(QDebug, const QSize&)
    {46, 383, 1017, 2, Smoke::mf_static, 254, 305},	//716 QGlobalSpace::operator*(const QPointF&, const QTransform&)
    {46, 433, 1020, 2, Smoke::mf_static, 160, 306},	//717 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {46, 402, 1023, 2, Smoke::mf_static, 34, 307},	//718 QGlobalSpace::operator<<(QDebug, const QVector3D&)
    {46, 433, 1026, 2, Smoke::mf_static, 167, 308},	//719 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {46, 468, 0, 0, Smoke::mf_static, 292, 309},	//720 QGlobalSpace::qAppName()
    {46, 421, 773, 2, Smoke::mf_static, 446, 310},	//721 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {46, 433, 1029, 2, Smoke::mf_static, 95, 311},	//722 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>)
    {46, 572, 870, 1, Smoke::mf_static, 569, 312},	//723 QGlobalSpace::qHash(QChar)
    {46, 433, 1032, 2, Smoke::mf_static, 199, 313},	//724 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, int)
    {46, 496, 1035, 8, Smoke::mf_static, 0, 314},	//725 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&, int, const QBrush*)
    {46, 496, 1044, 6, Smoke::mf_static, 0, 315},	//726 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&)
    {46, 496, 1051, 7, Smoke::mf_static, 0, 316},	//727 QGlobalSpace::qDrawPlainRect(QPainter*, int, int, int, int, const QColor&, int)
    {46, 433, 1059, 2, Smoke::mf_static, 120, 317},	//728 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag)
    {46, 412, 368, 2, Smoke::mf_static, 446, 318},	//729 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {46, 565, 114, 1, Smoke::mf_static, 446, 319},	//730 QGlobalSpace::qFuzzyIsNull(double)
    {46, 402, 1062, 2, Smoke::mf_static, 34, 320},	//731 QGlobalSpace::operator<<(QDebug, const QNetworkCookie&)
    {46, 383, 299, 2, Smoke::mf_static, 220, 321},	//732 QGlobalSpace::operator*(const QMatrix4x4&, const QMatrix4x4&)
    {46, 402, 1065, 2, Smoke::mf_static, 30, 322},	//733 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {46, 598, 1068, 3, Smoke::mf_static, 577, 323},	//734 QGlobalSpace::qMemSet(void*, int, size_t)
    {46, 473, 130, 2, Smoke::mf_static, 557, 324},	//735 QGlobalSpace::qAtan2(double, double)
    {46, 433, 1072, 2, Smoke::mf_static, 130, 325},	//736 QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    {46, 425, 1075, 2, Smoke::mf_static, 30, 326},	//737 QGlobalSpace::operator>>(QDataStream&, QHostAddress&)
    {46, 402, 1078, 2, Smoke::mf_static, 30, 327},	//738 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {46, 425, 1081, 2, Smoke::mf_static, 30, 328},	//739 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {46, 482, 1084, 2, Smoke::mf_static, 20, 329},	//740 QGlobalSpace::qCompress(const QByteArray&, int)
    {46, 482, 815, 1, Smoke::mf_static, 20, 330},	//741 QGlobalSpace::qCompress(const QByteArray&)
    {46, 433, 1087, 2, Smoke::mf_static, 199, 331},	//742 QGlobalSpace::operator|(QScriptValue::PropertyFlag, int)
    {46, 433, 1090, 2, Smoke::mf_static, 199, 332},	//743 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    {46, 402, 1093, 2, Smoke::mf_static, 34, 333},	//744 QGlobalSpace::operator<<(QDebug, const QVector2D&)
    {46, 433, 1096, 2, Smoke::mf_static, 161, 334},	//745 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {46, 383, 1099, 2, Smoke::mf_static, 343, 335},	//746 QGlobalSpace::operator*(const QMatrix4x4&, const QVector4D&)
    {46, 433, 1102, 2, Smoke::mf_static, 199, 336},	//747 QGlobalSpace::operator|(QAccessible::StateFlag, int)
    {46, 398, 718, 2, Smoke::mf_static, 446, 337},	//748 QGlobalSpace::operator<(const char*, const QByteArray&)
    {46, 496, 1105, 5, Smoke::mf_static, 0, 338},	//749 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&, int, const QBrush*)
    {46, 496, 1111, 3, Smoke::mf_static, 0, 339},	//750 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&)
    {46, 496, 1115, 4, Smoke::mf_static, 0, 340},	//751 QGlobalSpace::qDrawPlainRect(QPainter*, const QRect&, const QColor&, int)
    {46, 433, 1120, 2, Smoke::mf_static, 125, 341},	//752 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag)
    {46, 433, 1123, 2, Smoke::mf_static, 199, 342},	//753 QGlobalSpace::operator|(QDateTimeEdit::Section, int)
    {46, 464, 1126, 1, Smoke::mf_static, 0, 343},	//754 QGlobalSpace::qAddPostRoutine(void(*)())
    {46, 433, 1128, 2, Smoke::mf_static, 199, 344},	//755 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {46, 383, 1131, 2, Smoke::mf_static, 252, 345},	//756 QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    {46, 433, 1134, 2, Smoke::mf_static, 199, 346},	//757 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {46, 433, 1137, 2, Smoke::mf_static, 199, 347},	//758 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {46, 546, 114, 1, Smoke::mf_static, 557, 348},	//759 QGlobalSpace::qExp(double)
    {46, 377, 287, 2, Smoke::mf_static, 446, 349},	//760 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {46, 433, 1140, 2, Smoke::mf_static, 158, 350},	//761 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {46, 406, 612, 2, Smoke::mf_static, 446, 351},	//762 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {46, 402, 1143, 2, Smoke::mf_static, 30, 352},	//763 QGlobalSpace::operator<<(QDataStream&, const QPen&)
    {46, 377, 1146, 2, Smoke::mf_static, 446, 353},	//764 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {46, 433, 1149, 2, Smoke::mf_static, 199, 354},	//765 QGlobalSpace::operator|(QString::SectionFlag, int)
    {46, 433, 1152, 2, Smoke::mf_static, 199, 355},	//766 QGlobalSpace::operator|(Qt::WindowType, int)
    {46, 433, 1155, 2, Smoke::mf_static, 152, 356},	//767 QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    {46, 412, 1158, 2, Smoke::mf_static, 446, 357},	//768 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {46, 588, 114, 1, Smoke::mf_static, 446, 358},	//769 QGlobalSpace::qIsNull(double)
    {46, 491, 1161, 8, Smoke::mf_static, 0, 359},	//770 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&, QFlags<QDrawBorderPixmap::DrawingHint>)
    {46, 491, 1170, 6, Smoke::mf_static, 0, 360},	//771 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&)
    {46, 491, 1177, 7, Smoke::mf_static, 0, 361},	//772 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&, const QRect&, const QMargins&, const QTileRules&)
    {46, 412, 1185, 2, Smoke::mf_static, 446, 362},	//773 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {46, 578, 114, 1, Smoke::mf_static, 559, 363},	//774 QGlobalSpace::qIntCast(double)
    {46, 431, 219, 2, Smoke::mf_static, 16, 364},	//775 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {46, 480, 1188, 2, Smoke::mf_static, 572, 365},	//776 QGlobalSpace::qChecksum(const char*, unsigned int)
    {46, 433, 1191, 2, Smoke::mf_static, 151, 366},	//777 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {46, 433, 1194, 2, Smoke::mf_static, 199, 367},	//778 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, int)
    {46, 425, 1197, 2, Smoke::mf_static, 30, 368},	//779 QGlobalSpace::operator>>(QDataStream&, QIcon&)
    {46, 433, 1200, 2, Smoke::mf_static, 199, 369},	//780 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, int)
    {46, 402, 1203, 2, Smoke::mf_static, 30, 370},	//781 QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    {46, 383, 745, 2, Smoke::mf_static, 327, 371},	//782 QGlobalSpace::operator*(const QTransform&, double)
    {46, 433, 1206, 2, Smoke::mf_static, 199, 372},	//783 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {46, 433, 1209, 2, Smoke::mf_static, 152, 373},	//784 QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    {46, 398, 773, 2, Smoke::mf_static, 446, 374},	//785 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {46, 402, 1212, 2, Smoke::mf_static, 34, 375},	//786 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {46, 433, 1215, 2, Smoke::mf_static, 199, 376},	//787 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, int)
    {46, 652, 1, 1, Smoke::mf_static, 20, 377},	//788 QGlobalSpace::qgetenv(const char*)
    {46, 433, 1218, 2, Smoke::mf_static, 199, 378},	//789 QGlobalSpace::operator|(QImageIOPlugin::Capability, int)
    {46, 402, 1221, 2, Smoke::mf_static, 34, 379},	//790 QGlobalSpace::operator<<(QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>)
    {46, 433, 1224, 2, Smoke::mf_static, 199, 380},	//791 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, int)
    {46, 433, 1227, 2, Smoke::mf_static, 199, 381},	//792 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    {46, 402, 1230, 2, Smoke::mf_static, 34, 382},	//793 QGlobalSpace::operator<<(QDebug, const QHostAddress&)
    {46, 377, 969, 2, Smoke::mf_static, 446, 383},	//794 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {46, 402, 1233, 2, Smoke::mf_static, 34, 384},	//795 QGlobalSpace::operator<<(QDebug, const QVector4D&)
    {46, 425, 1236, 2, Smoke::mf_static, 321, 385},	//796 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {46, 433, 1239, 2, Smoke::mf_static, 199, 386},	//797 QGlobalSpace::operator|(QWizard::WizardOption, int)
    {46, 377, 718, 2, Smoke::mf_static, 446, 387},	//798 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {46, 433, 1242, 2, Smoke::mf_static, 199, 388},	//799 QGlobalSpace::operator|(QFileDialog::Option, int)
    {46, 462, 114, 1, Smoke::mf_static, 557, 389},	//800 QGlobalSpace::qAcos(double)
    {46, 433, 1245, 2, Smoke::mf_static, 133, 390},	//801 QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    {46, 417, 773, 2, Smoke::mf_static, 446, 391},	//802 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {46, 396, 776, 2, Smoke::mf_static, 552, 392},	//803 QGlobalSpace::operator/(const QVector4D&, double)
    {46, 383, 1248, 2, Smoke::mf_static, 252, 393},	//804 QGlobalSpace::operator*(const QMatrix4x4&, const QPoint&)
    {46, 628, 1251, 3, Smoke::mf_static, 272, 394},	//805 QGlobalSpace::qScriptValueFromValue_helper(QScriptEngine*, int, const void*)
    {46, 433, 1255, 2, Smoke::mf_static, 140, 395},	//806 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    {46, 425, 1258, 2, Smoke::mf_static, 30, 396},	//807 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {46, 433, 1261, 2, Smoke::mf_static, 106, 397},	//808 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>)
    {46, 396, 371, 2, Smoke::mf_static, 506, 398},	//809 QGlobalSpace::operator/(const QQuaternion&, double)
    {46, 433, 1264, 2, Smoke::mf_static, 116, 399},	//810 QGlobalSpace::operator|(QMdiArea::AreaOption, QMdiArea::AreaOption)
    {46, 425, 1267, 2, Smoke::mf_static, 30, 400},	//811 QGlobalSpace::operator>>(QDataStream&, QStandardItem&)
    {46, 402, 1270, 2, Smoke::mf_static, 30, 401},	//812 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {46, 433, 1273, 2, Smoke::mf_static, 98, 402},	//813 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {46, 457, 0, 0, Smoke::mf_static, 11, 403},	//814 QGlobalSpace::qAccessibleImageCastHelper()
    {46, 433, 1276, 2, Smoke::mf_static, 199, 404},	//815 QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, int)
    {46, 402, 1279, 2, Smoke::mf_static, 34, 405},	//816 QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    {46, 693, 1282, 3, Smoke::mf_static, 449, 406},	//817 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {46, 433, 1286, 2, Smoke::mf_static, 89, 407},	//818 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>)
    {46, 425, 1289, 2, Smoke::mf_static, 30, 408},	//819 QGlobalSpace::operator>>(QDataStream&, QBrush&)
    {46, 402, 1292, 2, Smoke::mf_static, 30, 409},	//820 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {46, 425, 1295, 2, Smoke::mf_static, 30, 410},	//821 QGlobalSpace::operator>>(QDataStream&, QMatrix4x4&)
    {46, 392, 1298, 1, Smoke::mf_static, 552, 411},	//822 QGlobalSpace::operator-(const QVector4D&)
    {46, 402, 1300, 2, Smoke::mf_static, 34, 412},	//823 QGlobalSpace::operator<<(QDebug, const QMatrix4x4&)
    {46, 572, 29, 1, Smoke::mf_static, 569, 413},	//824 QGlobalSpace::qHash(const QUrl&)
    {46, 433, 1303, 2, Smoke::mf_static, 199, 414},	//825 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, int)
    {46, 425, 1306, 2, Smoke::mf_static, 30, 415},	//826 QGlobalSpace::operator>>(QDataStream&, QTextFormat&)
    {46, 580, 586, 1, Smoke::mf_static, 446, 416},	//827 QGlobalSpace::qIsFinite(float)
    {46, 377, 658, 2, Smoke::mf_static, 446, 417},	//828 QGlobalSpace::operator!=(const QVector3D&, const QVector3D&)
    {46, 412, 319, 2, Smoke::mf_static, 446, 418},	//829 QGlobalSpace::operator==(const QVector2D&, const QVector2D&)
    {46, 708, 85, 1, Smoke::mf_static, 292, 419},	//830 QGlobalSpace::qt_error_string(int)
    {46, 708, 0, 0, Smoke::mf_static, 292, 420},	//831 QGlobalSpace::qt_error_string()
    {46, 396, 754, 2, Smoke::mf_static, 548, 421},	//832 QGlobalSpace::operator/(const QVector2D&, double)
    {46, 383, 1309, 2, Smoke::mf_static, 500, 422},	//833 QGlobalSpace::operator*(const QPoint&, float)
    {46, 433, 1312, 2, Smoke::mf_static, 199, 423},	//834 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {46, 425, 1315, 2, Smoke::mf_static, 30, 424},	//835 QGlobalSpace::operator>>(QDataStream&, QListWidgetItem&)
    {46, 603, 1318, 2, Smoke::mf_static, 577, 425},	//836 QGlobalSpace::qRealloc(void*, size_t)
    {46, 433, 1321, 2, Smoke::mf_static, 104, 426},	//837 QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>)
    {46, 433, 1324, 2, Smoke::mf_static, 103, 427},	//838 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>)
    {46, 387, 1327, 2, Smoke::mf_static, 528, 428},	//839 QGlobalSpace::operator+(const QString&, const QString&)
    {46, 433, 1330, 2, Smoke::mf_static, 199, 429},	//840 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    {46, 459, 0, 0, Smoke::mf_static, 11, 430},	//841 QGlobalSpace::qAccessibleTableCastHelper()
    {46, 433, 1333, 2, Smoke::mf_static, 199, 431},	//842 QGlobalSpace::operator|(QMessageBox::StandardButton, int)
    {46, 383, 796, 2, Smoke::mf_static, 220, 432},	//843 QGlobalSpace::operator*(const QMatrix4x4&, double)
    {46, 704, 1336, 4, Smoke::mf_static, 0, 433},	//844 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {46, 377, 612, 2, Smoke::mf_static, 446, 434},	//845 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {46, 377, 1341, 2, Smoke::mf_static, 446, 435},	//846 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {46, 402, 1344, 2, Smoke::mf_static, 34, 436},	//847 QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemFlag)
    {46, 433, 1347, 2, Smoke::mf_static, 131, 437},	//848 QGlobalSpace::operator|(QSsl::SslOption, QSsl::SslOption)
    {46, 433, 1350, 2, Smoke::mf_static, 87, 438},	//849 QGlobalSpace::operator|(QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>)
    {46, 412, 1353, 2, Smoke::mf_static, 446, 439},	//850 QGlobalSpace::operator==(QKeySequence::StandardKey, QKeyEvent*)
    {46, 433, 1356, 2, Smoke::mf_static, 199, 440},	//851 QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    {46, 425, 1359, 2, Smoke::mf_static, 30, 441},	//852 QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    {46, 417, 348, 2, Smoke::mf_static, 446, 442},	//853 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {46, 617, 114, 1, Smoke::mf_static, 559, 443},	//854 QGlobalSpace::qRound(double)
    {46, 412, 1146, 2, Smoke::mf_static, 446, 444},	//855 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {46, 402, 1362, 2, Smoke::mf_static, 34, 445},	//856 QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketError)
    {46, 433, 219, 2, Smoke::mf_static, 16, 446},	//857 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {46, 412, 1365, 2, Smoke::mf_static, 446, 447},	//858 QGlobalSpace::operator==(const char*, const QStringRef&)
    {46, 387, 718, 2, Smoke::mf_static, 453, 448},	//859 QGlobalSpace::operator+(const char*, const QByteArray&)
    {46, 433, 1368, 2, Smoke::mf_static, 150, 449},	//860 QGlobalSpace::operator|(QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>)
    {46, 425, 1371, 2, Smoke::mf_static, 30, 450},	//861 QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    {46, 433, 1374, 2, Smoke::mf_static, 199, 451},	//862 QGlobalSpace::operator|(Qt::MouseButton, int)
    {46, 433, 1377, 2, Smoke::mf_static, 137, 452},	//863 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    {46, 406, 773, 2, Smoke::mf_static, 446, 453},	//864 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {46, 425, 1380, 2, Smoke::mf_static, 30, 454},	//865 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {46, 433, 1383, 2, Smoke::mf_static, 199, 455},	//866 QGlobalSpace::operator|(QSsl::SslOption, int)
    {46, 433, 1386, 2, Smoke::mf_static, 94, 456},	//867 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {46, 433, 1389, 2, Smoke::mf_static, 159, 457},	//868 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {46, 582, 340, 1, Smoke::mf_static, 446, 458},	//869 QGlobalSpace::qIsGray(unsigned int)
    {46, 433, 1392, 2, Smoke::mf_static, 148, 459},	//870 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {46, 383, 1395, 2, Smoke::mf_static, 254, 460},	//871 QGlobalSpace::operator*(const QMatrix4x4&, const QPointF&)
    {46, 392, 1398, 1, Smoke::mf_static, 220, 461},	//872 QGlobalSpace::operator-(const QMatrix4x4&)
    {46, 433, 1400, 2, Smoke::mf_static, 85, 462},	//873 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>)
    {46, 383, 1403, 2, Smoke::mf_static, 548, 463},	//874 QGlobalSpace::operator*(double, const QVector2D&)
    {46, 433, 1406, 2, Smoke::mf_static, 111, 464},	//875 QGlobalSpace::operator|(QInputDialog::InputDialogOption, QInputDialog::InputDialogOption)
    {46, 433, 1409, 2, Smoke::mf_static, 199, 465},	//876 QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, int)
    {46, 425, 1412, 2, Smoke::mf_static, 30, 466},	//877 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {46, 412, 788, 2, Smoke::mf_static, 446, 467},	//878 QGlobalSpace::operator==(QChar, QChar)
    {46, 433, 1415, 2, Smoke::mf_static, 165, 468},	//879 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {46, 402, 1418, 2, Smoke::mf_static, 30, 469},	//880 QGlobalSpace::operator<<(QDataStream&, const QVector3D&)
    {46, 377, 1158, 2, Smoke::mf_static, 446, 470},	//881 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {46, 383, 1421, 2, Smoke::mf_static, 209, 471},	//882 QGlobalSpace::operator*(const QLineF&, const QTransform&)
    {46, 402, 1424, 2, Smoke::mf_static, 34, 472},	//883 QGlobalSpace::operator<<(QDebug, const QSslCipher&)
    {46, 377, 1427, 2, Smoke::mf_static, 446, 473},	//884 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {46, 572, 1430, 1, Smoke::mf_static, 569, 474},	//885 QGlobalSpace::qHash(signed char)
    {46, 402, 1432, 2, Smoke::mf_static, 30, 475},	//886 QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    {46, 402, 1435, 2, Smoke::mf_static, 30, 476},	//887 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {46, 433, 1438, 2, Smoke::mf_static, 166, 477},	//888 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {46, 383, 1441, 2, Smoke::mf_static, 550, 478},	//889 QGlobalSpace::operator*(double, const QVector3D&)
    {46, 639, 114, 1, Smoke::mf_static, 557, 479},	//890 QGlobalSpace::qSqrt(double)
    {46, 402, 1444, 2, Smoke::mf_static, 30, 480},	//891 QGlobalSpace::operator<<(QDataStream&, const QFont&)
    {46, 433, 1447, 2, Smoke::mf_static, 147, 481},	//892 QGlobalSpace::operator|(QTextOption::Flag, QFlags<QTextOption::Flag>)
    {46, 678, 3, 2, Smoke::mf_static, 559, 482},	//893 QGlobalSpace::qstrcmp(const char*, const char*)
    {46, 425, 1450, 2, Smoke::mf_static, 30, 483},	//894 QGlobalSpace::operator>>(QDataStream&, QTableWidgetItem&)
    {46, 433, 1453, 2, Smoke::mf_static, 134, 484},	//895 QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    {46, 412, 307, 2, Smoke::mf_static, 446, 485},	//896 QGlobalSpace::operator==(const QVector4D&, const QVector4D&)
    {46, 402, 1456, 2, Smoke::mf_static, 30, 486},	//897 QGlobalSpace::operator<<(QDataStream&, const QVector2D&)
    {46, 402, 1459, 2, Smoke::mf_static, 30, 487},	//898 QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    {46, 396, 934, 2, Smoke::mf_static, 550, 488},	//899 QGlobalSpace::operator/(const QVector3D&, double)
    {46, 433, 1462, 2, Smoke::mf_static, 124, 489},	//900 QGlobalSpace::operator|(QPainter::RenderHint, QFlags<QPainter::RenderHint>)
    {46, 377, 351, 2, Smoke::mf_static, 446, 490},	//901 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {46, 663, 73, 1, Smoke::mf_static, 39, 491},	//902 QGlobalSpace::qmlEngine(const QObject*)
    {46, 377, 788, 2, Smoke::mf_static, 446, 492},	//903 QGlobalSpace::operator!=(QChar, QChar)
    {46, 433, 1465, 2, Smoke::mf_static, 113, 493},	//904 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {46, 383, 1468, 2, Smoke::mf_static, 220, 494},	//905 QGlobalSpace::operator*(double, const QMatrix4x4&)
    {46, 697, 1188, 2, Smoke::mf_static, 569, 495},	//906 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {46, 433, 1471, 2, Smoke::mf_static, 108, 496},	//907 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>)
    {46, 613, 642, 3, Smoke::mf_static, 569, 497},	//908 QGlobalSpace::qRgb(int, int, int)
    {46, 562, 307, 2, Smoke::mf_static, 446, 498},	//909 QGlobalSpace::qFuzzyCompare(const QVector4D&, const QVector4D&)
    {46, 556, 114, 1, Smoke::mf_static, 559, 499},	//910 QGlobalSpace::qFloor(double)
    {46, 433, 1474, 2, Smoke::mf_static, 168, 500},	//911 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {46, 433, 1477, 2, Smoke::mf_static, 146, 501},	//912 QGlobalSpace::operator|(QTextItem::RenderFlag, QTextItem::RenderFlag)
    {46, 402, 1480, 2, Smoke::mf_static, 34, 502},	//913 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {46, 433, 1483, 2, Smoke::mf_static, 107, 503},	//914 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag)
    {46, 433, 1486, 2, Smoke::mf_static, 199, 504},	//915 QGlobalSpace::operator|(QNetworkProxy::Capability, int)
    {46, 433, 1489, 2, Smoke::mf_static, 151, 505},	//916 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {46, 412, 345, 2, Smoke::mf_static, 446, 506},	//917 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {46, 425, 1492, 2, Smoke::mf_static, 30, 507},	//918 QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    {46, 433, 1495, 2, Smoke::mf_static, 149, 508},	//919 QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>)
    {46, 425, 1498, 2, Smoke::mf_static, 30, 509},	//920 QGlobalSpace::operator>>(QDataStream&, QPalette&)
    {46, 402, 1501, 2, Smoke::mf_static, 30, 510},	//921 QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    {46, 433, 1504, 2, Smoke::mf_static, 88, 511},	//922 QGlobalSpace::operator|(QAccessible::StateFlag, QAccessible::StateFlag)
    {46, 412, 773, 2, Smoke::mf_static, 446, 512},	//923 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {46, 377, 146, 2, Smoke::mf_static, 446, 513},	//924 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {46, 572, 1507, 1, Smoke::mf_static, 569, 514},	//925 QGlobalSpace::qHash(const QScriptString&)
    {46, 383, 1509, 2, Smoke::mf_static, 516, 515},	//926 QGlobalSpace::operator*(double, const QSize&)
    {46, 412, 1512, 2, Smoke::mf_static, 446, 516},	//927 QGlobalSpace::operator==(QKeyEvent*, QKeySequence::StandardKey)
    {46, 433, 1515, 2, Smoke::mf_static, 98, 517},	//928 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {46, 572, 1518, 1, Smoke::mf_static, 569, 518},	//929 QGlobalSpace::qHash(const QModelIndex&)
    {46, 433, 1520, 2, Smoke::mf_static, 107, 519},	//930 QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>)
    {46, 433, 1523, 2, Smoke::mf_static, 134, 520},	//931 QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    {46, 433, 1526, 2, Smoke::mf_static, 121, 521},	//932 QGlobalSpace::operator|(QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>)
    {46, 402, 1529, 2, Smoke::mf_static, 34, 522},	//933 QGlobalSpace::operator<<(QDebug, const QLine&)
    {46, 461, 0, 0, Smoke::mf_static, 11, 523},	//934 QGlobalSpace::qAccessibleValueCastHelper()
    {46, 433, 1532, 2, Smoke::mf_static, 84, 524},	//935 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    {46, 611, 1126, 1, Smoke::mf_static, 0, 525},	//936 QGlobalSpace::qRemovePostRoutine(void(*)())
    {46, 433, 1535, 2, Smoke::mf_static, 199, 526},	//937 QGlobalSpace::operator|(QPinchGesture::ChangeFlag, int)
    {46, 425, 1538, 2, Smoke::mf_static, 30, 527},	//938 QGlobalSpace::operator>>(QDataStream&, QQuaternion&)
    {46, 383, 1541, 2, Smoke::mf_static, 343, 528},	//939 QGlobalSpace::operator*(const QVector4D&, const QMatrix4x4&)
    {46, 402, 1544, 2, Smoke::mf_static, 30, 529},	//940 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {46, 562, 1547, 2, Smoke::mf_static, 446, 530},	//941 QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    {46, 433, 1550, 2, Smoke::mf_static, 141, 531},	//942 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    {46, 554, 1, 1, Smoke::mf_static, 554, 532},	//943 QGlobalSpace::qFlagLocation(const char*)
    {46, 626, 1553, 5, Smoke::mf_static, 0, 533},	//944 QGlobalSpace::qScriptRegisterMetaType_helper(QScriptEngine*, int, QScriptValue(*)(QScriptEngine*,const void*), void(*)(const QScriptValue&,void*), const QScriptValue&)
    {46, 596, 1559, 3, Smoke::mf_static, 577, 534},	//945 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {46, 421, 612, 2, Smoke::mf_static, 446, 535},	//946 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {46, 383, 1563, 2, Smoke::mf_static, 500, 536},	//947 QGlobalSpace::operator*(double, const QPoint&)
    {46, 586, 114, 1, Smoke::mf_static, 446, 537},	//948 QGlobalSpace::qIsNaN(double)
    {46, 433, 1566, 2, Smoke::mf_static, 115, 538},	//949 QGlobalSpace::operator|(QMainWindow::DockOption, QFlags<QMainWindow::DockOption>)
    {46, 402, 1569, 2, Smoke::mf_static, 34, 539},	//950 QGlobalSpace::operator<<(QDebug, QGraphicsObject*)
    {46, 402, 1572, 2, Smoke::mf_static, 34, 540},	//951 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {46, 572, 1575, 1, Smoke::mf_static, 569, 541},	//952 QGlobalSpace::qHash(short)
    {46, 575, 0, 0, Smoke::mf_static, 557, 542},	//953 QGlobalSpace::qInf()
    {46, 402, 1577, 2, Smoke::mf_static, 34, 543},	//954 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {46, 433, 1580, 2, Smoke::mf_static, 117, 544},	//955 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption)
    {46, 402, 1583, 2, Smoke::mf_static, 30, 545},	//956 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {46, 402, 1586, 2, Smoke::mf_static, 30, 546},	//957 QGlobalSpace::operator<<(QDataStream&, const QImage&)
    {46, 433, 1589, 2, Smoke::mf_static, 199, 547},	//958 QGlobalSpace::operator|(QUdpSocket::BindFlag, int)
    {46, 383, 1592, 2, Smoke::mf_static, 506, 548},	//959 QGlobalSpace::operator*(double, const QQuaternion&)
    {46, 387, 1595, 2, Smoke::mf_static, 453, 549},	//960 QGlobalSpace::operator+(const QByteArray&, char)
    {46, 433, 1598, 2, Smoke::mf_static, 143, 550},	//961 QGlobalSpace::operator|(QTextDocument::FindFlag, QTextDocument::FindFlag)
    {46, 402, 1601, 2, Smoke::mf_static, 34, 551},	//962 QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    {46, 433, 1604, 2, Smoke::mf_static, 122, 552},	//963 QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>)
    {46, 433, 1607, 2, Smoke::mf_static, 91, 553},	//964 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton)
    {46, 396, 858, 2, Smoke::mf_static, 502, 554},	//965 QGlobalSpace::operator/(const QPointF&, double)
    {46, 645, 815, 1, Smoke::mf_static, 20, 555},	//966 QGlobalSpace::qUncompress(const QByteArray&)
    {46, 421, 788, 2, Smoke::mf_static, 446, 556},	//967 QGlobalSpace::operator>=(QChar, QChar)
    {46, 433, 1610, 2, Smoke::mf_static, 87, 557},	//968 QGlobalSpace::operator|(QAccessible::RelationFlag, QAccessible::RelationFlag)
    {46, 406, 348, 2, Smoke::mf_static, 446, 558},	//969 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {46, 634, 85, 1, Smoke::mf_static, 324, 559},	//970 QGlobalSpace::qSetRealNumberPrecision(int)
    {46, 402, 1613, 2, Smoke::mf_static, 34, 560},	//971 QGlobalSpace::operator<<(QDebug, const QObject*)
    {46, 433, 1616, 2, Smoke::mf_static, 126, 561},	//972 QGlobalSpace::operator|(QScriptClass::QueryFlag, QScriptClass::QueryFlag)
    {46, 637, 114, 1, Smoke::mf_static, 557, 562},	//973 QGlobalSpace::qSin(double)
    {46, 469, 114, 1, Smoke::mf_static, 557, 563},	//974 QGlobalSpace::qAsin(double)
    {46, 562, 658, 2, Smoke::mf_static, 446, 564},	//975 QGlobalSpace::qFuzzyCompare(const QVector3D&, const QVector3D&)
    {46, 687, 3, 2, Smoke::mf_static, 559, 565},	//976 QGlobalSpace::qstricmp(const char*, const char*)
    {46, 433, 1619, 2, Smoke::mf_static, 106, 566},	//977 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer)
    {46, 402, 1622, 2, Smoke::mf_static, 34, 567},	//978 QGlobalSpace::operator<<(QDebug, const QEvent*)
    {46, 661, 73, 1, Smoke::mf_static, 38, 568},	//979 QGlobalSpace::qmlContext(const QObject*)
    {46, 433, 1625, 2, Smoke::mf_static, 128, 569},	//980 QGlobalSpace::operator|(QScriptValue::PropertyFlag, QScriptValue::PropertyFlag)
    {46, 402, 1628, 2, Smoke::mf_static, 34, 570},	//981 QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketError)
    {46, 562, 1631, 2, Smoke::mf_static, 446, 571},	//982 QGlobalSpace::qFuzzyCompare(float, float)
    {46, 425, 1634, 2, Smoke::mf_static, 30, 572},	//983 QGlobalSpace::operator>>(QDataStream&, QFont&)
    {46, 433, 1637, 2, Smoke::mf_static, 93, 573},	//984 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {46, 724, 1640, 4, Smoke::mf_static, 559, 574},	//985 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {46, 433, 1645, 2, Smoke::mf_static, 111, 575},	//986 QGlobalSpace::operator|(QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>)
    {46, 433, 1648, 2, Smoke::mf_static, 129, 576},	//987 QGlobalSpace::operator|(QScriptValue::ResolveFlag, QFlags<QScriptValue::ResolveFlag>)
    {46, 433, 1651, 2, Smoke::mf_static, 132, 577},	//988 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {46, 402, 1654, 2, Smoke::mf_static, 30, 578},	//989 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {46, 716, 0, 0, Smoke::mf_static, 0, 579},	//990 QGlobalSpace::qt_noop()
    {46, 433, 1657, 2, Smoke::mf_static, 112, 580},	//991 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    {46, 417, 718, 2, Smoke::mf_static, 446, 581},	//992 QGlobalSpace::operator>(const char*, const QByteArray&)
    {46, 433, 1660, 2, Smoke::mf_static, 127, 582},	//993 QGlobalSpace::operator|(QScriptEngine::QObjectWrapOption, QScriptEngine::QObjectWrapOption)
    {46, 425, 1663, 2, Smoke::mf_static, 30, 583},	//994 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {46, 630, 85, 1, Smoke::mf_static, 324, 584},	//995 QGlobalSpace::qSetFieldWidth(int)
    {46, 433, 1666, 2, Smoke::mf_static, 142, 585},	//996 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {46, 402, 1669, 2, Smoke::mf_static, 34, 586},	//997 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {46, 402, 1672, 2, Smoke::mf_static, 30, 587},	//998 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {46, 412, 146, 2, Smoke::mf_static, 446, 588},	//999 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {46, 377, 1675, 2, Smoke::mf_static, 446, 589},	//1000 QGlobalSpace::operator!=(bool, QBool)
    {46, 572, 1678, 1, Smoke::mf_static, 569, 590},	//1001 QGlobalSpace::qHash(unsigned long)
    {46, 458, 0, 0, Smoke::mf_static, 11, 591},	//1002 QGlobalSpace::qAccessibleTable2CastHelper()
    {46, 402, 1680, 2, Smoke::mf_static, 34, 592},	//1003 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {46, 433, 1683, 2, Smoke::mf_static, 199, 593},	//1004 QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, int)
    {46, 665, 14, 1, Smoke::mf_static, 0, 594},	//1005 QGlobalSpace::qmlExecuteDeferred(QObject*)
    {46, 383, 1686, 2, Smoke::mf_static, 256, 595},	//1006 QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    {46, 377, 1689, 2, Smoke::mf_static, 446, 596},	//1007 QGlobalSpace::operator!=(QBool, bool)
    {46, 433, 1692, 2, Smoke::mf_static, 199, 597},	//1008 QGlobalSpace::operator|(Qt::WindowState, int)
    {46, 433, 1695, 2, Smoke::mf_static, 141, 598},	//1009 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    {46, 392, 1146, 2, Smoke::mf_static, 500, 599},	//1010 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {46, 590, 114, 1, Smoke::mf_static, 557, 600},	//1011 QGlobalSpace::qLn(double)
    {46, 425, 1698, 2, Smoke::mf_static, 30, 601},	//1012 QGlobalSpace::operator>>(QDataStream&, QTextLength&)
    {46, 425, 1701, 2, Smoke::mf_static, 30, 602},	//1013 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {46, 562, 466, 2, Smoke::mf_static, 446, 603},	//1014 QGlobalSpace::qFuzzyCompare(const QQuaternion&, const QQuaternion&)
    {46, 503, 567, 9, Smoke::mf_static, 0, 604},	//1015 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool, int, int)
    {46, 503, 520, 6, Smoke::mf_static, 0, 605},	//1016 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&)
    {46, 503, 527, 7, Smoke::mf_static, 0, 606},	//1017 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool)
    {46, 503, 558, 8, Smoke::mf_static, 0, 607},	//1018 QGlobalSpace::qDrawShadeLine(QPainter*, int, int, int, int, const QPalette&, bool, int)
    {46, 689, 1, 1, Smoke::mf_static, 569, 608},	//1019 QGlobalSpace::qstrlen(const char*)
    {46, 387, 612, 2, Smoke::mf_static, 453, 609},	//1020 QGlobalSpace::operator+(const QByteArray&, const char*)
    {46, 402, 1704, 2, Smoke::mf_static, 30, 610},	//1021 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {46, 377, 345, 2, Smoke::mf_static, 446, 611},	//1022 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {46, 406, 718, 2, Smoke::mf_static, 446, 612},	//1023 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {46, 402, 1707, 2, Smoke::mf_static, 30, 613},	//1024 QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    {46, 433, 1710, 2, Smoke::mf_static, 155, 614},	//1025 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {46, 402, 1713, 2, Smoke::mf_static, 34, 615},	//1026 QGlobalSpace::operator<<(QDebug, const QMatrix&)
    {46, 433, 1716, 2, Smoke::mf_static, 199, 616},	//1027 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, int)
    {46, 433, 1719, 2, Smoke::mf_static, 127, 617},	//1028 QGlobalSpace::operator|(QScriptEngine::QObjectWrapOption, QFlags<QScriptEngine::QObjectWrapOption>)
    {46, 412, 1341, 2, Smoke::mf_static, 446, 618},	//1029 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {46, 433, 1722, 2, Smoke::mf_static, 114, 619},	//1030 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {46, 433, 1725, 2, Smoke::mf_static, 147, 620},	//1031 QGlobalSpace::operator|(QTextOption::Flag, QTextOption::Flag)
    {46, 402, 1728, 2, Smoke::mf_static, 30, 621},	//1032 QGlobalSpace::operator<<(QDataStream&, const QColor&)
    {46, 433, 1731, 2, Smoke::mf_static, 169, 622},	//1033 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {46, 433, 1734, 2, Smoke::mf_static, 90, 623},	//1034 QGlobalSpace::operator|(QDateTimeEdit::Section, QDateTimeEdit::Section)
    {46, 402, 1737, 2, Smoke::mf_static, 34, 624},	//1035 QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketState)
    {46, 456, 0, 0, Smoke::mf_static, 11, 625},	//1036 QGlobalSpace::qAccessibleEditableTextCastHelper()
    {46, 383, 1740, 2, Smoke::mf_static, 516, 626},	//1037 QGlobalSpace::operator*(const QSize&, double)
    {46, 383, 1743, 2, Smoke::mf_static, 341, 627},	//1038 QGlobalSpace::operator*(const QMatrix4x4&, const QVector3D&)
    {46, 412, 1746, 2, Smoke::mf_static, 446, 628},	//1039 QGlobalSpace::operator==(QString::Null, const QString&)
    {46, 402, 1749, 2, Smoke::mf_static, 34, 629},	//1040 QGlobalSpace::operator<<(QDebug, const QBrush&)
    {46, 433, 1752, 2, Smoke::mf_static, 93, 630},	//1041 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {46, 433, 1755, 2, Smoke::mf_static, 159, 631},	//1042 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {46, 425, 1758, 2, Smoke::mf_static, 30, 632},	//1043 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {46, 402, 1761, 2, Smoke::mf_static, 34, 633},	//1044 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {46, 412, 612, 2, Smoke::mf_static, 446, 634},	//1045 QGlobalSpace::operator==(const QByteArray&, const char*)
    {46, 719, 1764, 5, Smoke::mf_static, 0, 635},	//1046 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {46, 433, 1770, 2, Smoke::mf_static, 136, 636},	//1047 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    {46, 425, 1773, 2, Smoke::mf_static, 30, 637},	//1048 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {46, 402, 1776, 2, Smoke::mf_static, 30, 638},	//1049 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {46, 425, 1779, 2, Smoke::mf_static, 30, 639},	//1050 QGlobalSpace::operator>>(QDataStream&, QTreeWidgetItem&)
    {46, 425, 1782, 2, Smoke::mf_static, 30, 640},	//1051 QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    {46, 417, 612, 2, Smoke::mf_static, 446, 641},	//1052 QGlobalSpace::operator>(const QByteArray&, const char*)
    {46, 433, 1785, 2, Smoke::mf_static, 129, 642},	//1053 QGlobalSpace::operator|(QScriptValue::ResolveFlag, QScriptValue::ResolveFlag)
    {46, 433, 1788, 2, Smoke::mf_static, 199, 643},	//1054 QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, int)
    {46, 387, 1146, 2, Smoke::mf_static, 500, 644},	//1055 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {46, 402, 1791, 2, Smoke::mf_static, 30, 645},	//1056 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {46, 558, 946, 1, Smoke::mf_static, 0, 646},	//1057 QGlobalSpace::qFree(void*)
    {46, 387, 658, 2, Smoke::mf_static, 550, 647},	//1058 QGlobalSpace::operator+(const QVector3D&, const QVector3D&)
    {46, 433, 1794, 2, Smoke::mf_static, 199, 648},	//1059 QGlobalSpace::operator|(QScriptValue::ResolveFlag, int)
    {46, 406, 788, 2, Smoke::mf_static, 446, 649},	//1060 QGlobalSpace::operator<=(QChar, QChar)
    {46, 402, 1797, 2, Smoke::mf_static, 321, 650},	//1061 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {46, 433, 1800, 2, Smoke::mf_static, 110, 651},	//1062 QGlobalSpace::operator|(QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>)
    {46, 402, 1803, 2, Smoke::mf_static, 30, 652},	//1063 QGlobalSpace::operator<<(QDataStream&, const QTextLength&)
    {46, 572, 340, 1, Smoke::mf_static, 569, 653},	//1064 QGlobalSpace::qHash(unsigned int)
    {46, 383, 1806, 2, Smoke::mf_static, 265, 654},	//1065 QGlobalSpace::operator*(const QRegion&, const QTransform&)
    {46, 377, 1746, 2, Smoke::mf_static, 446, 655},	//1066 QGlobalSpace::operator!=(QString::Null, const QString&)
    {46, 619, 114, 1, Smoke::mf_static, 562, 656},	//1067 QGlobalSpace::qRound64(double)
    {46, 383, 1809, 2, Smoke::mf_static, 254, 657},	//1068 QGlobalSpace::operator*(const QPointF&, const QMatrix4x4&)
    {46, 402, 1812, 2, Smoke::mf_static, 34, 658},	//1069 QGlobalSpace::operator<<(QDebug, QGraphicsItem*)
    {46, 433, 1815, 2, Smoke::mf_static, 199, 659},	//1070 QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, int)
    {46, 402, 1818, 2, Smoke::mf_static, 30, 660},	//1071 QGlobalSpace::operator<<(QDataStream&, const QListWidgetItem&)
    {46, 433, 1821, 2, Smoke::mf_static, 132, 661},	//1072 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {46, 594, 1824, 2, Smoke::mf_static, 577, 662},	//1073 QGlobalSpace::qMallocAligned(size_t, size_t)
    {46, 433, 1827, 2, Smoke::mf_static, 199, 663},	//1074 QGlobalSpace::operator|(QGraphicsScene::SceneLayer, int)
    {46, 433, 1830, 2, Smoke::mf_static, 199, 664},	//1075 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {46, 377, 954, 2, Smoke::mf_static, 446, 665},	//1076 QGlobalSpace::operator!=(const QString&, QString::Null)
    {46, 482, 1833, 3, Smoke::mf_static, 20, 666},	//1077 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {46, 482, 1837, 2, Smoke::mf_static, 20, 667},	//1078 QGlobalSpace::qCompress(const unsigned char*, int)
    {46, 433, 1840, 2, Smoke::mf_static, 199, 668},	//1079 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {46, 383, 1843, 2, Smoke::mf_static, 500, 669},	//1080 QGlobalSpace::operator*(int, const QPoint&)
    {46, 402, 1846, 2, Smoke::mf_static, 34, 670},	//1081 QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    {46, 685, 1, 1, Smoke::mf_static, 449, 671},	//1082 QGlobalSpace::qstrdup(const char*)
    {46, 433, 1849, 2, Smoke::mf_static, 157, 672},	//1083 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {46, 402, 1852, 2, Smoke::mf_static, 30, 673},	//1084 QGlobalSpace::operator<<(QDataStream&, const QStandardItem&)
    {46, 383, 1855, 2, Smoke::mf_static, 258, 674},	//1085 QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    {46, 433, 1858, 2, Smoke::mf_static, 199, 675},	//1086 QGlobalSpace::operator|(QAccessible::RelationFlag, int)
    {46, 377, 466, 2, Smoke::mf_static, 446, 676},	//1087 QGlobalSpace::operator!=(const QQuaternion&, const QQuaternion&)
    {46, 490, 0, 0, Smoke::mf_static, 34, 677},	//1088 QGlobalSpace::qDebug()
    {46, 392, 1861, 1, Smoke::mf_static, 500, 678},	//1089 QGlobalSpace::operator-(const QPoint&)
    {46, 425, 1863, 2, Smoke::mf_static, 30, 679},	//1090 QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    {46, 491, 1866, 4, Smoke::mf_static, 0, 680},	//1091 QGlobalSpace::qDrawBorderPixmap(QPainter*, const QRect&, const QMargins&, const QPixmap&)
    {46, 377, 307, 2, Smoke::mf_static, 446, 681},	//1092 QGlobalSpace::operator!=(const QVector4D&, const QVector4D&)
    {46, 402, 1871, 2, Smoke::mf_static, 34, 682},	//1093 QGlobalSpace::operator<<(QDebug, const QDeclarativeError&)
    {46, 433, 1874, 2, Smoke::mf_static, 100, 683},	//1094 QGlobalSpace::operator|(QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>)
    {46, 678, 718, 2, Smoke::mf_static, 559, 684},	//1095 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {46, 433, 1877, 2, Smoke::mf_static, 199, 685},	//1096 QGlobalSpace::operator|(QScriptClass::QueryFlag, int)
    {46, 433, 1880, 2, Smoke::mf_static, 99, 686},	//1097 QGlobalSpace::operator|(QFileDialog::Option, QFileDialog::Option)
    {46, 433, 1883, 2, Smoke::mf_static, 199, 687},	//1098 QGlobalSpace::operator|(QMdiArea::AreaOption, int)
    {46, 402, 1886, 2, Smoke::mf_static, 34, 688},	//1099 QGlobalSpace::operator<<(QDebug, QDeclarativeItem*)
    {46, 643, 114, 1, Smoke::mf_static, 557, 689},	//1100 QGlobalSpace::qTan(double)
    {46, 624, 1889, 4, Smoke::mf_static, 446, 690},	//1101 QGlobalSpace::qScriptDisconnect(QObject*, const char*, const QScriptValue&, const QScriptValue&)
    {46, 425, 1894, 2, Smoke::mf_static, 30, 691},	//1102 QGlobalSpace::operator>>(QDataStream&, QString&)
    {46, 433, 1897, 2, Smoke::mf_static, 90, 692},	//1103 QGlobalSpace::operator|(QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>)
    {46, 412, 348, 2, Smoke::mf_static, 446, 693},	//1104 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {46, 433, 1900, 2, Smoke::mf_static, 91, 694},	//1105 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>)
    {46, 503, 1903, 7, Smoke::mf_static, 0, 695},	//1106 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int, int)
    {46, 503, 1911, 4, Smoke::mf_static, 0, 696},	//1107 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&)
    {46, 503, 1916, 5, Smoke::mf_static, 0, 697},	//1108 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool)
    {46, 503, 1922, 6, Smoke::mf_static, 0, 698},	//1109 QGlobalSpace::qDrawShadeLine(QPainter*, const QPoint&, const QPoint&, const QPalette&, bool, int)
    {46, 433, 1929, 2, Smoke::mf_static, 112, 699},	//1110 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    {46, 383, 658, 2, Smoke::mf_static, 550, 700},	//1111 QGlobalSpace::operator*(const QVector3D&, const QVector3D&)
    {46, 667, 1932, 2, Smoke::mf_static, 48, 701},	//1112 QGlobalSpace::qmlInfo(const QObject*, const QList<QDeclarativeError>&)
    {46, 539, 910, 5, Smoke::mf_static, 0, 702},	//1113 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&, bool, const QBrush*)
    {46, 539, 437, 3, Smoke::mf_static, 0, 703},	//1114 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&)
    {46, 539, 441, 4, Smoke::mf_static, 0, 704},	//1115 QGlobalSpace::qDrawWinPanel(QPainter*, const QRect&, const QPalette&, bool)
    {46, 402, 1935, 2, Smoke::mf_static, 30, 705},	//1116 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {46, 572, 85, 1, Smoke::mf_static, 569, 706},	//1117 QGlobalSpace::qHash(int)
    {46, 392, 742, 2, Smoke::mf_static, 502, 707},	//1118 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {46, 402, 1938, 2, Smoke::mf_static, 30, 708},	//1119 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {46, 425, 1941, 2, Smoke::mf_static, 321, 709},	//1120 QGlobalSpace::operator>>(QTextStream&, QSplitter&)
    {46, 402, 1944, 2, Smoke::mf_static, 30, 710},	//1121 QGlobalSpace::operator<<(QDataStream&, const QMatrix4x4&)
    {46, 425, 1947, 2, Smoke::mf_static, 30, 711},	//1122 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {46, 387, 745, 2, Smoke::mf_static, 327, 712},	//1123 QGlobalSpace::operator+(const QTransform&, double)
    {46, 402, 1950, 2, Smoke::mf_static, 30, 713},	//1124 QGlobalSpace::operator<<(QDataStream&, const QVector4D&)
    {46, 433, 1953, 2, Smoke::mf_static, 133, 714},	//1125 QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    {46, 572, 1956, 1, Smoke::mf_static, 569, 715},	//1126 QGlobalSpace::qHash(const QItemSelectionRange&)
    {46, 433, 1958, 2, Smoke::mf_static, 165, 716},	//1127 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {46, 600, 130, 2, Smoke::mf_static, 557, 717},	//1128 QGlobalSpace::qPow(double, double)
    {46, 622, 1889, 4, Smoke::mf_static, 446, 718},	//1129 QGlobalSpace::qScriptConnect(QObject*, const char*, const QScriptValue&, const QScriptValue&)
    {46, 412, 969, 2, Smoke::mf_static, 446, 719},	//1130 QGlobalSpace::operator==(const QStringRef&, const char*)
    {46, 377, 1365, 2, Smoke::mf_static, 446, 720},	//1131 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {46, 425, 1961, 2, Smoke::mf_static, 30, 721},	//1132 QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    {46, 387, 348, 2, Smoke::mf_static, 453, 722},	//1133 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {46, 433, 1964, 2, Smoke::mf_static, 97, 723},	//1134 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {46, 402, 1967, 2, Smoke::mf_static, 34, 724},	//1135 QGlobalSpace::operator<<(QDebug, const QSslError::SslError&)
    {46, 383, 1970, 2, Smoke::mf_static, 252, 725},	//1136 QGlobalSpace::operator*(const QPoint&, const QMatrix4x4&)
    {46, 425, 1973, 2, Smoke::mf_static, 30, 726},	//1137 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {46, 433, 1976, 2, Smoke::mf_static, 199, 727},	//1138 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {46, 433, 1979, 2, Smoke::mf_static, 101, 728},	//1139 QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>)
    {46, 433, 1982, 2, Smoke::mf_static, 108, 729},	//1140 QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag)
    {46, 402, 1985, 2, Smoke::mf_static, 34, 730},	//1141 QGlobalSpace::operator<<(QDebug, const QSslCertificate&)
    {46, 710, 1988, 2, Smoke::mf_static, 0, 731},	//1142 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {46, 433, 1991, 2, Smoke::mf_static, 199, 732},	//1143 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {46, 392, 1994, 1, Smoke::mf_static, 550, 733},	//1144 QGlobalSpace::operator-(const QVector3D&)
    {46, 667, 1996, 2, Smoke::mf_static, 48, 734},	//1145 QGlobalSpace::qmlInfo(const QObject*, const QDeclarativeError&)
    {46, 433, 1999, 2, Smoke::mf_static, 135, 735},	//1146 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    {46, 433, 2002, 2, Smoke::mf_static, 89, 736},	//1147 QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption)
    {46, 402, 2005, 2, Smoke::mf_static, 34, 737},	//1148 QGlobalSpace::operator<<(QDebug, const QRect&)
    {46, 550, 114, 1, Smoke::mf_static, 557, 738},	//1149 QGlobalSpace::qFastCos(double)
    {46, 402, 2008, 2, Smoke::mf_static, 30, 739},	//1150 QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    {46, 402, 2011, 2, Smoke::mf_static, 30, 740},	//1151 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {46, 425, 2014, 2, Smoke::mf_static, 30, 741},	//1152 QGlobalSpace::operator>>(QDataStream&, QVector3D&)
    {46, 433, 2017, 2, Smoke::mf_static, 199, 742},	//1153 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    {46, 383, 2020, 2, Smoke::mf_static, 552, 743},	//1154 QGlobalSpace::operator*(double, const QVector4D&)
    {46, 396, 1740, 2, Smoke::mf_static, 516, 744},	//1155 QGlobalSpace::operator/(const QSize&, double)
    {46, 425, 2023, 2, Smoke::mf_static, 30, 745},	//1156 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {46, 425, 2026, 2, Smoke::mf_static, 30, 746},	//1157 QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    {46, 433, 2029, 2, Smoke::mf_static, 105, 747},	//1158 QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>)
    {46, 425, 2032, 2, Smoke::mf_static, 30, 748},	//1159 QGlobalSpace::operator>>(QDataStream&, QPicture&)
    {46, 412, 1675, 2, Smoke::mf_static, 446, 749},	//1160 QGlobalSpace::operator==(bool, QBool)
    {46, 539, 511, 8, Smoke::mf_static, 0, 750},	//1161 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&, bool, const QBrush*)
    {46, 539, 520, 6, Smoke::mf_static, 0, 751},	//1162 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&)
    {46, 539, 527, 7, Smoke::mf_static, 0, 752},	//1163 QGlobalSpace::qDrawWinPanel(QPainter*, int, int, int, int, const QPalette&, bool)
    {46, 433, 2035, 2, Smoke::mf_static, 167, 753},	//1164 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {46, 433, 2038, 2, Smoke::mf_static, 146, 754},	//1165 QGlobalSpace::operator|(QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>)
    {46, 433, 2041, 2, Smoke::mf_static, 199, 755},	//1166 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {46, 383, 2044, 2, Smoke::mf_static, 252, 756},	//1167 QGlobalSpace::operator*(const QPoint&, const QTransform&)
    {46, 433, 2047, 2, Smoke::mf_static, 199, 757},	//1168 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    {46, 433, 2050, 2, Smoke::mf_static, 199, 758},	//1169 QGlobalSpace::operator|(QDialogButtonBox::StandardButton, int)
    {46, 392, 466, 2, Smoke::mf_static, 506, 759},	//1170 QGlobalSpace::operator-(const QQuaternion&, const QQuaternion&)
    {46, 433, 2053, 2, Smoke::mf_static, 139, 760},	//1171 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    {46, 392, 658, 2, Smoke::mf_static, 550, 761},	//1172 QGlobalSpace::operator-(const QVector3D&, const QVector3D&)
    {46, 433, 2056, 2, Smoke::mf_static, 199, 762},	//1173 QGlobalSpace::operator|(QTextItem::RenderFlag, int)
    {46, 425, 2059, 2, Smoke::mf_static, 30, 763},	//1174 QGlobalSpace::operator>>(QDataStream&, QVector2D&)
    {46, 402, 2062, 2, Smoke::mf_static, 34, 764},	//1175 QGlobalSpace::operator<<(QDebug, const QSslError&)
    {46, 455, 0, 0, Smoke::mf_static, 11, 765},	//1176 QGlobalSpace::qAccessibleActionCastHelper()
    {46, 572, 2065, 1, Smoke::mf_static, 569, 766},	//1177 QGlobalSpace::qHash(char)
    {46, 402, 2067, 2, Smoke::mf_static, 30, 767},	//1178 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {46, 433, 2070, 2, Smoke::mf_static, 120, 768},	//1179 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>)
    {46, 476, 340, 1, Smoke::mf_static, 559, 769},	//1180 QGlobalSpace::qBlue(unsigned int)
    {46, 433, 2073, 2, Smoke::mf_static, 199, 770},	//1181 QGlobalSpace::operator|(QMainWindow::DockOption, int)
    {46, 425, 2076, 2, Smoke::mf_static, 30, 771},	//1182 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {46, 377, 742, 2, Smoke::mf_static, 446, 772},	//1183 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {46, 433, 2079, 2, Smoke::mf_static, 145, 773},	//1184 QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>)
    {46, 580, 114, 1, Smoke::mf_static, 446, 774},	//1185 QGlobalSpace::qIsFinite(double)
    {46, 383, 2082, 2, Smoke::mf_static, 500, 775},	//1186 QGlobalSpace::operator*(const QPoint&, int)
    {46, 433, 2085, 2, Smoke::mf_static, 158, 776},	//1187 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {46, 392, 287, 2, Smoke::mf_static, 516, 777},	//1188 QGlobalSpace::operator-(const QSize&, const QSize&)
    {46, 402, 2088, 2, Smoke::mf_static, 34, 778},	//1189 QGlobalSpace::operator<<(QDebug, const QQuaternion&)
    {46, 402, 2091, 2, Smoke::mf_static, 30, 779},	//1190 QGlobalSpace::operator<<(QDataStream&, const QNetworkCacheMetaData&)
    {46, 621, 0, 0, Smoke::mf_static, 557, 780},	//1191 QGlobalSpace::qSNaN()
    {46, 433, 2094, 2, Smoke::mf_static, 150, 781},	//1192 QGlobalSpace::operator|(QUdpSocket::BindFlag, QUdpSocket::BindFlag)
    {46, 433, 2097, 2, Smoke::mf_static, 136, 782},	//1193 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    {46, 402, 2100, 2, Smoke::mf_static, 30, 783},	//1194 QGlobalSpace::operator<<(QDataStream&, const QTextFormat&)
    {46, 565, 586, 1, Smoke::mf_static, 446, 784},	//1195 QGlobalSpace::qFuzzyIsNull(float)
    {46, 433, 2103, 2, Smoke::mf_static, 156, 785},	//1196 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {46, 433, 2106, 2, Smoke::mf_static, 199, 786},	//1197 QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, int)
    {46, 645, 1837, 2, Smoke::mf_static, 20, 787},	//1198 QGlobalSpace::qUncompress(const unsigned char*, int)
    {46, 433, 2109, 2, Smoke::mf_static, 156, 788},	//1199 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {46, 433, 2112, 2, Smoke::mf_static, 103, 789},	//1200 QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint)
    {46, 433, 2115, 2, Smoke::mf_static, 199, 790},	//1201 QGlobalSpace::operator|(Qt::Orientation, int)
    {46, 552, 114, 1, Smoke::mf_static, 557, 791},	//1202 QGlobalSpace::qFastSin(double)
    {46, 433, 2118, 2, Smoke::mf_static, 110, 792},	//1203 QGlobalSpace::operator|(QImageIOPlugin::Capability, QImageIOPlugin::Capability)
    {46, 402, 2121, 2, Smoke::mf_static, 30, 793},	//1204 QGlobalSpace::operator<<(QDataStream&, const QQuaternion&)
    {46, 402, 2124, 2, Smoke::mf_static, 34, 794},	//1205 QGlobalSpace::operator<<(QDebug, const QDir&)
    {46, 387, 742, 2, Smoke::mf_static, 502, 795},	//1206 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {46, 383, 2127, 2, Smoke::mf_static, 265, 796},	//1207 QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    {46, 412, 1689, 2, Smoke::mf_static, 446, 797},	//1208 QGlobalSpace::operator==(QBool, bool)
    {46, 412, 284, 2, Smoke::mf_static, 446, 798},	//1209 QGlobalSpace::operator==(const QRect&, const QRect&)
    {46, 402, 2130, 2, Smoke::mf_static, 34, 799},	//1210 QGlobalSpace::operator<<(QDebug, const QRegion&)
    {46, 433, 2133, 2, Smoke::mf_static, 121, 800},	//1211 QGlobalSpace::operator|(QNetworkProxy::Capability, QNetworkProxy::Capability)
    {46, 383, 2136, 2, Smoke::mf_static, 500, 801},	//1212 QGlobalSpace::operator*(float, const QPoint&)
    {46, 699, 831, 2, Smoke::mf_static, 292, 802},	//1213 QGlobalSpace::qtTrId(const char*, int)
    {46, 699, 1, 1, Smoke::mf_static, 292, 803},	//1214 QGlobalSpace::qtTrId(const char*)
    {46, 425, 2139, 2, Smoke::mf_static, 30, 804},	//1215 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {46, 433, 2142, 2, Smoke::mf_static, 113, 805},	//1216 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {46, 433, 2145, 2, Smoke::mf_static, 199, 806},	//1217 QGlobalSpace::operator|(QTextOption::Flag, int)
    {46, 387, 2148, 2, Smoke::mf_static, 528, 807},	//1218 QGlobalSpace::operator+(const QString&, QChar)
    {46, 475, 0, 0, Smoke::mf_static, 0, 808},	//1219 QGlobalSpace::qBadAlloc()
    {46, 377, 394, 2, Smoke::mf_static, 446, 809},	//1220 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {46, 615, 2151, 4, Smoke::mf_static, 569, 810},	//1221 QGlobalSpace::qRgba(int, int, int, int)
    {46, 433, 2156, 2, Smoke::mf_static, 164, 811},	//1222 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {46, 433, 2159, 2, Smoke::mf_static, 139, 812},	//1223 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    {46, 433, 2162, 2, Smoke::mf_static, 115, 813},	//1224 QGlobalSpace::operator|(QMainWindow::DockOption, QMainWindow::DockOption)
    {46, 377, 374, 2, Smoke::mf_static, 446, 814},	//1225 QGlobalSpace::operator!=(QBool, QBool)
    {46, 402, 1236, 2, Smoke::mf_static, 321, 815},	//1226 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {46, 592, 2165, 1, Smoke::mf_static, 577, 816},	//1227 QGlobalSpace::qMalloc(size_t)
    {46, 402, 2167, 2, Smoke::mf_static, 34, 817},	//1228 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {46, 412, 1427, 2, Smoke::mf_static, 446, 818},	//1229 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {46, 392, 745, 2, Smoke::mf_static, 327, 819},	//1230 QGlobalSpace::operator-(const QTransform&, double)
    {46, 433, 2170, 2, Smoke::mf_static, 199, 820},	//1231 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, int)
    {46, 433, 2173, 2, Smoke::mf_static, 114, 821},	//1232 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {46, 402, 2176, 2, Smoke::mf_static, 30, 822},	//1233 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {46, 161, 0, 0, Smoke::mf_static|Smoke::mf_enum, 561, 823},	//1234 QGlobalSpace::QML_HAS_ATTACHED_PROPERTIES (enum)
    {46, 90, 0, 0, Smoke::mf_static|Smoke::mf_enum, 434, 824},	//1235 QGlobalSpace::LicensedOpenGL (enum)
    {46, 97, 0, 0, Smoke::mf_static|Smoke::mf_enum, 441, 825},	//1236 QGlobalSpace::LicensedSvg (enum)
    {46, 91, 0, 0, Smoke::mf_static|Smoke::mf_enum, 435, 826},	//1237 QGlobalSpace::LicensedOpenVG (enum)
    {46, 94, 0, 0, Smoke::mf_static|Smoke::mf_enum, 438, 827},	//1238 QGlobalSpace::LicensedScript (enum)
    {46, 93, 0, 0, Smoke::mf_static|Smoke::mf_enum, 436, 828},	//1239 QGlobalSpace::LicensedQt3SupportLight (enum)
    {46, 163, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 829},	//1240 QGlobalSpace::QtDebugMsg (enum)
    {46, 166, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 830},	//1241 QGlobalSpace::QtWarningMsg (enum)
    {46, 162, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 831},	//1242 QGlobalSpace::QtCriticalMsg (enum)
    {46, 164, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 832},	//1243 QGlobalSpace::QtFatalMsg (enum)
    {46, 165, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 833},	//1244 QGlobalSpace::QtSystemMsg (enum)
    {46, 86, 0, 0, Smoke::mf_static|Smoke::mf_enum, 430, 834},	//1245 QGlobalSpace::LicensedGui (enum)
    {46, 100, 0, 0, Smoke::mf_static|Smoke::mf_enum, 444, 835},	//1246 QGlobalSpace::LicensedXmlPatterns (enum)
    {46, 96, 0, 0, Smoke::mf_static|Smoke::mf_enum, 440, 836},	//1247 QGlobalSpace::LicensedSql (enum)
    {46, 82, 0, 0, Smoke::mf_static|Smoke::mf_enum, 426, 837},	//1248 QGlobalSpace::LicensedActiveQt (enum)
    {46, 92, 0, 0, Smoke::mf_static|Smoke::mf_enum, 437, 838},	//1249 QGlobalSpace::LicensedQt3Support (enum)
    {46, 84, 0, 0, Smoke::mf_static|Smoke::mf_enum, 428, 839},	//1250 QGlobalSpace::LicensedDBus (enum)
    {46, 83, 0, 0, Smoke::mf_static|Smoke::mf_enum, 427, 840},	//1251 QGlobalSpace::LicensedCore (enum)
    {46, 89, 0, 0, Smoke::mf_static|Smoke::mf_enum, 433, 841},	//1252 QGlobalSpace::LicensedNetwork (enum)
    {46, 88, 0, 0, Smoke::mf_static|Smoke::mf_enum, 432, 842},	//1253 QGlobalSpace::LicensedMultimedia (enum)
    {46, 98, 0, 0, Smoke::mf_static|Smoke::mf_enum, 442, 843},	//1254 QGlobalSpace::LicensedTest (enum)
    {46, 95, 0, 0, Smoke::mf_static|Smoke::mf_enum, 439, 844},	//1255 QGlobalSpace::LicensedScriptTools (enum)
    {46, 87, 0, 0, Smoke::mf_static|Smoke::mf_enum, 431, 845},	//1256 QGlobalSpace::LicensedHelp (enum)
    {46, 99, 0, 0, Smoke::mf_static|Smoke::mf_enum, 443, 846},	//1257 QGlobalSpace::LicensedXml (enum)
    {46, 85, 0, 0, Smoke::mf_static|Smoke::mf_enum, 429, 847},	//1258 QGlobalSpace::LicensedDeclarative (enum)
    {47, 199, 85, 1, Smoke::mf_virtual, 0, 0},	//1259 QGraphicsItem::advance(int)
    {47, 831, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 244, 0},	//1260 QGraphicsItem::shape() const
    {47, 239, 996, 1, Smoke::mf_const|Smoke::mf_virtual, 446, 0},	//1261 QGraphicsItem::contains(const QPointF&) const
    {47, 231, 2179, 2, Smoke::mf_const|Smoke::mf_virtual, 446, 0},	//1262 QGraphicsItem::collidesWithItem(const QGraphicsItem*, Qt::ItemSelectionMode) const
    {47, 232, 2182, 2, Smoke::mf_const|Smoke::mf_virtual, 446, 0},	//1263 QGraphicsItem::collidesWithPath(const QPainterPath&, Qt::ItemSelectionMode) const
    {47, 328, 2185, 1, Smoke::mf_const|Smoke::mf_virtual, 446, 0},	//1264 QGraphicsItem::isObscuredBy(const QGraphicsItem*) const
    {47, 376, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 244, 0},	//1265 QGraphicsItem::opaqueArea() const
    {47, 864, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 559, 0},	//1266 QGraphicsItem::type() const
    {47, 749, 2187, 2, Smoke::mf_protected|Smoke::mf_virtual, 446, 0},	//1267 QGraphicsItem::sceneEventFilter(QGraphicsItem*, QEvent*)
    {47, 244, 2190, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1268 QGraphicsItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*)
    {47, 259, 2192, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1269 QGraphicsItem::dragEnterEvent(QGraphicsSceneDragDropEvent*)
    {47, 260, 2192, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1270 QGraphicsItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*)
    {47, 261, 2192, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1271 QGraphicsItem::dragMoveEvent(QGraphicsSceneDragDropEvent*)
    {47, 265, 2192, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1272 QGraphicsItem::dropEvent(QGraphicsSceneDragDropEvent*)
    {47, 282, 2194, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1273 QGraphicsItem::focusInEvent(QFocusEvent*)
    {47, 284, 2194, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1274 QGraphicsItem::focusOutEvent(QFocusEvent*)
    {47, 297, 2196, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1275 QGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent*)
    {47, 299, 2196, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1276 QGraphicsItem::hoverMoveEvent(QGraphicsSceneHoverEvent*)
    {47, 298, 2196, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1277 QGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*)
    {47, 364, 2198, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1278 QGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent*)
    {47, 363, 2198, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1279 QGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent*)
    {47, 365, 2198, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1280 QGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {47, 362, 2198, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1281 QGraphicsItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)
    {47, 873, 2200, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1282 QGraphicsItem::wheelEvent(QGraphicsSceneWheelEvent*)
    {47, 847, 2202, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 446, 0},	//1283 QGraphicsItem::supportsExtension(QGraphicsItem::Extension) const
    {47, 779, 2204, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1284 QGraphicsItem::setExtension(QGraphicsItem::Extension, const QVariant&)
    {47, 279, 178, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 336, 0},	//1285 QGraphicsItem::extension(const QVariant&) const
    {47, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 28},	//1286 QGraphicsItem::ItemIsMovable (enum)
    {47, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 29},	//1287 QGraphicsItem::ItemIsSelectable (enum)
    {47, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 30},	//1288 QGraphicsItem::ItemIsFocusable (enum)
    {47, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 31},	//1289 QGraphicsItem::ItemClipsToShape (enum)
    {47, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 32},	//1290 QGraphicsItem::ItemClipsChildrenToShape (enum)
    {47, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 33},	//1291 QGraphicsItem::ItemIgnoresTransformations (enum)
    {47, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 34},	//1292 QGraphicsItem::ItemIgnoresParentOpacity (enum)
    {47, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 35},	//1293 QGraphicsItem::ItemDoesntPropagateOpacityToChildren (enum)
    {47, 66, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 36},	//1294 QGraphicsItem::ItemStacksBehindParent (enum)
    {47, 75, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 37},	//1295 QGraphicsItem::ItemUsesExtendedStyleOption (enum)
    {47, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 38},	//1296 QGraphicsItem::ItemHasNoContents (enum)
    {47, 64, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 39},	//1297 QGraphicsItem::ItemSendsGeometryChanges (enum)
    {47, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 40},	//1298 QGraphicsItem::ItemAcceptsInputMethod (enum)
    {47, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 41},	//1299 QGraphicsItem::ItemNegativeZStacksBehindParent (enum)
    {47, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 42},	//1300 QGraphicsItem::ItemIsPanel (enum)
    {47, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 43},	//1301 QGraphicsItem::ItemIsFocusScope (enum)
    {47, 65, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 44},	//1302 QGraphicsItem::ItemSendsScenePositionChanges (enum)
    {47, 67, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 45},	//1303 QGraphicsItem::ItemStopsClickFocusPropagation (enum)
    {47, 68, 0, 0, Smoke::mf_static|Smoke::mf_enum, 181, 46},	//1304 QGraphicsItem::ItemStopsFocusHandling (enum)
    {47, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 47},	//1305 QGraphicsItem::ItemPositionChange (enum)
    {47, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 48},	//1306 QGraphicsItem::ItemMatrixChange (enum)
    {47, 76, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 49},	//1307 QGraphicsItem::ItemVisibleChange (enum)
    {47, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 50},	//1308 QGraphicsItem::ItemEnabledChange (enum)
    {47, 62, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 51},	//1309 QGraphicsItem::ItemSelectedChange (enum)
    {47, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 52},	//1310 QGraphicsItem::ItemParentChange (enum)
    {47, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 53},	//1311 QGraphicsItem::ItemChildAddedChange (enum)
    {47, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 54},	//1312 QGraphicsItem::ItemChildRemovedChange (enum)
    {47, 71, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 55},	//1313 QGraphicsItem::ItemTransformChange (enum)
    {47, 54, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 56},	//1314 QGraphicsItem::ItemPositionHasChanged (enum)
    {47, 72, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 57},	//1315 QGraphicsItem::ItemTransformHasChanged (enum)
    {47, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 58},	//1316 QGraphicsItem::ItemSceneChange (enum)
    {47, 77, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 59},	//1317 QGraphicsItem::ItemVisibleHasChanged (enum)
    {47, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 60},	//1318 QGraphicsItem::ItemEnabledHasChanged (enum)
    {47, 63, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 61},	//1319 QGraphicsItem::ItemSelectedHasChanged (enum)
    {47, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 62},	//1320 QGraphicsItem::ItemParentHasChanged (enum)
    {47, 60, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 63},	//1321 QGraphicsItem::ItemSceneHasChanged (enum)
    {47, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 64},	//1322 QGraphicsItem::ItemCursorChange (enum)
    {47, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 65},	//1323 QGraphicsItem::ItemCursorHasChanged (enum)
    {47, 69, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 66},	//1324 QGraphicsItem::ItemToolTipChange (enum)
    {47, 70, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 67},	//1325 QGraphicsItem::ItemToolTipHasChanged (enum)
    {47, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 68},	//1326 QGraphicsItem::ItemFlagsChange (enum)
    {47, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 69},	//1327 QGraphicsItem::ItemFlagsHaveChanged (enum)
    {47, 78, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 70},	//1328 QGraphicsItem::ItemZValueChange (enum)
    {47, 79, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 71},	//1329 QGraphicsItem::ItemZValueHasChanged (enum)
    {47, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 72},	//1330 QGraphicsItem::ItemOpacityChange (enum)
    {47, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 73},	//1331 QGraphicsItem::ItemOpacityHasChanged (enum)
    {47, 61, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 74},	//1332 QGraphicsItem::ItemScenePositionHasChanged (enum)
    {47, 55, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 75},	//1333 QGraphicsItem::ItemRotationChange (enum)
    {47, 56, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 76},	//1334 QGraphicsItem::ItemRotationHasChanged (enum)
    {47, 57, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 77},	//1335 QGraphicsItem::ItemScaleChange (enum)
    {47, 58, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 78},	//1336 QGraphicsItem::ItemScaleHasChanged (enum)
    {47, 73, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 79},	//1337 QGraphicsItem::ItemTransformOriginPointChange (enum)
    {47, 74, 0, 0, Smoke::mf_static|Smoke::mf_enum, 180, 80},	//1338 QGraphicsItem::ItemTransformOriginPointHasChanged (enum)
    {47, 184, 0, 0, Smoke::mf_static|Smoke::mf_enum, 561, 81},	//1339 QGraphicsItem::Type (enum)
    {47, 186, 0, 0, Smoke::mf_static|Smoke::mf_enum, 561, 82},	//1340 QGraphicsItem::UserType (enum)
    {47, 185, 0, 0, Smoke::mf_static|Smoke::mf_enum, 179, 83},	//1341 QGraphicsItem::UserExtension (enum)
    {54, 318, 144, 1, Smoke::mf_const|Smoke::mf_virtual, 336, 0},	//1342 QGraphicsView::inputMethodQuery(Qt::InputMethodQuery) const
    {54, 274, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 446, 0},	//1343 QGraphicsView::event(QEvent*)
    {54, 870, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 446, 0},	//1344 QGraphicsView::viewportEvent(QEvent*)
    {54, 244, 2207, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1345 QGraphicsView::contextMenuEvent(QContextMenuEvent*)
    {54, 259, 2209, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1346 QGraphicsView::dragEnterEvent(QDragEnterEvent*)
    {54, 260, 2211, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1347 QGraphicsView::dragLeaveEvent(QDragLeaveEvent*)
    {54, 261, 2213, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1348 QGraphicsView::dragMoveEvent(QDragMoveEvent*)
    {54, 265, 2215, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1349 QGraphicsView::dropEvent(QDropEvent*)
    {54, 282, 2194, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1350 QGraphicsView::focusInEvent(QFocusEvent*)
    {54, 283, 71, 1, Smoke::mf_protected|Smoke::mf_virtual, 446, 0},	//1351 QGraphicsView::focusNextPrevChild(bool)
    {54, 284, 2194, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1352 QGraphicsView::focusOutEvent(QFocusEvent*)
    {54, 338, 140, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1353 QGraphicsView::keyPressEvent(QKeyEvent*)
    {54, 342, 140, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1354 QGraphicsView::keyReleaseEvent(QKeyEvent*)
    {54, 362, 2217, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1355 QGraphicsView::mouseDoubleClickEvent(QMouseEvent*)
    {54, 364, 2217, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1356 QGraphicsView::mousePressEvent(QMouseEvent*)
    {54, 363, 2217, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1357 QGraphicsView::mouseMoveEvent(QMouseEvent*)
    {54, 365, 2217, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1358 QGraphicsView::mouseReleaseEvent(QMouseEvent*)
    {54, 873, 2219, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1359 QGraphicsView::wheelEvent(QWheelEvent*)
    {54, 754, 2221, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1360 QGraphicsView::scrollContentsBy(int, int)
    {54, 832, 2224, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1361 QGraphicsView::showEvent(QShowEvent*)
    {54, 314, 142, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1362 QGraphicsView::inputMethodEvent(QInputMethodEvent*)
    {54, 262, 2226, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1363 QGraphicsView::drawBackground(QPainter*, const QRectF&)
    {54, 263, 2226, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1364 QGraphicsView::drawForeground(QPainter*, const QRectF&)
    {54, 264, 2229, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1365 QGraphicsView::drawItems(QPainter*, int, QGraphicsItem**, const QStyleOptionGraphicsItem*)
    {54, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 189, 25},	//1366 QGraphicsView::CacheNone (enum)
    {54, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 189, 26},	//1367 QGraphicsView::CacheBackground (enum)
    {54, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 190, 27},	//1368 QGraphicsView::DontClipPainter (enum)
    {54, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 190, 28},	//1369 QGraphicsView::DontSavePainterState (enum)
    {54, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 190, 29},	//1370 QGraphicsView::DontAdjustForAntialiasing (enum)
    {54, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 190, 30},	//1371 QGraphicsView::IndirectPainting (enum)
    {83, 274, 135, 1, Smoke::mf_virtual, 446, 0},	//1372 QObject::event(QEvent*)
    {83, 276, 216, 2, Smoke::mf_virtual, 446, 0},	//1373 QObject::eventFilter(QObject*, QEvent*)
    {83, 849, 214, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1374 QObject::timerEvent(QTimerEvent*)
    {83, 218, 2234, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1375 QObject::childEvent(QChildEvent*)
    {83, 255, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1376 QObject::customEvent(QEvent*)
    {83, 236, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1377 QObject::connectNotify(const char*)
    {83, 258, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1378 QObject::disconnectNotify(const char*)
    {142, 257, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 559, 0},	//1379 QWidget::devType() const
    {142, 828, 71, 1, Smoke::mf_property|Smoke::mf_virtual|Smoke::mf_slot, 0, 0},	//1380 QWidget::setVisible(bool)
    {142, 294, 85, 1, Smoke::mf_const|Smoke::mf_virtual, 559, 0},	//1381 QWidget::heightForWidth(int) const
    {142, 439, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 238, 0},	//1382 QWidget::paintEngine() const
    {142, 268, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1383 QWidget::enterEvent(QEvent*)
    {142, 348, 135, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1384 QWidget::leaveEvent(QEvent*)
    {142, 366, 2236, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1385 QWidget::moveEvent(QMoveEvent*)
    {142, 230, 2238, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1386 QWidget::closeEvent(QCloseEvent*)
    {142, 848, 2240, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1387 QWidget::tabletEvent(QTabletEvent*)
    {142, 190, 2242, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1388 QWidget::actionEvent(QActionEvent*)
    {142, 296, 2244, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1389 QWidget::hideEvent(QHideEvent*)
    {142, 881, 2246, 1, Smoke::mf_protected|Smoke::mf_virtual, 446, 0},	//1390 QWidget::x11Event(_XEvent*)
    {142, 360, 2248, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 559, 0},	//1391 QWidget::metric(QPaintDevice::PaintDeviceMetric) const
    {142, 846, 2250, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1392 QWidget::styleChange(QStyle&)
    {142, 266, 71, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1393 QWidget::enabledChange(bool)
    {142, 442, 2252, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1394 QWidget::paletteChange(const QPalette&)
    {142, 285, 2254, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1395 QWidget::fontChange(const QFont&)
    {142, 876, 71, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1396 QWidget::windowActivationChange(bool)
    {142, 347, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1397 QWidget::languageChange()
    {142, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 347, 20},	//1398 QWidget::DrawWindowBackground (enum)
    {142, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 347, 21},	//1399 QWidget::DrawChildren (enum)
    {142, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 347, 22},	//1400 QWidget::IgnoreMask (enum)
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    68,  // QDeclarativeContext::QDeclarativeContext(QDeclarativeEngine*)
    69,  // QDeclarativeContext::QDeclarativeContext(QDeclarativeContext*)
    0,
    53,  // QDeclarativeContext::QDeclarativeContext(QDeclarativeEngine*, QObject*)
    54,  // QDeclarativeContext::QDeclarativeContext(QDeclarativeContext*, QObject*)
    0,
    61,  // QDeclarativeContext::setContextProperty(const QString&, QObject*)
    62,  // QDeclarativeContext::setContextProperty(const QString&, const QVariant&)
    0,
    9,  // QDeclarativeComponent::QDeclarativeComponent(QObject*)
    36,  // QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*)
    0,
    10,  // QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*, QObject*)
    38,  // QDeclarativeComponent::QDeclarativeComponent(QDeclarativeEngine*, const QUrl&)
    0,
    293,  // QDeclarativeProperty::QDeclarativeProperty(QObject*)
    299,  // QDeclarativeProperty::QDeclarativeProperty(const QDeclarativeProperty&)
    0,
    294,  // QDeclarativeProperty::QDeclarativeProperty(QObject*, QDeclarativeContext*)
    295,  // QDeclarativeProperty::QDeclarativeProperty(QObject*, QDeclarativeEngine*)
    0,
    297,  // QDeclarativeProperty::QDeclarativeProperty(QObject*, const QString&, QDeclarativeContext*)
    298,  // QDeclarativeProperty::QDeclarativeProperty(QObject*, const QString&, QDeclarativeEngine*)
    0,
    321,  // QDeclarativeProperty::connectNotifySignal(QObject*, const char*) const
    322,  // QDeclarativeProperty::connectNotifySignal(QObject*, int) const
    0,
    312,  // QDeclarativeProperty::read(QObject*, const QString&, QDeclarativeContext*)
    313,  // QDeclarativeProperty::read(QObject*, const QString&, QDeclarativeEngine*)
    0,
    316,  // QDeclarativeProperty::write(QObject*, const QString&, const QVariant&, QDeclarativeContext*)
    317,  // QDeclarativeProperty::write(QObject*, const QString&, const QVariant&, QDeclarativeEngine*)
    0,
    354,  // QDeclarativePropertyMap::operator[](const QString&)
    355,  // QDeclarativePropertyMap::operator[](const QString&) const
    0,
    379,  // QDeclarativeView::QDeclarativeView(QWidget*)
    402,  // QDeclarativeView::QDeclarativeView(const QUrl&)
    0,
    424,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    437,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    473,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    570,  // QGlobalSpace::operator!=(const QVector2D&, const QVector2D&)
    613,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    670,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    760,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    764,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    828,  // QGlobalSpace::operator!=(const QVector3D&, const QVector3D&)
    884,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    901,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    903,  // QGlobalSpace::operator!=(QChar, QChar)
    924,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    1022,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    1087,  // QGlobalSpace::operator!=(const QQuaternion&, const QQuaternion&)
    1092,  // QGlobalSpace::operator!=(const QVector4D&, const QVector4D&)
    1183,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    1220,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    1225,  // QGlobalSpace::operator!=(QBool, QBool)
    0,
    794,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    845,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    881,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    1007,  // QGlobalSpace::operator!=(QBool, bool)
    1066,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    0,
    798,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    846,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    1000,  // QGlobalSpace::operator!=(bool, QBool)
    1076,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    1131,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    0,
    448,  // QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    450,  // QGlobalSpace::operator*(const QLine&, const QTransform&)
    504,  // QGlobalSpace::operator*(const QVector4D&, const QVector4D&)
    506,  // QGlobalSpace::operator*(const QQuaternion&, const QQuaternion&)
    514,  // QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    559,  // QGlobalSpace::operator*(const QLine&, const QMatrix&)
    565,  // QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    567,  // QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    624,  // QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    637,  // QGlobalSpace::operator*(const QVector2D&, const QVector2D&)
    668,  // QGlobalSpace::operator*(const QVector3D&, const QMatrix4x4&)
    685,  // QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    716,  // QGlobalSpace::operator*(const QPointF&, const QTransform&)
    732,  // QGlobalSpace::operator*(const QMatrix4x4&, const QMatrix4x4&)
    746,  // QGlobalSpace::operator*(const QMatrix4x4&, const QVector4D&)
    756,  // QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    804,  // QGlobalSpace::operator*(const QMatrix4x4&, const QPoint&)
    871,  // QGlobalSpace::operator*(const QMatrix4x4&, const QPointF&)
    882,  // QGlobalSpace::operator*(const QLineF&, const QTransform&)
    939,  // QGlobalSpace::operator*(const QVector4D&, const QMatrix4x4&)
    1006,  // QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    1038,  // QGlobalSpace::operator*(const QMatrix4x4&, const QVector3D&)
    1065,  // QGlobalSpace::operator*(const QRegion&, const QTransform&)
    1068,  // QGlobalSpace::operator*(const QPointF&, const QMatrix4x4&)
    1085,  // QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    1111,  // QGlobalSpace::operator*(const QVector3D&, const QVector3D&)
    1136,  // QGlobalSpace::operator*(const QPoint&, const QMatrix4x4&)
    1167,  // QGlobalSpace::operator*(const QPoint&, const QTransform&)
    1207,  // QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    0,
    418,  // QGlobalSpace::operator*(const QPoint&, double)
    456,  // QGlobalSpace::operator*(const QSizeF&, double)
    474,  // QGlobalSpace::operator*(const QQuaternion&, double)
    607,  // QGlobalSpace::operator*(const QVector2D&, double)
    614,  // QGlobalSpace::operator*(const QVector4D&, double)
    647,  // QGlobalSpace::operator*(const QPointF&, double)
    682,  // QGlobalSpace::operator*(const QVector3D&, double)
    782,  // QGlobalSpace::operator*(const QTransform&, double)
    833,  // QGlobalSpace::operator*(const QPoint&, float)
    843,  // QGlobalSpace::operator*(const QMatrix4x4&, double)
    1037,  // QGlobalSpace::operator*(const QSize&, double)
    1186,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    422,  // QGlobalSpace::operator*(double, const QPointF&)
    427,  // QGlobalSpace::operator*(double, const QSizeF&)
    874,  // QGlobalSpace::operator*(double, const QVector2D&)
    889,  // QGlobalSpace::operator*(double, const QVector3D&)
    905,  // QGlobalSpace::operator*(double, const QMatrix4x4&)
    926,  // QGlobalSpace::operator*(double, const QSize&)
    947,  // QGlobalSpace::operator*(double, const QPoint&)
    959,  // QGlobalSpace::operator*(double, const QQuaternion&)
    1080,  // QGlobalSpace::operator*(int, const QPoint&)
    1154,  // QGlobalSpace::operator*(double, const QVector4D&)
    1212,  // QGlobalSpace::operator*(float, const QPoint&)
    0,
    438,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    524,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    563,  // QGlobalSpace::operator+(const QVector4D&, const QVector4D&)
    589,  // QGlobalSpace::operator+(const QVector2D&, const QVector2D&)
    633,  // QGlobalSpace::operator+(const QMatrix4x4&, const QMatrix4x4&)
    660,  // QGlobalSpace::operator+(const QQuaternion&, const QQuaternion&)
    1055,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    1058,  // QGlobalSpace::operator+(const QVector3D&, const QVector3D&)
    1133,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    1206,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    0,
    490,  // QGlobalSpace::operator+(QChar, const QString&)
    960,  // QGlobalSpace::operator+(const QByteArray&, char)
    1020,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    1123,  // QGlobalSpace::operator+(const QTransform&, double)
    0,
    586,  // QGlobalSpace::operator+(char, const QByteArray&)
    859,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    1218,  // QGlobalSpace::operator+(const QString&, QChar)
    0,
    467,  // QGlobalSpace::operator-(const QQuaternion&)
    500,  // QGlobalSpace::operator-(const QVector2D&)
    709,  // QGlobalSpace::operator-(const QPointF&)
    822,  // QGlobalSpace::operator-(const QVector4D&)
    872,  // QGlobalSpace::operator-(const QMatrix4x4&)
    1089,  // QGlobalSpace::operator-(const QPoint&)
    1144,  // QGlobalSpace::operator-(const QVector3D&)
    0,
    444,  // QGlobalSpace::operator-(const QMatrix4x4&, const QMatrix4x4&)
    447,  // QGlobalSpace::operator-(const QVector4D&, const QVector4D&)
    464,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    679,  // QGlobalSpace::operator-(const QVector2D&, const QVector2D&)
    1010,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    1118,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    1170,  // QGlobalSpace::operator-(const QQuaternion&, const QQuaternion&)
    1172,  // QGlobalSpace::operator-(const QVector3D&, const QVector3D&)
    1188,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    0,
    587,  // QGlobalSpace::operator/(const QPoint&, double)
    604,  // QGlobalSpace::operator/(const QTransform&, double)
    623,  // QGlobalSpace::operator/(const QMatrix4x4&, double)
    681,  // QGlobalSpace::operator/(const QSizeF&, double)
    803,  // QGlobalSpace::operator/(const QVector4D&, double)
    809,  // QGlobalSpace::operator/(const QQuaternion&, double)
    832,  // QGlobalSpace::operator/(const QVector2D&, double)
    899,  // QGlobalSpace::operator/(const QVector3D&, double)
    965,  // QGlobalSpace::operator/(const QPointF&, double)
    1155,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    618,  // QGlobalSpace::operator<(QChar, QChar)
    694,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    785,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    0,
    420,  // QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    421,  // QGlobalSpace::operator<<(QDebug, const QSslKey&)
    425,  // QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    430,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    432,  // QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    435,  // QGlobalSpace::operator<<(QDebug, const QTransform&)
    440,  // QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    442,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    457,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    483,  // QGlobalSpace::operator<<(QDebug, const QFont&)
    484,  // QGlobalSpace::operator<<(QDebug, const QPolygon&)
    485,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    502,  // QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    503,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    507,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    508,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    523,  // QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    530,  // QGlobalSpace::operator<<(QDebug, const QColor&)
    548,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    555,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    561,  // QGlobalSpace::operator<<(QDataStream&, const QHostAddress&)
    572,  // QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    574,  // QGlobalSpace::operator<<(QDataStream&, const QTableWidgetItem&)
    576,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    578,  // QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    582,  // QGlobalSpace::operator<<(QDataStream&, const QPicture&)
    600,  // QGlobalSpace::operator<<(QDataStream&, const QTreeWidgetItem&)
    605,  // QGlobalSpace::operator<<(QTextStream&, const QSplitter&)
    608,  // QGlobalSpace::operator<<(QDataStream&, const QScriptContextInfo&)
    611,  // QGlobalSpace::operator<<(QDebug, const QNetworkInterface&)
    617,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    625,  // QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    663,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    692,  // QGlobalSpace::operator<<(QDebug, const QPen&)
    712,  // QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    715,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    718,  // QGlobalSpace::operator<<(QDebug, const QVector3D&)
    731,  // QGlobalSpace::operator<<(QDebug, const QNetworkCookie&)
    733,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    738,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    744,  // QGlobalSpace::operator<<(QDebug, const QVector2D&)
    763,  // QGlobalSpace::operator<<(QDataStream&, const QPen&)
    781,  // QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    786,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    793,  // QGlobalSpace::operator<<(QDebug, const QHostAddress&)
    795,  // QGlobalSpace::operator<<(QDebug, const QVector4D&)
    812,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    816,  // QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    820,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    823,  // QGlobalSpace::operator<<(QDebug, const QMatrix4x4&)
    880,  // QGlobalSpace::operator<<(QDataStream&, const QVector3D&)
    883,  // QGlobalSpace::operator<<(QDebug, const QSslCipher&)
    886,  // QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    887,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    891,  // QGlobalSpace::operator<<(QDataStream&, const QFont&)
    897,  // QGlobalSpace::operator<<(QDataStream&, const QVector2D&)
    898,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    913,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    921,  // QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    933,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    940,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    950,  // QGlobalSpace::operator<<(QDebug, QGraphicsObject*)
    951,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    954,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    956,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    957,  // QGlobalSpace::operator<<(QDataStream&, const QImage&)
    962,  // QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    971,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    978,  // QGlobalSpace::operator<<(QDebug, const QEvent*)
    989,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    998,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    1003,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    1021,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    1024,  // QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    1026,  // QGlobalSpace::operator<<(QDebug, const QMatrix&)
    1032,  // QGlobalSpace::operator<<(QDataStream&, const QColor&)
    1040,  // QGlobalSpace::operator<<(QDebug, const QBrush&)
    1044,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    1049,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    1056,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    1061,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    1063,  // QGlobalSpace::operator<<(QDataStream&, const QTextLength&)
    1069,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem*)
    1071,  // QGlobalSpace::operator<<(QDataStream&, const QListWidgetItem&)
    1084,  // QGlobalSpace::operator<<(QDataStream&, const QStandardItem&)
    1093,  // QGlobalSpace::operator<<(QDebug, const QDeclarativeError&)
    1099,  // QGlobalSpace::operator<<(QDebug, QDeclarativeItem*)
    1119,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    1121,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix4x4&)
    1124,  // QGlobalSpace::operator<<(QDataStream&, const QVector4D&)
    1141,  // QGlobalSpace::operator<<(QDebug, const QSslCertificate&)
    1148,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    1150,  // QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    1175,  // QGlobalSpace::operator<<(QDebug, const QSslError&)
    1178,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    1189,  // QGlobalSpace::operator<<(QDebug, const QQuaternion&)
    1190,  // QGlobalSpace::operator<<(QDataStream&, const QNetworkCacheMetaData&)
    1194,  // QGlobalSpace::operator<<(QDataStream&, const QTextFormat&)
    1204,  // QGlobalSpace::operator<<(QDataStream&, const QQuaternion&)
    1205,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    1210,  // QGlobalSpace::operator<<(QDebug, const QRegion&)
    1226,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    1228,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    1233,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    0,
    471,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    575,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemChange)
    591,  // QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    626,  // QGlobalSpace::operator<<(QDebug, QSslCertificate::SubjectInfo)
    635,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    689,  // QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketState)
    790,  // QGlobalSpace::operator<<(QDebug, QFlags<QGraphicsItem::GraphicsItemFlag>)
    847,  // QGlobalSpace::operator<<(QDebug, QGraphicsItem::GraphicsItemFlag)
    856,  // QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketError)
    981,  // QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketError)
    997,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    1035,  // QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketState)
    1081,  // QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    1116,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    1135,  // QGlobalSpace::operator<<(QDebug, const QSslError::SslError&)
    1151,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    0,
    864,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    969,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    1060,  // QGlobalSpace::operator<=(QChar, QChar)
    0,
    454,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    466,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    475,  // QGlobalSpace::operator==(QBool, QBool)
    482,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    569,  // QGlobalSpace::operator==(const QVector3D&, const QVector3D&)
    603,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    620,  // QGlobalSpace::operator==(const QQuaternion&, const QQuaternion&)
    654,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    729,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    773,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    829,  // QGlobalSpace::operator==(const QVector2D&, const QVector2D&)
    855,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    878,  // QGlobalSpace::operator==(QChar, QChar)
    896,  // QGlobalSpace::operator==(const QVector4D&, const QVector4D&)
    917,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    923,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    999,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    1104,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    1209,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    1229,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    0,
    768,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    927,  // QGlobalSpace::operator==(QKeyEvent*, QKeySequence::StandardKey)
    1039,  // QGlobalSpace::operator==(QString::Null, const QString&)
    1045,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    1130,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    1208,  // QGlobalSpace::operator==(QBool, bool)
    0,
    426,  // QGlobalSpace::operator==(QHostAddress::SpecialAddress, const QHostAddress&)
    592,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    691,  // QGlobalSpace::operator==(const QString&, QString::Null)
    850,  // QGlobalSpace::operator==(QKeySequence::StandardKey, QKeyEvent*)
    858,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    1029,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    1160,  // QGlobalSpace::operator==(bool, QBool)
    0,
    686,  // QGlobalSpace::operator>(QChar, QChar)
    802,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    853,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    465,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    721,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    967,  // QGlobalSpace::operator>=(QChar, QChar)
    0,
    431,  // QGlobalSpace::operator>>(QDataStream&, QImage&)
    469,  // QGlobalSpace::operator>>(QDataStream&, QScriptContextInfo&)
    486,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    541,  // QGlobalSpace::operator>>(QDataStream&, QPen&)
    546,  // QGlobalSpace::operator>>(QDataStream&, QColor&)
    571,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    581,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    588,  // QGlobalSpace::operator>>(QDataStream&, QVector4D&)
    594,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    598,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    599,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    601,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    639,  // QGlobalSpace::operator>>(QDataStream&, QRegion&)
    645,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    651,  // QGlobalSpace::operator>>(QDataStream&, QNetworkCacheMetaData&)
    678,  // QGlobalSpace::operator>>(QDataStream&, QCursor&)
    684,  // QGlobalSpace::operator>>(QDataStream&, QTransform&)
    698,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    737,  // QGlobalSpace::operator>>(QDataStream&, QHostAddress&)
    739,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    779,  // QGlobalSpace::operator>>(QDataStream&, QIcon&)
    796,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    807,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    811,  // QGlobalSpace::operator>>(QDataStream&, QStandardItem&)
    819,  // QGlobalSpace::operator>>(QDataStream&, QBrush&)
    821,  // QGlobalSpace::operator>>(QDataStream&, QMatrix4x4&)
    826,  // QGlobalSpace::operator>>(QDataStream&, QTextFormat&)
    835,  // QGlobalSpace::operator>>(QDataStream&, QListWidgetItem&)
    852,  // QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    861,  // QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    865,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    894,  // QGlobalSpace::operator>>(QDataStream&, QTableWidgetItem&)
    918,  // QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    920,  // QGlobalSpace::operator>>(QDataStream&, QPalette&)
    938,  // QGlobalSpace::operator>>(QDataStream&, QQuaternion&)
    983,  // QGlobalSpace::operator>>(QDataStream&, QFont&)
    994,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    1012,  // QGlobalSpace::operator>>(QDataStream&, QTextLength&)
    1043,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    1048,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    1050,  // QGlobalSpace::operator>>(QDataStream&, QTreeWidgetItem&)
    1051,  // QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    1090,  // QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    1120,  // QGlobalSpace::operator>>(QTextStream&, QSplitter&)
    1122,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    1132,  // QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    1137,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    1152,  // QGlobalSpace::operator>>(QDataStream&, QVector3D&)
    1156,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    1157,  // QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    1159,  // QGlobalSpace::operator>>(QDataStream&, QPicture&)
    1174,  // QGlobalSpace::operator>>(QDataStream&, QVector2D&)
    1182,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    1215,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    0,
    877,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    1102,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    0,
    415,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    417,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag)
    423,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    428,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    429,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    433,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    434,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    441,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    446,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    449,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature)
    453,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    455,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    458,  // QGlobalSpace::operator|(QDir::Filter, int)
    463,  // QGlobalSpace::operator|(QFileDialog::Option, QFlags<QFileDialog::Option>)
    468,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QAbstractPrintDialog::PrintDialogOption)
    470,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    476,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    477,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    478,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, QFontComboBox::FontFilter)
    479,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    481,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag)
    488,  // QGlobalSpace::operator|(QStyle::SubControl, int)
    489,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature)
    491,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>)
    492,  // QGlobalSpace::operator|(QSsl::SslOption, QFlags<QSsl::SslOption>)
    493,  // QGlobalSpace::operator|(QScriptValue::PropertyFlag, QFlags<QScriptValue::PropertyFlag>)
    495,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    501,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    505,  // QGlobalSpace::operator|(QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>)
    510,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>)
    513,  // QGlobalSpace::operator|(QAccessible::StateFlag, QFlags<QAccessible::StateFlag>)
    521,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    525,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>)
    529,  // QGlobalSpace::operator|(QWidget::RenderFlag, int)
    531,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, int)
    532,  // QGlobalSpace::operator|(Qt::DropAction, int)
    540,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    544,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>)
    545,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    547,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    549,  // QGlobalSpace::operator|(QScriptClass::QueryFlag, QFlags<QScriptClass::QueryFlag>)
    550,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    551,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    553,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag)
    554,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, int)
    556,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    557,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    558,  // QGlobalSpace::operator|(QScriptEngine::QObjectWrapOption, int)
    562,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag)
    566,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    568,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    573,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    577,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    579,  // QGlobalSpace::operator|(QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>)
    580,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    583,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    584,  // QGlobalSpace::operator|(QMessageBox::StandardButton, QMessageBox::StandardButton)
    585,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    590,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>)
    593,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFontDialog::FontDialogOption)
    602,  // QGlobalSpace::operator|(QPainter::RenderHint, QPainter::RenderHint)
    606,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    609,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag)
    612,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    615,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    616,  // QGlobalSpace::operator|(QFile::Permission, int)
    627,  // QGlobalSpace::operator|(QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>)
    630,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    631,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, int)
    632,  // QGlobalSpace::operator|(QStyle::StateFlag, int)
    640,  // QGlobalSpace::operator|(QPainter::RenderHint, int)
    641,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    642,  // QGlobalSpace::operator|(QWizard::WizardOption, QWizard::WizardOption)
    643,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability)
    644,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    646,  // QGlobalSpace::operator|(QWizard::WizardOption, QFlags<QWizard::WizardOption>)
    649,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>)
    650,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag)
    661,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    667,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    669,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    674,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    675,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    676,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, int)
    677,  // QGlobalSpace::operator|(QTextDocument::FindFlag, int)
    680,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    683,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    690,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    695,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    697,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    706,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag)
    707,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, int)
    708,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, int)
    711,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    714,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    717,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    719,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    722,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>)
    724,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, int)
    728,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag)
    736,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    742,  // QGlobalSpace::operator|(QScriptValue::PropertyFlag, int)
    743,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    745,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    747,  // QGlobalSpace::operator|(QAccessible::StateFlag, int)
    752,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag)
    753,  // QGlobalSpace::operator|(QDateTimeEdit::Section, int)
    755,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    757,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    758,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    761,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    765,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    766,  // QGlobalSpace::operator|(Qt::WindowType, int)
    767,  // QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    777,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    778,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, int)
    780,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, int)
    783,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    784,  // QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    787,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, int)
    789,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, int)
    791,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, int)
    792,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    797,  // QGlobalSpace::operator|(QWizard::WizardOption, int)
    799,  // QGlobalSpace::operator|(QFileDialog::Option, int)
    801,  // QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    806,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    808,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>)
    810,  // QGlobalSpace::operator|(QMdiArea::AreaOption, QMdiArea::AreaOption)
    813,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    815,  // QGlobalSpace::operator|(QPaintEngine::PaintEngineFeature, int)
    818,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>)
    825,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, int)
    834,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    837,  // QGlobalSpace::operator|(QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>)
    838,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>)
    840,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    842,  // QGlobalSpace::operator|(QMessageBox::StandardButton, int)
    848,  // QGlobalSpace::operator|(QSsl::SslOption, QSsl::SslOption)
    849,  // QGlobalSpace::operator|(QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>)
    851,  // QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    860,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>)
    862,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    863,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    866,  // QGlobalSpace::operator|(QSsl::SslOption, int)
    867,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    868,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    870,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    873,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, QFlags<QAbstractPrintDialog::PrintDialogOption>)
    875,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, QInputDialog::InputDialogOption)
    876,  // QGlobalSpace::operator|(QAbstractPrintDialog::PrintDialogOption, int)
    879,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    888,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    892,  // QGlobalSpace::operator|(QTextOption::Flag, QFlags<QTextOption::Flag>)
    895,  // QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    900,  // QGlobalSpace::operator|(QPainter::RenderHint, QFlags<QPainter::RenderHint>)
    904,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    907,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>)
    911,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    912,  // QGlobalSpace::operator|(QTextItem::RenderFlag, QTextItem::RenderFlag)
    914,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag)
    915,  // QGlobalSpace::operator|(QNetworkProxy::Capability, int)
    916,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    919,  // QGlobalSpace::operator|(QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>)
    922,  // QGlobalSpace::operator|(QAccessible::StateFlag, QAccessible::StateFlag)
    928,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    930,  // QGlobalSpace::operator|(QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>)
    931,  // QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    932,  // QGlobalSpace::operator|(QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>)
    935,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    937,  // QGlobalSpace::operator|(QPinchGesture::ChangeFlag, int)
    942,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    949,  // QGlobalSpace::operator|(QMainWindow::DockOption, QFlags<QMainWindow::DockOption>)
    955,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption)
    958,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, int)
    961,  // QGlobalSpace::operator|(QTextDocument::FindFlag, QTextDocument::FindFlag)
    963,  // QGlobalSpace::operator|(QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>)
    964,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton)
    968,  // QGlobalSpace::operator|(QAccessible::RelationFlag, QAccessible::RelationFlag)
    972,  // QGlobalSpace::operator|(QScriptClass::QueryFlag, QScriptClass::QueryFlag)
    977,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer)
    980,  // QGlobalSpace::operator|(QScriptValue::PropertyFlag, QScriptValue::PropertyFlag)
    984,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    986,  // QGlobalSpace::operator|(QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>)
    987,  // QGlobalSpace::operator|(QScriptValue::ResolveFlag, QFlags<QScriptValue::ResolveFlag>)
    988,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    991,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    993,  // QGlobalSpace::operator|(QScriptEngine::QObjectWrapOption, QScriptEngine::QObjectWrapOption)
    996,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    1004,  // QGlobalSpace::operator|(QGestureRecognizer::ResultFlag, int)
    1008,  // QGlobalSpace::operator|(Qt::WindowState, int)
    1009,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    1025,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    1027,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, int)
    1028,  // QGlobalSpace::operator|(QScriptEngine::QObjectWrapOption, QFlags<QScriptEngine::QObjectWrapOption>)
    1030,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    1031,  // QGlobalSpace::operator|(QTextOption::Flag, QTextOption::Flag)
    1033,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    1034,  // QGlobalSpace::operator|(QDateTimeEdit::Section, QDateTimeEdit::Section)
    1041,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    1042,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    1047,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    1053,  // QGlobalSpace::operator|(QScriptValue::ResolveFlag, QScriptValue::ResolveFlag)
    1054,  // QGlobalSpace::operator|(QTextEdit::AutoFormattingFlag, int)
    1059,  // QGlobalSpace::operator|(QScriptValue::ResolveFlag, int)
    1062,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>)
    1070,  // QGlobalSpace::operator|(QDockWidget::DockWidgetFeature, int)
    1072,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    1074,  // QGlobalSpace::operator|(QGraphicsScene::SceneLayer, int)
    1075,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    1079,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    1083,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    1086,  // QGlobalSpace::operator|(QAccessible::RelationFlag, int)
    1094,  // QGlobalSpace::operator|(QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>)
    1096,  // QGlobalSpace::operator|(QScriptClass::QueryFlag, int)
    1097,  // QGlobalSpace::operator|(QFileDialog::Option, QFileDialog::Option)
    1098,  // QGlobalSpace::operator|(QMdiArea::AreaOption, int)
    1103,  // QGlobalSpace::operator|(QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>)
    1105,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>)
    1110,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    1125,  // QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    1127,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    1134,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    1138,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    1139,  // QGlobalSpace::operator|(QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>)
    1140,  // QGlobalSpace::operator|(QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag)
    1143,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    1146,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    1147,  // QGlobalSpace::operator|(QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption)
    1153,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    1158,  // QGlobalSpace::operator|(QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>)
    1164,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    1165,  // QGlobalSpace::operator|(QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>)
    1166,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    1168,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    1169,  // QGlobalSpace::operator|(QDialogButtonBox::StandardButton, int)
    1171,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    1173,  // QGlobalSpace::operator|(QTextItem::RenderFlag, int)
    1179,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>)
    1181,  // QGlobalSpace::operator|(QMainWindow::DockOption, int)
    1184,  // QGlobalSpace::operator|(QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>)
    1187,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    1192,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, QUdpSocket::BindFlag)
    1193,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    1196,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    1197,  // QGlobalSpace::operator|(QMdiSubWindow::SubWindowOption, int)
    1199,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    1200,  // QGlobalSpace::operator|(QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint)
    1201,  // QGlobalSpace::operator|(Qt::Orientation, int)
    1203,  // QGlobalSpace::operator|(QImageIOPlugin::Capability, QImageIOPlugin::Capability)
    1211,  // QGlobalSpace::operator|(QNetworkProxy::Capability, QNetworkProxy::Capability)
    1216,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    1217,  // QGlobalSpace::operator|(QTextOption::Flag, int)
    1222,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    1223,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    1224,  // QGlobalSpace::operator|(QMainWindow::DockOption, QMainWindow::DockOption)
    1231,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, int)
    1232,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    0,
    452,  // QGlobalSpace::qFuzzyCompare(const QVector2D&, const QVector2D&)
    459,  // QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    622,  // QGlobalSpace::qFuzzyCompare(const QMatrix4x4&, const QMatrix4x4&)
    909,  // QGlobalSpace::qFuzzyCompare(const QVector4D&, const QVector4D&)
    941,  // QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    975,  // QGlobalSpace::qFuzzyCompare(const QVector3D&, const QVector3D&)
    1014,  // QGlobalSpace::qFuzzyCompare(const QQuaternion&, const QQuaternion&)
    0,
    596,  // QGlobalSpace::qFuzzyCompare(double, double)
    982,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    730,  // QGlobalSpace::qFuzzyIsNull(double)
    1195,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    414,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    480,  // QGlobalSpace::qHash(const QStringRef&)
    509,  // QGlobalSpace::qHash(const QBitArray&)
    517,  // QGlobalSpace::qHash(const QDeclarativeProperty&)
    629,  // QGlobalSpace::qHash(const QByteArray&)
    636,  // QGlobalSpace::qHash(const QHostAddress&)
    723,  // QGlobalSpace::qHash(QChar)
    824,  // QGlobalSpace::qHash(const QUrl&)
    925,  // QGlobalSpace::qHash(const QScriptString&)
    929,  // QGlobalSpace::qHash(const QModelIndex&)
    1126,  // QGlobalSpace::qHash(const QItemSelectionRange&)
    0,
    445,  // QGlobalSpace::qHash(unsigned char)
    516,  // QGlobalSpace::qHash(const QString&)
    518,  // QGlobalSpace::qHash(unsigned short)
    520,  // QGlobalSpace::qHash(long)
    522,  // QGlobalSpace::qHash(long long)
    713,  // QGlobalSpace::qHash(unsigned long long)
    885,  // QGlobalSpace::qHash(signed char)
    952,  // QGlobalSpace::qHash(short)
    1001,  // QGlobalSpace::qHash(unsigned long)
    1064,  // QGlobalSpace::qHash(unsigned int)
    1117,  // QGlobalSpace::qHash(int)
    1177,  // QGlobalSpace::qHash(char)
    0,
    693,  // QGlobalSpace::qIntCast(float)
    774,  // QGlobalSpace::qIntCast(double)
    0,
    827,  // QGlobalSpace::qIsFinite(float)
    1185,  // QGlobalSpace::qIsFinite(double)
    0,
    419,  // QGlobalSpace::qIsInf(double)
    543,  // QGlobalSpace::qIsInf(float)
    0,
    595,  // QGlobalSpace::qIsNaN(float)
    948,  // QGlobalSpace::qIsNaN(double)
    0,
    597,  // QGlobalSpace::qIsNull(float)
    769,  // QGlobalSpace::qIsNull(double)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {18, 18, 44},	// QDeclarativeComponent::Error
    {18, 102, 43},	// QDeclarativeComponent::Loading
    {18, 111, 41},	// QDeclarativeComponent::Null
    {18, 118, 35},	// QDeclarativeComponent::QDeclarativeComponent
    {18, 119, -10},	// QDeclarativeComponent::QDeclarativeComponent#
    {18, 120, -13},	// QDeclarativeComponent::QDeclarativeComponent##
    {18, 121, 12},	// QDeclarativeComponent::QDeclarativeComponent###
    {18, 122, 37},	// QDeclarativeComponent::QDeclarativeComponent#$
    {18, 123, 11},	// QDeclarativeComponent::QDeclarativeComponent#$#
    {18, 168, 42},	// QDeclarativeComponent::Ready
    {18, 209, 23},	// QDeclarativeComponent::beginCreate#
    {18, 234, 24},	// QDeclarativeComponent::completeCreate
    {18, 249, 39},	// QDeclarativeComponent::create
    {18, 250, 22},	// QDeclarativeComponent::create#
    {18, 252, 31},	// QDeclarativeComponent::createObject#
    {18, 253, 32},	// QDeclarativeComponent::createObject##
    {18, 254, 27},	// QDeclarativeComponent::creationContext
    {18, 270, 19},	// QDeclarativeComponent::errorString
    {18, 271, 18},	// QDeclarativeComponent::errors
    {18, 325, 16},	// QDeclarativeComponent::isError
    {18, 326, 17},	// QDeclarativeComponent::isLoading
    {18, 327, 14},	// QDeclarativeComponent::isNull
    {18, 330, 15},	// QDeclarativeComponent::isReady
    {18, 353, 25},	// QDeclarativeComponent::loadUrl#
    {18, 358, 2},	// QDeclarativeComponent::metaObject
    {18, 448, 20},	// QDeclarativeComponent::progress
    {18, 450, 30},	// QDeclarativeComponent::progressChanged$
    {18, 655, 28},	// QDeclarativeComponent::qmlAttachedProperties#
    {18, 713, 8},	// QDeclarativeComponent::qt_metacall$$?
    {18, 715, 3},	// QDeclarativeComponent::qt_metacast$
    {18, 774, 26},	// QDeclarativeComponent::setData##
    {18, 842, 40},	// QDeclarativeComponent::staticMetaObject
    {18, 843, 13},	// QDeclarativeComponent::status
    {18, 845, 29},	// QDeclarativeComponent::statusChanged$
    {18, 853, 33},	// QDeclarativeComponent::tr$
    {18, 854, 4},	// QDeclarativeComponent::tr$$
    {18, 855, 6},	// QDeclarativeComponent::tr$$$
    {18, 857, 34},	// QDeclarativeComponent::trUtf8$
    {18, 858, 5},	// QDeclarativeComponent::trUtf8$$
    {18, 859, 7},	// QDeclarativeComponent::trUtf8$$$
    {18, 865, 21},	// QDeclarativeComponent::url
    {18, 882, 45},	// QDeclarativeComponent::~QDeclarativeComponent
    {20, 125, -1},	// QDeclarativeContext::QDeclarativeContext#
    {20, 126, -4},	// QDeclarativeContext::QDeclarativeContext##
    {20, 204, 65},	// QDeclarativeContext::baseUrl
    {20, 245, 58},	// QDeclarativeContext::contextObject
    {20, 247, 60},	// QDeclarativeContext::contextProperty$
    {20, 267, 56},	// QDeclarativeContext::engine
    {20, 333, 55},	// QDeclarativeContext::isValid
    {20, 358, 46},	// QDeclarativeContext::metaObject
    {20, 445, 57},	// QDeclarativeContext::parentContext
    {20, 713, 52},	// QDeclarativeContext::qt_metacall$$?
    {20, 715, 47},	// QDeclarativeContext::qt_metacast$
    {20, 744, 63},	// QDeclarativeContext::resolvedUrl#
    {20, 758, 64},	// QDeclarativeContext::setBaseUrl#
    {20, 770, 59},	// QDeclarativeContext::setContextObject#
    {20, 772, -7},	// QDeclarativeContext::setContextProperty$#
    {20, 842, 70},	// QDeclarativeContext::staticMetaObject
    {20, 853, 66},	// QDeclarativeContext::tr$
    {20, 854, 48},	// QDeclarativeContext::tr$$
    {20, 855, 50},	// QDeclarativeContext::tr$$$
    {20, 857, 67},	// QDeclarativeContext::trUtf8$
    {20, 858, 49},	// QDeclarativeContext::trUtf8$$
    {20, 859, 51},	// QDeclarativeContext::trUtf8$$$
    {20, 883, 71},	// QDeclarativeContext::~QDeclarativeContext
    {21, 11, 111},	// QDeclarativeEngine::CppOwnership
    {21, 80, 112},	// QDeclarativeEngine::JavaScriptOwnership
    {21, 127, 109},	// QDeclarativeEngine::QDeclarativeEngine
    {21, 128, 79},	// QDeclarativeEngine::QDeclarativeEngine#
    {21, 194, 92},	// QDeclarativeEngine::addImageProvider$#
    {21, 196, 84},	// QDeclarativeEngine::addImportPath$
    {21, 198, 87},	// QDeclarativeEngine::addPluginPath$
    {21, 204, 97},	// QDeclarativeEngine::baseUrl
    {21, 225, 81},	// QDeclarativeEngine::clearComponentCache
    {21, 243, 101},	// QDeclarativeEngine::contextForObject#
    {21, 301, 93},	// QDeclarativeEngine::imageProvider$
    {21, 307, 82},	// QDeclarativeEngine::importPathList
    {21, 309, 88},	// QDeclarativeEngine::importPlugin$$$
    {21, 358, 72},	// QDeclarativeEngine::metaObject
    {21, 369, 91},	// QDeclarativeEngine::networkAccessManager
    {21, 370, 90},	// QDeclarativeEngine::networkAccessManagerFactory
    {21, 374, 104},	// QDeclarativeEngine::objectOwnership#
    {21, 375, 96},	// QDeclarativeEngine::offlineStoragePath
    {21, 436, 99},	// QDeclarativeEngine::outputWarningsToStandardError
    {21, 447, 85},	// QDeclarativeEngine::pluginPathList
    {21, 713, 78},	// QDeclarativeEngine::qt_metacall$$?
    {21, 715, 73},	// QDeclarativeEngine::qt_metacast$
    {21, 721, 105},	// QDeclarativeEngine::quit
    {21, 732, 94},	// QDeclarativeEngine::removeImageProvider$
    {21, 745, 80},	// QDeclarativeEngine::rootContext
    {21, 758, 98},	// QDeclarativeEngine::setBaseUrl#
    {21, 768, 102},	// QDeclarativeEngine::setContextForObject##
    {21, 789, 83},	// QDeclarativeEngine::setImportPathList?
    {21, 795, 89},	// QDeclarativeEngine::setNetworkAccessManagerFactory#
    {21, 799, 103},	// QDeclarativeEngine::setObjectOwnership#$
    {21, 801, 95},	// QDeclarativeEngine::setOfflineStoragePath$
    {21, 803, 100},	// QDeclarativeEngine::setOutputWarningsToStandardError$
    {21, 807, 86},	// QDeclarativeEngine::setPluginPathList?
    {21, 842, 110},	// QDeclarativeEngine::staticMetaObject
    {21, 853, 107},	// QDeclarativeEngine::tr$
    {21, 854, 74},	// QDeclarativeEngine::tr$$
    {21, 855, 76},	// QDeclarativeEngine::tr$$$
    {21, 857, 108},	// QDeclarativeEngine::trUtf8$
    {21, 858, 75},	// QDeclarativeEngine::trUtf8$$
    {21, 859, 77},	// QDeclarativeEngine::trUtf8$$$
    {21, 872, 106},	// QDeclarativeEngine::warnings?
    {21, 884, 113},	// QDeclarativeEngine::~QDeclarativeEngine
    {22, 129, 114},	// QDeclarativeError::QDeclarativeError
    {22, 130, 115},	// QDeclarativeError::QDeclarativeError#
    {22, 233, 124},	// QDeclarativeError::column
    {22, 256, 120},	// QDeclarativeError::description
    {22, 333, 117},	// QDeclarativeError::isValid
    {22, 349, 122},	// QDeclarativeError::line
    {22, 411, 116},	// QDeclarativeError::operator=#
    {22, 764, 125},	// QDeclarativeError::setColumn$
    {22, 776, 121},	// QDeclarativeError::setDescription$
    {22, 793, 123},	// QDeclarativeError::setLine$
    {22, 827, 119},	// QDeclarativeError::setUrl#
    {22, 851, 126},	// QDeclarativeError::toString
    {22, 865, 118},	// QDeclarativeError::url
    {22, 885, 127},	// QDeclarativeError::~QDeclarativeError
    {23, 131, 135},	// QDeclarativeExpression::QDeclarativeExpression
    {23, 132, 154},	// QDeclarativeExpression::QDeclarativeExpression##$
    {23, 133, 136},	// QDeclarativeExpression::QDeclarativeExpression##$#
    {23, 226, 148},	// QDeclarativeExpression::clearError
    {23, 241, 138},	// QDeclarativeExpression::context
    {23, 267, 137},	// QDeclarativeExpression::engine
    {23, 269, 149},	// QDeclarativeExpression::error
    {23, 272, 155},	// QDeclarativeExpression::evaluate
    {23, 273, 150},	// QDeclarativeExpression::evaluate$
    {23, 278, 139},	// QDeclarativeExpression::expression
    {23, 290, 147},	// QDeclarativeExpression::hasError
    {23, 350, 144},	// QDeclarativeExpression::lineNumber
    {23, 358, 128},	// QDeclarativeExpression::metaObject
    {23, 371, 141},	// QDeclarativeExpression::notifyOnValueChanged
    {23, 713, 134},	// QDeclarativeExpression::qt_metacall$$?
    {23, 715, 129},	// QDeclarativeExpression::qt_metacast$
    {23, 752, 146},	// QDeclarativeExpression::scopeObject
    {23, 778, 140},	// QDeclarativeExpression::setExpression$
    {23, 797, 142},	// QDeclarativeExpression::setNotifyOnValueChanged$
    {23, 823, 145},	// QDeclarativeExpression::setSourceLocation$$
    {23, 839, 143},	// QDeclarativeExpression::sourceFile
    {23, 842, 156},	// QDeclarativeExpression::staticMetaObject
    {23, 853, 152},	// QDeclarativeExpression::tr$
    {23, 854, 130},	// QDeclarativeExpression::tr$$
    {23, 855, 132},	// QDeclarativeExpression::tr$$$
    {23, 857, 153},	// QDeclarativeExpression::trUtf8$
    {23, 858, 131},	// QDeclarativeExpression::trUtf8$$
    {23, 859, 133},	// QDeclarativeExpression::trUtf8$$$
    {23, 868, 151},	// QDeclarativeExpression::valueChanged
    {23, 886, 157},	// QDeclarativeExpression::~QDeclarativeExpression
    {25, 134, 170},	// QDeclarativeExtensionPlugin::QDeclarativeExtensionPlugin
    {25, 135, 165},	// QDeclarativeExtensionPlugin::QDeclarativeExtensionPlugin#
    {25, 313, 167},	// QDeclarativeExtensionPlugin::initializeEngine#$
    {25, 358, 158},	// QDeclarativeExtensionPlugin::metaObject
    {25, 713, 164},	// QDeclarativeExtensionPlugin::qt_metacall$$?
    {25, 715, 159},	// QDeclarativeExtensionPlugin::qt_metacast$
    {25, 730, 166},	// QDeclarativeExtensionPlugin::registerTypes$
    {25, 842, 171},	// QDeclarativeExtensionPlugin::staticMetaObject
    {25, 853, 168},	// QDeclarativeExtensionPlugin::tr$
    {25, 854, 160},	// QDeclarativeExtensionPlugin::tr$$
    {25, 855, 162},	// QDeclarativeExtensionPlugin::tr$$$
    {25, 857, 169},	// QDeclarativeExtensionPlugin::trUtf8$
    {25, 858, 161},	// QDeclarativeExtensionPlugin::trUtf8$$
    {25, 859, 163},	// QDeclarativeExtensionPlugin::trUtf8$$$
    {25, 887, 172},	// QDeclarativeExtensionPlugin::~QDeclarativeExtensionPlugin
    {26, 22, 178},	// QDeclarativeImageProvider::Image
    {26, 115, 179},	// QDeclarativeImageProvider::Pixmap
    {26, 137, 177},	// QDeclarativeImageProvider::QDeclarativeImageProvider#
    {26, 138, 173},	// QDeclarativeImageProvider::QDeclarativeImageProvider$
    {26, 302, 174},	// QDeclarativeImageProvider::imageType
    {26, 734, 175},	// QDeclarativeImageProvider::requestImage$##
    {26, 736, 176},	// QDeclarativeImageProvider::requestPixmap$##
    {26, 888, 180},	// QDeclarativeImageProvider::~QDeclarativeImageProvider
    {28, 3, 263},	// QDeclarativeItem::Bottom
    {28, 4, 262},	// QDeclarativeItem::BottomLeft
    {28, 5, 264},	// QDeclarativeItem::BottomRight
    {28, 10, 260},	// QDeclarativeItem::Center
    {28, 81, 259},	// QDeclarativeItem::Left
    {28, 139, 254},	// QDeclarativeItem::QDeclarativeItem
    {28, 140, 188},	// QDeclarativeItem::QDeclarativeItem#
    {28, 169, 261},	// QDeclarativeItem::Right
    {28, 181, 257},	// QDeclarativeItem::Top
    {28, 182, 256},	// QDeclarativeItem::TopLeft
    {28, 183, 258},	// QDeclarativeItem::TopRight
    {28, 189, 210},	// QDeclarativeItem::accessibleRole
    {28, 192, 227},	// QDeclarativeItem::activeFocusChanged$
    {28, 205, 194},	// QDeclarativeItem::baselineOffset
    {28, 207, 224},	// QDeclarativeItem::baselineOffsetChanged$
    {28, 210, 212},	// QDeclarativeItem::boundingRect
    {28, 217, 222},	// QDeclarativeItem::childAt$$
    {28, 219, 191},	// QDeclarativeItem::childrenRect
    {28, 221, 223},	// QDeclarativeItem::childrenRectChanged#
    {28, 222, 242},	// QDeclarativeItem::classBegin
    {28, 227, 192},	// QDeclarativeItem::clip
    {28, 229, 231},	// QDeclarativeItem::clipChanged$
    {28, 235, 243},	// QDeclarativeItem::componentComplete
    {28, 275, 236},	// QDeclarativeItem::event#
    {28, 281, 226},	// QDeclarativeItem::focusChanged$
    {28, 286, 221},	// QDeclarativeItem::forceActiveFocus
    {28, 288, 251},	// QDeclarativeItem::geometryChanged##
    {28, 289, 214},	// QDeclarativeItem::hasActiveFocus
    {28, 291, 215},	// QDeclarativeItem::hasFocus
    {28, 293, 201},	// QDeclarativeItem::height
    {28, 295, 241},	// QDeclarativeItem::heightValid
    {28, 303, 204},	// QDeclarativeItem::implicitHeight
    {28, 304, 233},	// QDeclarativeItem::implicitHeightChanged
    {28, 305, 200},	// QDeclarativeItem::implicitWidth
    {28, 306, 232},	// QDeclarativeItem::implicitWidthChanged
    {28, 315, 246},	// QDeclarativeItem::inputMethodEvent#
    {28, 317, 250},	// QDeclarativeItem::inputMethodPreHandler#
    {28, 319, 247},	// QDeclarativeItem::inputMethodQuery$
    {28, 322, 234},	// QDeclarativeItem::isComponentComplete
    {28, 336, 237},	// QDeclarativeItem::itemChange$#
    {28, 337, 217},	// QDeclarativeItem::keepMouseGrab
    {28, 339, 244},	// QDeclarativeItem::keyPressEvent#
    {28, 341, 248},	// QDeclarativeItem::keyPressPreHandler#
    {28, 343, 245},	// QDeclarativeItem::keyReleaseEvent#
    {28, 345, 249},	// QDeclarativeItem::keyReleasePreHandler#
    {28, 355, 219},	// QDeclarativeItem::mapFromItem#$$
    {28, 357, 220},	// QDeclarativeItem::mapToItem#$$
    {28, 358, 181},	// QDeclarativeItem::metaObject
    {28, 438, 213},	// QDeclarativeItem::paint###
    {28, 444, 228},	// QDeclarativeItem::parentChanged#
    {28, 446, 189},	// QDeclarativeItem::parentItem
    {28, 713, 187},	// QDeclarativeItem::qt_metacall$$?
    {28, 715, 182},	// QDeclarativeItem::qt_metacast$
    {28, 738, 203},	// QDeclarativeItem::resetHeight
    {28, 739, 199},	// QDeclarativeItem::resetWidth
    {28, 748, 235},	// QDeclarativeItem::sceneEvent#
    {28, 756, 211},	// QDeclarativeItem::setAccessibleRole$
    {28, 760, 195},	// QDeclarativeItem::setBaselineOffset$
    {28, 762, 193},	// QDeclarativeItem::setClip$
    {28, 781, 216},	// QDeclarativeItem::setFocus$
    {28, 783, 202},	// QDeclarativeItem::setHeight$
    {28, 785, 240},	// QDeclarativeItem::setImplicitHeight$
    {28, 787, 238},	// QDeclarativeItem::setImplicitWidth$
    {28, 791, 218},	// QDeclarativeItem::setKeepMouseGrab$
    {28, 805, 190},	// QDeclarativeItem::setParentItem#
    {28, 817, 205},	// QDeclarativeItem::setSize#
    {28, 819, 209},	// QDeclarativeItem::setSmooth$
    {28, 825, 207},	// QDeclarativeItem::setTransformOrigin$
    {28, 830, 198},	// QDeclarativeItem::setWidth$
    {28, 835, 208},	// QDeclarativeItem::smooth
    {28, 837, 230},	// QDeclarativeItem::smoothChanged$
    {28, 841, 225},	// QDeclarativeItem::stateChanged$
    {28, 842, 255},	// QDeclarativeItem::staticMetaObject
    {28, 853, 252},	// QDeclarativeItem::tr$
    {28, 854, 183},	// QDeclarativeItem::tr$$
    {28, 855, 185},	// QDeclarativeItem::tr$$$
    {28, 857, 253},	// QDeclarativeItem::trUtf8$
    {28, 858, 184},	// QDeclarativeItem::trUtf8$$
    {28, 859, 186},	// QDeclarativeItem::trUtf8$$$
    {28, 860, 196},	// QDeclarativeItem::transform
    {28, 861, 206},	// QDeclarativeItem::transformOrigin
    {28, 863, 229},	// QDeclarativeItem::transformOriginChanged$
    {28, 874, 197},	// QDeclarativeItem::width
    {28, 875, 239},	// QDeclarativeItem::widthValid
    {28, 889, 265},	// QDeclarativeItem::~QDeclarativeItem
    {29, 141, 266},	// QDeclarativeListReference::QDeclarativeListReference
    {29, 142, 268},	// QDeclarativeListReference::QDeclarativeListReference#
    {29, 143, 281},	// QDeclarativeListReference::QDeclarativeListReference#$
    {29, 144, 267},	// QDeclarativeListReference::QDeclarativeListReference#$#
    {29, 201, 277},	// QDeclarativeListReference::append#
    {29, 203, 278},	// QDeclarativeListReference::at$
    {29, 211, 273},	// QDeclarativeListReference::canAppend
    {29, 212, 274},	// QDeclarativeListReference::canAt
    {29, 213, 275},	// QDeclarativeListReference::canClear
    {29, 214, 276},	// QDeclarativeListReference::canCount
    {29, 223, 279},	// QDeclarativeListReference::clear
    {29, 248, 280},	// QDeclarativeListReference::count
    {29, 333, 270},	// QDeclarativeListReference::isValid
    {29, 351, 272},	// QDeclarativeListReference::listElementType
    {29, 372, 271},	// QDeclarativeListReference::object
    {29, 411, 269},	// QDeclarativeListReference::operator=#
    {29, 890, 282},	// QDeclarativeListReference::~QDeclarativeListReference
    {30, 145, 284},	// QDeclarativeNetworkAccessManagerFactory::QDeclarativeNetworkAccessManagerFactory
    {30, 146, 285},	// QDeclarativeNetworkAccessManagerFactory::QDeclarativeNetworkAccessManagerFactory#
    {30, 250, 283},	// QDeclarativeNetworkAccessManagerFactory::create#
    {30, 891, 286},	// QDeclarativeNetworkAccessManagerFactory::~QDeclarativeNetworkAccessManagerFactory
    {31, 147, 287},	// QDeclarativeParserStatus::QDeclarativeParserStatus
    {31, 148, 290},	// QDeclarativeParserStatus::QDeclarativeParserStatus#
    {31, 222, 288},	// QDeclarativeParserStatus::classBegin
    {31, 235, 289},	// QDeclarativeParserStatus::componentComplete
    {31, 892, 291},	// QDeclarativeParserStatus::~QDeclarativeParserStatus
    {32, 24, 334},	// QDeclarativeProperty::Invalid
    {32, 25, 330},	// QDeclarativeProperty::InvalidCategory
    {32, 101, 331},	// QDeclarativeProperty::List
    {32, 110, 333},	// QDeclarativeProperty::Normal
    {32, 112, 332},	// QDeclarativeProperty::Object
    {32, 117, 335},	// QDeclarativeProperty::Property
    {32, 149, 292},	// QDeclarativeProperty::QDeclarativeProperty
    {32, 150, -16},	// QDeclarativeProperty::QDeclarativeProperty#
    {32, 151, -19},	// QDeclarativeProperty::QDeclarativeProperty##
    {32, 152, 296},	// QDeclarativeProperty::QDeclarativeProperty#$
    {32, 153, -22},	// QDeclarativeProperty::QDeclarativeProperty#$#
    {32, 175, 336},	// QDeclarativeProperty::SignalProperty
    {32, 238, -25},	// QDeclarativeProperty::connectNotifySignal#$
    {32, 292, 319},	// QDeclarativeProperty::hasNotifySignal
    {32, 310, 327},	// QDeclarativeProperty::index
    {32, 323, 324},	// QDeclarativeProperty::isDesignable
    {32, 329, 304},	// QDeclarativeProperty::isProperty
    {32, 331, 325},	// QDeclarativeProperty::isResettable
    {32, 332, 305},	// QDeclarativeProperty::isSignalProperty
    {32, 333, 303},	// QDeclarativeProperty::isValid
    {32, 334, 323},	// QDeclarativeProperty::isWritable
    {32, 359, 329},	// QDeclarativeProperty::method
    {32, 367, 309},	// QDeclarativeProperty::name
    {32, 368, 320},	// QDeclarativeProperty::needsNotifySignal
    {32, 372, 326},	// QDeclarativeProperty::object
    {32, 411, 300},	// QDeclarativeProperty::operator=#
    {32, 413, 301},	// QDeclarativeProperty::operator==#
    {32, 451, 328},	// QDeclarativeProperty::property
    {32, 452, 306},	// QDeclarativeProperty::propertyType
    {32, 453, 307},	// QDeclarativeProperty::propertyTypeCategory
    {32, 454, 308},	// QDeclarativeProperty::propertyTypeName
    {32, 726, 310},	// QDeclarativeProperty::read
    {32, 727, 311},	// QDeclarativeProperty::read#$
    {32, 728, -28},	// QDeclarativeProperty::read#$#
    {32, 737, 318},	// QDeclarativeProperty::reset
    {32, 864, 302},	// QDeclarativeProperty::type
    {32, 878, 314},	// QDeclarativeProperty::write#
    {32, 879, 315},	// QDeclarativeProperty::write#$#
    {32, 880, -31},	// QDeclarativeProperty::write#$##
    {32, 893, 337},	// QDeclarativeProperty::~QDeclarativeProperty
    {33, 154, 359},	// QDeclarativePropertyMap::QDeclarativePropertyMap
    {33, 155, 345},	// QDeclarativePropertyMap::QDeclarativePropertyMap#
    {33, 224, 348},	// QDeclarativePropertyMap::clear$
    {33, 240, 353},	// QDeclarativePropertyMap::contains$
    {33, 248, 350},	// QDeclarativePropertyMap::count
    {33, 321, 347},	// QDeclarativePropertyMap::insert$#
    {33, 324, 352},	// QDeclarativePropertyMap::isEmpty
    {33, 346, 349},	// QDeclarativePropertyMap::keys
    {33, 358, 338},	// QDeclarativePropertyMap::metaObject
    {33, 430, -34},	// QDeclarativePropertyMap::operator[]$
    {33, 713, 344},	// QDeclarativePropertyMap::qt_metacall$$?
    {33, 715, 339},	// QDeclarativePropertyMap::qt_metacast$
    {33, 833, 351},	// QDeclarativePropertyMap::size
    {33, 842, 360},	// QDeclarativePropertyMap::staticMetaObject
    {33, 853, 357},	// QDeclarativePropertyMap::tr$
    {33, 854, 340},	// QDeclarativePropertyMap::tr$$
    {33, 855, 342},	// QDeclarativePropertyMap::tr$$$
    {33, 857, 358},	// QDeclarativePropertyMap::trUtf8$
    {33, 858, 341},	// QDeclarativePropertyMap::trUtf8$$
    {33, 859, 343},	// QDeclarativePropertyMap::trUtf8$$$
    {33, 867, 346},	// QDeclarativePropertyMap::value$
    {33, 869, 356},	// QDeclarativePropertyMap::valueChanged$#
    {33, 894, 361},	// QDeclarativePropertyMap::~QDeclarativePropertyMap
    {34, 156, 362},	// QDeclarativeScriptString::QDeclarativeScriptString
    {34, 157, 363},	// QDeclarativeScriptString::QDeclarativeScriptString#
    {34, 241, 365},	// QDeclarativeScriptString::context
    {34, 411, 364},	// QDeclarativeScriptString::operator=#
    {34, 752, 367},	// QDeclarativeScriptString::scopeObject
    {34, 753, 369},	// QDeclarativeScriptString::script
    {34, 766, 366},	// QDeclarativeScriptString::setContext#
    {34, 813, 368},	// QDeclarativeScriptString::setScopeObject#
    {34, 815, 370},	// QDeclarativeScriptString::setScript$
    {34, 895, 371},	// QDeclarativeScriptString::~QDeclarativeScriptString
    {35, 18, 409},	// QDeclarativeView::Error
    {35, 102, 408},	// QDeclarativeView::Loading
    {35, 111, 406},	// QDeclarativeView::Null
    {35, 158, 401},	// QDeclarativeView::QDeclarativeView
    {35, 159, -37},	// QDeclarativeView::QDeclarativeView#
    {35, 160, 380},	// QDeclarativeView::QDeclarativeView##
    {35, 168, 407},	// QDeclarativeView::Ready
    {35, 176, 405},	// QDeclarativeView::SizeRootObjectToView
    {35, 177, 404},	// QDeclarativeView::SizeViewToRootObject
    {35, 267, 383},	// QDeclarativeView::engine
    {35, 271, 389},	// QDeclarativeView::errors
    {35, 277, 398},	// QDeclarativeView::eventFilter##
    {35, 311, 391},	// QDeclarativeView::initialSize
    {35, 358, 372},	// QDeclarativeView::metaObject
    {35, 441, 395},	// QDeclarativeView::paintEvent#
    {35, 713, 378},	// QDeclarativeView::qt_metacall$$?
    {35, 715, 373},	// QDeclarativeView::qt_metacast$
    {35, 741, 394},	// QDeclarativeView::resizeEvent#
    {35, 742, 386},	// QDeclarativeView::resizeMode
    {35, 745, 384},	// QDeclarativeView::rootContext
    {35, 746, 385},	// QDeclarativeView::rootObject
    {35, 751, 392},	// QDeclarativeView::sceneResized#
    {35, 809, 387},	// QDeclarativeView::setResizeMode$
    {35, 811, 397},	// QDeclarativeView::setRootObject#
    {35, 821, 382},	// QDeclarativeView::setSource#
    {35, 834, 390},	// QDeclarativeView::sizeHint
    {35, 838, 381},	// QDeclarativeView::source
    {35, 842, 403},	// QDeclarativeView::staticMetaObject
    {35, 843, 388},	// QDeclarativeView::status
    {35, 845, 393},	// QDeclarativeView::statusChanged$
    {35, 850, 396},	// QDeclarativeView::timerEvent#
    {35, 853, 399},	// QDeclarativeView::tr$
    {35, 854, 374},	// QDeclarativeView::tr$$
    {35, 855, 376},	// QDeclarativeView::tr$$$
    {35, 857, 400},	// QDeclarativeView::trUtf8$
    {35, 858, 375},	// QDeclarativeView::trUtf8$$
    {35, 859, 377},	// QDeclarativeView::trUtf8$$$
    {35, 896, 410},	// QDeclarativeView::~QDeclarativeView
    {46, 82, 1248},	// QGlobalSpace::LicensedActiveQt
    {46, 83, 1251},	// QGlobalSpace::LicensedCore
    {46, 84, 1250},	// QGlobalSpace::LicensedDBus
    {46, 85, 1258},	// QGlobalSpace::LicensedDeclarative
    {46, 86, 1245},	// QGlobalSpace::LicensedGui
    {46, 87, 1256},	// QGlobalSpace::LicensedHelp
    {46, 88, 1253},	// QGlobalSpace::LicensedMultimedia
    {46, 89, 1252},	// QGlobalSpace::LicensedNetwork
    {46, 90, 1235},	// QGlobalSpace::LicensedOpenGL
    {46, 91, 1237},	// QGlobalSpace::LicensedOpenVG
    {46, 92, 1249},	// QGlobalSpace::LicensedQt3Support
    {46, 93, 1239},	// QGlobalSpace::LicensedQt3SupportLight
    {46, 94, 1238},	// QGlobalSpace::LicensedScript
    {46, 95, 1255},	// QGlobalSpace::LicensedScriptTools
    {46, 96, 1247},	// QGlobalSpace::LicensedSql
    {46, 97, 1236},	// QGlobalSpace::LicensedSvg
    {46, 98, 1254},	// QGlobalSpace::LicensedTest
    {46, 99, 1257},	// QGlobalSpace::LicensedXml
    {46, 100, 1246},	// QGlobalSpace::LicensedXmlPatterns
    {46, 161, 1234},	// QGlobalSpace::QML_HAS_ATTACHED_PROPERTIES
    {46, 162, 1242},	// QGlobalSpace::QtCriticalMsg
    {46, 163, 1240},	// QGlobalSpace::QtDebugMsg
    {46, 164, 1243},	// QGlobalSpace::QtFatalMsg
    {46, 165, 1244},	// QGlobalSpace::QtSystemMsg
    {46, 166, 1241},	// QGlobalSpace::QtWarningMsg
    {46, 378, -40},	// QGlobalSpace::operator!=##
    {46, 379, -60},	// QGlobalSpace::operator!=#$
    {46, 380, -66},	// QGlobalSpace::operator!=$#
    {46, 382, 412},	// QGlobalSpace::operator&##
    {46, 384, -72},	// QGlobalSpace::operator*##
    {46, 385, -102},	// QGlobalSpace::operator*#$
    {46, 386, -115},	// QGlobalSpace::operator*$#
    {46, 388, -127},	// QGlobalSpace::operator+##
    {46, 389, -138},	// QGlobalSpace::operator+#$
    {46, 390, -143},	// QGlobalSpace::operator+$#
    {46, 391, 839},	// QGlobalSpace::operator+$$
    {46, 393, -147},	// QGlobalSpace::operator-#
    {46, 394, -155},	// QGlobalSpace::operator-##
    {46, 395, 1230},	// QGlobalSpace::operator-#$
    {46, 397, -165},	// QGlobalSpace::operator/#$
    {46, 399, -176},	// QGlobalSpace::operator<##
    {46, 400, 552},	// QGlobalSpace::operator<#$
    {46, 401, 748},	// QGlobalSpace::operator<$#
    {46, 403, -180},	// QGlobalSpace::operator<<##
    {46, 404, -285},	// QGlobalSpace::operator<<#$
    {46, 405, 539},	// QGlobalSpace::operator<<#?
    {46, 407, -302},	// QGlobalSpace::operator<=##
    {46, 408, 762},	// QGlobalSpace::operator<=#$
    {46, 409, 1023},	// QGlobalSpace::operator<=$#
    {46, 414, -306},	// QGlobalSpace::operator==##
    {46, 415, -327},	// QGlobalSpace::operator==#$
    {46, 416, -334},	// QGlobalSpace::operator==$#
    {46, 418, -342},	// QGlobalSpace::operator>##
    {46, 419, 1052},	// QGlobalSpace::operator>#$
    {46, 420, 992},	// QGlobalSpace::operator>$#
    {46, 422, -346},	// QGlobalSpace::operator>=##
    {46, 423, 946},	// QGlobalSpace::operator>=#$
    {46, 424, 687},	// QGlobalSpace::operator>=$#
    {46, 426, -350},	// QGlobalSpace::operator>>##
    {46, 427, -405},	// QGlobalSpace::operator>>#$
    {46, 428, 1013},	// QGlobalSpace::operator>>#?
    {46, 432, 775},	// QGlobalSpace::operator^##
    {46, 434, 857},	// QGlobalSpace::operator|##
    {46, 435, -408},	// QGlobalSpace::operator|$$
    {46, 455, 1176},	// QGlobalSpace::qAccessibleActionCastHelper
    {46, 456, 1036},	// QGlobalSpace::qAccessibleEditableTextCastHelper
    {46, 457, 814},	// QGlobalSpace::qAccessibleImageCastHelper
    {46, 458, 1002},	// QGlobalSpace::qAccessibleTable2CastHelper
    {46, 459, 841},	// QGlobalSpace::qAccessibleTableCastHelper
    {46, 460, 619},	// QGlobalSpace::qAccessibleTextCastHelper
    {46, 461, 934},	// QGlobalSpace::qAccessibleValueCastHelper
    {46, 463, 800},	// QGlobalSpace::qAcos$
    {46, 465, 754},	// QGlobalSpace::qAddPostRoutine$
    {46, 467, 487},	// QGlobalSpace::qAlpha$
    {46, 468, 720},	// QGlobalSpace::qAppName
    {46, 470, 974},	// QGlobalSpace::qAsin$
    {46, 472, 511},	// QGlobalSpace::qAtan$
    {46, 474, 735},	// QGlobalSpace::qAtan2$$
    {46, 475, 1219},	// QGlobalSpace::qBadAlloc
    {46, 477, 1180},	// QGlobalSpace::qBlue$
    {46, 479, 460},	// QGlobalSpace::qCeil$
    {46, 481, 776},	// QGlobalSpace::qChecksum$$
    {46, 483, 741},	// QGlobalSpace::qCompress#
    {46, 484, 740},	// QGlobalSpace::qCompress#$
    {46, 485, 1078},	// QGlobalSpace::qCompress$$
    {46, 486, 1077},	// QGlobalSpace::qCompress$$$
    {46, 488, 538},	// QGlobalSpace::qCos$
    {46, 489, 413},	// QGlobalSpace::qCritical
    {46, 490, 1088},	// QGlobalSpace::qDebug
    {46, 492, 1091},	// QGlobalSpace::qDrawBorderPixmap####
    {46, 493, 771},	// QGlobalSpace::qDrawBorderPixmap######
    {46, 494, 772},	// QGlobalSpace::qDrawBorderPixmap#######
    {46, 495, 770},	// QGlobalSpace::qDrawBorderPixmap#######$
    {46, 497, 750},	// QGlobalSpace::qDrawPlainRect###
    {46, 498, 751},	// QGlobalSpace::qDrawPlainRect###$
    {46, 499, 749},	// QGlobalSpace::qDrawPlainRect###$#
    {46, 500, 726},	// QGlobalSpace::qDrawPlainRect#$$$$#
    {46, 501, 727},	// QGlobalSpace::qDrawPlainRect#$$$$#$
    {46, 502, 725},	// QGlobalSpace::qDrawPlainRect#$$$$#$#
    {46, 504, 1107},	// QGlobalSpace::qDrawShadeLine####
    {46, 505, 1108},	// QGlobalSpace::qDrawShadeLine####$
    {46, 506, 1109},	// QGlobalSpace::qDrawShadeLine####$$
    {46, 507, 1106},	// QGlobalSpace::qDrawShadeLine####$$$
    {46, 508, 1016},	// QGlobalSpace::qDrawShadeLine#$$$$#
    {46, 509, 1017},	// QGlobalSpace::qDrawShadeLine#$$$$#$
    {46, 510, 1018},	// QGlobalSpace::qDrawShadeLine#$$$$#$$
    {46, 511, 1015},	// QGlobalSpace::qDrawShadeLine#$$$$#$$$
    {46, 513, 497},	// QGlobalSpace::qDrawShadePanel###
    {46, 514, 498},	// QGlobalSpace::qDrawShadePanel###$
    {46, 515, 499},	// QGlobalSpace::qDrawShadePanel###$$
    {46, 516, 496},	// QGlobalSpace::qDrawShadePanel###$$#
    {46, 517, 656},	// QGlobalSpace::qDrawShadePanel#$$$$#
    {46, 518, 657},	// QGlobalSpace::qDrawShadePanel#$$$$#$
    {46, 519, 658},	// QGlobalSpace::qDrawShadePanel#$$$$#$$
    {46, 520, 655},	// QGlobalSpace::qDrawShadePanel#$$$$#$$#
    {46, 522, 702},	// QGlobalSpace::qDrawShadeRect###
    {46, 523, 703},	// QGlobalSpace::qDrawShadeRect###$
    {46, 524, 704},	// QGlobalSpace::qDrawShadeRect###$$
    {46, 525, 705},	// QGlobalSpace::qDrawShadeRect###$$$
    {46, 526, 701},	// QGlobalSpace::qDrawShadeRect###$$$#
    {46, 527, 534},	// QGlobalSpace::qDrawShadeRect#$$$$#
    {46, 528, 535},	// QGlobalSpace::qDrawShadeRect#$$$$#$
    {46, 529, 536},	// QGlobalSpace::qDrawShadeRect#$$$$#$$
    {46, 530, 537},	// QGlobalSpace::qDrawShadeRect#$$$$#$$$
    {46, 531, 533},	// QGlobalSpace::qDrawShadeRect#$$$$#$$$#
    {46, 533, 672},	// QGlobalSpace::qDrawWinButton###
    {46, 534, 673},	// QGlobalSpace::qDrawWinButton###$
    {46, 535, 671},	// QGlobalSpace::qDrawWinButton###$#
    {46, 536, 527},	// QGlobalSpace::qDrawWinButton#$$$$#
    {46, 537, 528},	// QGlobalSpace::qDrawWinButton#$$$$#$
    {46, 538, 526},	// QGlobalSpace::qDrawWinButton#$$$$#$#
    {46, 540, 1114},	// QGlobalSpace::qDrawWinPanel###
    {46, 541, 1115},	// QGlobalSpace::qDrawWinPanel###$
    {46, 542, 1113},	// QGlobalSpace::qDrawWinPanel###$#
    {46, 543, 1162},	// QGlobalSpace::qDrawWinPanel#$$$$#
    {46, 544, 1163},	// QGlobalSpace::qDrawWinPanel#$$$$#$
    {46, 545, 1161},	// QGlobalSpace::qDrawWinPanel#$$$$#$#
    {46, 547, 759},	// QGlobalSpace::qExp$
    {46, 549, 439},	// QGlobalSpace::qFabs$
    {46, 551, 1149},	// QGlobalSpace::qFastCos$
    {46, 553, 1202},	// QGlobalSpace::qFastSin$
    {46, 555, 943},	// QGlobalSpace::qFlagLocation$
    {46, 557, 910},	// QGlobalSpace::qFloor$
    {46, 559, 1057},	// QGlobalSpace::qFree$
    {46, 561, 688},	// QGlobalSpace::qFreeAligned$
    {46, 563, -667},	// QGlobalSpace::qFuzzyCompare##
    {46, 564, -675},	// QGlobalSpace::qFuzzyCompare$$
    {46, 566, -678},	// QGlobalSpace::qFuzzyIsNull$
    {46, 568, 462},	// QGlobalSpace::qGray$
    {46, 569, 564},	// QGlobalSpace::qGray$$$
    {46, 571, 494},	// QGlobalSpace::qGreen$
    {46, 573, -681},	// QGlobalSpace::qHash#
    {46, 574, -693},	// QGlobalSpace::qHash$
    {46, 575, 953},	// QGlobalSpace::qInf
    {46, 577, 662},	// QGlobalSpace::qInstallMsgHandler$
    {46, 579, -706},	// QGlobalSpace::qIntCast$
    {46, 581, -709},	// QGlobalSpace::qIsFinite$
    {46, 583, 869},	// QGlobalSpace::qIsGray$
    {46, 585, -712},	// QGlobalSpace::qIsInf$
    {46, 587, -715},	// QGlobalSpace::qIsNaN$
    {46, 589, -718},	// QGlobalSpace::qIsNull$
    {46, 591, 1011},	// QGlobalSpace::qLn$
    {46, 593, 1227},	// QGlobalSpace::qMalloc$
    {46, 595, 1073},	// QGlobalSpace::qMallocAligned$$
    {46, 597, 945},	// QGlobalSpace::qMemCopy$$$
    {46, 599, 734},	// QGlobalSpace::qMemSet$$$
    {46, 601, 1128},	// QGlobalSpace::qPow$$
    {46, 602, 443},	// QGlobalSpace::qQNaN
    {46, 604, 836},	// QGlobalSpace::qRealloc$$
    {46, 606, 710},	// QGlobalSpace::qReallocAligned$$$$
    {46, 608, 472},	// QGlobalSpace::qRed$
    {46, 610, 519},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {46, 612, 936},	// QGlobalSpace::qRemovePostRoutine$
    {46, 614, 908},	// QGlobalSpace::qRgb$$$
    {46, 616, 1221},	// QGlobalSpace::qRgba$$$$
    {46, 618, 854},	// QGlobalSpace::qRound$
    {46, 620, 1067},	// QGlobalSpace::qRound64$
    {46, 621, 1191},	// QGlobalSpace::qSNaN
    {46, 623, 1129},	// QGlobalSpace::qScriptConnect#$##
    {46, 625, 1101},	// QGlobalSpace::qScriptDisconnect#$##
    {46, 627, 944},	// QGlobalSpace::qScriptRegisterMetaType_helper#$#$#
    {46, 629, 805},	// QGlobalSpace::qScriptValueFromValue_helper#$$
    {46, 631, 995},	// QGlobalSpace::qSetFieldWidth$
    {46, 633, 652},	// QGlobalSpace::qSetPadChar#
    {46, 635, 970},	// QGlobalSpace::qSetRealNumberPrecision$
    {46, 636, 659},	// QGlobalSpace::qSharedBuild
    {46, 638, 973},	// QGlobalSpace::qSin$
    {46, 640, 890},	// QGlobalSpace::qSqrt$
    {46, 642, 699},	// QGlobalSpace::qStringComparisonHelper#$
    {46, 644, 1100},	// QGlobalSpace::qTan$
    {46, 646, 966},	// QGlobalSpace::qUncompress#
    {46, 647, 1198},	// QGlobalSpace::qUncompress$$
    {46, 648, 451},	// QGlobalSpace::qVersion
    {46, 649, 560},	// QGlobalSpace::qWarning
    {46, 651, 512},	// QGlobalSpace::qbswap_helper$$$
    {46, 653, 788},	// QGlobalSpace::qgetenv$
    {46, 657, 621},	// QGlobalSpace::qmlAttachedPropertiesObject$##$
    {46, 659, 666},	// QGlobalSpace::qmlAttachedPropertiesObjectById$#
    {46, 660, 665},	// QGlobalSpace::qmlAttachedPropertiesObjectById$#$
    {46, 662, 979},	// QGlobalSpace::qmlContext#
    {46, 664, 902},	// QGlobalSpace::qmlEngine#
    {46, 666, 1005},	// QGlobalSpace::qmlExecuteDeferred#
    {46, 668, 634},	// QGlobalSpace::qmlInfo#
    {46, 669, 1145},	// QGlobalSpace::qmlInfo##
    {46, 670, 1112},	// QGlobalSpace::qmlInfo#?
    {46, 672, 696},	// QGlobalSpace::qputenv$#
    {46, 673, 461},	// QGlobalSpace::qrand
    {46, 675, 610},	// QGlobalSpace::qscriptvalue_cast_helper#$$
    {46, 677, 542},	// QGlobalSpace::qsrand$
    {46, 679, 648},	// QGlobalSpace::qstrcmp##
    {46, 680, 653},	// QGlobalSpace::qstrcmp#$
    {46, 681, 1095},	// QGlobalSpace::qstrcmp$#
    {46, 682, 893},	// QGlobalSpace::qstrcmp$$
    {46, 684, 436},	// QGlobalSpace::qstrcpy$$
    {46, 686, 1082},	// QGlobalSpace::qstrdup$
    {46, 688, 976},	// QGlobalSpace::qstricmp$$
    {46, 690, 1019},	// QGlobalSpace::qstrlen$
    {46, 692, 700},	// QGlobalSpace::qstrncmp$$$
    {46, 694, 817},	// QGlobalSpace::qstrncpy$$$
    {46, 696, 628},	// QGlobalSpace::qstrnicmp$$$
    {46, 698, 906},	// QGlobalSpace::qstrnlen$$
    {46, 700, 1214},	// QGlobalSpace::qtTrId$
    {46, 701, 1213},	// QGlobalSpace::qtTrId$$
    {46, 703, 416},	// QGlobalSpace::qt_assert$$$
    {46, 705, 844},	// QGlobalSpace::qt_assert_x$$$$
    {46, 707, 638},	// QGlobalSpace::qt_check_pointer$$
    {46, 708, 831},	// QGlobalSpace::qt_error_string
    {46, 709, 830},	// QGlobalSpace::qt_error_string$
    {46, 711, 1142},	// QGlobalSpace::qt_message_output$$
    {46, 716, 990},	// QGlobalSpace::qt_noop
    {46, 718, 664},	// QGlobalSpace::qt_qFindChild_helper#$#
    {46, 720, 1046},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {46, 723, 515},	// QGlobalSpace::qvariant_cast_helper#$$
    {46, 725, 985},	// QGlobalSpace::qvsnprintf$$$?
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();
SMOKE_IMPORT void init_qtgui_Smoke();

static bool initialized = false;
Smoke *qtdeclarative_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtdeclarative_Smoke() {
    init_qtcore_Smoke();
    init_qtgui_Smoke();
    if (initialized) return;
    qtdeclarative_Smoke = new Smoke(
        "qtdeclarative",
        __smokeqtdeclarative::classes, 142,
        __smokeqtdeclarative::methods, 1401,
        __smokeqtdeclarative::methodMaps, 631,
        __smokeqtdeclarative::methodNames, 896,
        __smokeqtdeclarative::types, 579,
        __smokeqtdeclarative::inheritanceList,
        __smokeqtdeclarative::argumentList,
        __smokeqtdeclarative::ambiguousMethodList,
        __smokeqtdeclarative::cast );
    initialized = true;
}

void delete_qtdeclarative_Smoke() { delete qtdeclarative_Smoke; }

}
