#include <qtsql_includes.h>

#include <smoke.h>
#include <qtsql_smoke.h>

namespace __smokeqtsql {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QAbstractItemModel
      switch(to) {
        case 37: return (void*)(QObject*)(QAbstractItemModel*)xptr;
        case 1: return (void*)(QAbstractItemModel*)xptr;
        case 68: return (void*)(QSqlRelationalTableModel*)(QAbstractItemModel*)xptr;
        case 64: return (void*)(QSqlQueryModel*)(QAbstractItemModel*)xptr;
        case 70: return (void*)(QSqlTableModel*)(QAbstractItemModel*)xptr;
        default: return xptr;
      }
    case 2:   //QAbstractTableModel
      switch(to) {
        case 1: return (void*)(QAbstractItemModel*)(QAbstractTableModel*)xptr;
        case 37: return (void*)(QObject*)(QAbstractTableModel*)xptr;
        case 2: return (void*)(QAbstractTableModel*)xptr;
        case 68: return (void*)(QSqlRelationalTableModel*)(QAbstractTableModel*)xptr;
        case 64: return (void*)(QSqlQueryModel*)(QAbstractTableModel*)xptr;
        case 70: return (void*)(QSqlTableModel*)(QAbstractTableModel*)xptr;
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
        case 17: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 8: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 9:   //QColor
      switch(to) {
        case 9: return (void*)(QColor*)xptr;
        default: return xptr;
      }
    case 10:   //QCursor
      switch(to) {
        case 10: return (void*)(QCursor*)xptr;
        default: return xptr;
      }
    case 11:   //QDataStream
      switch(to) {
        case 11: return (void*)(QDataStream*)xptr;
        default: return xptr;
      }
    case 12:   //QDate
      switch(to) {
        case 12: return (void*)(QDate*)xptr;
        default: return xptr;
      }
    case 13:   //QDateTime
      switch(to) {
        case 13: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 14:   //QDebug
      switch(to) {
        case 14: return (void*)(QDebug*)xptr;
        default: return xptr;
      }
    case 15:   //QDir
      switch(to) {
        case 15: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 16:   //QEasingCurve
      switch(to) {
        case 16: return (void*)(QEasingCurve*)xptr;
        default: return xptr;
      }
    case 17:   //QEvent
      switch(to) {
        case 17: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 18:   //QFactoryInterface
      switch(to) {
        case 18: return (void*)(QFactoryInterface*)xptr;
        case 59: return (void*)(QSqlDriverPlugin*)(QFactoryInterface*)xptr;
        case 58: return (void*)(QSqlDriverFactoryInterface*)(QFactoryInterface*)xptr;
        default: return xptr;
      }
    case 19:   //QFont
      switch(to) {
        case 19: return (void*)(QFont*)xptr;
        default: return xptr;
      }
    case 21:   //QHashDummyValue
      switch(to) {
        case 21: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 22:   //QIcon
      switch(to) {
        case 22: return (void*)(QIcon*)xptr;
        default: return xptr;
      }
    case 23:   //QImage
      switch(to) {
        case 23: return (void*)(QImage*)xptr;
        default: return xptr;
      }
    case 24:   //QIncompatibleFlag
      switch(to) {
        case 24: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 25:   //QItemDelegate
      switch(to) {
        case 37: return (void*)(QObject*)(QItemDelegate*)xptr;
        case 25: return (void*)(QItemDelegate*)xptr;
        case 67: return (void*)(QSqlRelationalDelegate*)(QItemDelegate*)xptr;
        default: return xptr;
      }
    case 26:   //QItemSelectionRange
      switch(to) {
        case 26: return (void*)(QItemSelectionRange*)xptr;
        default: return xptr;
      }
    case 27:   //QKeySequence
      switch(to) {
        case 27: return (void*)(QKeySequence*)xptr;
        default: return xptr;
      }
    case 28:   //QLatin1String
      switch(to) {
        case 28: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 29:   //QLine
      switch(to) {
        case 29: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 30:   //QLineF
      switch(to) {
        case 30: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 31:   //QLocale
      switch(to) {
        case 31: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 32:   //QMargins
      switch(to) {
        case 32: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 33:   //QMatrix
      switch(to) {
        case 33: return (void*)(QMatrix*)xptr;
        default: return xptr;
      }
    case 34:   //QMetaObject
      switch(to) {
        case 34: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 35:   //QMimeData
      switch(to) {
        case 37: return (void*)(QObject*)(QMimeData*)xptr;
        case 35: return (void*)(QMimeData*)xptr;
        default: return xptr;
      }
    case 36:   //QModelIndex
      switch(to) {
        case 36: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 37:   //QObject
      switch(to) {
        case 37: return (void*)(QObject*)xptr;
        case 67: return (void*)(QSqlRelationalDelegate*)(QObject*)xptr;
        case 56: return (void*)(QSqlDriver*)(QObject*)xptr;
        case 68: return (void*)(QSqlRelationalTableModel*)(QObject*)xptr;
        case 59: return (void*)(QSqlDriverPlugin*)(QObject*)xptr;
        case 64: return (void*)(QSqlQueryModel*)(QObject*)xptr;
        case 70: return (void*)(QSqlTableModel*)(QObject*)xptr;
        default: return xptr;
      }
    case 38:   //QPainter
      switch(to) {
        case 38: return (void*)(QPainter*)xptr;
        default: return xptr;
      }
    case 39:   //QPainterPath
      switch(to) {
        case 39: return (void*)(QPainterPath*)xptr;
        default: return xptr;
      }
    case 40:   //QPalette
      switch(to) {
        case 40: return (void*)(QPalette*)xptr;
        default: return xptr;
      }
    case 41:   //QPersistentModelIndex
      switch(to) {
        case 41: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 42:   //QPixmap
      switch(to) {
        case 42: return (void*)(QPixmap*)xptr;
        default: return xptr;
      }
    case 43:   //QPoint
      switch(to) {
        case 43: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 44:   //QPointF
      switch(to) {
        case 44: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 45:   //QPolygon
      switch(to) {
        case 45: return (void*)(QPolygon*)xptr;
        default: return xptr;
      }
    case 46:   //QPolygonF
      switch(to) {
        case 46: return (void*)(QPolygonF*)xptr;
        default: return xptr;
      }
    case 47:   //QRect
      switch(to) {
        case 47: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 48:   //QRectF
      switch(to) {
        case 48: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 49:   //QRegExp
      switch(to) {
        case 49: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 50:   //QRegion
      switch(to) {
        case 50: return (void*)(QRegion*)xptr;
        default: return xptr;
      }
    case 51:   //QSize
      switch(to) {
        case 51: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 52:   //QSizeF
      switch(to) {
        case 52: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 53:   //QSizePolicy
      switch(to) {
        case 53: return (void*)(QSizePolicy*)xptr;
        default: return xptr;
      }
    case 55:   //QSqlDatabase
      switch(to) {
        case 55: return (void*)(QSqlDatabase*)xptr;
        default: return xptr;
      }
    case 56:   //QSqlDriver
      switch(to) {
        case 37: return (void*)(QObject*)(QSqlDriver*)xptr;
        case 56: return (void*)(QSqlDriver*)xptr;
        default: return xptr;
      }
    case 57:   //QSqlDriverCreatorBase
      switch(to) {
        case 57: return (void*)(QSqlDriverCreatorBase*)xptr;
        default: return xptr;
      }
    case 58:   //QSqlDriverFactoryInterface
      switch(to) {
        case 18: return (void*)(QFactoryInterface*)(QSqlDriverFactoryInterface*)xptr;
        case 58: return (void*)(QSqlDriverFactoryInterface*)xptr;
        case 59: return (void*)(QSqlDriverPlugin*)(QSqlDriverFactoryInterface*)xptr;
        default: return xptr;
      }
    case 59:   //QSqlDriverPlugin
      switch(to) {
        case 37: return (void*)(QObject*)(QSqlDriverPlugin*)xptr;
        case 58: return (void*)(QSqlDriverFactoryInterface*)(QSqlDriverPlugin*)xptr;
        case 18: return (void*)(QFactoryInterface*)(QSqlDriverPlugin*)xptr;
        case 59: return (void*)(QSqlDriverPlugin*)xptr;
        default: return xptr;
      }
    case 60:   //QSqlError
      switch(to) {
        case 60: return (void*)(QSqlError*)xptr;
        default: return xptr;
      }
    case 61:   //QSqlField
      switch(to) {
        case 61: return (void*)(QSqlField*)xptr;
        default: return xptr;
      }
    case 62:   //QSqlIndex
      switch(to) {
        case 65: return (void*)(QSqlRecord*)(QSqlIndex*)xptr;
        case 62: return (void*)(QSqlIndex*)xptr;
        default: return xptr;
      }
    case 63:   //QSqlQuery
      switch(to) {
        case 63: return (void*)(QSqlQuery*)xptr;
        default: return xptr;
      }
    case 64:   //QSqlQueryModel
      switch(to) {
        case 2: return (void*)(QAbstractTableModel*)(QSqlQueryModel*)xptr;
        case 1: return (void*)(QAbstractItemModel*)(QSqlQueryModel*)xptr;
        case 37: return (void*)(QObject*)(QSqlQueryModel*)xptr;
        case 64: return (void*)(QSqlQueryModel*)xptr;
        case 68: return (void*)(QSqlRelationalTableModel*)(QSqlQueryModel*)xptr;
        case 70: return (void*)(QSqlTableModel*)(QSqlQueryModel*)xptr;
        default: return xptr;
      }
    case 65:   //QSqlRecord
      switch(to) {
        case 65: return (void*)(QSqlRecord*)xptr;
        case 62: return (void*)(QSqlIndex*)(QSqlRecord*)xptr;
        default: return xptr;
      }
    case 66:   //QSqlRelation
      switch(to) {
        case 66: return (void*)(QSqlRelation*)xptr;
        default: return xptr;
      }
    case 67:   //QSqlRelationalDelegate
      switch(to) {
        case 25: return (void*)(QItemDelegate*)(QSqlRelationalDelegate*)xptr;
        case 37: return (void*)(QObject*)(QSqlRelationalDelegate*)xptr;
        case 67: return (void*)(QSqlRelationalDelegate*)xptr;
        default: return xptr;
      }
    case 68:   //QSqlRelationalTableModel
      switch(to) {
        case 70: return (void*)(QSqlTableModel*)(QSqlRelationalTableModel*)xptr;
        case 64: return (void*)(QSqlQueryModel*)(QSqlRelationalTableModel*)xptr;
        case 2: return (void*)(QAbstractTableModel*)(QSqlRelationalTableModel*)xptr;
        case 1: return (void*)(QAbstractItemModel*)(QSqlRelationalTableModel*)xptr;
        case 37: return (void*)(QObject*)(QSqlRelationalTableModel*)xptr;
        case 68: return (void*)(QSqlRelationalTableModel*)xptr;
        default: return xptr;
      }
    case 69:   //QSqlResult
      switch(to) {
        case 69: return (void*)(QSqlResult*)xptr;
        default: return xptr;
      }
    case 70:   //QSqlTableModel
      switch(to) {
        case 64: return (void*)(QSqlQueryModel*)(QSqlTableModel*)xptr;
        case 2: return (void*)(QAbstractTableModel*)(QSqlTableModel*)xptr;
        case 1: return (void*)(QAbstractItemModel*)(QSqlTableModel*)xptr;
        case 37: return (void*)(QObject*)(QSqlTableModel*)xptr;
        case 70: return (void*)(QSqlTableModel*)xptr;
        case 68: return (void*)(QSqlRelationalTableModel*)(QSqlTableModel*)xptr;
        default: return xptr;
      }
    case 71:   //QString::Null
      switch(to) {
        case 71: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 72:   //QStringRef
      switch(to) {
        case 72: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 73:   //QStyleOption
      switch(to) {
        case 73: return (void*)(QStyleOption*)xptr;
        default: return xptr;
      }
    case 74:   //QStyleOptionViewItem
      switch(to) {
        case 73: return (void*)(QStyleOption*)(QStyleOptionViewItem*)xptr;
        case 74: return (void*)(QStyleOptionViewItem*)xptr;
        default: return xptr;
      }
    case 75:   //QTextStream
      switch(to) {
        case 75: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 76:   //QTextStreamManipulator
      switch(to) {
        case 76: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 77:   //QTime
      switch(to) {
        case 77: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 78:   //QTimerEvent
      switch(to) {
        case 17: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 78: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 79:   //QTransform
      switch(to) {
        case 79: return (void*)(QTransform*)xptr;
        default: return xptr;
      }
    case 80:   //QUrl
      switch(to) {
        case 80: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 81:   //QUuid
      switch(to) {
        case 81: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 82:   //QVariant
      switch(to) {
        case 82: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 83:   //QVariantComparisonHelper
      switch(to) {
        case 83: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    case 84:   //QWidget
      switch(to) {
        case 37: return (void*)(QObject*)(QWidget*)xptr;
        case 84: return (void*)(QWidget*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    37, 0,	// 1: QObject
    18, 0,	// 3: QFactoryInterface
    37, 58, 0,	// 5: QObject, QSqlDriverFactoryInterface
    65, 0,	// 8: QSqlRecord
    2, 0,	// 10: QAbstractTableModel
    25, 0,	// 12: QItemDelegate
    70, 0,	// 14: QSqlTableModel
    64, 0,	// 16: QSqlQueryModel
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSqlError(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSqlQuery(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSqlTableModel(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSqlDriver(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSql(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSqlResult(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSqlRelationalTableModel(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSqlField(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QSql(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlDatabase(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlDriver(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlDriverCreatorBase(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlDriverFactoryInterface(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlDriverPlugin(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlError(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlField(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlIndex(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlQuery(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlQueryModel(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlRecord(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlRelation(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlRelationalDelegate(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlRelationalTableModel(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlResult(Smoke::Index, void*, Smoke::Stack);
void xcall_QSqlTableModel(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QAbstractItemModel", true, 0, 0, 0, 0, 0 },	//1
    { "QAbstractTableModel", true, 0, 0, 0, 0, 0 },	//2
    { "QBitArray", true, 0, 0, 0, 0, 0 },	//3
    { "QBool", true, 0, 0, 0, 0, 0 },	//4
    { "QBrush", true, 0, 0, 0, 0, 0 },	//5
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//6
    { "QChar", true, 0, 0, 0, 0, 0 },	//7
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//8
    { "QColor", true, 0, 0, 0, 0, 0 },	//9
    { "QCursor", true, 0, 0, 0, 0, 0 },	//10
    { "QDataStream", true, 0, 0, 0, 0, 0 },	//11
    { "QDate", true, 0, 0, 0, 0, 0 },	//12
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//13
    { "QDebug", true, 0, 0, 0, 0, 0 },	//14
    { "QDir", true, 0, 0, 0, 0, 0 },	//15
    { "QEasingCurve", true, 0, 0, 0, 0, 0 },	//16
    { "QEvent", true, 0, 0, 0, 0, 0 },	//17
    { "QFactoryInterface", true, 0, 0, 0, 0, 0 },	//18
    { "QFont", true, 0, 0, 0, 0, 0 },	//19
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//20
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//21
    { "QIcon", true, 0, 0, 0, 0, 0 },	//22
    { "QImage", true, 0, 0, 0, 0, 0 },	//23
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//24
    { "QItemDelegate", true, 0, 0, 0, 0, 0 },	//25
    { "QItemSelectionRange", true, 0, 0, 0, 0, 0 },	//26
    { "QKeySequence", true, 0, 0, 0, 0, 0 },	//27
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//28
    { "QLine", true, 0, 0, 0, 0, 0 },	//29
    { "QLineF", true, 0, 0, 0, 0, 0 },	//30
    { "QLocale", true, 0, 0, 0, 0, 0 },	//31
    { "QMargins", true, 0, 0, 0, 0, 0 },	//32
    { "QMatrix", true, 0, 0, 0, 0, 0 },	//33
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//34
    { "QMimeData", true, 0, 0, 0, 0, 0 },	//35
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//36
    { "QObject", true, 0, 0, 0, 0, 0 },	//37
    { "QPainter", true, 0, 0, 0, 0, 0 },	//38
    { "QPainterPath", true, 0, 0, 0, 0, 0 },	//39
    { "QPalette", true, 0, 0, 0, 0, 0 },	//40
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//41
    { "QPixmap", true, 0, 0, 0, 0, 0 },	//42
    { "QPoint", true, 0, 0, 0, 0, 0 },	//43
    { "QPointF", true, 0, 0, 0, 0, 0 },	//44
    { "QPolygon", true, 0, 0, 0, 0, 0 },	//45
    { "QPolygonF", true, 0, 0, 0, 0, 0 },	//46
    { "QRect", true, 0, 0, 0, 0, 0 },	//47
    { "QRectF", true, 0, 0, 0, 0, 0 },	//48
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//49
    { "QRegion", true, 0, 0, 0, 0, 0 },	//50
    { "QSize", true, 0, 0, 0, 0, 0 },	//51
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//52
    { "QSizePolicy", true, 0, 0, 0, 0, 0 },	//53
    { "QSql", false, 0, xcall_QSql, xenum_QSql, Smoke::cf_namespace, 0 },	//54
    { "QSqlDatabase", false, 0, xcall_QSqlDatabase, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSqlDatabase) },	//55
    { "QSqlDriver", false, 1, xcall_QSqlDriver, xenum_QSqlDriver, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSqlDriver) },	//56
    { "QSqlDriverCreatorBase", false, 0, xcall_QSqlDriverCreatorBase, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QSqlDriverCreatorBase) },	//57
    { "QSqlDriverFactoryInterface", false, 3, xcall_QSqlDriverFactoryInterface, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QSqlDriverFactoryInterface) },	//58
    { "QSqlDriverPlugin", false, 5, xcall_QSqlDriverPlugin, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSqlDriverPlugin) },	//59
    { "QSqlError", false, 0, xcall_QSqlError, xenum_QSqlError, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSqlError) },	//60
    { "QSqlField", false, 0, xcall_QSqlField, xenum_QSqlField, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSqlField) },	//61
    { "QSqlIndex", false, 8, xcall_QSqlIndex, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSqlIndex) },	//62
    { "QSqlQuery", false, 0, xcall_QSqlQuery, xenum_QSqlQuery, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSqlQuery) },	//63
    { "QSqlQueryModel", false, 10, xcall_QSqlQueryModel, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSqlQueryModel) },	//64
    { "QSqlRecord", false, 0, xcall_QSqlRecord, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSqlRecord) },	//65
    { "QSqlRelation", false, 0, xcall_QSqlRelation, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSqlRelation) },	//66
    { "QSqlRelationalDelegate", false, 12, xcall_QSqlRelationalDelegate, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSqlRelationalDelegate) },	//67
    { "QSqlRelationalTableModel", false, 14, xcall_QSqlRelationalTableModel, xenum_QSqlRelationalTableModel, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSqlRelationalTableModel) },	//68
    { "QSqlResult", false, 0, xcall_QSqlResult, xenum_QSqlResult, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSqlResult) },	//69
    { "QSqlTableModel", false, 16, xcall_QSqlTableModel, xenum_QSqlTableModel, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSqlTableModel) },	//70
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//71
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//72
    { "QStyleOption", true, 0, 0, 0, 0, 0 },	//73
    { "QStyleOptionViewItem", true, 0, 0, 0, 0, 0 },	//74
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//75
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//76
    { "QTime", true, 0, 0, 0, 0, 0 },	//77
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//78
    { "QTransform", true, 0, 0, 0, 0, 0 },	//79
    { "QUrl", true, 0, 0, 0, 0, 0 },	//80
    { "QUuid", true, 0, 0, 0, 0, 0 },	//81
    { "QVariant", true, 0, 0, 0, 0, 0 },	//82
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//83
    { "QWidget", true, 0, 0, 0, 0, 0 },	//84
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QAbstractItemModel*", 1, Smoke::t_class|Smoke::tf_ptr },	//2
    { "QAbstractItemView::EditTrigger", 0, Smoke::t_enum|Smoke::tf_stack },	//3
    { "QAbstractSpinBox::StepEnabledFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//4
    { "QBitArray", 3, Smoke::t_class|Smoke::tf_stack },	//5
    { "QBitArray&", 3, Smoke::t_class|Smoke::tf_ref },	//6
    { "QBool", 4, Smoke::t_class|Smoke::tf_stack },	//7
    { "QBrush&", 5, Smoke::t_class|Smoke::tf_ref },	//8
    { "QByteArray", 6, Smoke::t_class|Smoke::tf_stack },	//9
    { "QByteArray&", 6, Smoke::t_class|Smoke::tf_ref },	//10
    { "QChar", 7, Smoke::t_class|Smoke::tf_stack },	//11
    { "QChar&", 7, Smoke::t_class|Smoke::tf_ref },	//12
    { "QChildEvent*", 8, Smoke::t_class|Smoke::tf_ptr },	//13
    { "QColor&", 9, Smoke::t_class|Smoke::tf_ref },	//14
    { "QCursor&", 10, Smoke::t_class|Smoke::tf_ref },	//15
    { "QDataStream&", 11, Smoke::t_class|Smoke::tf_ref },	//16
    { "QDate&", 12, Smoke::t_class|Smoke::tf_ref },	//17
    { "QDateTime&", 13, Smoke::t_class|Smoke::tf_ref },	//18
    { "QDebug", 14, Smoke::t_class|Smoke::tf_stack },	//19
    { "QDir::Filter", 15, Smoke::t_enum|Smoke::tf_stack },	//20
    { "QDir::SortFlag", 15, Smoke::t_enum|Smoke::tf_stack },	//21
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//22
    { "QEasingCurve&", 16, Smoke::t_class|Smoke::tf_ref },	//23
    { "QEvent*", 17, Smoke::t_class|Smoke::tf_ptr },	//24
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//25
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//26
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//27
    { "QFlags<QAbstractItemView::EditTrigger>", 0, Smoke::t_uint|Smoke::tf_stack },	//28
    { "QFlags<QAbstractSpinBox::StepEnabledFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//29
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//30
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//31
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//32
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//33
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//34
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//35
    { "QFlags<QItemSelectionModel::SelectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//36
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//37
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//38
    { "QFlags<QSizePolicy::ControlType>", 0, Smoke::t_uint|Smoke::tf_stack },	//39
    { "QFlags<QSql::ParamTypeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//40
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//41
    { "QFlags<QStyle::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//42
    { "QFlags<QStyle::SubControl>", 0, Smoke::t_uint|Smoke::tf_stack },	//43
    { "QFlags<QStyleOptionButton::ButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//44
    { "QFlags<QStyleOptionFrameV2::FrameFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//45
    { "QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//46
    { "QFlags<QStyleOptionTab::CornerWidget>", 0, Smoke::t_uint|Smoke::tf_stack },	//47
    { "QFlags<QStyleOptionToolBar::ToolBarFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//48
    { "QFlags<QStyleOptionToolButton::ToolButtonFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//49
    { "QFlags<QStyleOptionViewItemV2::ViewItemFeature>", 0, Smoke::t_uint|Smoke::tf_stack },	//50
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//51
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//52
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//53
    { "QFlags<QWidget::RenderFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//54
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//55
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//56
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//57
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//58
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//59
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//60
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//61
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//62
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//63
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//64
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//65
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//66
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//67
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//68
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//69
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//70
    { "QFont&", 19, Smoke::t_class|Smoke::tf_ref },	//71
    { "QIODevice::OpenModeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//72
    { "QIcon&", 22, Smoke::t_class|Smoke::tf_ref },	//73
    { "QImage&", 23, Smoke::t_class|Smoke::tf_ref },	//74
    { "QIncompatibleFlag", 24, Smoke::t_class|Smoke::tf_stack },	//75
    { "QItemSelectionModel::SelectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//76
    { "QKeySequence&", 27, Smoke::t_class|Smoke::tf_ref },	//77
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//78
    { "QLine", 29, Smoke::t_class|Smoke::tf_stack },	//79
    { "QLine&", 29, Smoke::t_class|Smoke::tf_ref },	//80
    { "QLineF", 30, Smoke::t_class|Smoke::tf_stack },	//81
    { "QLineF&", 30, Smoke::t_class|Smoke::tf_ref },	//82
    { "QList<QModelIndex>", 0, Smoke::t_voidp|Smoke::tf_stack },	//83
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//84
    { "QLocale&", 31, Smoke::t_class|Smoke::tf_ref },	//85
    { "QLocale::NumberOption", 31, Smoke::t_enum|Smoke::tf_stack },	//86
    { "QMap<QString,QVariant>", 0, Smoke::t_voidp|Smoke::tf_stack },	//87
    { "QMap<int,QVariant>", 0, Smoke::t_voidp|Smoke::tf_stack },	//88
    { "QMatrix&", 33, Smoke::t_class|Smoke::tf_ref },	//89
    { "QMetaObject::Call", 34, Smoke::t_enum|Smoke::tf_stack },	//90
    { "QMimeData*", 35, Smoke::t_class|Smoke::tf_ptr },	//91
    { "QModelIndex", 36, Smoke::t_class|Smoke::tf_stack },	//92
    { "QObject*", 37, Smoke::t_class|Smoke::tf_ptr },	//93
    { "QObject*(*)()", 37, Smoke::t_class|Smoke::tf_ptr },	//94
    { "QPainter*", 38, Smoke::t_class|Smoke::tf_ptr },	//95
    { "QPainterPath", 39, Smoke::t_class|Smoke::tf_stack },	//96
    { "QPainterPath&", 39, Smoke::t_class|Smoke::tf_ref },	//97
    { "QPalette&", 40, Smoke::t_class|Smoke::tf_ref },	//98
    { "QPixmap&", 42, Smoke::t_class|Smoke::tf_ref },	//99
    { "QPoint", 43, Smoke::t_class|Smoke::tf_stack },	//100
    { "QPoint&", 43, Smoke::t_class|Smoke::tf_ref },	//101
    { "QPointF", 44, Smoke::t_class|Smoke::tf_stack },	//102
    { "QPointF&", 44, Smoke::t_class|Smoke::tf_ref },	//103
    { "QPolygon", 45, Smoke::t_class|Smoke::tf_stack },	//104
    { "QPolygon&", 45, Smoke::t_class|Smoke::tf_ref },	//105
    { "QPolygonF", 46, Smoke::t_class|Smoke::tf_stack },	//106
    { "QPolygonF&", 46, Smoke::t_class|Smoke::tf_ref },	//107
    { "QRect&", 47, Smoke::t_class|Smoke::tf_ref },	//108
    { "QRectF&", 48, Smoke::t_class|Smoke::tf_ref },	//109
    { "QRegExp&", 49, Smoke::t_class|Smoke::tf_ref },	//110
    { "QRegion", 50, Smoke::t_class|Smoke::tf_stack },	//111
    { "QRegion&", 50, Smoke::t_class|Smoke::tf_ref },	//112
    { "QSize", 51, Smoke::t_class|Smoke::tf_stack },	//113
    { "QSize&", 51, Smoke::t_class|Smoke::tf_ref },	//114
    { "QSizeF&", 52, Smoke::t_class|Smoke::tf_ref },	//115
    { "QSizePolicy&", 53, Smoke::t_class|Smoke::tf_ref },	//116
    { "QSizePolicy::ControlType", 53, Smoke::t_enum|Smoke::tf_stack },	//117
    { "QSql::Location", 54, Smoke::t_enum|Smoke::tf_stack },	//118
    { "QSql::NumericalPrecisionPolicy", 54, Smoke::t_enum|Smoke::tf_stack },	//119
    { "QSql::ParamTypeFlag", 54, Smoke::t_enum|Smoke::tf_stack },	//120
    { "QSql::TableType", 54, Smoke::t_enum|Smoke::tf_stack },	//121
    { "QSqlDatabase", 55, Smoke::t_class|Smoke::tf_stack },	//122
    { "QSqlDatabase&", 55, Smoke::t_class|Smoke::tf_ref },	//123
    { "QSqlDatabase*", 55, Smoke::t_class|Smoke::tf_ptr },	//124
    { "QSqlDriver*", 56, Smoke::t_class|Smoke::tf_ptr },	//125
    { "QSqlDriver::DriverFeature", 56, Smoke::t_enum|Smoke::tf_stack },	//126
    { "QSqlDriver::IdentifierType", 56, Smoke::t_enum|Smoke::tf_stack },	//127
    { "QSqlDriver::StatementType", 56, Smoke::t_enum|Smoke::tf_stack },	//128
    { "QSqlDriverCreatorBase*", 57, Smoke::t_class|Smoke::tf_ptr },	//129
    { "QSqlDriverFactoryInterface*", 58, Smoke::t_class|Smoke::tf_ptr },	//130
    { "QSqlDriverPlugin*", 59, Smoke::t_class|Smoke::tf_ptr },	//131
    { "QSqlError", 60, Smoke::t_class|Smoke::tf_stack },	//132
    { "QSqlError&", 60, Smoke::t_class|Smoke::tf_ref },	//133
    { "QSqlError*", 60, Smoke::t_class|Smoke::tf_ptr },	//134
    { "QSqlError::ErrorType", 60, Smoke::t_enum|Smoke::tf_stack },	//135
    { "QSqlField", 61, Smoke::t_class|Smoke::tf_stack },	//136
    { "QSqlField&", 61, Smoke::t_class|Smoke::tf_ref },	//137
    { "QSqlField*", 61, Smoke::t_class|Smoke::tf_ptr },	//138
    { "QSqlField::RequiredStatus", 61, Smoke::t_enum|Smoke::tf_stack },	//139
    { "QSqlIndex", 62, Smoke::t_class|Smoke::tf_stack },	//140
    { "QSqlIndex&", 62, Smoke::t_class|Smoke::tf_ref },	//141
    { "QSqlIndex*", 62, Smoke::t_class|Smoke::tf_ptr },	//142
    { "QSqlQuery", 63, Smoke::t_class|Smoke::tf_stack },	//143
    { "QSqlQuery&", 63, Smoke::t_class|Smoke::tf_ref },	//144
    { "QSqlQuery*", 63, Smoke::t_class|Smoke::tf_ptr },	//145
    { "QSqlQuery::BatchExecutionMode", 63, Smoke::t_enum|Smoke::tf_stack },	//146
    { "QSqlQueryModel*", 64, Smoke::t_class|Smoke::tf_ptr },	//147
    { "QSqlRecord", 65, Smoke::t_class|Smoke::tf_stack },	//148
    { "QSqlRecord&", 65, Smoke::t_class|Smoke::tf_ref },	//149
    { "QSqlRecord*", 65, Smoke::t_class|Smoke::tf_ptr },	//150
    { "QSqlRelation", 66, Smoke::t_class|Smoke::tf_stack },	//151
    { "QSqlRelation*", 66, Smoke::t_class|Smoke::tf_ptr },	//152
    { "QSqlRelationalDelegate*", 67, Smoke::t_class|Smoke::tf_ptr },	//153
    { "QSqlRelationalTableModel*", 68, Smoke::t_class|Smoke::tf_ptr },	//154
    { "QSqlRelationalTableModel::JoinMode", 68, Smoke::t_enum|Smoke::tf_stack },	//155
    { "QSqlResult*", 69, Smoke::t_class|Smoke::tf_ptr },	//156
    { "QSqlResult::BindingSyntax", 69, Smoke::t_enum|Smoke::tf_stack },	//157
    { "QSqlResult::VirtualHookOperation", 69, Smoke::t_enum|Smoke::tf_stack },	//158
    { "QSqlTableModel*", 70, Smoke::t_class|Smoke::tf_ptr },	//159
    { "QSqlTableModel::EditStrategy", 70, Smoke::t_enum|Smoke::tf_stack },	//160
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//161
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//162
    { "QString::Null", 71, Smoke::t_class|Smoke::tf_stack },	//163
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//164
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//165
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//166
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//167
    { "QStyle::StateFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//168
    { "QStyle::SubControl", 0, Smoke::t_enum|Smoke::tf_stack },	//169
    { "QStyleOptionButton::ButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//170
    { "QStyleOptionFrameV2::FrameFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//171
    { "QStyleOptionQ3ListViewItem::Q3ListViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//172
    { "QStyleOptionTab::CornerWidget", 0, Smoke::t_enum|Smoke::tf_stack },	//173
    { "QStyleOptionToolBar::ToolBarFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//174
    { "QStyleOptionToolButton::ToolButtonFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//175
    { "QStyleOptionViewItemV2::ViewItemFeature", 0, Smoke::t_enum|Smoke::tf_stack },	//176
    { "QTextCodec::ConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//177
    { "QTextStream&", 75, Smoke::t_class|Smoke::tf_ref },	//178
    { "QTextStream&(*)(QTextStream&)", 75, Smoke::t_class|Smoke::tf_ref },	//179
    { "QTextStream::NumberFlag", 75, Smoke::t_enum|Smoke::tf_stack },	//180
    { "QTextStreamManipulator", 76, Smoke::t_class|Smoke::tf_stack },	//181
    { "QTime&", 77, Smoke::t_class|Smoke::tf_ref },	//182
    { "QTimerEvent*", 78, Smoke::t_class|Smoke::tf_ptr },	//183
    { "QTransform", 79, Smoke::t_class|Smoke::tf_stack },	//184
    { "QTransform&", 79, Smoke::t_class|Smoke::tf_ref },	//185
    { "QUrl&", 80, Smoke::t_class|Smoke::tf_ref },	//186
    { "QUrl::FormattingOption", 80, Smoke::t_enum|Smoke::tf_stack },	//187
    { "QUuid&", 81, Smoke::t_class|Smoke::tf_ref },	//188
    { "QVariant", 82, Smoke::t_class|Smoke::tf_stack },	//189
    { "QVariant&", 82, Smoke::t_class|Smoke::tf_ref },	//190
    { "QVariant::Type", 82, Smoke::t_enum|Smoke::tf_stack },	//191
    { "QVariant::Type&", 82, Smoke::t_enum|Smoke::tf_ref },	//192
    { "QVector<QVariant>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//193
    { "QWidget*", 84, Smoke::t_class|Smoke::tf_ptr },	//194
    { "QWidget::RenderFlag", 84, Smoke::t_enum|Smoke::tf_stack },	//195
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//196
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//197
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//198
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//199
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//200
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//201
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//202
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//203
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//204
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//205
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//206
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//207
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//208
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//209
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//210
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//211
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//212
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//213
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//214
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//215
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//216
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//217
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//218
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//219
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//220
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//221
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//222
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//223
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//224
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//225
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//226
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//227
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//228
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//229
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//230
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//231
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//232
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//233
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//234
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//235
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//236
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//237
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//238
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//239
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//240
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//241
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//242
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//243
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//244
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//245
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//246
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//247
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//248
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//249
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//250
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//251
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//252
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//253
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//254
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//255
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//256
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//257
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//258
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//259
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//260
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//261
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//262
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//263
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//264
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//265
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//266
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//267
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//268
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//269
    { "QtMsgType", 20, Smoke::t_enum|Smoke::tf_stack },	//270
    { "QtValidLicenseForActiveQtModule", 20, Smoke::t_enum|Smoke::tf_stack },	//271
    { "QtValidLicenseForCoreModule", 20, Smoke::t_enum|Smoke::tf_stack },	//272
    { "QtValidLicenseForDBusModule", 20, Smoke::t_enum|Smoke::tf_stack },	//273
    { "QtValidLicenseForDeclarativeModule", 20, Smoke::t_enum|Smoke::tf_stack },	//274
    { "QtValidLicenseForGuiModule", 20, Smoke::t_enum|Smoke::tf_stack },	//275
    { "QtValidLicenseForHelpModule", 20, Smoke::t_enum|Smoke::tf_stack },	//276
    { "QtValidLicenseForMultimediaModule", 20, Smoke::t_enum|Smoke::tf_stack },	//277
    { "QtValidLicenseForNetworkModule", 20, Smoke::t_enum|Smoke::tf_stack },	//278
    { "QtValidLicenseForOpenGLModule", 20, Smoke::t_enum|Smoke::tf_stack },	//279
    { "QtValidLicenseForOpenVGModule", 20, Smoke::t_enum|Smoke::tf_stack },	//280
    { "QtValidLicenseForQt3SupportLightModule", 20, Smoke::t_enum|Smoke::tf_stack },	//281
    { "QtValidLicenseForQt3SupportModule", 20, Smoke::t_enum|Smoke::tf_stack },	//282
    { "QtValidLicenseForScriptModule", 20, Smoke::t_enum|Smoke::tf_stack },	//283
    { "QtValidLicenseForScriptToolsModule", 20, Smoke::t_enum|Smoke::tf_stack },	//284
    { "QtValidLicenseForSqlModule", 20, Smoke::t_enum|Smoke::tf_stack },	//285
    { "QtValidLicenseForSvgModule", 20, Smoke::t_enum|Smoke::tf_stack },	//286
    { "QtValidLicenseForTestModule", 20, Smoke::t_enum|Smoke::tf_stack },	//287
    { "QtValidLicenseForXmlModule", 20, Smoke::t_enum|Smoke::tf_stack },	//288
    { "QtValidLicenseForXmlPatternsModule", 20, Smoke::t_enum|Smoke::tf_stack },	//289
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//290
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//291
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//292
    { "const QBitArray&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//293
    { "const QBrush&", 5, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//294
    { "const QByteArray", 6, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//295
    { "const QByteArray&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//296
    { "const QChar&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//297
    { "const QColor&", 9, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//298
    { "const QCursor&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//299
    { "const QDate&", 12, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//300
    { "const QDateTime&", 13, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//301
    { "const QDir&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//302
    { "const QEasingCurve&", 16, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//303
    { "const QFont&", 19, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//304
    { "const QHashDummyValue&", 21, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//305
    { "const QIcon&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//306
    { "const QImage&", 23, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//307
    { "const QItemSelectionRange&", 26, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//308
    { "const QKeySequence&", 27, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//309
    { "const QLatin1String&", 28, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//310
    { "const QLine&", 29, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//311
    { "const QLineF&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//312
    { "const QList<QModelIndex>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//313
    { "const QLocale&", 31, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//314
    { "const QMap<int,QVariant>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//315
    { "const QMargins&", 32, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//316
    { "const QMatrix&", 33, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//317
    { "const QMetaObject&", 34, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//318
    { "const QMetaObject*", 34, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//319
    { "const QMimeData*", 35, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//320
    { "const QModelIndex&", 36, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//321
    { "const QObject*", 37, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//322
    { "const QPainterPath&", 39, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//323
    { "const QPalette&", 40, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//324
    { "const QPersistentModelIndex&", 41, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//325
    { "const QPixmap&", 42, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//326
    { "const QPoint", 43, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//327
    { "const QPoint&", 43, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//328
    { "const QPointF", 44, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//329
    { "const QPointF&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//330
    { "const QPolygon&", 45, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//331
    { "const QPolygonF&", 46, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//332
    { "const QRect&", 47, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//333
    { "const QRectF&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//334
    { "const QRegExp&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//335
    { "const QRegExp*", 49, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//336
    { "const QRegion&", 50, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//337
    { "const QSize", 51, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//338
    { "const QSize&", 51, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//339
    { "const QSizeF", 52, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//340
    { "const QSizeF&", 52, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//341
    { "const QSizePolicy&", 53, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//342
    { "const QSqlDatabase&", 55, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//343
    { "const QSqlDriver*", 56, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//344
    { "const QSqlDriverCreatorBase&", 57, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//345
    { "const QSqlDriverFactoryInterface&", 58, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//346
    { "const QSqlError&", 60, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//347
    { "const QSqlField&", 61, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//348
    { "const QSqlIndex&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//349
    { "const QSqlQuery&", 63, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//350
    { "const QSqlRecord&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//351
    { "const QSqlRelation&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//352
    { "const QSqlResult*", 69, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//353
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//354
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//355
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//356
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//357
    { "const QStringRef&", 72, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//358
    { "const QStyleOption&", 73, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//359
    { "const QStyleOption::OptionType&", 73, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//360
    { "const QStyleOptionViewItem&", 74, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//361
    { "const QTime&", 77, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//362
    { "const QTransform&", 79, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//363
    { "const QUrl&", 80, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//364
    { "const QUuid&", 81, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//365
    { "const QVariant&", 82, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//366
    { "const QVariant::Type", 82, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//367
    { "const QVariantComparisonHelper&", 83, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//368
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//369
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//370
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//371
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//372
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//373
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//374
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//375
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//376
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//377
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//378
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//379
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//380
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//381
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//382
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//383
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//384
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//385
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//386
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//387
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//388
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//389
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//390
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//391
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    321, 366, 374, 0,	//1  const QModelIndex&, const QVariant&, int
    321, 0,	//5  const QModelIndex&
    321, 315, 0,	//7  const QModelIndex&, const QMap<int,QVariant>&
    313, 0,	//10  const QList<QModelIndex>&
    374, 374, 321, 0,	//12  int, int, const QModelIndex&
    374, 250, 0,	//16  int, Qt::SortOrder
    321, 374, 366, 374, 63, 0,	//19  const QModelIndex&, int, const QVariant&, int, QFlags<Qt::MatchFlag>
    320, 218, 374, 374, 321, 0,	//25  const QMimeData*, Qt::DropAction, int, int, const QModelIndex&
    293, 293, 0,	//31  const QBitArray&, const QBitArray&
    325, 0,	//34  const QPersistentModelIndex&
    216, 374, 0,	//36  Qt::DockWidgetArea, int
    369, 369, 374, 0,	//39  const char*, const char*, int
    328, 372, 0,	//43  const QPoint&, double
    372, 0,	//46  double
    19, 308, 0,	//48  QDebug, const QItemSelectionRange&
    372, 330, 0,	//51  double, const QPointF&
    240, 64, 0,	//54  Qt::MouseButton, QFlags<Qt::MouseButton>
    316, 316, 0,	//57  const QMargins&, const QMargins&
    19, 359, 0,	//60  QDebug, const QStyleOption&
    372, 341, 0,	//63  double, const QSizeF&
    21, 374, 0,	//66  QDir::SortFlag, int
    3, 3, 0,	//69  QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger
    19, 325, 0,	//72  QDebug, const QPersistentModelIndex&
    16, 74, 0,	//75  QDataStream&, QImage&
    16, 342, 0,	//78  QDataStream&, const QSizePolicy&
    229, 374, 0,	//81  Qt::InputMethodHint, int
    174, 374, 0,	//84  QStyleOptionToolBar::ToolBarFeature, int
    19, 363, 0,	//87  QDebug, const QTransform&
    292, 369, 0,	//90  char*, const char*
    333, 333, 0,	//93  const QRect&, const QRect&
    339, 339, 0,	//96  const QSize&, const QSize&
    16, 363, 0,	//99  QDataStream&, const QTransform&
    177, 177, 0,	//102  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    19, 328, 0,	//105  QDebug, const QPoint&
    380, 0,	//108  unsigned char
    20, 30, 0,	//110  QDir::Filter, QFlags<QDir::Filter>
    330, 317, 0,	//113  const QPointF&, const QMatrix&
    311, 363, 0,	//116  const QLine&, const QTransform&
    25, 33, 0,	//119  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    266, 69, 0,	//122  Qt::WindowState, QFlags<Qt::WindowState>
    341, 372, 0,	//125  const QSizeF&, double
    16, 311, 0,	//128  QDataStream&, const QLine&
    20, 374, 0,	//131  QDir::Filter, int
    363, 363, 0,	//134  const QTransform&, const QTransform&
    382, 0,	//137  unsigned int
    341, 341, 0,	//139  const QSizeF&, const QSizeF&
    296, 296, 0,	//142  const QByteArray&, const QByteArray&
    310, 358, 0,	//145  const QLatin1String&, const QStringRef&
    240, 240, 0,	//148  Qt::MouseButton, Qt::MouseButton
    19, 367, 0,	//151  QDebug, const QVariant::Type
    366, 368, 0,	//154  const QVariant&, const QVariantComparisonHelper&
    7, 7, 0,	//157  QBool, QBool
    173, 173, 0,	//160  QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget
    172, 172, 0,	//163  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature
    196, 55, 0,	//166  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    358, 0,	//169  const QStringRef&
    163, 163, 0,	//171  QString::Null, QString::Null
    19, 304, 0,	//174  QDebug, const QFont&
    120, 374, 0,	//177  QSql::ParamTypeFlag, int
    19, 331, 0,	//180  QDebug, const QPolygon&
    16, 334, 0,	//183  QDataStream&, const QRectF&
    120, 120, 0,	//186  QSql::ParamTypeFlag, QSql::ParamTypeFlag
    16, 85, 0,	//189  QDataStream&, QLocale&
    169, 374, 0,	//192  QStyle::SubControl, int
    11, 355, 0,	//195  QChar, const QString&
    72, 35, 0,	//198  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    20, 20, 0,	//201  QDir::Filter, QDir::Filter
    16, 324, 0,	//204  QDataStream&, const QPalette&
    19, 362, 0,	//207  QDebug, const QTime&
    16, 296, 0,	//210  QDataStream&, const QByteArray&
    19, 300, 0,	//213  QDebug, const QDate&
    293, 0,	//216  const QBitArray&
    370, 381, 374, 0,	//218  const unsigned char*, unsigned char*, int
    332, 363, 0,	//222  const QPolygonF&, const QTransform&
    366, 191, 389, 0,	//225  const QVariant&, QVariant::Type, void*
    355, 0,	//229  const QString&
    385, 0,	//231  unsigned short
    94, 0,	//233  QObject*(*)()
    375, 0,	//235  long
    257, 257, 0,	//237  Qt::ToolBarArea, Qt::ToolBarArea
    376, 0,	//240  long long
    19, 332, 0,	//242  QDebug, const QPolygonF&
    195, 374, 0,	//245  QWidget::RenderFlag, int
    19, 298, 0,	//248  QDebug, const QColor&
    218, 374, 0,	//251  Qt::DropAction, int
    16, 356, 0,	//254  QDataStream&, const QStringList&
    1, 1, 0,	//257  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    373, 0,	//260  float
    196, 196, 0,	//262  Qt::AlignmentFlag, Qt::AlignmentFlag
    16, 14, 0,	//265  QDataStream&, QColor&
    22, 374, 0,	//268  QDirIterator::IteratorFlag, int
    16, 335, 0,	//271  QDataStream&, const QRegExp&
    187, 374, 0,	//274  QUrl::FormattingOption, int
    22, 32, 0,	//277  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    296, 369, 0,	//280  const QByteArray&, const char*
    19, 341, 0,	//283  QDebug, const QSizeF&
    216, 56, 0,	//286  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    172, 374, 0,	//289  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int
    311, 317, 0,	//292  const QLine&, const QMatrix&
    374, 374, 374, 0,	//295  int, int, int
    312, 317, 0,	//299  const QLineF&, const QMatrix&
    242, 242, 0,	//302  Qt::Orientation, Qt::Orientation
    323, 317, 0,	//305  const QPainterPath&, const QMatrix&
    257, 374, 0,	//308  Qt::ToolBarArea, int
    16, 103, 0,	//311  QDataStream&, QPointF&
    16, 309, 0,	//314  QDataStream&, const QKeySequence&
    238, 374, 0,	//317  Qt::MatchFlag, int
    19, 303, 0,	//320  QDebug, const QEasingCurve&
    76, 374, 0,	//323  QItemSelectionModel::SelectionFlag, int
    16, 299, 0,	//326  QDataStream&, const QCursor&
    223, 223, 0,	//329  Qt::GestureFlag, Qt::GestureFlag
    16, 17, 0,	//332  QDataStream&, QDate&
    72, 72, 0,	//335  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    25, 374, 0,	//338  QEventLoop::ProcessEventsFlag, int
    291, 296, 0,	//341  char, const QByteArray&
    19, 42, 0,	//344  QDebug, QFlags<QStyle::StateFlag>
    369, 296, 0,	//347  const char*, const QByteArray&
    16, 188, 0,	//350  QDataStream&, QUuid&
    372, 372, 0,	//353  double, double
    16, 10, 0,	//356  QDataStream&, QByteArray&
    16, 190, 0,	//359  QDataStream&, QVariant&
    16, 110, 0,	//362  QDataStream&, QRegExp&
    330, 330, 0,	//365  const QPointF&, const QPointF&
    363, 372, 0,	//368  const QTransform&, double
    4, 29, 0,	//371  QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>
    170, 170, 0,	//374  QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature
    358, 358, 0,	//377  const QStringRef&, const QStringRef&
    170, 374, 0,	//380  QStyleOptionButton::ButtonFeature, int
    26, 374, 0,	//383  QFile::Permission, int
    19, 312, 0,	//386  QDebug, const QLineF&
    11, 11, 0,	//389  QChar, QChar
    323, 363, 0,	//392  const QPainterPath&, const QTransform&
    16, 294, 0,	//395  QDataStream&, const QBrush&
    369, 369, 382, 0,	//398  const char*, const char*, unsigned int
    296, 0,	//402  const QByteArray&
    4, 4, 0,	//404  QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag
    168, 374, 0,	//407  QStyle::StateFlag, int
    19, 30, 0,	//410  QDebug, QFlags<QDir::Filter>
    369, 374, 0,	//413  const char*, int
    16, 112, 0,	//416  QDataStream&, QRegion&
    173, 374, 0,	//419  QStyleOptionTab::CornerWidget, int
    180, 52, 0,	//422  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    16, 6, 0,	//425  QDataStream&, QBitArray&
    330, 372, 0,	//428  const QPointF&, double
    11, 0,	//431  QChar
    1, 27, 0,	//433  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    388, 0,	//436  void(*)(QtMsgType,const char*)
    16, 300, 0,	//438  QDataStream&, const QDate&
    322, 355, 318, 0,	//441  const QObject*, const QString&, const QMetaObject&
    238, 63, 0,	//445  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    223, 374, 0,	//448  Qt::GestureFlag, int
    177, 374, 0,	//451  QTextCodec::ConversionFlag, int
    117, 117, 0,	//454  QSizePolicy::ControlType, QSizePolicy::ControlType
    16, 15, 0,	//457  QDataStream&, QCursor&
    235, 62, 0,	//460  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    238, 238, 0,	//463  Qt::MatchFlag, Qt::MatchFlag
    16, 185, 0,	//466  QDataStream&, QTransform&
    331, 317, 0,	//469  const QPolygon&, const QMatrix&
    389, 0,	//472  void*
    173, 47, 0,	//474  QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>
    355, 163, 0,	//477  const QString&, QString::Null
    175, 175, 0,	//480  QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature
    19, 348, 0,	//483  QDebug, const QSqlField&
    78, 374, 0,	//486  QLibrary::LoadHint, int
    16, 115, 0,	//489  QDataStream&, QSizeF&
    358, 369, 0,	//492  const QStringRef&, const char*
    330, 0,	//495  const QPointF&
    389, 379, 379, 379, 0,	//497  void*, size_t, size_t, size_t
    232, 232, 0,	//502  Qt::ItemFlag, Qt::ItemFlag
    16, 326, 0,	//505  QDataStream&, const QPixmap&
    384, 0,	//508  unsigned long long
    267, 70, 0,	//510  Qt::WindowType, QFlags<Qt::WindowType>
    19, 339, 0,	//513  QDebug, const QSize&
    330, 363, 0,	//516  const QPointF&, const QTransform&
    232, 61, 0,	//519  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    260, 68, 0,	//522  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    16, 364, 0,	//525  QDataStream&, const QUrl&
    389, 374, 379, 0,	//528  void*, int, size_t
    117, 39, 0,	//532  QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>
    16, 366, 0,	//535  QDataStream&, const QVariant&
    16, 80, 0,	//538  QDataStream&, QLine&
    296, 374, 0,	//541  const QByteArray&, int
    4, 374, 0,	//544  QAbstractSpinBox::StepEnabledFlag, int
    235, 235, 0,	//547  Qt::KeyboardModifier, Qt::KeyboardModifier
    387, 0,	//550  void(*)()
    196, 374, 0,	//552  Qt::AlignmentFlag, int
    328, 317, 0,	//555  const QPoint&, const QMatrix&
    235, 374, 0,	//558  Qt::KeyboardModifier, int
    232, 374, 0,	//561  Qt::ItemFlag, int
    227, 59, 0,	//564  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    328, 328, 0,	//567  const QPoint&, const QPoint&
    164, 374, 0,	//570  QString::SectionFlag, int
    267, 374, 0,	//573  Qt::WindowType, int
    195, 195, 0,	//576  QWidget::RenderFlag, QWidget::RenderFlag
    358, 355, 0,	//579  const QStringRef&, const QString&
    305, 305, 0,	//582  const QHashDummyValue&, const QHashDummyValue&
    369, 382, 0,	//585  const char*, unsigned int
    187, 187, 0,	//588  QUrl::FormattingOption, QUrl::FormattingOption
    16, 73, 0,	//591  QDataStream&, QIcon&
    16, 331, 0,	//594  QDataStream&, const QPolygon&
    260, 374, 0,	//597  Qt::TouchPointState, int
    195, 54, 0,	//600  QWidget::RenderFlag, QFlags<QWidget::RenderFlag>
    19, 316, 0,	//603  QDebug, const QMargins&
    369, 0,	//606  const char*
    3, 374, 0,	//608  QAbstractItemView::EditTrigger, int
    178, 179, 0,	//611  QTextStream&, QTextStream&(*)(QTextStream&)
    168, 42, 0,	//614  QStyle::StateFlag, QFlags<QStyle::StateFlag>
    175, 49, 0,	//617  QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>
    16, 23, 0,	//620  QDataStream&, QEasingCurve&
    19, 343, 0,	//623  QDebug, const QSqlDatabase&
    16, 312, 0,	//626  QDataStream&, const QLineF&
    26, 34, 0,	//629  QFile::Permission, QFlags<QFile::Permission>
    19, 323, 0,	//632  QDebug, const QPainterPath&
    292, 369, 382, 0,	//635  char*, const char*, unsigned int
    16, 8, 0,	//639  QDataStream&, QBrush&
    16, 330, 0,	//642  QDataStream&, const QPointF&
    364, 0,	//645  const QUrl&
    374, 0,	//647  int
    328, 373, 0,	//649  const QPoint&, float
    86, 374, 0,	//652  QLocale::NumberOption, int
    389, 379, 0,	//655  void*, size_t
    355, 355, 0,	//658  const QString&, const QString&
    175, 374, 0,	//661  QStyleOptionToolButton::ToolButtonFeature, int
    369, 369, 369, 374, 0,	//664  const char*, const char*, const char*, int
    355, 358, 0,	//669  const QString&, const QStringRef&
    117, 374, 0,	//672  QSizePolicy::ControlType, int
    16, 116, 0,	//675  QDataStream&, QSizePolicy&
    19, 351, 0,	//678  QDebug, const QSqlRecord&
    369, 358, 0,	//681  const char*, const QStringRef&
    16, 89, 0,	//684  QDataStream&, QMatrix&
    240, 374, 0,	//687  Qt::MouseButton, int
    172, 46, 0,	//690  QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>
    16, 114, 0,	//693  QDataStream&, QSize&
    22, 22, 0,	//696  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    229, 229, 0,	//699  Qt::InputMethodHint, Qt::InputMethodHint
    180, 180, 0,	//702  QTextStream::NumberFlag, QTextStream::NumberFlag
    16, 192, 0,	//705  QDataStream&, QVariant::Type&
    254, 66, 0,	//708  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    312, 363, 0,	//711  const QLineF&, const QTransform&
    358, 310, 0,	//714  const QStringRef&, const QLatin1String&
    378, 0,	//717  signed char
    16, 332, 0,	//719  QDataStream&, const QPolygonF&
    16, 341, 0,	//722  QDataStream&, const QSizeF&
    257, 67, 0,	//725  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    16, 304, 0,	//728  QDataStream&, const QFont&
    369, 369, 0,	//731  const char*, const char*
    169, 43, 0,	//734  QStyle::SubControl, QFlags<QStyle::SubControl>
    16, 317, 0,	//737  QDataStream&, const QMatrix&
    78, 78, 0,	//740  QLibrary::LoadHint, QLibrary::LoadHint
    266, 266, 0,	//743  Qt::WindowState, Qt::WindowState
    19, 364, 0,	//746  QDebug, const QUrl&
    187, 53, 0,	//749  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    16, 107, 0,	//752  QDataStream&, QPolygonF&
    16, 98, 0,	//755  QDataStream&, QPalette&
    16, 323, 0,	//758  QDataStream&, const QPainterPath&
    334, 334, 0,	//761  const QRectF&, const QRectF&
    372, 339, 0,	//764  double, const QSize&
    26, 26, 0,	//767  QFile::Permission, QFile::Permission
    169, 169, 0,	//770  QStyle::SubControl, QStyle::SubControl
    19, 311, 0,	//773  QDebug, const QLine&
    3, 28, 0,	//776  QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>
    16, 293, 0,	//779  QDataStream&, const QBitArray&
    317, 317, 0,	//782  const QMatrix&, const QMatrix&
    176, 176, 0,	//785  QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature
    389, 371, 379, 0,	//788  void*, const void*, size_t
    372, 328, 0,	//792  double, const QPoint&
    19, 321, 0,	//795  QDebug, const QModelIndex&
    377, 0,	//798  short
    19, 301, 0,	//800  QDebug, const QDateTime&
    16, 328, 0,	//803  QDataStream&, const QPoint&
    16, 307, 0,	//806  QDataStream&, const QImage&
    296, 291, 0,	//809  const QByteArray&, char
    19, 309, 0,	//812  QDebug, const QKeySequence&
    19, 322, 0,	//815  QDebug, const QObject*
    373, 373, 0,	//818  float, float
    16, 71, 0,	//821  QDataStream&, QFont&
    21, 31, 0,	//824  QDir::SortFlag, QFlags<QDir::SortFlag>
    292, 379, 369, 386, 0,	//827  char*, size_t, const char*, va_list
    164, 41, 0,	//832  QString::SectionFlag, QFlags<QString::SectionFlag>
    16, 339, 0,	//835  QDataStream&, const QSize&
    76, 36, 0,	//838  QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>
    16, 109, 0,	//841  QDataStream&, QRectF&
    177, 51, 0,	//844  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    19, 35, 0,	//847  QDebug, QFlags<QIODevice::OpenModeFlag>
    16, 297, 0,	//850  QDataStream&, const QChar&
    290, 7, 0,	//853  bool, QBool
    383, 0,	//856  unsigned long
    19, 334, 0,	//858  QDebug, const QRectF&
    331, 363, 0,	//861  const QPolygon&, const QTransform&
    7, 290, 0,	//864  QBool, bool
    266, 374, 0,	//867  Qt::WindowState, int
    176, 50, 0,	//870  QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>
    16, 166, 0,	//873  QDataStream&, QStringList&
    16, 333, 0,	//876  QDataStream&, const QRect&
    16, 337, 0,	//879  QDataStream&, const QRegion&
    216, 216, 0,	//882  Qt::DockWidgetArea, Qt::DockWidgetArea
    19, 317, 0,	//885  QDebug, const QMatrix&
    86, 38, 0,	//888  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    16, 298, 0,	//891  QDataStream&, const QColor&
    267, 267, 0,	//894  Qt::WindowType, Qt::WindowType
    339, 372, 0,	//897  const QSize&, double
    163, 355, 0,	//900  QString::Null, const QString&
    19, 294, 0,	//903  QDebug, const QBrush&
    21, 21, 0,	//906  QDir::SortFlag, QDir::SortFlag
    229, 60, 0,	//909  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    16, 101, 0,	//912  QDataStream&, QPoint&
    19, 330, 0,	//915  QDebug, const QPointF&
    322, 355, 336, 318, 84, 0,	//918  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    171, 171, 0,	//924  QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature
    16, 18, 0,	//927  QDataStream&, QDateTime&
    16, 362, 0,	//930  QDataStream&, const QTime&
    16, 77, 0,	//933  QDataStream&, QKeySequence&
    16, 365, 0,	//936  QDataStream&, const QUuid&
    178, 181, 0,	//939  QTextStream&, QTextStreamManipulator
    337, 363, 0,	//942  const QRegion&, const QTransform&
    164, 164, 0,	//945  QString::SectionFlag, QString::SectionFlag
    379, 379, 0,	//948  size_t, size_t
    180, 374, 0,	//951  QTextStream::NumberFlag, int
    370, 374, 374, 0,	//954  const unsigned char*, int, int
    370, 374, 0,	//958  const unsigned char*, int
    72, 374, 0,	//961  QIODevice::OpenModeFlag, int
    374, 328, 0,	//964  int, const QPoint&
    19, 360, 0,	//967  QDebug, const QStyleOption::OptionType&
    223, 58, 0,	//970  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    332, 317, 0,	//973  const QPolygonF&, const QMatrix&
    328, 0,	//976  const QPoint&
    16, 105, 0,	//978  QDataStream&, QPolygon&
    120, 40, 0,	//981  QSql::ParamTypeFlag, QFlags<QSql::ParamTypeFlag>
    16, 162, 0,	//984  QDataStream&, QString&
    76, 76, 0,	//987  QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag
    16, 355, 0,	//990  QDataStream&, const QString&
    16, 303, 0,	//993  QDataStream&, const QEasingCurve&
    16, 12, 0,	//996  QDataStream&, QChar&
    168, 168, 0,	//999  QStyle::StateFlag, QStyle::StateFlag
    308, 0,	//1002  const QItemSelectionRange&
    254, 254, 0,	//1004  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    16, 99, 0,	//1007  QDataStream&, QPixmap&
    25, 25, 0,	//1010  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    16, 108, 0,	//1013  QDataStream&, QRect&
    1, 374, 0,	//1016  QAbstractFileEngine::FileFlag, int
    270, 369, 0,	//1019  QtMsgType, const char*
    19, 347, 0,	//1022  QDebug, const QSqlError&
    227, 374, 0,	//1025  Qt::ImageConversionFlag, int
    170, 44, 0,	//1028  QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>
    19, 333, 0,	//1031  QDebug, const QRect&
    16, 306, 0,	//1034  QDataStream&, const QIcon&
    16, 367, 0,	//1037  QDataStream&, const QVariant::Type
    176, 374, 0,	//1040  QStyleOptionViewItemV2::ViewItemFeature, int
    16, 82, 0,	//1043  QDataStream&, QLineF&
    16, 97, 0,	//1046  QDataStream&, QPainterPath&
    260, 260, 0,	//1049  Qt::TouchPointState, Qt::TouchPointState
    254, 374, 0,	//1052  Qt::TextInteractionFlag, int
    328, 363, 0,	//1055  const QPoint&, const QTransform&
    171, 374, 0,	//1058  QStyleOptionFrameV2::FrameFeature, int
    174, 174, 0,	//1061  QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature
    291, 0,	//1064  char
    16, 301, 0,	//1066  QDataStream&, const QDateTime&
    16, 182, 0,	//1069  QDataStream&, QTime&
    328, 374, 0,	//1072  const QPoint&, int
    227, 227, 0,	//1075  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    171, 45, 0,	//1078  QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>
    218, 57, 0,	//1081  Qt::DropAction, QFlags<Qt::DropAction>
    218, 218, 0,	//1084  Qt::DropAction, Qt::DropAction
    242, 374, 0,	//1087  Qt::Orientation, int
    19, 302, 0,	//1090  QDebug, const QDir&
    337, 317, 0,	//1093  const QRegion&, const QMatrix&
    19, 337, 0,	//1096  QDebug, const QRegion&
    373, 328, 0,	//1099  float, const QPoint&
    16, 186, 0,	//1102  QDataStream&, QUrl&
    78, 37, 0,	//1105  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    355, 11, 0,	//1108  const QString&, QChar
    374, 374, 374, 374, 0,	//1111  int, int, int, int
    242, 65, 0,	//1116  Qt::Orientation, QFlags<Qt::Orientation>
    174, 48, 0,	//1119  QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>
    379, 0,	//1122  size_t
    19, 366, 0,	//1124  QDebug, const QVariant&
    86, 86, 0,	//1127  QLocale::NumberOption, QLocale::NumberOption
    16, 314, 0,	//1130  QDataStream&, const QLocale&
    90, 374, 390, 0,	//1133  QMetaObject::Call, int, void**
    95, 361, 321, 0,	//1137  QPainter*, const QStyleOptionViewItem&, const QModelIndex&
    361, 321, 0,	//1141  const QStyleOptionViewItem&, const QModelIndex&
    194, 361, 321, 0,	//1144  QWidget*, const QStyleOptionViewItem&, const QModelIndex&
    95, 361, 333, 355, 0,	//1148  QPainter*, const QStyleOptionViewItem&, const QRect&, const QString&
    95, 361, 333, 326, 0,	//1153  QPainter*, const QStyleOptionViewItem&, const QRect&, const QPixmap&
    95, 361, 333, 0,	//1158  QPainter*, const QStyleOptionViewItem&, const QRect&
    95, 361, 333, 206, 0,	//1162  QPainter*, const QStyleOptionViewItem&, const QRect&, Qt::CheckState
    93, 24, 0,	//1167  QObject*, QEvent*
    24, 2, 361, 321, 0,	//1170  QEvent*, QAbstractItemModel*, const QStyleOptionViewItem&, const QModelIndex&
    24, 0,	//1175  QEvent*
    183, 0,	//1177  QTimerEvent*
    13, 0,	//1179  QChildEvent*
    343, 0,	//1181  const QSqlDatabase&
    121, 0,	//1183  QSql::TableType
    119, 0,	//1185  QSql::NumericalPrecisionPolicy
    125, 355, 0,	//1187  QSqlDriver*, const QString&
    343, 355, 0,	//1190  const QSqlDatabase&, const QString&
    355, 290, 0,	//1193  const QString&, bool
    355, 129, 0,	//1196  const QString&, QSqlDriverCreatorBase*
    125, 0,	//1199  QSqlDriver*
    93, 0,	//1201  QObject*
    348, 290, 0,	//1203  const QSqlField&, bool
    355, 127, 0,	//1206  const QString&, QSqlDriver::IdentifierType
    128, 355, 351, 290, 0,	//1209  QSqlDriver::StatementType, const QString&, const QSqlRecord&, bool
    126, 0,	//1214  QSqlDriver::DriverFeature
    355, 355, 355, 355, 374, 355, 0,	//1216  const QString&, const QString&, const QString&, const QString&, int, const QString&
    290, 0,	//1223  bool
    347, 0,	//1225  const QSqlError&
    348, 0,	//1227  const QSqlField&
    355, 355, 355, 0,	//1229  const QString&, const QString&, const QString&
    355, 355, 355, 355, 0,	//1233  const QString&, const QString&, const QString&, const QString&
    355, 355, 355, 355, 374, 0,	//1238  const QString&, const QString&, const QString&, const QString&, int
    345, 0,	//1244  const QSqlDriverCreatorBase&
    346, 0,	//1246  const QSqlDriverFactoryInterface&
    355, 355, 135, 374, 0,	//1248  const QString&, const QString&, QSqlError::ErrorType, int
    135, 0,	//1253  QSqlError::ErrorType
    355, 355, 135, 0,	//1255  const QString&, const QString&, QSqlError::ErrorType
    355, 191, 0,	//1259  const QString&, QVariant::Type
    366, 0,	//1262  const QVariant&
    191, 0,	//1264  QVariant::Type
    139, 0,	//1266  QSqlField::RequiredStatus
    349, 0,	//1268  const QSqlIndex&
    374, 290, 0,	//1270  int, bool
    156, 0,	//1273  QSqlResult*
    355, 122, 0,	//1275  const QString&, QSqlDatabase
    122, 0,	//1278  QSqlDatabase
    350, 0,	//1280  const QSqlQuery&
    146, 0,	//1282  QSqlQuery::BatchExecutionMode
    355, 366, 40, 0,	//1284  const QString&, const QVariant&, QFlags<QSql::ParamTypeFlag>
    374, 366, 40, 0,	//1288  int, const QVariant&, QFlags<QSql::ParamTypeFlag>
    366, 40, 0,	//1292  const QVariant&, QFlags<QSql::ParamTypeFlag>
    355, 366, 0,	//1295  const QString&, const QVariant&
    374, 366, 0,	//1298  int, const QVariant&
    321, 374, 0,	//1301  const QModelIndex&, int
    374, 242, 374, 0,	//1304  int, Qt::Orientation, int
    374, 242, 366, 374, 0,	//1308  int, Qt::Orientation, const QVariant&, int
    355, 343, 0,	//1313  const QString&, const QSqlDatabase&
    374, 242, 0,	//1316  int, Qt::Orientation
    374, 242, 366, 0,	//1319  int, Qt::Orientation, const QVariant&
    374, 374, 0,	//1323  int, int
    351, 0,	//1326  const QSqlRecord&
    374, 348, 0,	//1328  int, const QSqlField&
    352, 0,	//1331  const QSqlRelation&
    194, 321, 0,	//1333  QWidget*, const QModelIndex&
    194, 2, 321, 0,	//1336  QWidget*, QAbstractItemModel*, const QModelIndex&
    93, 122, 0,	//1340  QObject*, QSqlDatabase
    374, 352, 0,	//1343  int, const QSqlRelation&
    155, 0,	//1346  QSqlRelationalTableModel::JoinMode
    374, 351, 0,	//1348  int, const QSqlRecord&
    321, 366, 0,	//1351  const QModelIndex&, const QVariant&
    344, 0,	//1354  const QSqlDriver*
    374, 389, 0,	//1356  int, void*
    160, 0,	//1359  QSqlTableModel::EditStrategy
    374, 149, 0,	//1361  int, QSqlRecord&
    149, 0,	//1364  QSqlRecord&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "AfterLastRow",	//1
    "AllTables",	//2
    "BLOB",	//3
    "BatchOperation",	//4
    "BatchOperations",	//5
    "BeforeFirstRow",	//6
    "Binary",	//7
    "ConnectionError",	//8
    "DeleteStatement",	//9
    "DetachFromResultSet",	//10
    "EventNotifications",	//11
    "FieldName",	//12
    "FinishQuery",	//13
    "HighPrecision",	//14
    "In",	//15
    "InOut",	//16
    "InnerJoin",	//17
    "InsertStatement",	//18
    "LastInsertId",	//19
    "LeftJoin",	//20
    "LicensedActiveQt",	//21
    "LicensedCore",	//22
    "LicensedDBus",	//23
    "LicensedDeclarative",	//24
    "LicensedGui",	//25
    "LicensedHelp",	//26
    "LicensedMultimedia",	//27
    "LicensedNetwork",	//28
    "LicensedOpenGL",	//29
    "LicensedOpenVG",	//30
    "LicensedQt3Support",	//31
    "LicensedQt3SupportLight",	//32
    "LicensedScript",	//33
    "LicensedScriptTools",	//34
    "LicensedSql",	//35
    "LicensedSvg",	//36
    "LicensedTest",	//37
    "LicensedXml",	//38
    "LicensedXmlPatterns",	//39
    "LowPrecisionDouble",	//40
    "LowPrecisionInt32",	//41
    "LowPrecisionInt64",	//42
    "LowPrecisionNumbers",	//43
    "MultipleResultSets",	//44
    "NamedBinding",	//45
    "NamedPlaceholders",	//46
    "NextResult",	//47
    "NoError",	//48
    "OnFieldChange",	//49
    "OnManualSubmit",	//50
    "OnRowChange",	//51
    "Optional",	//52
    "Out",	//53
    "PositionalBinding",	//54
    "PositionalPlaceholders",	//55
    "PreparedQueries",	//56
    "QSqlDatabase",	//57
    "QSqlDatabase#",	//58
    "QSqlDatabase$",	//59
    "QSqlDriver",	//60
    "QSqlDriver#",	//61
    "QSqlDriverCreatorBase",	//62
    "QSqlDriverCreatorBase#",	//63
    "QSqlDriverFactoryInterface",	//64
    "QSqlDriverFactoryInterface#",	//65
    "QSqlDriverPlugin",	//66
    "QSqlDriverPlugin#",	//67
    "QSqlError",	//68
    "QSqlError#",	//69
    "QSqlError$",	//70
    "QSqlError$$",	//71
    "QSqlError$$$",	//72
    "QSqlError$$$$",	//73
    "QSqlField",	//74
    "QSqlField#",	//75
    "QSqlField$",	//76
    "QSqlField$$",	//77
    "QSqlIndex",	//78
    "QSqlIndex#",	//79
    "QSqlIndex$",	//80
    "QSqlIndex$$",	//81
    "QSqlQuery",	//82
    "QSqlQuery#",	//83
    "QSqlQuery$",	//84
    "QSqlQuery$#",	//85
    "QSqlQueryModel",	//86
    "QSqlQueryModel#",	//87
    "QSqlRecord",	//88
    "QSqlRecord#",	//89
    "QSqlRelation",	//90
    "QSqlRelation#",	//91
    "QSqlRelation$$$",	//92
    "QSqlRelationalDelegate",	//93
    "QSqlRelationalDelegate#",	//94
    "QSqlRelationalTableModel",	//95
    "QSqlRelationalTableModel#",	//96
    "QSqlRelationalTableModel##",	//97
    "QSqlResult",	//98
    "QSqlResult#",	//99
    "QSqlTableModel",	//100
    "QSqlTableModel#",	//101
    "QSqlTableModel##",	//102
    "Q_COMPLEX_TYPE",	//103
    "Q_DUMMY_TYPE",	//104
    "Q_MOVABLE_TYPE",	//105
    "Q_PRIMITIVE_TYPE",	//106
    "Q_STATIC_TYPE",	//107
    "QtCriticalMsg",	//108
    "QtDebugMsg",	//109
    "QtFatalMsg",	//110
    "QtSystemMsg",	//111
    "QtWarningMsg",	//112
    "QuerySize",	//113
    "Required",	//114
    "SelectStatement",	//115
    "SetNumericalPrecision",	//116
    "SimpleLocking",	//117
    "StatementError",	//118
    "SystemTables",	//119
    "TableName",	//120
    "Tables",	//121
    "TransactionError",	//122
    "Transactions",	//123
    "Unicode",	//124
    "Unknown",	//125
    "UnknownError",	//126
    "UpdateStatement",	//127
    "ValuesAsColumns",	//128
    "ValuesAsRows",	//129
    "Views",	//130
    "WhereStatement",	//131
    "addBindValue",	//132
    "addBindValue#",	//133
    "addBindValue#$",	//134
    "addDatabase",	//135
    "addDatabase#",	//136
    "addDatabase#$",	//137
    "addDatabase$",	//138
    "addDatabase$$",	//139
    "append",	//140
    "append#",	//141
    "append#$",	//142
    "at",	//143
    "beforeDelete",	//144
    "beforeDelete$",	//145
    "beforeInsert",	//146
    "beforeInsert#",	//147
    "beforeUpdate",	//148
    "beforeUpdate$#",	//149
    "beginTransaction",	//150
    "bindValue",	//151
    "bindValue$#",	//152
    "bindValue$#$",	//153
    "bindValueType",	//154
    "bindValueType$",	//155
    "bindingSyntax",	//156
    "boundValue",	//157
    "boundValue$",	//158
    "boundValueCount",	//159
    "boundValueName",	//160
    "boundValueName$",	//161
    "boundValues",	//162
    "buddy",	//163
    "canFetchMore",	//164
    "canFetchMore#",	//165
    "childEvent",	//166
    "clear",	//167
    "clearValues",	//168
    "cloneDatabase",	//169
    "cloneDatabase#$",	//170
    "close",	//171
    "columnCount",	//172
    "columnCount#",	//173
    "commit",	//174
    "commitTransaction",	//175
    "connectNotify",	//176
    "connectOptions",	//177
    "connectionName",	//178
    "connectionNames",	//179
    "contains",	//180
    "contains$",	//181
    "count",	//182
    "create",	//183
    "create$",	//184
    "createEditor",	//185
    "createEditor###",	//186
    "createObject",	//187
    "createResult",	//188
    "cursorName",	//189
    "customEvent",	//190
    "data",	//191
    "data#",	//192
    "data#$",	//193
    "data$",	//194
    "database",	//195
    "database$",	//196
    "database$$",	//197
    "databaseName",	//198
    "databaseText",	//199
    "defaultConnection",	//200
    "defaultValue",	//201
    "deleteRowFromTable",	//202
    "deleteRowFromTable$",	//203
    "detachFromResultSet",	//204
    "disconnectNotify",	//205
    "displayColumn",	//206
    "drawCheck",	//207
    "drawDecoration",	//208
    "drawDisplay",	//209
    "drawFocus",	//210
    "driver",	//211
    "driverName",	//212
    "driverText",	//213
    "drivers",	//214
    "dropMimeData",	//215
    "editStrategy",	//216
    "editorEvent",	//217
    "escapeIdentifier",	//218
    "escapeIdentifier$$",	//219
    "event",	//220
    "eventFilter",	//221
    "exec",	//222
    "exec$",	//223
    "execBatch",	//224
    "execBatch$",	//225
    "executedQuery",	//226
    "fetch",	//227
    "fetch$",	//228
    "fetchFirst",	//229
    "fetchLast",	//230
    "fetchMore",	//231
    "fetchMore#",	//232
    "fetchNext",	//233
    "fetchPrevious",	//234
    "field",	//235
    "field$",	//236
    "fieldIndex",	//237
    "fieldIndex$",	//238
    "fieldName",	//239
    "fieldName$",	//240
    "filter",	//241
    "finish",	//242
    "first",	//243
    "flags",	//244
    "flags#",	//245
    "formatValue",	//246
    "formatValue#",	//247
    "formatValue#$",	//248
    "handle",	//249
    "hasFeature",	//250
    "hasFeature$",	//251
    "hasOutValues",	//252
    "headerData",	//253
    "headerData$$",	//254
    "headerData$$$",	//255
    "hostName",	//256
    "index",	//257
    "indexColumn",	//258
    "indexInQuery",	//259
    "indexInQuery#",	//260
    "indexOf",	//261
    "indexOf$",	//262
    "insert",	//263
    "insert$#",	//264
    "insertColumns",	//265
    "insertColumns$$",	//266
    "insertColumns$$#",	//267
    "insertRecord",	//268
    "insertRecord$#",	//269
    "insertRowIntoTable",	//270
    "insertRowIntoTable#",	//271
    "insertRows",	//272
    "insertRows$$",	//273
    "insertRows$$#",	//274
    "isActive",	//275
    "isAutoValue",	//276
    "isDescending",	//277
    "isDescending$",	//278
    "isDirty",	//279
    "isDirty#",	//280
    "isDriverAvailable",	//281
    "isDriverAvailable$",	//282
    "isEmpty",	//283
    "isForwardOnly",	//284
    "isGenerated",	//285
    "isGenerated$",	//286
    "isIdentifierEscaped",	//287
    "isIdentifierEscaped$$",	//288
    "isIdentifierEscapedImplementation",	//289
    "isIdentifierEscapedImplementation$$",	//290
    "isNull",	//291
    "isNull$",	//292
    "isOpen",	//293
    "isOpenError",	//294
    "isReadOnly",	//295
    "isSelect",	//296
    "isValid",	//297
    "itemData",	//298
    "keys",	//299
    "last",	//300
    "lastError",	//301
    "lastInsertId",	//302
    "lastQuery",	//303
    "length",	//304
    "match",	//305
    "metaObject",	//306
    "mimeData",	//307
    "mimeTypes",	//308
    "name",	//309
    "next",	//310
    "nextResult",	//311
    "notification",	//312
    "notification$",	//313
    "numRowsAffected",	//314
    "number",	//315
    "numericalPrecisionPolicy",	//316
    "open",	//317
    "open$",	//318
    "open$$",	//319
    "open$$$",	//320
    "open$$$$",	//321
    "open$$$$$",	//322
    "open$$$$$$",	//323
    "operator!=",	//324
    "operator!=#",	//325
    "operator!=##",	//326
    "operator!=#$",	//327
    "operator!=$#",	//328
    "operator&",	//329
    "operator&##",	//330
    "operator*",	//331
    "operator*##",	//332
    "operator*#$",	//333
    "operator*$#",	//334
    "operator+",	//335
    "operator+##",	//336
    "operator+#$",	//337
    "operator+$#",	//338
    "operator+$$",	//339
    "operator-",	//340
    "operator-#",	//341
    "operator-##",	//342
    "operator-#$",	//343
    "operator/",	//344
    "operator/#$",	//345
    "operator<",	//346
    "operator<##",	//347
    "operator<#$",	//348
    "operator<$#",	//349
    "operator<<",	//350
    "operator<<##",	//351
    "operator<<#$",	//352
    "operator<<#?",	//353
    "operator<=",	//354
    "operator<=##",	//355
    "operator<=#$",	//356
    "operator<=$#",	//357
    "operator=",	//358
    "operator=#",	//359
    "operator==",	//360
    "operator==#",	//361
    "operator==##",	//362
    "operator==#$",	//363
    "operator==$#",	//364
    "operator>",	//365
    "operator>##",	//366
    "operator>#$",	//367
    "operator>$#",	//368
    "operator>=",	//369
    "operator>=##",	//370
    "operator>=#$",	//371
    "operator>=$#",	//372
    "operator>>",	//373
    "operator>>##",	//374
    "operator>>#$",	//375
    "operator>>#?",	//376
    "operator^",	//377
    "operator^##",	//378
    "operator|",	//379
    "operator|##",	//380
    "operator|$$",	//381
    "orderByClause",	//382
    "paint",	//383
    "password",	//384
    "port",	//385
    "precision",	//386
    "prepare",	//387
    "prepare$",	//388
    "previous",	//389
    "primaryIndex",	//390
    "primaryIndex$",	//391
    "primaryKey",	//392
    "primeInsert",	//393
    "primeInsert$#",	//394
    "qAcos",	//395
    "qAcos$",	//396
    "qAddPostRoutine",	//397
    "qAddPostRoutine$",	//398
    "qAlpha",	//399
    "qAlpha$",	//400
    "qAppName",	//401
    "qAsin",	//402
    "qAsin$",	//403
    "qAtan",	//404
    "qAtan$",	//405
    "qAtan2",	//406
    "qAtan2$$",	//407
    "qBadAlloc",	//408
    "qBlue",	//409
    "qBlue$",	//410
    "qCeil",	//411
    "qCeil$",	//412
    "qChecksum",	//413
    "qChecksum$$",	//414
    "qCompress",	//415
    "qCompress#",	//416
    "qCompress#$",	//417
    "qCompress$$",	//418
    "qCompress$$$",	//419
    "qCos",	//420
    "qCos$",	//421
    "qCritical",	//422
    "qDebug",	//423
    "qExp",	//424
    "qExp$",	//425
    "qFabs",	//426
    "qFabs$",	//427
    "qFastCos",	//428
    "qFastCos$",	//429
    "qFastSin",	//430
    "qFastSin$",	//431
    "qFlagLocation",	//432
    "qFlagLocation$",	//433
    "qFloor",	//434
    "qFloor$",	//435
    "qFree",	//436
    "qFree$",	//437
    "qFreeAligned",	//438
    "qFreeAligned$",	//439
    "qFuzzyCompare",	//440
    "qFuzzyCompare##",	//441
    "qFuzzyCompare$$",	//442
    "qFuzzyIsNull",	//443
    "qFuzzyIsNull$",	//444
    "qGray",	//445
    "qGray$",	//446
    "qGray$$$",	//447
    "qGreen",	//448
    "qGreen$",	//449
    "qHash",	//450
    "qHash#",	//451
    "qHash$",	//452
    "qInf",	//453
    "qInstallMsgHandler",	//454
    "qInstallMsgHandler$",	//455
    "qIntCast",	//456
    "qIntCast$",	//457
    "qIsFinite",	//458
    "qIsFinite$",	//459
    "qIsGray",	//460
    "qIsGray$",	//461
    "qIsInf",	//462
    "qIsInf$",	//463
    "qIsNaN",	//464
    "qIsNaN$",	//465
    "qIsNull",	//466
    "qIsNull$",	//467
    "qLn",	//468
    "qLn$",	//469
    "qMalloc",	//470
    "qMalloc$",	//471
    "qMallocAligned",	//472
    "qMallocAligned$$",	//473
    "qMemCopy",	//474
    "qMemCopy$$$",	//475
    "qMemSet",	//476
    "qMemSet$$$",	//477
    "qPow",	//478
    "qPow$$",	//479
    "qQNaN",	//480
    "qRealloc",	//481
    "qRealloc$$",	//482
    "qReallocAligned",	//483
    "qReallocAligned$$$$",	//484
    "qRed",	//485
    "qRed$",	//486
    "qRegisterStaticPluginInstanceFunction",	//487
    "qRegisterStaticPluginInstanceFunction#",	//488
    "qRemovePostRoutine",	//489
    "qRemovePostRoutine$",	//490
    "qRgb",	//491
    "qRgb$$$",	//492
    "qRgba",	//493
    "qRgba$$$$",	//494
    "qRound",	//495
    "qRound$",	//496
    "qRound64",	//497
    "qRound64$",	//498
    "qSNaN",	//499
    "qSetFieldWidth",	//500
    "qSetFieldWidth$",	//501
    "qSetPadChar",	//502
    "qSetPadChar#",	//503
    "qSetRealNumberPrecision",	//504
    "qSetRealNumberPrecision$",	//505
    "qSharedBuild",	//506
    "qSin",	//507
    "qSin$",	//508
    "qSqrt",	//509
    "qSqrt$",	//510
    "qStringComparisonHelper",	//511
    "qStringComparisonHelper#$",	//512
    "qTan",	//513
    "qTan$",	//514
    "qUncompress",	//515
    "qUncompress#",	//516
    "qUncompress$$",	//517
    "qVersion",	//518
    "qWarning",	//519
    "qbswap_helper",	//520
    "qbswap_helper$$$",	//521
    "qgetenv",	//522
    "qgetenv$",	//523
    "qputenv",	//524
    "qputenv$#",	//525
    "qrand",	//526
    "qsrand",	//527
    "qsrand$",	//528
    "qstrcmp",	//529
    "qstrcmp##",	//530
    "qstrcmp#$",	//531
    "qstrcmp$#",	//532
    "qstrcmp$$",	//533
    "qstrcpy",	//534
    "qstrcpy$$",	//535
    "qstrdup",	//536
    "qstrdup$",	//537
    "qstricmp",	//538
    "qstricmp$$",	//539
    "qstrlen",	//540
    "qstrlen$",	//541
    "qstrncmp",	//542
    "qstrncmp$$$",	//543
    "qstrncpy",	//544
    "qstrncpy$$$",	//545
    "qstrnicmp",	//546
    "qstrnicmp$$$",	//547
    "qstrnlen",	//548
    "qstrnlen$$",	//549
    "qtTrId",	//550
    "qtTrId$",	//551
    "qtTrId$$",	//552
    "qt_assert",	//553
    "qt_assert$$$",	//554
    "qt_assert_x",	//555
    "qt_assert_x$$$$",	//556
    "qt_check_pointer",	//557
    "qt_check_pointer$$",	//558
    "qt_error_string",	//559
    "qt_error_string$",	//560
    "qt_message_output",	//561
    "qt_message_output$$",	//562
    "qt_metacall",	//563
    "qt_metacall$$?",	//564
    "qt_metacast",	//565
    "qt_metacast$",	//566
    "qt_noop",	//567
    "qt_qFindChild_helper",	//568
    "qt_qFindChild_helper#$#",	//569
    "qt_qFindChildren_helper",	//570
    "qt_qFindChildren_helper#$##?",	//571
    "query",	//572
    "queryChange",	//573
    "qvariant_cast_helper",	//574
    "qvariant_cast_helper#$$",	//575
    "qvsnprintf",	//576
    "qvsnprintf$$$?",	//577
    "record",	//578
    "record$",	//579
    "registerSqlDriver",	//580
    "registerSqlDriver$#",	//581
    "relation",	//582
    "relation$",	//583
    "relationModel",	//584
    "relationModel$",	//585
    "remove",	//586
    "remove$",	//587
    "removeColumns",	//588
    "removeColumns$$",	//589
    "removeColumns$$#",	//590
    "removeDatabase",	//591
    "removeDatabase$",	//592
    "removeRows",	//593
    "removeRows$$",	//594
    "removeRows$$#",	//595
    "replace",	//596
    "replace$#",	//597
    "requiredStatus",	//598
    "reset",	//599
    "reset$",	//600
    "result",	//601
    "revert",	//602
    "revertAll",	//603
    "revertRow",	//604
    "revertRow$",	//605
    "rollback",	//606
    "rollbackTransaction",	//607
    "rowCount",	//608
    "rowCount#",	//609
    "savePrepare",	//610
    "savePrepare$",	//611
    "seek",	//612
    "seek$",	//613
    "seek$$",	//614
    "select",	//615
    "selectStatement",	//616
    "setActive",	//617
    "setActive$",	//618
    "setAt",	//619
    "setAt$",	//620
    "setAutoValue",	//621
    "setAutoValue$",	//622
    "setConnectOptions",	//623
    "setConnectOptions$",	//624
    "setCursorName",	//625
    "setCursorName$",	//626
    "setData",	//627
    "setData##",	//628
    "setData##$",	//629
    "setDatabaseName",	//630
    "setDatabaseName$",	//631
    "setDatabaseText",	//632
    "setDatabaseText$",	//633
    "setDefaultConnection",	//634
    "setDefaultConnection$",	//635
    "setDefaultValue",	//636
    "setDefaultValue#",	//637
    "setDescending",	//638
    "setDescending$$",	//639
    "setDriverText",	//640
    "setDriverText$",	//641
    "setEditStrategy",	//642
    "setEditStrategy$",	//643
    "setEditorData",	//644
    "setEditorData##",	//645
    "setFilter",	//646
    "setFilter$",	//647
    "setForwardOnly",	//648
    "setForwardOnly$",	//649
    "setGenerated",	//650
    "setGenerated$",	//651
    "setGenerated$$",	//652
    "setHeaderData",	//653
    "setHeaderData$$#",	//654
    "setHeaderData$$#$",	//655
    "setHostName",	//656
    "setHostName$",	//657
    "setItemData",	//658
    "setJoinMode",	//659
    "setJoinMode$",	//660
    "setLastError",	//661
    "setLastError#",	//662
    "setLength",	//663
    "setLength$",	//664
    "setModelData",	//665
    "setModelData###",	//666
    "setName",	//667
    "setName$",	//668
    "setNull",	//669
    "setNull$",	//670
    "setNumber",	//671
    "setNumber$",	//672
    "setNumericalPrecisionPolicy",	//673
    "setNumericalPrecisionPolicy$",	//674
    "setOpen",	//675
    "setOpen$",	//676
    "setOpenError",	//677
    "setOpenError$",	//678
    "setPassword",	//679
    "setPassword$",	//680
    "setPort",	//681
    "setPort$",	//682
    "setPrecision",	//683
    "setPrecision$",	//684
    "setPrimaryKey",	//685
    "setPrimaryKey#",	//686
    "setQuery",	//687
    "setQuery#",	//688
    "setQuery$",	//689
    "setQuery$#",	//690
    "setReadOnly",	//691
    "setReadOnly$",	//692
    "setRecord",	//693
    "setRecord$#",	//694
    "setRelation",	//695
    "setRelation$#",	//696
    "setRequired",	//697
    "setRequired$",	//698
    "setRequiredStatus",	//699
    "setRequiredStatus$",	//700
    "setSelect",	//701
    "setSelect$",	//702
    "setSort",	//703
    "setSort$$",	//704
    "setSqlType",	//705
    "setSqlType$",	//706
    "setTable",	//707
    "setTable$",	//708
    "setType",	//709
    "setType$",	//710
    "setUserName",	//711
    "setUserName$",	//712
    "setValue",	//713
    "setValue#",	//714
    "setValue$#",	//715
    "size",	//716
    "sizeHint",	//717
    "sort",	//718
    "sort$$",	//719
    "span",	//720
    "sqlStatement",	//721
    "sqlStatement$$#$",	//722
    "staticMetaObject",	//723
    "stripDelimiters",	//724
    "stripDelimiters$$",	//725
    "stripDelimitersImplementation",	//726
    "stripDelimitersImplementation$$",	//727
    "submit",	//728
    "submitAll",	//729
    "subscribeToNotification",	//730
    "subscribeToNotification$",	//731
    "subscribeToNotificationImplementation",	//732
    "subscribeToNotificationImplementation$",	//733
    "subscribedToNotifications",	//734
    "subscribedToNotificationsImplementation",	//735
    "supportedDropActions",	//736
    "tableName",	//737
    "tables",	//738
    "tables$",	//739
    "text",	//740
    "timerEvent",	//741
    "tr",	//742
    "tr$",	//743
    "tr$$",	//744
    "tr$$$",	//745
    "trUtf8",	//746
    "trUtf8$",	//747
    "trUtf8$$",	//748
    "trUtf8$$$",	//749
    "transaction",	//750
    "type",	//751
    "typeID",	//752
    "unsubscribeFromNotification",	//753
    "unsubscribeFromNotification$",	//754
    "unsubscribeFromNotificationImplementation",	//755
    "unsubscribeFromNotificationImplementation$",	//756
    "updateEditorGeometry",	//757
    "updateRowInTable",	//758
    "updateRowInTable$#",	//759
    "userName",	//760
    "value",	//761
    "value$",	//762
    "virtual_hook",	//763
    "virtual_hook$$",	//764
    "~QSqlDatabase",	//765
    "~QSqlDriver",	//766
    "~QSqlDriverCreatorBase",	//767
    "~QSqlDriverFactoryInterface",	//768
    "~QSqlDriverPlugin",	//769
    "~QSqlError",	//770
    "~QSqlField",	//771
    "~QSqlIndex",	//772
    "~QSqlQuery",	//773
    "~QSqlQueryModel",	//774
    "~QSqlRecord",	//775
    "~QSqlRelation",	//776
    "~QSqlRelationalDelegate",	//777
    "~QSqlRelationalTableModel",	//778
    "~QSqlResult",	//779
    "~QSqlTableModel",	//780
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {1, 627, 1, 3, Smoke::mf_virtual, 290, 0},	//1 QAbstractItemModel::setData(const QModelIndex&, const QVariant&, int)
    {1, 298, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 88, 0},	//2 QAbstractItemModel::itemData(const QModelIndex&) const
    {1, 658, 7, 2, Smoke::mf_virtual, 290, 0},	//3 QAbstractItemModel::setItemData(const QModelIndex&, const QMap<int,QVariant>&)
    {1, 308, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 165, 0},	//4 QAbstractItemModel::mimeTypes() const
    {1, 307, 10, 1, Smoke::mf_const|Smoke::mf_virtual, 91, 0},	//5 QAbstractItemModel::mimeData(const QList<QModelIndex>&) const
    {1, 736, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 57, 0},	//6 QAbstractItemModel::supportedDropActions() const
    {1, 272, 12, 3, Smoke::mf_virtual, 290, 0},	//7 QAbstractItemModel::insertRows(int, int, const QModelIndex&)
    {1, 593, 12, 3, Smoke::mf_virtual, 290, 0},	//8 QAbstractItemModel::removeRows(int, int, const QModelIndex&)
    {1, 244, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 61, 0},	//9 QAbstractItemModel::flags(const QModelIndex&) const
    {1, 718, 16, 2, Smoke::mf_virtual, 0, 0},	//10 QAbstractItemModel::sort(int, Qt::SortOrder)
    {1, 163, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 92, 0},	//11 QAbstractItemModel::buddy(const QModelIndex&) const
    {1, 305, 19, 5, Smoke::mf_const|Smoke::mf_virtual, 83, 0},	//12 QAbstractItemModel::match(const QModelIndex&, int, const QVariant&, int, QFlags<Qt::MatchFlag>) const
    {1, 720, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 113, 0},	//13 QAbstractItemModel::span(const QModelIndex&) const
    {1, 728, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 290, 0},	//14 QAbstractItemModel::submit()
    {1, 602, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 0, 0},	//15 QAbstractItemModel::revert()
    {2, 257, 12, 3, Smoke::mf_const|Smoke::mf_virtual, 92, 0},	//16 QAbstractTableModel::index(int, int, const QModelIndex&) const
    {2, 215, 25, 5, Smoke::mf_virtual, 290, 0},	//17 QAbstractTableModel::dropMimeData(const QMimeData*, Qt::DropAction, int, int, const QModelIndex&)
    {18, 299, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 165, 0},	//18 QFactoryInterface::keys() const [pure virtual]
    {20, 329, 31, 2, Smoke::mf_static, 5, 1},	//19 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {20, 422, 0, 0, Smoke::mf_static, 19, 2},	//20 QGlobalSpace::qCritical()
    {20, 450, 34, 1, Smoke::mf_static, 382, 3},	//21 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {20, 379, 36, 2, Smoke::mf_static, 75, 4},	//22 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {20, 553, 39, 3, Smoke::mf_static, 0, 5},	//23 QGlobalSpace::qt_assert(const char*, const char*, int)
    {20, 331, 43, 2, Smoke::mf_static, 327, 6},	//24 QGlobalSpace::operator*(const QPoint&, double)
    {20, 462, 46, 1, Smoke::mf_static, 290, 7},	//25 QGlobalSpace::qIsInf(double)
    {20, 350, 48, 2, Smoke::mf_static, 19, 8},	//26 QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    {20, 331, 51, 2, Smoke::mf_static, 329, 9},	//27 QGlobalSpace::operator*(double, const QPointF&)
    {20, 379, 54, 2, Smoke::mf_static, 64, 10},	//28 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {20, 324, 57, 2, Smoke::mf_static, 290, 11},	//29 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {20, 350, 60, 2, Smoke::mf_static, 19, 12},	//30 QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    {20, 331, 63, 2, Smoke::mf_static, 340, 13},	//31 QGlobalSpace::operator*(double, const QSizeF&)
    {20, 379, 66, 2, Smoke::mf_static, 75, 14},	//32 QGlobalSpace::operator|(QDir::SortFlag, int)
    {20, 379, 69, 2, Smoke::mf_static, 28, 15},	//33 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    {20, 350, 72, 2, Smoke::mf_static, 19, 16},	//34 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {20, 373, 75, 2, Smoke::mf_static, 16, 17},	//35 QGlobalSpace::operator>>(QDataStream&, QImage&)
    {20, 350, 78, 2, Smoke::mf_static, 16, 18},	//36 QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    {20, 379, 81, 2, Smoke::mf_static, 75, 19},	//37 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {20, 379, 84, 2, Smoke::mf_static, 75, 20},	//38 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    {20, 350, 87, 2, Smoke::mf_static, 19, 21},	//39 QGlobalSpace::operator<<(QDebug, const QTransform&)
    {20, 534, 90, 2, Smoke::mf_static, 292, 22},	//40 QGlobalSpace::qstrcpy(char*, const char*)
    {20, 324, 93, 2, Smoke::mf_static, 290, 23},	//41 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {20, 335, 96, 2, Smoke::mf_static, 338, 24},	//42 QGlobalSpace::operator+(const QSize&, const QSize&)
    {20, 426, 46, 1, Smoke::mf_static, 372, 25},	//43 QGlobalSpace::qFabs(double)
    {20, 350, 99, 2, Smoke::mf_static, 16, 26},	//44 QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    {20, 379, 102, 2, Smoke::mf_static, 51, 27},	//45 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {20, 350, 105, 2, Smoke::mf_static, 19, 28},	//46 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {20, 480, 0, 0, Smoke::mf_static, 372, 29},	//47 QGlobalSpace::qQNaN()
    {20, 450, 108, 1, Smoke::mf_static, 382, 30},	//48 QGlobalSpace::qHash(unsigned char)
    {20, 379, 110, 2, Smoke::mf_static, 30, 31},	//49 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {20, 331, 113, 2, Smoke::mf_static, 102, 32},	//50 QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    {20, 331, 116, 2, Smoke::mf_static, 79, 33},	//51 QGlobalSpace::operator*(const QLine&, const QTransform&)
    {20, 518, 0, 0, Smoke::mf_static, 369, 34},	//52 QGlobalSpace::qVersion()
    {20, 379, 119, 2, Smoke::mf_static, 33, 35},	//53 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {20, 360, 57, 2, Smoke::mf_static, 290, 36},	//54 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {20, 379, 122, 2, Smoke::mf_static, 69, 37},	//55 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {20, 331, 125, 2, Smoke::mf_static, 340, 38},	//56 QGlobalSpace::operator*(const QSizeF&, double)
    {20, 350, 128, 2, Smoke::mf_static, 16, 39},	//57 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {20, 379, 131, 2, Smoke::mf_static, 75, 40},	//58 QGlobalSpace::operator|(QDir::Filter, int)
    {20, 440, 134, 2, Smoke::mf_static, 290, 41},	//59 QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    {20, 411, 46, 1, Smoke::mf_static, 374, 42},	//60 QGlobalSpace::qCeil(double)
    {20, 526, 0, 0, Smoke::mf_static, 374, 43},	//61 QGlobalSpace::qrand()
    {20, 445, 137, 1, Smoke::mf_static, 374, 44},	//62 QGlobalSpace::qGray(unsigned int)
    {20, 340, 139, 2, Smoke::mf_static, 340, 45},	//63 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {20, 369, 142, 2, Smoke::mf_static, 290, 46},	//64 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {20, 360, 145, 2, Smoke::mf_static, 290, 47},	//65 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {20, 379, 148, 2, Smoke::mf_static, 64, 48},	//66 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {20, 350, 151, 2, Smoke::mf_static, 19, 49},	//67 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {20, 485, 137, 1, Smoke::mf_static, 374, 50},	//68 QGlobalSpace::qRed(unsigned int)
    {20, 324, 154, 2, Smoke::mf_static, 290, 51},	//69 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {20, 360, 157, 2, Smoke::mf_static, 290, 52},	//70 QGlobalSpace::operator==(QBool, QBool)
    {20, 379, 160, 2, Smoke::mf_static, 47, 53},	//71 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    {20, 379, 163, 2, Smoke::mf_static, 46, 54},	//72 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    {20, 379, 166, 2, Smoke::mf_static, 55, 55},	//73 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {20, 450, 169, 1, Smoke::mf_static, 382, 56},	//74 QGlobalSpace::qHash(const QStringRef&)
    {20, 360, 171, 2, Smoke::mf_static, 290, 57},	//75 QGlobalSpace::operator==(QString::Null, QString::Null)
    {20, 350, 174, 2, Smoke::mf_static, 19, 58},	//76 QGlobalSpace::operator<<(QDebug, const QFont&)
    {20, 379, 177, 2, Smoke::mf_static, 75, 59},	//77 QGlobalSpace::operator|(QSql::ParamTypeFlag, int)
    {20, 350, 180, 2, Smoke::mf_static, 19, 60},	//78 QGlobalSpace::operator<<(QDebug, const QPolygon&)
    {20, 350, 183, 2, Smoke::mf_static, 16, 61},	//79 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {20, 379, 186, 2, Smoke::mf_static, 40, 62},	//80 QGlobalSpace::operator|(QSql::ParamTypeFlag, QSql::ParamTypeFlag)
    {20, 373, 189, 2, Smoke::mf_static, 16, 63},	//81 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {20, 399, 137, 1, Smoke::mf_static, 374, 64},	//82 QGlobalSpace::qAlpha(unsigned int)
    {20, 379, 192, 2, Smoke::mf_static, 75, 65},	//83 QGlobalSpace::operator|(QStyle::SubControl, int)
    {20, 335, 195, 2, Smoke::mf_static, 354, 66},	//84 QGlobalSpace::operator+(QChar, const QString&)
    {20, 448, 137, 1, Smoke::mf_static, 374, 67},	//85 QGlobalSpace::qGreen(unsigned int)
    {20, 379, 198, 2, Smoke::mf_static, 35, 68},	//86 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {20, 379, 201, 2, Smoke::mf_static, 30, 69},	//87 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {20, 350, 204, 2, Smoke::mf_static, 16, 70},	//88 QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    {20, 350, 207, 2, Smoke::mf_static, 19, 71},	//89 QGlobalSpace::operator<<(QDebug, const QTime&)
    {20, 350, 210, 2, Smoke::mf_static, 16, 72},	//90 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {20, 350, 213, 2, Smoke::mf_static, 19, 73},	//91 QGlobalSpace::operator<<(QDebug, const QDate&)
    {20, 450, 216, 1, Smoke::mf_static, 382, 74},	//92 QGlobalSpace::qHash(const QBitArray&)
    {20, 404, 46, 1, Smoke::mf_static, 372, 75},	//93 QGlobalSpace::qAtan(double)
    {20, 520, 218, 3, Smoke::mf_static, 0, 76},	//94 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {20, 331, 222, 2, Smoke::mf_static, 106, 77},	//95 QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    {20, 574, 225, 3, Smoke::mf_static, 290, 78},	//96 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {20, 450, 229, 1, Smoke::mf_static, 382, 79},	//97 QGlobalSpace::qHash(const QString&)
    {20, 450, 231, 1, Smoke::mf_static, 382, 80},	//98 QGlobalSpace::qHash(unsigned short)
    {20, 487, 233, 1, Smoke::mf_static, 0, 81},	//99 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {20, 450, 235, 1, Smoke::mf_static, 382, 82},	//100 QGlobalSpace::qHash(long)
    {20, 379, 237, 2, Smoke::mf_static, 67, 83},	//101 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {20, 450, 240, 1, Smoke::mf_static, 382, 84},	//102 QGlobalSpace::qHash(long long)
    {20, 350, 242, 2, Smoke::mf_static, 19, 85},	//103 QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    {20, 335, 139, 2, Smoke::mf_static, 340, 86},	//104 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {20, 379, 245, 2, Smoke::mf_static, 75, 87},	//105 QGlobalSpace::operator|(QWidget::RenderFlag, int)
    {20, 350, 248, 2, Smoke::mf_static, 19, 88},	//106 QGlobalSpace::operator<<(QDebug, const QColor&)
    {20, 379, 251, 2, Smoke::mf_static, 75, 89},	//107 QGlobalSpace::operator|(Qt::DropAction, int)
    {20, 420, 46, 1, Smoke::mf_static, 372, 90},	//108 QGlobalSpace::qCos(double)
    {20, 350, 254, 2, Smoke::mf_static, 16, 91},	//109 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {20, 379, 257, 2, Smoke::mf_static, 27, 92},	//110 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {20, 527, 137, 1, Smoke::mf_static, 0, 93},	//111 QGlobalSpace::qsrand(unsigned int)
    {20, 462, 260, 1, Smoke::mf_static, 290, 94},	//112 QGlobalSpace::qIsInf(float)
    {20, 379, 262, 2, Smoke::mf_static, 55, 95},	//113 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {20, 373, 265, 2, Smoke::mf_static, 16, 96},	//114 QGlobalSpace::operator>>(QDataStream&, QColor&)
    {20, 379, 268, 2, Smoke::mf_static, 75, 97},	//115 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {20, 350, 271, 2, Smoke::mf_static, 16, 98},	//116 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {20, 379, 274, 2, Smoke::mf_static, 75, 99},	//117 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {20, 379, 277, 2, Smoke::mf_static, 32, 100},	//118 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {20, 346, 280, 2, Smoke::mf_static, 290, 101},	//119 QGlobalSpace::operator<(const QByteArray&, const char*)
    {20, 350, 283, 2, Smoke::mf_static, 19, 102},	//120 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {20, 379, 286, 2, Smoke::mf_static, 56, 103},	//121 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {20, 379, 289, 2, Smoke::mf_static, 75, 104},	//122 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    {20, 331, 292, 2, Smoke::mf_static, 79, 105},	//123 QGlobalSpace::operator*(const QLine&, const QMatrix&)
    {20, 519, 0, 0, Smoke::mf_static, 19, 106},	//124 QGlobalSpace::qWarning()
    {20, 445, 295, 3, Smoke::mf_static, 374, 107},	//125 QGlobalSpace::qGray(int, int, int)
    {20, 331, 299, 2, Smoke::mf_static, 81, 108},	//126 QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    {20, 379, 302, 2, Smoke::mf_static, 65, 109},	//127 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {20, 331, 305, 2, Smoke::mf_static, 96, 110},	//128 QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    {20, 379, 308, 2, Smoke::mf_static, 75, 111},	//129 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {20, 373, 311, 2, Smoke::mf_static, 16, 112},	//130 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {20, 350, 314, 2, Smoke::mf_static, 16, 113},	//131 QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    {20, 379, 317, 2, Smoke::mf_static, 75, 114},	//132 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {20, 350, 320, 2, Smoke::mf_static, 19, 115},	//133 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {20, 379, 323, 2, Smoke::mf_static, 75, 116},	//134 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    {20, 350, 326, 2, Smoke::mf_static, 16, 117},	//135 QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    {20, 379, 329, 2, Smoke::mf_static, 58, 118},	//136 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {20, 373, 332, 2, Smoke::mf_static, 16, 119},	//137 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {20, 379, 335, 2, Smoke::mf_static, 35, 120},	//138 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {20, 379, 338, 2, Smoke::mf_static, 75, 121},	//139 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {20, 335, 341, 2, Smoke::mf_static, 295, 122},	//140 QGlobalSpace::operator+(char, const QByteArray&)
    {20, 344, 43, 2, Smoke::mf_static, 327, 123},	//141 QGlobalSpace::operator/(const QPoint&, double)
    {20, 350, 344, 2, Smoke::mf_static, 19, 124},	//142 QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    {20, 360, 347, 2, Smoke::mf_static, 290, 125},	//143 QGlobalSpace::operator==(const char*, const QByteArray&)
    {20, 373, 350, 2, Smoke::mf_static, 16, 126},	//144 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {20, 464, 260, 1, Smoke::mf_static, 290, 127},	//145 QGlobalSpace::qIsNaN(float)
    {20, 440, 353, 2, Smoke::mf_static, 290, 128},	//146 QGlobalSpace::qFuzzyCompare(double, double)
    {20, 466, 260, 1, Smoke::mf_static, 290, 129},	//147 QGlobalSpace::qIsNull(float)
    {20, 373, 356, 2, Smoke::mf_static, 16, 130},	//148 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {20, 373, 359, 2, Smoke::mf_static, 16, 131},	//149 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {20, 373, 362, 2, Smoke::mf_static, 16, 132},	//150 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {20, 360, 365, 2, Smoke::mf_static, 290, 133},	//151 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {20, 344, 368, 2, Smoke::mf_static, 184, 134},	//152 QGlobalSpace::operator/(const QTransform&, double)
    {20, 379, 371, 2, Smoke::mf_static, 29, 135},	//153 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    {20, 379, 374, 2, Smoke::mf_static, 44, 136},	//154 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    {20, 324, 377, 2, Smoke::mf_static, 290, 137},	//155 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {20, 379, 380, 2, Smoke::mf_static, 75, 138},	//156 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    {20, 379, 383, 2, Smoke::mf_static, 75, 139},	//157 QGlobalSpace::operator|(QFile::Permission, int)
    {20, 350, 386, 2, Smoke::mf_static, 19, 140},	//158 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {20, 346, 389, 2, Smoke::mf_static, 290, 141},	//159 QGlobalSpace::operator<(QChar, QChar)
    {20, 331, 392, 2, Smoke::mf_static, 96, 142},	//160 QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    {20, 350, 395, 2, Smoke::mf_static, 16, 143},	//161 QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    {20, 546, 398, 3, Smoke::mf_static, 374, 144},	//162 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {20, 450, 402, 1, Smoke::mf_static, 382, 145},	//163 QGlobalSpace::qHash(const QByteArray&)
    {20, 379, 404, 2, Smoke::mf_static, 29, 146},	//164 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    {20, 379, 407, 2, Smoke::mf_static, 75, 147},	//165 QGlobalSpace::operator|(QStyle::StateFlag, int)
    {20, 350, 410, 2, Smoke::mf_static, 19, 148},	//166 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {20, 557, 413, 2, Smoke::mf_static, 0, 149},	//167 QGlobalSpace::qt_check_pointer(const char*, int)
    {20, 373, 416, 2, Smoke::mf_static, 16, 150},	//168 QGlobalSpace::operator>>(QDataStream&, QRegion&)
    {20, 379, 419, 2, Smoke::mf_static, 75, 151},	//169 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    {20, 379, 422, 2, Smoke::mf_static, 52, 152},	//170 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {20, 373, 425, 2, Smoke::mf_static, 16, 153},	//171 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {20, 331, 428, 2, Smoke::mf_static, 329, 154},	//172 QGlobalSpace::operator*(const QPointF&, double)
    {20, 529, 142, 2, Smoke::mf_static, 374, 155},	//173 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {20, 502, 431, 1, Smoke::mf_static, 181, 156},	//174 QGlobalSpace::qSetPadChar(QChar)
    {20, 529, 280, 2, Smoke::mf_static, 374, 157},	//175 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {20, 360, 96, 2, Smoke::mf_static, 290, 158},	//176 QGlobalSpace::operator==(const QSize&, const QSize&)
    {20, 506, 0, 0, Smoke::mf_static, 290, 159},	//177 QGlobalSpace::qSharedBuild()
    {20, 379, 433, 2, Smoke::mf_static, 27, 160},	//178 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {20, 454, 436, 1, Smoke::mf_static, 388, 161},	//179 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {20, 350, 438, 2, Smoke::mf_static, 16, 162},	//180 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {20, 568, 441, 3, Smoke::mf_static, 93, 163},	//181 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {20, 379, 445, 2, Smoke::mf_static, 63, 164},	//182 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {20, 379, 448, 2, Smoke::mf_static, 75, 165},	//183 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {20, 324, 142, 2, Smoke::mf_static, 290, 166},	//184 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {20, 379, 451, 2, Smoke::mf_static, 75, 167},	//185 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {20, 379, 454, 2, Smoke::mf_static, 39, 168},	//186 QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    {20, 373, 457, 2, Smoke::mf_static, 16, 169},	//187 QGlobalSpace::operator>>(QDataStream&, QCursor&)
    {20, 379, 460, 2, Smoke::mf_static, 62, 170},	//188 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {20, 344, 125, 2, Smoke::mf_static, 340, 171},	//189 QGlobalSpace::operator/(const QSizeF&, double)
    {20, 379, 463, 2, Smoke::mf_static, 63, 172},	//190 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {20, 373, 466, 2, Smoke::mf_static, 16, 173},	//191 QGlobalSpace::operator>>(QDataStream&, QTransform&)
    {20, 331, 469, 2, Smoke::mf_static, 104, 174},	//192 QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    {20, 365, 389, 2, Smoke::mf_static, 290, 175},	//193 QGlobalSpace::operator>(QChar, QChar)
    {20, 369, 347, 2, Smoke::mf_static, 290, 176},	//194 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {20, 438, 472, 1, Smoke::mf_static, 0, 177},	//195 QGlobalSpace::qFreeAligned(void*)
    {20, 379, 474, 2, Smoke::mf_static, 47, 178},	//196 QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    {20, 360, 477, 2, Smoke::mf_static, 290, 179},	//197 QGlobalSpace::operator==(const QString&, QString::Null)
    {20, 456, 260, 1, Smoke::mf_static, 374, 180},	//198 QGlobalSpace::qIntCast(float)
    {20, 346, 142, 2, Smoke::mf_static, 290, 181},	//199 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {20, 379, 480, 2, Smoke::mf_static, 49, 182},	//200 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    {20, 350, 483, 2, Smoke::mf_static, 19, 183},	//201 QGlobalSpace::operator<<(QDebug, const QSqlField&)
    {20, 524, 347, 2, Smoke::mf_static, 290, 184},	//202 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {20, 379, 486, 2, Smoke::mf_static, 75, 185},	//203 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {20, 373, 489, 2, Smoke::mf_static, 16, 186},	//204 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {20, 511, 492, 2, Smoke::mf_static, 290, 187},	//205 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {20, 542, 398, 3, Smoke::mf_static, 374, 188},	//206 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {20, 340, 495, 1, Smoke::mf_static, 329, 189},	//207 QGlobalSpace::operator-(const QPointF&)
    {20, 483, 497, 4, Smoke::mf_static, 389, 190},	//208 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {20, 379, 502, 2, Smoke::mf_static, 61, 191},	//209 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {20, 350, 505, 2, Smoke::mf_static, 16, 192},	//210 QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    {20, 450, 508, 1, Smoke::mf_static, 382, 193},	//211 QGlobalSpace::qHash(unsigned long long)
    {20, 379, 510, 2, Smoke::mf_static, 70, 194},	//212 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {20, 350, 513, 2, Smoke::mf_static, 19, 195},	//213 QGlobalSpace::operator<<(QDebug, const QSize&)
    {20, 331, 516, 2, Smoke::mf_static, 102, 196},	//214 QGlobalSpace::operator*(const QPointF&, const QTransform&)
    {20, 379, 519, 2, Smoke::mf_static, 61, 197},	//215 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {20, 379, 522, 2, Smoke::mf_static, 68, 198},	//216 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {20, 401, 0, 0, Smoke::mf_static, 161, 199},	//217 QGlobalSpace::qAppName()
    {20, 369, 377, 2, Smoke::mf_static, 290, 200},	//218 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {20, 450, 431, 1, Smoke::mf_static, 382, 201},	//219 QGlobalSpace::qHash(QChar)
    {20, 360, 154, 2, Smoke::mf_static, 290, 202},	//220 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {20, 443, 46, 1, Smoke::mf_static, 290, 203},	//221 QGlobalSpace::qFuzzyIsNull(double)
    {20, 350, 525, 2, Smoke::mf_static, 16, 204},	//222 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {20, 476, 528, 3, Smoke::mf_static, 389, 205},	//223 QGlobalSpace::qMemSet(void*, int, size_t)
    {20, 406, 353, 2, Smoke::mf_static, 372, 206},	//224 QGlobalSpace::qAtan2(double, double)
    {20, 379, 532, 2, Smoke::mf_static, 39, 207},	//225 QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    {20, 350, 535, 2, Smoke::mf_static, 16, 208},	//226 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {20, 373, 538, 2, Smoke::mf_static, 16, 209},	//227 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {20, 415, 541, 2, Smoke::mf_static, 9, 210},	//228 QGlobalSpace::qCompress(const QByteArray&, int)
    {20, 415, 402, 1, Smoke::mf_static, 9, 211},	//229 QGlobalSpace::qCompress(const QByteArray&)
    {20, 379, 544, 2, Smoke::mf_static, 75, 212},	//230 QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    {20, 379, 547, 2, Smoke::mf_static, 62, 213},	//231 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {20, 346, 347, 2, Smoke::mf_static, 290, 214},	//232 QGlobalSpace::operator<(const char*, const QByteArray&)
    {20, 397, 550, 1, Smoke::mf_static, 0, 215},	//233 QGlobalSpace::qAddPostRoutine(void(*)())
    {20, 379, 552, 2, Smoke::mf_static, 75, 216},	//234 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {20, 331, 555, 2, Smoke::mf_static, 100, 217},	//235 QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    {20, 379, 558, 2, Smoke::mf_static, 75, 218},	//236 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {20, 379, 561, 2, Smoke::mf_static, 75, 219},	//237 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {20, 424, 46, 1, Smoke::mf_static, 372, 220},	//238 QGlobalSpace::qExp(double)
    {20, 324, 96, 2, Smoke::mf_static, 290, 221},	//239 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {20, 379, 564, 2, Smoke::mf_static, 59, 222},	//240 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {20, 354, 280, 2, Smoke::mf_static, 290, 223},	//241 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {20, 324, 567, 2, Smoke::mf_static, 290, 224},	//242 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {20, 379, 570, 2, Smoke::mf_static, 75, 225},	//243 QGlobalSpace::operator|(QString::SectionFlag, int)
    {20, 379, 573, 2, Smoke::mf_static, 75, 226},	//244 QGlobalSpace::operator|(Qt::WindowType, int)
    {20, 379, 576, 2, Smoke::mf_static, 54, 227},	//245 QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    {20, 360, 579, 2, Smoke::mf_static, 290, 228},	//246 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {20, 466, 46, 1, Smoke::mf_static, 290, 229},	//247 QGlobalSpace::qIsNull(double)
    {20, 360, 582, 2, Smoke::mf_static, 290, 230},	//248 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {20, 456, 46, 1, Smoke::mf_static, 374, 231},	//249 QGlobalSpace::qIntCast(double)
    {20, 377, 31, 2, Smoke::mf_static, 5, 232},	//250 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {20, 413, 585, 2, Smoke::mf_static, 385, 233},	//251 QGlobalSpace::qChecksum(const char*, unsigned int)
    {20, 379, 588, 2, Smoke::mf_static, 53, 234},	//252 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {20, 373, 591, 2, Smoke::mf_static, 16, 235},	//253 QGlobalSpace::operator>>(QDataStream&, QIcon&)
    {20, 350, 594, 2, Smoke::mf_static, 16, 236},	//254 QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    {20, 331, 368, 2, Smoke::mf_static, 184, 237},	//255 QGlobalSpace::operator*(const QTransform&, double)
    {20, 379, 597, 2, Smoke::mf_static, 75, 238},	//256 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {20, 379, 600, 2, Smoke::mf_static, 54, 239},	//257 QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    {20, 346, 377, 2, Smoke::mf_static, 290, 240},	//258 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {20, 350, 603, 2, Smoke::mf_static, 19, 241},	//259 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {20, 522, 606, 1, Smoke::mf_static, 9, 242},	//260 QGlobalSpace::qgetenv(const char*)
    {20, 379, 608, 2, Smoke::mf_static, 75, 243},	//261 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    {20, 324, 492, 2, Smoke::mf_static, 290, 244},	//262 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {20, 373, 611, 2, Smoke::mf_static, 178, 245},	//263 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {20, 324, 347, 2, Smoke::mf_static, 290, 246},	//264 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {20, 395, 46, 1, Smoke::mf_static, 372, 247},	//265 QGlobalSpace::qAcos(double)
    {20, 379, 614, 2, Smoke::mf_static, 42, 248},	//266 QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    {20, 365, 377, 2, Smoke::mf_static, 290, 249},	//267 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {20, 379, 617, 2, Smoke::mf_static, 49, 250},	//268 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    {20, 373, 620, 2, Smoke::mf_static, 16, 251},	//269 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {20, 350, 623, 2, Smoke::mf_static, 19, 252},	//270 QGlobalSpace::operator<<(QDebug, const QSqlDatabase&)
    {20, 350, 626, 2, Smoke::mf_static, 16, 253},	//271 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {20, 379, 629, 2, Smoke::mf_static, 34, 254},	//272 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {20, 350, 632, 2, Smoke::mf_static, 19, 255},	//273 QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    {20, 544, 635, 3, Smoke::mf_static, 292, 256},	//274 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {20, 373, 639, 2, Smoke::mf_static, 16, 257},	//275 QGlobalSpace::operator>>(QDataStream&, QBrush&)
    {20, 350, 642, 2, Smoke::mf_static, 16, 258},	//276 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {20, 450, 645, 1, Smoke::mf_static, 382, 259},	//277 QGlobalSpace::qHash(const QUrl&)
    {20, 458, 260, 1, Smoke::mf_static, 290, 260},	//278 QGlobalSpace::qIsFinite(float)
    {20, 559, 647, 1, Smoke::mf_static, 161, 261},	//279 QGlobalSpace::qt_error_string(int)
    {20, 559, 0, 0, Smoke::mf_static, 161, 262},	//280 QGlobalSpace::qt_error_string()
    {20, 331, 649, 2, Smoke::mf_static, 327, 263},	//281 QGlobalSpace::operator*(const QPoint&, float)
    {20, 379, 652, 2, Smoke::mf_static, 75, 264},	//282 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {20, 481, 655, 2, Smoke::mf_static, 389, 265},	//283 QGlobalSpace::qRealloc(void*, size_t)
    {20, 335, 658, 2, Smoke::mf_static, 354, 266},	//284 QGlobalSpace::operator+(const QString&, const QString&)
    {20, 379, 661, 2, Smoke::mf_static, 75, 267},	//285 QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    {20, 555, 664, 4, Smoke::mf_static, 0, 268},	//286 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {20, 324, 280, 2, Smoke::mf_static, 290, 269},	//287 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {20, 324, 669, 2, Smoke::mf_static, 290, 270},	//288 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {20, 379, 672, 2, Smoke::mf_static, 75, 271},	//289 QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    {20, 373, 675, 2, Smoke::mf_static, 16, 272},	//290 QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    {20, 365, 142, 2, Smoke::mf_static, 290, 273},	//291 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {20, 495, 46, 1, Smoke::mf_static, 374, 274},	//292 QGlobalSpace::qRound(double)
    {20, 360, 567, 2, Smoke::mf_static, 290, 275},	//293 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {20, 350, 678, 2, Smoke::mf_static, 19, 276},	//294 QGlobalSpace::operator<<(QDebug, const QSqlRecord&)
    {20, 379, 31, 2, Smoke::mf_static, 5, 277},	//295 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {20, 360, 681, 2, Smoke::mf_static, 290, 278},	//296 QGlobalSpace::operator==(const char*, const QStringRef&)
    {20, 335, 347, 2, Smoke::mf_static, 295, 279},	//297 QGlobalSpace::operator+(const char*, const QByteArray&)
    {20, 373, 684, 2, Smoke::mf_static, 16, 280},	//298 QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    {20, 379, 687, 2, Smoke::mf_static, 75, 281},	//299 QGlobalSpace::operator|(Qt::MouseButton, int)
    {20, 379, 690, 2, Smoke::mf_static, 46, 282},	//300 QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    {20, 354, 377, 2, Smoke::mf_static, 290, 283},	//301 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {20, 373, 693, 2, Smoke::mf_static, 16, 284},	//302 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {20, 379, 696, 2, Smoke::mf_static, 32, 285},	//303 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {20, 379, 699, 2, Smoke::mf_static, 60, 286},	//304 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {20, 460, 137, 1, Smoke::mf_static, 290, 287},	//305 QGlobalSpace::qIsGray(unsigned int)
    {20, 379, 702, 2, Smoke::mf_static, 52, 288},	//306 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {20, 373, 705, 2, Smoke::mf_static, 16, 289},	//307 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {20, 360, 389, 2, Smoke::mf_static, 290, 290},	//308 QGlobalSpace::operator==(QChar, QChar)
    {20, 379, 708, 2, Smoke::mf_static, 66, 291},	//309 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {20, 324, 579, 2, Smoke::mf_static, 290, 292},	//310 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {20, 331, 711, 2, Smoke::mf_static, 81, 293},	//311 QGlobalSpace::operator*(const QLineF&, const QTransform&)
    {20, 324, 714, 2, Smoke::mf_static, 290, 294},	//312 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {20, 450, 717, 1, Smoke::mf_static, 382, 295},	//313 QGlobalSpace::qHash(signed char)
    {20, 350, 719, 2, Smoke::mf_static, 16, 296},	//314 QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    {20, 350, 722, 2, Smoke::mf_static, 16, 297},	//315 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {20, 379, 725, 2, Smoke::mf_static, 67, 298},	//316 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {20, 509, 46, 1, Smoke::mf_static, 372, 299},	//317 QGlobalSpace::qSqrt(double)
    {20, 350, 728, 2, Smoke::mf_static, 16, 300},	//318 QGlobalSpace::operator<<(QDataStream&, const QFont&)
    {20, 529, 731, 2, Smoke::mf_static, 374, 301},	//319 QGlobalSpace::qstrcmp(const char*, const char*)
    {20, 379, 734, 2, Smoke::mf_static, 43, 302},	//320 QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    {20, 350, 737, 2, Smoke::mf_static, 16, 303},	//321 QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    {20, 324, 145, 2, Smoke::mf_static, 290, 304},	//322 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {20, 324, 389, 2, Smoke::mf_static, 290, 305},	//323 QGlobalSpace::operator!=(QChar, QChar)
    {20, 379, 740, 2, Smoke::mf_static, 37, 306},	//324 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {20, 548, 585, 2, Smoke::mf_static, 382, 307},	//325 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {20, 491, 295, 3, Smoke::mf_static, 382, 308},	//326 QGlobalSpace::qRgb(int, int, int)
    {20, 434, 46, 1, Smoke::mf_static, 374, 309},	//327 QGlobalSpace::qFloor(double)
    {20, 379, 743, 2, Smoke::mf_static, 69, 310},	//328 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {20, 350, 746, 2, Smoke::mf_static, 19, 311},	//329 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {20, 379, 749, 2, Smoke::mf_static, 53, 312},	//330 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {20, 360, 139, 2, Smoke::mf_static, 290, 313},	//331 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {20, 373, 752, 2, Smoke::mf_static, 16, 314},	//332 QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    {20, 373, 755, 2, Smoke::mf_static, 16, 315},	//333 QGlobalSpace::operator>>(QDataStream&, QPalette&)
    {20, 350, 758, 2, Smoke::mf_static, 16, 316},	//334 QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    {20, 360, 377, 2, Smoke::mf_static, 290, 317},	//335 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {20, 324, 761, 2, Smoke::mf_static, 290, 318},	//336 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {20, 331, 764, 2, Smoke::mf_static, 338, 319},	//337 QGlobalSpace::operator*(double, const QSize&)
    {20, 379, 767, 2, Smoke::mf_static, 34, 320},	//338 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {20, 450, 5, 1, Smoke::mf_static, 382, 321},	//339 QGlobalSpace::qHash(const QModelIndex&)
    {20, 379, 770, 2, Smoke::mf_static, 43, 322},	//340 QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    {20, 350, 773, 2, Smoke::mf_static, 19, 323},	//341 QGlobalSpace::operator<<(QDebug, const QLine&)
    {20, 379, 776, 2, Smoke::mf_static, 28, 324},	//342 QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    {20, 489, 550, 1, Smoke::mf_static, 0, 325},	//343 QGlobalSpace::qRemovePostRoutine(void(*)())
    {20, 350, 779, 2, Smoke::mf_static, 16, 326},	//344 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {20, 440, 782, 2, Smoke::mf_static, 290, 327},	//345 QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    {20, 379, 785, 2, Smoke::mf_static, 50, 328},	//346 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    {20, 432, 606, 1, Smoke::mf_static, 369, 329},	//347 QGlobalSpace::qFlagLocation(const char*)
    {20, 474, 788, 3, Smoke::mf_static, 389, 330},	//348 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {20, 369, 280, 2, Smoke::mf_static, 290, 331},	//349 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {20, 331, 792, 2, Smoke::mf_static, 327, 332},	//350 QGlobalSpace::operator*(double, const QPoint&)
    {20, 464, 46, 1, Smoke::mf_static, 290, 333},	//351 QGlobalSpace::qIsNaN(double)
    {20, 350, 795, 2, Smoke::mf_static, 19, 334},	//352 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {20, 450, 798, 1, Smoke::mf_static, 382, 335},	//353 QGlobalSpace::qHash(short)
    {20, 453, 0, 0, Smoke::mf_static, 372, 336},	//354 QGlobalSpace::qInf()
    {20, 350, 800, 2, Smoke::mf_static, 19, 337},	//355 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {20, 350, 803, 2, Smoke::mf_static, 16, 338},	//356 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {20, 350, 806, 2, Smoke::mf_static, 16, 339},	//357 QGlobalSpace::operator<<(QDataStream&, const QImage&)
    {20, 335, 809, 2, Smoke::mf_static, 295, 340},	//358 QGlobalSpace::operator+(const QByteArray&, char)
    {20, 350, 812, 2, Smoke::mf_static, 19, 341},	//359 QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    {20, 344, 428, 2, Smoke::mf_static, 329, 342},	//360 QGlobalSpace::operator/(const QPointF&, double)
    {20, 515, 402, 1, Smoke::mf_static, 9, 343},	//361 QGlobalSpace::qUncompress(const QByteArray&)
    {20, 369, 389, 2, Smoke::mf_static, 290, 344},	//362 QGlobalSpace::operator>=(QChar, QChar)
    {20, 354, 142, 2, Smoke::mf_static, 290, 345},	//363 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {20, 504, 647, 1, Smoke::mf_static, 181, 346},	//364 QGlobalSpace::qSetRealNumberPrecision(int)
    {20, 350, 815, 2, Smoke::mf_static, 19, 347},	//365 QGlobalSpace::operator<<(QDebug, const QObject*)
    {20, 507, 46, 1, Smoke::mf_static, 372, 348},	//366 QGlobalSpace::qSin(double)
    {20, 402, 46, 1, Smoke::mf_static, 372, 349},	//367 QGlobalSpace::qAsin(double)
    {20, 538, 731, 2, Smoke::mf_static, 374, 350},	//368 QGlobalSpace::qstricmp(const char*, const char*)
    {20, 440, 818, 2, Smoke::mf_static, 290, 351},	//369 QGlobalSpace::qFuzzyCompare(float, float)
    {20, 373, 821, 2, Smoke::mf_static, 16, 352},	//370 QGlobalSpace::operator>>(QDataStream&, QFont&)
    {20, 379, 824, 2, Smoke::mf_static, 31, 353},	//371 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {20, 576, 827, 4, Smoke::mf_static, 374, 354},	//372 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {20, 379, 832, 2, Smoke::mf_static, 41, 355},	//373 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {20, 350, 835, 2, Smoke::mf_static, 16, 356},	//374 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {20, 567, 0, 0, Smoke::mf_static, 0, 357},	//375 QGlobalSpace::qt_noop()
    {20, 379, 838, 2, Smoke::mf_static, 36, 358},	//376 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    {20, 365, 347, 2, Smoke::mf_static, 290, 359},	//377 QGlobalSpace::operator>(const char*, const QByteArray&)
    {20, 373, 841, 2, Smoke::mf_static, 16, 360},	//378 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {20, 500, 647, 1, Smoke::mf_static, 181, 361},	//379 QGlobalSpace::qSetFieldWidth(int)
    {20, 379, 844, 2, Smoke::mf_static, 51, 362},	//380 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {20, 350, 847, 2, Smoke::mf_static, 19, 363},	//381 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {20, 350, 850, 2, Smoke::mf_static, 16, 364},	//382 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {20, 360, 761, 2, Smoke::mf_static, 290, 365},	//383 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {20, 324, 853, 2, Smoke::mf_static, 290, 366},	//384 QGlobalSpace::operator!=(bool, QBool)
    {20, 450, 856, 1, Smoke::mf_static, 382, 367},	//385 QGlobalSpace::qHash(unsigned long)
    {20, 350, 858, 2, Smoke::mf_static, 19, 368},	//386 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {20, 331, 861, 2, Smoke::mf_static, 104, 369},	//387 QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    {20, 324, 864, 2, Smoke::mf_static, 290, 370},	//388 QGlobalSpace::operator!=(QBool, bool)
    {20, 379, 867, 2, Smoke::mf_static, 75, 371},	//389 QGlobalSpace::operator|(Qt::WindowState, int)
    {20, 379, 870, 2, Smoke::mf_static, 50, 372},	//390 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    {20, 340, 567, 2, Smoke::mf_static, 327, 373},	//391 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {20, 468, 46, 1, Smoke::mf_static, 372, 374},	//392 QGlobalSpace::qLn(double)
    {20, 373, 873, 2, Smoke::mf_static, 16, 375},	//393 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {20, 540, 606, 1, Smoke::mf_static, 382, 376},	//394 QGlobalSpace::qstrlen(const char*)
    {20, 335, 280, 2, Smoke::mf_static, 295, 377},	//395 QGlobalSpace::operator+(const QByteArray&, const char*)
    {20, 350, 876, 2, Smoke::mf_static, 16, 378},	//396 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {20, 324, 139, 2, Smoke::mf_static, 290, 379},	//397 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {20, 354, 347, 2, Smoke::mf_static, 290, 380},	//398 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {20, 350, 879, 2, Smoke::mf_static, 16, 381},	//399 QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    {20, 379, 882, 2, Smoke::mf_static, 56, 382},	//400 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {20, 350, 885, 2, Smoke::mf_static, 19, 383},	//401 QGlobalSpace::operator<<(QDebug, const QMatrix&)
    {20, 360, 669, 2, Smoke::mf_static, 290, 384},	//402 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {20, 379, 888, 2, Smoke::mf_static, 38, 385},	//403 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {20, 350, 891, 2, Smoke::mf_static, 16, 386},	//404 QGlobalSpace::operator<<(QDataStream&, const QColor&)
    {20, 379, 894, 2, Smoke::mf_static, 70, 387},	//405 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {20, 331, 897, 2, Smoke::mf_static, 338, 388},	//406 QGlobalSpace::operator*(const QSize&, double)
    {20, 360, 900, 2, Smoke::mf_static, 290, 389},	//407 QGlobalSpace::operator==(QString::Null, const QString&)
    {20, 350, 903, 2, Smoke::mf_static, 19, 390},	//408 QGlobalSpace::operator<<(QDebug, const QBrush&)
    {20, 379, 906, 2, Smoke::mf_static, 31, 391},	//409 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {20, 379, 909, 2, Smoke::mf_static, 60, 392},	//410 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {20, 373, 912, 2, Smoke::mf_static, 16, 393},	//411 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {20, 350, 915, 2, Smoke::mf_static, 19, 394},	//412 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {20, 360, 280, 2, Smoke::mf_static, 290, 395},	//413 QGlobalSpace::operator==(const QByteArray&, const char*)
    {20, 570, 918, 5, Smoke::mf_static, 0, 396},	//414 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {20, 379, 924, 2, Smoke::mf_static, 45, 397},	//415 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    {20, 373, 927, 2, Smoke::mf_static, 16, 398},	//416 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {20, 350, 930, 2, Smoke::mf_static, 16, 399},	//417 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {20, 373, 933, 2, Smoke::mf_static, 16, 400},	//418 QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    {20, 365, 280, 2, Smoke::mf_static, 290, 401},	//419 QGlobalSpace::operator>(const QByteArray&, const char*)
    {20, 335, 567, 2, Smoke::mf_static, 327, 402},	//420 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {20, 350, 936, 2, Smoke::mf_static, 16, 403},	//421 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {20, 436, 472, 1, Smoke::mf_static, 0, 404},	//422 QGlobalSpace::qFree(void*)
    {20, 354, 389, 2, Smoke::mf_static, 290, 405},	//423 QGlobalSpace::operator<=(QChar, QChar)
    {20, 350, 939, 2, Smoke::mf_static, 178, 406},	//424 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {20, 450, 137, 1, Smoke::mf_static, 382, 407},	//425 QGlobalSpace::qHash(unsigned int)
    {20, 331, 942, 2, Smoke::mf_static, 111, 408},	//426 QGlobalSpace::operator*(const QRegion&, const QTransform&)
    {20, 324, 900, 2, Smoke::mf_static, 290, 409},	//427 QGlobalSpace::operator!=(QString::Null, const QString&)
    {20, 497, 46, 1, Smoke::mf_static, 376, 410},	//428 QGlobalSpace::qRound64(double)
    {20, 379, 945, 2, Smoke::mf_static, 41, 411},	//429 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {20, 472, 948, 2, Smoke::mf_static, 389, 412},	//430 QGlobalSpace::qMallocAligned(size_t, size_t)
    {20, 379, 951, 2, Smoke::mf_static, 75, 413},	//431 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {20, 324, 477, 2, Smoke::mf_static, 290, 414},	//432 QGlobalSpace::operator!=(const QString&, QString::Null)
    {20, 415, 954, 3, Smoke::mf_static, 9, 415},	//433 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {20, 415, 958, 2, Smoke::mf_static, 9, 416},	//434 QGlobalSpace::qCompress(const unsigned char*, int)
    {20, 379, 961, 2, Smoke::mf_static, 75, 417},	//435 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {20, 331, 964, 2, Smoke::mf_static, 327, 418},	//436 QGlobalSpace::operator*(int, const QPoint&)
    {20, 350, 967, 2, Smoke::mf_static, 19, 419},	//437 QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    {20, 536, 606, 1, Smoke::mf_static, 292, 420},	//438 QGlobalSpace::qstrdup(const char*)
    {20, 379, 970, 2, Smoke::mf_static, 58, 421},	//439 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {20, 331, 973, 2, Smoke::mf_static, 106, 422},	//440 QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    {20, 423, 0, 0, Smoke::mf_static, 19, 423},	//441 QGlobalSpace::qDebug()
    {20, 340, 976, 1, Smoke::mf_static, 327, 424},	//442 QGlobalSpace::operator-(const QPoint&)
    {20, 373, 978, 2, Smoke::mf_static, 16, 425},	//443 QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    {20, 379, 981, 2, Smoke::mf_static, 40, 426},	//444 QGlobalSpace::operator|(QSql::ParamTypeFlag, QFlags<QSql::ParamTypeFlag>)
    {20, 529, 347, 2, Smoke::mf_static, 374, 427},	//445 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {20, 513, 46, 1, Smoke::mf_static, 372, 428},	//446 QGlobalSpace::qTan(double)
    {20, 373, 984, 2, Smoke::mf_static, 16, 429},	//447 QGlobalSpace::operator>>(QDataStream&, QString&)
    {20, 360, 142, 2, Smoke::mf_static, 290, 430},	//448 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {20, 379, 987, 2, Smoke::mf_static, 36, 431},	//449 QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    {20, 350, 990, 2, Smoke::mf_static, 16, 432},	//450 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {20, 450, 647, 1, Smoke::mf_static, 382, 433},	//451 QGlobalSpace::qHash(int)
    {20, 340, 365, 2, Smoke::mf_static, 329, 434},	//452 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {20, 350, 993, 2, Smoke::mf_static, 16, 435},	//453 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {20, 373, 996, 2, Smoke::mf_static, 16, 436},	//454 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {20, 335, 368, 2, Smoke::mf_static, 184, 437},	//455 QGlobalSpace::operator+(const QTransform&, double)
    {20, 379, 999, 2, Smoke::mf_static, 42, 438},	//456 QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    {20, 450, 1002, 1, Smoke::mf_static, 382, 439},	//457 QGlobalSpace::qHash(const QItemSelectionRange&)
    {20, 379, 1004, 2, Smoke::mf_static, 66, 440},	//458 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {20, 478, 353, 2, Smoke::mf_static, 372, 441},	//459 QGlobalSpace::qPow(double, double)
    {20, 360, 492, 2, Smoke::mf_static, 290, 442},	//460 QGlobalSpace::operator==(const QStringRef&, const char*)
    {20, 324, 681, 2, Smoke::mf_static, 290, 443},	//461 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {20, 373, 1007, 2, Smoke::mf_static, 16, 444},	//462 QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    {20, 335, 142, 2, Smoke::mf_static, 295, 445},	//463 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {20, 379, 1010, 2, Smoke::mf_static, 33, 446},	//464 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {20, 373, 1013, 2, Smoke::mf_static, 16, 447},	//465 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {20, 379, 1016, 2, Smoke::mf_static, 75, 448},	//466 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {20, 561, 1019, 2, Smoke::mf_static, 0, 449},	//467 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {20, 350, 1022, 2, Smoke::mf_static, 19, 450},	//468 QGlobalSpace::operator<<(QDebug, const QSqlError&)
    {20, 379, 1025, 2, Smoke::mf_static, 75, 451},	//469 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {20, 379, 1028, 2, Smoke::mf_static, 44, 452},	//470 QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    {20, 350, 1031, 2, Smoke::mf_static, 19, 453},	//471 QGlobalSpace::operator<<(QDebug, const QRect&)
    {20, 428, 46, 1, Smoke::mf_static, 372, 454},	//472 QGlobalSpace::qFastCos(double)
    {20, 350, 1034, 2, Smoke::mf_static, 16, 455},	//473 QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    {20, 350, 1037, 2, Smoke::mf_static, 16, 456},	//474 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {20, 379, 1040, 2, Smoke::mf_static, 75, 457},	//475 QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    {20, 344, 897, 2, Smoke::mf_static, 338, 458},	//476 QGlobalSpace::operator/(const QSize&, double)
    {20, 373, 1043, 2, Smoke::mf_static, 16, 459},	//477 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {20, 373, 1046, 2, Smoke::mf_static, 16, 460},	//478 QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    {20, 360, 853, 2, Smoke::mf_static, 290, 461},	//479 QGlobalSpace::operator==(bool, QBool)
    {20, 379, 1049, 2, Smoke::mf_static, 68, 462},	//480 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {20, 379, 1052, 2, Smoke::mf_static, 75, 463},	//481 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {20, 331, 1055, 2, Smoke::mf_static, 100, 464},	//482 QGlobalSpace::operator*(const QPoint&, const QTransform&)
    {20, 379, 1058, 2, Smoke::mf_static, 75, 465},	//483 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    {20, 379, 1061, 2, Smoke::mf_static, 48, 466},	//484 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    {20, 450, 1064, 1, Smoke::mf_static, 382, 467},	//485 QGlobalSpace::qHash(char)
    {20, 350, 1066, 2, Smoke::mf_static, 16, 468},	//486 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {20, 409, 137, 1, Smoke::mf_static, 374, 469},	//487 QGlobalSpace::qBlue(unsigned int)
    {20, 373, 1069, 2, Smoke::mf_static, 16, 470},	//488 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {20, 324, 365, 2, Smoke::mf_static, 290, 471},	//489 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {20, 458, 46, 1, Smoke::mf_static, 290, 472},	//490 QGlobalSpace::qIsFinite(double)
    {20, 331, 1072, 2, Smoke::mf_static, 327, 473},	//491 QGlobalSpace::operator*(const QPoint&, int)
    {20, 379, 1075, 2, Smoke::mf_static, 59, 474},	//492 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {20, 340, 96, 2, Smoke::mf_static, 338, 475},	//493 QGlobalSpace::operator-(const QSize&, const QSize&)
    {20, 499, 0, 0, Smoke::mf_static, 372, 476},	//494 QGlobalSpace::qSNaN()
    {20, 379, 1078, 2, Smoke::mf_static, 45, 477},	//495 QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    {20, 443, 260, 1, Smoke::mf_static, 290, 478},	//496 QGlobalSpace::qFuzzyIsNull(float)
    {20, 379, 1081, 2, Smoke::mf_static, 57, 479},	//497 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {20, 515, 958, 2, Smoke::mf_static, 9, 480},	//498 QGlobalSpace::qUncompress(const unsigned char*, int)
    {20, 379, 1084, 2, Smoke::mf_static, 57, 481},	//499 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {20, 379, 1087, 2, Smoke::mf_static, 75, 482},	//500 QGlobalSpace::operator|(Qt::Orientation, int)
    {20, 430, 46, 1, Smoke::mf_static, 372, 483},	//501 QGlobalSpace::qFastSin(double)
    {20, 350, 1090, 2, Smoke::mf_static, 19, 484},	//502 QGlobalSpace::operator<<(QDebug, const QDir&)
    {20, 335, 365, 2, Smoke::mf_static, 329, 485},	//503 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {20, 331, 1093, 2, Smoke::mf_static, 111, 486},	//504 QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    {20, 360, 864, 2, Smoke::mf_static, 290, 487},	//505 QGlobalSpace::operator==(QBool, bool)
    {20, 360, 93, 2, Smoke::mf_static, 290, 488},	//506 QGlobalSpace::operator==(const QRect&, const QRect&)
    {20, 350, 1096, 2, Smoke::mf_static, 19, 489},	//507 QGlobalSpace::operator<<(QDebug, const QRegion&)
    {20, 331, 1099, 2, Smoke::mf_static, 327, 490},	//508 QGlobalSpace::operator*(float, const QPoint&)
    {20, 550, 413, 2, Smoke::mf_static, 161, 491},	//509 QGlobalSpace::qtTrId(const char*, int)
    {20, 550, 606, 1, Smoke::mf_static, 161, 492},	//510 QGlobalSpace::qtTrId(const char*)
    {20, 373, 1102, 2, Smoke::mf_static, 16, 493},	//511 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {20, 379, 1105, 2, Smoke::mf_static, 37, 494},	//512 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {20, 335, 1108, 2, Smoke::mf_static, 354, 495},	//513 QGlobalSpace::operator+(const QString&, QChar)
    {20, 408, 0, 0, Smoke::mf_static, 0, 496},	//514 QGlobalSpace::qBadAlloc()
    {20, 324, 171, 2, Smoke::mf_static, 290, 497},	//515 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {20, 493, 1111, 4, Smoke::mf_static, 382, 498},	//516 QGlobalSpace::qRgba(int, int, int, int)
    {20, 379, 1116, 2, Smoke::mf_static, 65, 499},	//517 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {20, 379, 1119, 2, Smoke::mf_static, 48, 500},	//518 QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    {20, 324, 157, 2, Smoke::mf_static, 290, 501},	//519 QGlobalSpace::operator!=(QBool, QBool)
    {20, 350, 611, 2, Smoke::mf_static, 178, 502},	//520 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {20, 470, 1122, 1, Smoke::mf_static, 389, 503},	//521 QGlobalSpace::qMalloc(size_t)
    {20, 350, 1124, 2, Smoke::mf_static, 19, 504},	//522 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {20, 360, 714, 2, Smoke::mf_static, 290, 505},	//523 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {20, 340, 368, 2, Smoke::mf_static, 184, 506},	//524 QGlobalSpace::operator-(const QTransform&, double)
    {20, 379, 1127, 2, Smoke::mf_static, 38, 507},	//525 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {20, 350, 1130, 2, Smoke::mf_static, 16, 508},	//526 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {20, 103, 0, 0, Smoke::mf_static|Smoke::mf_enum, 375, 509},	//527 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {20, 106, 0, 0, Smoke::mf_static|Smoke::mf_enum, 375, 510},	//528 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {20, 107, 0, 0, Smoke::mf_static|Smoke::mf_enum, 375, 511},	//529 QGlobalSpace::Q_STATIC_TYPE (enum)
    {20, 105, 0, 0, Smoke::mf_static|Smoke::mf_enum, 375, 512},	//530 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {20, 104, 0, 0, Smoke::mf_static|Smoke::mf_enum, 375, 513},	//531 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {20, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 288, 514},	//532 QGlobalSpace::LicensedXml (enum)
    {20, 109, 0, 0, Smoke::mf_static|Smoke::mf_enum, 270, 515},	//533 QGlobalSpace::QtDebugMsg (enum)
    {20, 112, 0, 0, Smoke::mf_static|Smoke::mf_enum, 270, 516},	//534 QGlobalSpace::QtWarningMsg (enum)
    {20, 108, 0, 0, Smoke::mf_static|Smoke::mf_enum, 270, 517},	//535 QGlobalSpace::QtCriticalMsg (enum)
    {20, 110, 0, 0, Smoke::mf_static|Smoke::mf_enum, 270, 518},	//536 QGlobalSpace::QtFatalMsg (enum)
    {20, 111, 0, 0, Smoke::mf_static|Smoke::mf_enum, 270, 519},	//537 QGlobalSpace::QtSystemMsg (enum)
    {20, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 279, 520},	//538 QGlobalSpace::LicensedOpenGL (enum)
    {20, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 282, 521},	//539 QGlobalSpace::LicensedQt3Support (enum)
    {20, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 280, 522},	//540 QGlobalSpace::LicensedOpenVG (enum)
    {20, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 278, 523},	//541 QGlobalSpace::LicensedNetwork (enum)
    {20, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 285, 524},	//542 QGlobalSpace::LicensedSql (enum)
    {20, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 272, 525},	//543 QGlobalSpace::LicensedCore (enum)
    {20, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 286, 526},	//544 QGlobalSpace::LicensedSvg (enum)
    {20, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 289, 527},	//545 QGlobalSpace::LicensedXmlPatterns (enum)
    {20, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 275, 528},	//546 QGlobalSpace::LicensedGui (enum)
    {20, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 274, 529},	//547 QGlobalSpace::LicensedDeclarative (enum)
    {20, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 271, 530},	//548 QGlobalSpace::LicensedActiveQt (enum)
    {20, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 273, 531},	//549 QGlobalSpace::LicensedDBus (enum)
    {20, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 287, 532},	//550 QGlobalSpace::LicensedTest (enum)
    {20, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 284, 533},	//551 QGlobalSpace::LicensedScriptTools (enum)
    {20, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 281, 534},	//552 QGlobalSpace::LicensedQt3SupportLight (enum)
    {20, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 283, 535},	//553 QGlobalSpace::LicensedScript (enum)
    {20, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 277, 536},	//554 QGlobalSpace::LicensedMultimedia (enum)
    {20, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 276, 537},	//555 QGlobalSpace::LicensedHelp (enum)
    {25, 306, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 319, 0},	//556 QItemDelegate::metaObject() const
    {25, 565, 606, 1, Smoke::mf_virtual, 389, 0},	//557 QItemDelegate::qt_metacast(const char*)
    {25, 563, 1133, 3, Smoke::mf_virtual, 374, 0},	//558 QItemDelegate::qt_metacall(QMetaObject::Call, int, void**)
    {25, 383, 1137, 3, Smoke::mf_const|Smoke::mf_virtual, 0, 0},	//559 QItemDelegate::paint(QPainter*, const QStyleOptionViewItem&, const QModelIndex&) const
    {25, 717, 1141, 2, Smoke::mf_const|Smoke::mf_virtual, 113, 0},	//560 QItemDelegate::sizeHint(const QStyleOptionViewItem&, const QModelIndex&) const
    {25, 757, 1144, 3, Smoke::mf_const|Smoke::mf_virtual, 0, 0},	//561 QItemDelegate::updateEditorGeometry(QWidget*, const QStyleOptionViewItem&, const QModelIndex&) const
    {25, 209, 1148, 4, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//562 QItemDelegate::drawDisplay(QPainter*, const QStyleOptionViewItem&, const QRect&, const QString&) const
    {25, 208, 1153, 4, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//563 QItemDelegate::drawDecoration(QPainter*, const QStyleOptionViewItem&, const QRect&, const QPixmap&) const
    {25, 210, 1158, 3, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//564 QItemDelegate::drawFocus(QPainter*, const QStyleOptionViewItem&, const QRect&) const
    {25, 207, 1162, 4, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//565 QItemDelegate::drawCheck(QPainter*, const QStyleOptionViewItem&, const QRect&, Qt::CheckState) const
    {25, 221, 1167, 2, Smoke::mf_protected|Smoke::mf_virtual, 290, 0},	//566 QItemDelegate::eventFilter(QObject*, QEvent*)
    {25, 217, 1170, 4, Smoke::mf_protected|Smoke::mf_virtual, 290, 0},	//567 QItemDelegate::editorEvent(QEvent*, QAbstractItemModel*, const QStyleOptionViewItem&, const QModelIndex&)
    {37, 220, 1175, 1, Smoke::mf_virtual, 290, 0},	//568 QObject::event(QEvent*)
    {37, 221, 1167, 2, Smoke::mf_virtual, 290, 0},	//569 QObject::eventFilter(QObject*, QEvent*)
    {37, 741, 1177, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//570 QObject::timerEvent(QTimerEvent*)
    {37, 166, 1179, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//571 QObject::childEvent(QChildEvent*)
    {37, 190, 1175, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//572 QObject::customEvent(QEvent*)
    {37, 176, 606, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//573 QObject::connectNotify(const char*)
    {37, 205, 606, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//574 QObject::disconnectNotify(const char*)
    {54, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 119, 1},	//575 QSql::LowPrecisionInt32 (enum)
    {54, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 119, 2},	//576 QSql::LowPrecisionInt64 (enum)
    {54, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 119, 3},	//577 QSql::LowPrecisionDouble (enum)
    {54, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 119, 4},	//578 QSql::HighPrecision (enum)
    {54, 121, 0, 0, Smoke::mf_static|Smoke::mf_enum, 121, 5},	//579 QSql::Tables (enum)
    {54, 119, 0, 0, Smoke::mf_static|Smoke::mf_enum, 121, 6},	//580 QSql::SystemTables (enum)
    {54, 130, 0, 0, Smoke::mf_static|Smoke::mf_enum, 121, 7},	//581 QSql::Views (enum)
    {54, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 121, 8},	//582 QSql::AllTables (enum)
    {54, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 120, 9},	//583 QSql::In (enum)
    {54, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 120, 10},	//584 QSql::Out (enum)
    {54, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 120, 11},	//585 QSql::InOut (enum)
    {54, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 120, 12},	//586 QSql::Binary (enum)
    {54, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 118, 13},	//587 QSql::BeforeFirstRow (enum)
    {54, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 118, 14},	//588 QSql::AfterLastRow (enum)
    {55, 57, 0, 0, Smoke::mf_ctor, 124, 1},	//589 QSqlDatabase::QSqlDatabase()
    {55, 57, 1181, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 124, 2},	//590 QSqlDatabase::QSqlDatabase(const QSqlDatabase&)
    {55, 358, 1181, 1, 0, 123, 3},	//591 QSqlDatabase::operator=(const QSqlDatabase&)
    {55, 317, 0, 0, 0, 290, 4},	//592 QSqlDatabase::open()
    {55, 317, 658, 2, 0, 290, 5},	//593 QSqlDatabase::open(const QString&, const QString&)
    {55, 171, 0, 0, 0, 0, 6},	//594 QSqlDatabase::close()
    {55, 293, 0, 0, Smoke::mf_const, 290, 7},	//595 QSqlDatabase::isOpen() const
    {55, 294, 0, 0, Smoke::mf_const, 290, 8},	//596 QSqlDatabase::isOpenError() const
    {55, 738, 1183, 1, Smoke::mf_const, 165, 9},	//597 QSqlDatabase::tables(QSql::TableType) const
    {55, 390, 229, 1, Smoke::mf_const, 140, 10},	//598 QSqlDatabase::primaryIndex(const QString&) const
    {55, 578, 229, 1, Smoke::mf_const, 148, 11},	//599 QSqlDatabase::record(const QString&) const
    {55, 222, 229, 1, Smoke::mf_const, 143, 12},	//600 QSqlDatabase::exec(const QString&) const
    {55, 301, 0, 0, Smoke::mf_const, 132, 13},	//601 QSqlDatabase::lastError() const
    {55, 297, 0, 0, Smoke::mf_const, 290, 14},	//602 QSqlDatabase::isValid() const
    {55, 750, 0, 0, 0, 290, 15},	//603 QSqlDatabase::transaction()
    {55, 174, 0, 0, 0, 290, 16},	//604 QSqlDatabase::commit()
    {55, 606, 0, 0, 0, 290, 17},	//605 QSqlDatabase::rollback()
    {55, 630, 229, 1, 0, 0, 18},	//606 QSqlDatabase::setDatabaseName(const QString&)
    {55, 711, 229, 1, 0, 0, 19},	//607 QSqlDatabase::setUserName(const QString&)
    {55, 679, 229, 1, 0, 0, 20},	//608 QSqlDatabase::setPassword(const QString&)
    {55, 656, 229, 1, 0, 0, 21},	//609 QSqlDatabase::setHostName(const QString&)
    {55, 681, 647, 1, 0, 0, 22},	//610 QSqlDatabase::setPort(int)
    {55, 623, 229, 1, 0, 0, 23},	//611 QSqlDatabase::setConnectOptions(const QString&)
    {55, 198, 0, 0, Smoke::mf_const, 161, 24},	//612 QSqlDatabase::databaseName() const
    {55, 760, 0, 0, Smoke::mf_const, 161, 25},	//613 QSqlDatabase::userName() const
    {55, 384, 0, 0, Smoke::mf_const, 161, 26},	//614 QSqlDatabase::password() const
    {55, 256, 0, 0, Smoke::mf_const, 161, 27},	//615 QSqlDatabase::hostName() const
    {55, 212, 0, 0, Smoke::mf_const, 161, 28},	//616 QSqlDatabase::driverName() const
    {55, 385, 0, 0, Smoke::mf_const, 374, 29},	//617 QSqlDatabase::port() const
    {55, 177, 0, 0, Smoke::mf_const, 161, 30},	//618 QSqlDatabase::connectOptions() const
    {55, 178, 0, 0, Smoke::mf_const, 161, 31},	//619 QSqlDatabase::connectionName() const
    {55, 673, 1185, 1, 0, 0, 32},	//620 QSqlDatabase::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy)
    {55, 316, 0, 0, Smoke::mf_const, 119, 33},	//621 QSqlDatabase::numericalPrecisionPolicy() const
    {55, 211, 0, 0, Smoke::mf_const, 125, 34},	//622 QSqlDatabase::driver() const
    {55, 135, 658, 2, Smoke::mf_static, 122, 35},	//623 QSqlDatabase::addDatabase(const QString&, const QString&)
    {55, 135, 1187, 2, Smoke::mf_static, 122, 36},	//624 QSqlDatabase::addDatabase(QSqlDriver*, const QString&)
    {55, 169, 1190, 2, Smoke::mf_static, 122, 37},	//625 QSqlDatabase::cloneDatabase(const QSqlDatabase&, const QString&)
    {55, 195, 1193, 2, Smoke::mf_static, 122, 38},	//626 QSqlDatabase::database(const QString&, bool)
    {55, 591, 229, 1, Smoke::mf_static, 0, 39},	//627 QSqlDatabase::removeDatabase(const QString&)
    {55, 180, 229, 1, Smoke::mf_static, 290, 40},	//628 QSqlDatabase::contains(const QString&)
    {55, 214, 0, 0, Smoke::mf_static, 165, 41},	//629 QSqlDatabase::drivers()
    {55, 179, 0, 0, Smoke::mf_static, 165, 42},	//630 QSqlDatabase::connectionNames()
    {55, 580, 1196, 2, Smoke::mf_static, 0, 43},	//631 QSqlDatabase::registerSqlDriver(const QString&, QSqlDriverCreatorBase*)
    {55, 281, 229, 1, Smoke::mf_static, 290, 44},	//632 QSqlDatabase::isDriverAvailable(const QString&)
    {55, 57, 229, 1, Smoke::mf_ctor|Smoke::mf_protected, 124, 45},	//633 QSqlDatabase::QSqlDatabase(const QString&)
    {55, 57, 1199, 1, Smoke::mf_ctor|Smoke::mf_protected, 124, 46},	//634 QSqlDatabase::QSqlDatabase(QSqlDriver*)
    {55, 738, 0, 0, Smoke::mf_const, 165, 47},	//635 QSqlDatabase::tables() const
    {55, 222, 0, 0, Smoke::mf_const, 143, 48},	//636 QSqlDatabase::exec() const
    {55, 623, 0, 0, 0, 0, 49},	//637 QSqlDatabase::setConnectOptions()
    {55, 135, 229, 1, Smoke::mf_static, 122, 50},	//638 QSqlDatabase::addDatabase(const QString&)
    {55, 135, 1199, 1, Smoke::mf_static, 122, 51},	//639 QSqlDatabase::addDatabase(QSqlDriver*)
    {55, 195, 0, 0, Smoke::mf_static, 122, 52},	//640 QSqlDatabase::database()
    {55, 195, 229, 1, Smoke::mf_static, 122, 53},	//641 QSqlDatabase::database(const QString&)
    {55, 180, 0, 0, Smoke::mf_static, 290, 54},	//642 QSqlDatabase::contains()
    {55, 200, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 369, 55},	//643 QSqlDatabase::defaultConnection() const
    {55, 634, 606, 1, Smoke::mf_static|Smoke::mf_attribute, 0, 56},	//644 QSqlDatabase::setDefaultConnection(const char*)
    {55, 765, 0, 0, Smoke::mf_dtor, 0, 57 },	//645 QSqlDatabase::~QSqlDatabase()
    {56, 306, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 319, 1},	//646 QSqlDriver::metaObject() const
    {56, 565, 606, 1, Smoke::mf_virtual, 389, 2},	//647 QSqlDriver::qt_metacast(const char*)
    {56, 742, 731, 2, Smoke::mf_static, 161, 3},	//648 QSqlDriver::tr(const char*, const char*)
    {56, 746, 731, 2, Smoke::mf_static, 161, 4},	//649 QSqlDriver::trUtf8(const char*, const char*)
    {56, 742, 39, 3, Smoke::mf_static, 161, 5},	//650 QSqlDriver::tr(const char*, const char*, int)
    {56, 746, 39, 3, Smoke::mf_static, 161, 6},	//651 QSqlDriver::trUtf8(const char*, const char*, int)
    {56, 563, 1133, 3, Smoke::mf_virtual, 374, 7},	//652 QSqlDriver::qt_metacall(QMetaObject::Call, int, void**)
    {56, 60, 1201, 1, Smoke::mf_ctor, 125, 8},	//653 QSqlDriver::QSqlDriver(QObject*)
    {56, 293, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 290, 9},	//654 QSqlDriver::isOpen() const
    {56, 294, 0, 0, Smoke::mf_const, 290, 10},	//655 QSqlDriver::isOpenError() const
    {56, 150, 0, 0, Smoke::mf_virtual, 290, 11},	//656 QSqlDriver::beginTransaction()
    {56, 175, 0, 0, Smoke::mf_virtual, 290, 12},	//657 QSqlDriver::commitTransaction()
    {56, 607, 0, 0, Smoke::mf_virtual, 290, 13},	//658 QSqlDriver::rollbackTransaction()
    {56, 738, 1183, 1, Smoke::mf_const|Smoke::mf_virtual, 165, 14},	//659 QSqlDriver::tables(QSql::TableType) const
    {56, 390, 229, 1, Smoke::mf_const|Smoke::mf_virtual, 140, 15},	//660 QSqlDriver::primaryIndex(const QString&) const
    {56, 578, 229, 1, Smoke::mf_const|Smoke::mf_virtual, 148, 16},	//661 QSqlDriver::record(const QString&) const
    {56, 246, 1203, 2, Smoke::mf_const|Smoke::mf_virtual, 161, 17},	//662 QSqlDriver::formatValue(const QSqlField&, bool) const
    {56, 218, 1206, 2, Smoke::mf_const|Smoke::mf_virtual, 161, 18},	//663 QSqlDriver::escapeIdentifier(const QString&, QSqlDriver::IdentifierType) const
    {56, 721, 1209, 4, Smoke::mf_const|Smoke::mf_virtual, 161, 19},	//664 QSqlDriver::sqlStatement(QSqlDriver::StatementType, const QString&, const QSqlRecord&, bool) const
    {56, 301, 0, 0, Smoke::mf_const, 132, 20},	//665 QSqlDriver::lastError() const
    {56, 249, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 189, 21},	//666 QSqlDriver::handle() const
    {56, 250, 1214, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 290, 22},	//667 QSqlDriver::hasFeature(QSqlDriver::DriverFeature) const [pure virtual]
    {56, 171, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 23},	//668 QSqlDriver::close() [pure virtual]
    {56, 188, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 156, 24},	//669 QSqlDriver::createResult() const [pure virtual]
    {56, 317, 1216, 6, Smoke::mf_virtual|Smoke::mf_purevirtual, 290, 25},	//670 QSqlDriver::open(const QString&, const QString&, const QString&, const QString&, int, const QString&) [pure virtual]
    {56, 730, 229, 1, 0, 290, 26},	//671 QSqlDriver::subscribeToNotification(const QString&)
    {56, 753, 229, 1, 0, 290, 27},	//672 QSqlDriver::unsubscribeFromNotification(const QString&)
    {56, 734, 0, 0, Smoke::mf_const, 165, 28},	//673 QSqlDriver::subscribedToNotifications() const
    {56, 287, 1206, 2, Smoke::mf_const, 290, 29},	//674 QSqlDriver::isIdentifierEscaped(const QString&, QSqlDriver::IdentifierType) const
    {56, 724, 1206, 2, Smoke::mf_const, 161, 30},	//675 QSqlDriver::stripDelimiters(const QString&, QSqlDriver::IdentifierType) const
    {56, 673, 1185, 1, 0, 0, 31},	//676 QSqlDriver::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy)
    {56, 316, 0, 0, Smoke::mf_const, 119, 32},	//677 QSqlDriver::numericalPrecisionPolicy() const
    {56, 312, 229, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 33},	//678 QSqlDriver::notification(const QString&)
    {56, 675, 1223, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 34},	//679 QSqlDriver::setOpen(bool)
    {56, 677, 1223, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 35},	//680 QSqlDriver::setOpenError(bool)
    {56, 661, 1225, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 36},	//681 QSqlDriver::setLastError(const QSqlError&)
    {56, 732, 229, 1, Smoke::mf_protected|Smoke::mf_slot, 290, 37},	//682 QSqlDriver::subscribeToNotificationImplementation(const QString&)
    {56, 755, 229, 1, Smoke::mf_protected|Smoke::mf_slot, 290, 38},	//683 QSqlDriver::unsubscribeFromNotificationImplementation(const QString&)
    {56, 735, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_slot, 165, 39},	//684 QSqlDriver::subscribedToNotificationsImplementation() const
    {56, 289, 1206, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_slot, 290, 40},	//685 QSqlDriver::isIdentifierEscapedImplementation(const QString&, QSqlDriver::IdentifierType) const
    {56, 726, 1206, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_slot, 161, 41},	//686 QSqlDriver::stripDelimitersImplementation(const QString&, QSqlDriver::IdentifierType) const
    {56, 742, 606, 1, Smoke::mf_static, 161, 42},	//687 QSqlDriver::tr(const char*)
    {56, 746, 606, 1, Smoke::mf_static, 161, 43},	//688 QSqlDriver::trUtf8(const char*)
    {56, 60, 0, 0, Smoke::mf_ctor, 125, 44},	//689 QSqlDriver::QSqlDriver()
    {56, 246, 1227, 1, Smoke::mf_const, 161, 45},	//690 QSqlDriver::formatValue(const QSqlField&) const
    {56, 317, 229, 1, 0, 290, 46},	//691 QSqlDriver::open(const QString&)
    {56, 317, 658, 2, 0, 290, 47},	//692 QSqlDriver::open(const QString&, const QString&)
    {56, 317, 1229, 3, 0, 290, 48},	//693 QSqlDriver::open(const QString&, const QString&, const QString&)
    {56, 317, 1233, 4, 0, 290, 49},	//694 QSqlDriver::open(const QString&, const QString&, const QString&, const QString&)
    {56, 317, 1238, 5, 0, 290, 50},	//695 QSqlDriver::open(const QString&, const QString&, const QString&, const QString&, int)
    {56, 723, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 318, 51},	//696 QSqlDriver::staticMetaObject() const
    {56, 123, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 52},	//697 QSqlDriver::Transactions (enum)
    {56, 113, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 53},	//698 QSqlDriver::QuerySize (enum)
    {56, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 54},	//699 QSqlDriver::BLOB (enum)
    {56, 124, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 55},	//700 QSqlDriver::Unicode (enum)
    {56, 56, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 56},	//701 QSqlDriver::PreparedQueries (enum)
    {56, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 57},	//702 QSqlDriver::NamedPlaceholders (enum)
    {56, 55, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 58},	//703 QSqlDriver::PositionalPlaceholders (enum)
    {56, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 59},	//704 QSqlDriver::LastInsertId (enum)
    {56, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 60},	//705 QSqlDriver::BatchOperations (enum)
    {56, 117, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 61},	//706 QSqlDriver::SimpleLocking (enum)
    {56, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 62},	//707 QSqlDriver::LowPrecisionNumbers (enum)
    {56, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 63},	//708 QSqlDriver::EventNotifications (enum)
    {56, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 64},	//709 QSqlDriver::FinishQuery (enum)
    {56, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 126, 65},	//710 QSqlDriver::MultipleResultSets (enum)
    {56, 131, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 66},	//711 QSqlDriver::WhereStatement (enum)
    {56, 115, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 67},	//712 QSqlDriver::SelectStatement (enum)
    {56, 127, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 68},	//713 QSqlDriver::UpdateStatement (enum)
    {56, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 69},	//714 QSqlDriver::InsertStatement (enum)
    {56, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 128, 70},	//715 QSqlDriver::DeleteStatement (enum)
    {56, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 127, 71},	//716 QSqlDriver::FieldName (enum)
    {56, 120, 0, 0, Smoke::mf_static|Smoke::mf_enum, 127, 72},	//717 QSqlDriver::TableName (enum)
    {56, 766, 0, 0, Smoke::mf_dtor, 0, 73 },	//718 QSqlDriver::~QSqlDriver()
    {57, 187, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 125, 1},	//719 QSqlDriverCreatorBase::createObject() const [pure virtual]
    {57, 62, 0, 0, Smoke::mf_ctor, 129, 2},	//720 QSqlDriverCreatorBase::QSqlDriverCreatorBase()
    {57, 62, 1244, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 129, 3},	//721 QSqlDriverCreatorBase::QSqlDriverCreatorBase(const QSqlDriverCreatorBase&)
    {57, 767, 0, 0, Smoke::mf_dtor, 0, 4 },	//722 QSqlDriverCreatorBase::~QSqlDriverCreatorBase()
    {58, 183, 229, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 125, 1},	//723 QSqlDriverFactoryInterface::create(const QString&) [pure virtual]
    {58, 64, 0, 0, Smoke::mf_ctor, 130, 2},	//724 QSqlDriverFactoryInterface::QSqlDriverFactoryInterface()
    {58, 64, 1246, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 130, 3},	//725 QSqlDriverFactoryInterface::QSqlDriverFactoryInterface(const QSqlDriverFactoryInterface&)
    {58, 768, 0, 0, Smoke::mf_dtor, 0, 4 },	//726 QSqlDriverFactoryInterface::~QSqlDriverFactoryInterface()
    {59, 306, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 319, 1},	//727 QSqlDriverPlugin::metaObject() const
    {59, 565, 606, 1, Smoke::mf_virtual, 389, 2},	//728 QSqlDriverPlugin::qt_metacast(const char*)
    {59, 742, 731, 2, Smoke::mf_static, 161, 3},	//729 QSqlDriverPlugin::tr(const char*, const char*)
    {59, 746, 731, 2, Smoke::mf_static, 161, 4},	//730 QSqlDriverPlugin::trUtf8(const char*, const char*)
    {59, 742, 39, 3, Smoke::mf_static, 161, 5},	//731 QSqlDriverPlugin::tr(const char*, const char*, int)
    {59, 746, 39, 3, Smoke::mf_static, 161, 6},	//732 QSqlDriverPlugin::trUtf8(const char*, const char*, int)
    {59, 563, 1133, 3, Smoke::mf_virtual, 374, 7},	//733 QSqlDriverPlugin::qt_metacall(QMetaObject::Call, int, void**)
    {59, 66, 1201, 1, Smoke::mf_ctor, 131, 8},	//734 QSqlDriverPlugin::QSqlDriverPlugin(QObject*)
    {59, 299, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 165, 9},	//735 QSqlDriverPlugin::keys() const [pure virtual]
    {59, 183, 229, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 125, 10},	//736 QSqlDriverPlugin::create(const QString&) [pure virtual]
    {59, 742, 606, 1, Smoke::mf_static, 161, 11},	//737 QSqlDriverPlugin::tr(const char*)
    {59, 746, 606, 1, Smoke::mf_static, 161, 12},	//738 QSqlDriverPlugin::trUtf8(const char*)
    {59, 66, 0, 0, Smoke::mf_ctor, 131, 13},	//739 QSqlDriverPlugin::QSqlDriverPlugin()
    {59, 723, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 318, 14},	//740 QSqlDriverPlugin::staticMetaObject() const
    {59, 769, 0, 0, Smoke::mf_dtor, 0, 15 },	//741 QSqlDriverPlugin::~QSqlDriverPlugin()
    {60, 68, 1248, 4, Smoke::mf_ctor, 134, 1},	//742 QSqlError::QSqlError(const QString&, const QString&, QSqlError::ErrorType, int)
    {60, 68, 1225, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 134, 2},	//743 QSqlError::QSqlError(const QSqlError&)
    {60, 358, 1225, 1, 0, 133, 3},	//744 QSqlError::operator=(const QSqlError&)
    {60, 213, 0, 0, Smoke::mf_const, 161, 4},	//745 QSqlError::driverText() const
    {60, 640, 229, 1, 0, 0, 5},	//746 QSqlError::setDriverText(const QString&)
    {60, 199, 0, 0, Smoke::mf_const, 161, 6},	//747 QSqlError::databaseText() const
    {60, 632, 229, 1, 0, 0, 7},	//748 QSqlError::setDatabaseText(const QString&)
    {60, 751, 0, 0, Smoke::mf_const, 135, 8},	//749 QSqlError::type() const
    {60, 709, 1253, 1, 0, 0, 9},	//750 QSqlError::setType(QSqlError::ErrorType)
    {60, 315, 0, 0, Smoke::mf_const, 374, 10},	//751 QSqlError::number() const
    {60, 671, 647, 1, 0, 0, 11},	//752 QSqlError::setNumber(int)
    {60, 740, 0, 0, Smoke::mf_const, 161, 12},	//753 QSqlError::text() const
    {60, 297, 0, 0, Smoke::mf_const, 290, 13},	//754 QSqlError::isValid() const
    {60, 68, 0, 0, Smoke::mf_ctor, 134, 14},	//755 QSqlError::QSqlError()
    {60, 68, 229, 1, Smoke::mf_ctor, 134, 15},	//756 QSqlError::QSqlError(const QString&)
    {60, 68, 658, 2, Smoke::mf_ctor, 134, 16},	//757 QSqlError::QSqlError(const QString&, const QString&)
    {60, 68, 1255, 3, Smoke::mf_ctor, 134, 17},	//758 QSqlError::QSqlError(const QString&, const QString&, QSqlError::ErrorType)
    {60, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 18},	//759 QSqlError::NoError (enum)
    {60, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 19},	//760 QSqlError::ConnectionError (enum)
    {60, 118, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 20},	//761 QSqlError::StatementError (enum)
    {60, 122, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 21},	//762 QSqlError::TransactionError (enum)
    {60, 126, 0, 0, Smoke::mf_static|Smoke::mf_enum, 135, 22},	//763 QSqlError::UnknownError (enum)
    {60, 770, 0, 0, Smoke::mf_dtor, 0, 23 },	//764 QSqlError::~QSqlError()
    {61, 74, 1259, 2, Smoke::mf_ctor, 138, 1},	//765 QSqlField::QSqlField(const QString&, QVariant::Type)
    {61, 74, 1227, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 138, 2},	//766 QSqlField::QSqlField(const QSqlField&)
    {61, 358, 1227, 1, 0, 137, 3},	//767 QSqlField::operator=(const QSqlField&)
    {61, 360, 1227, 1, Smoke::mf_const, 290, 4},	//768 QSqlField::operator==(const QSqlField&) const
    {61, 324, 1227, 1, Smoke::mf_const, 290, 5},	//769 QSqlField::operator!=(const QSqlField&) const
    {61, 713, 1262, 1, 0, 0, 6},	//770 QSqlField::setValue(const QVariant&)
    {61, 761, 0, 0, Smoke::mf_const, 189, 7},	//771 QSqlField::value() const
    {61, 667, 229, 1, 0, 0, 8},	//772 QSqlField::setName(const QString&)
    {61, 309, 0, 0, Smoke::mf_const, 161, 9},	//773 QSqlField::name() const
    {61, 291, 0, 0, Smoke::mf_const, 290, 10},	//774 QSqlField::isNull() const
    {61, 691, 1223, 1, 0, 0, 11},	//775 QSqlField::setReadOnly(bool)
    {61, 295, 0, 0, Smoke::mf_const, 290, 12},	//776 QSqlField::isReadOnly() const
    {61, 167, 0, 0, 0, 0, 13},	//777 QSqlField::clear()
    {61, 751, 0, 0, Smoke::mf_const, 191, 14},	//778 QSqlField::type() const
    {61, 276, 0, 0, Smoke::mf_const, 290, 15},	//779 QSqlField::isAutoValue() const
    {61, 709, 1264, 1, 0, 0, 16},	//780 QSqlField::setType(QVariant::Type)
    {61, 699, 1266, 1, 0, 0, 17},	//781 QSqlField::setRequiredStatus(QSqlField::RequiredStatus)
    {61, 697, 1223, 1, 0, 0, 18},	//782 QSqlField::setRequired(bool)
    {61, 663, 647, 1, 0, 0, 19},	//783 QSqlField::setLength(int)
    {61, 683, 647, 1, 0, 0, 20},	//784 QSqlField::setPrecision(int)
    {61, 636, 1262, 1, 0, 0, 21},	//785 QSqlField::setDefaultValue(const QVariant&)
    {61, 705, 647, 1, 0, 0, 22},	//786 QSqlField::setSqlType(int)
    {61, 650, 1223, 1, 0, 0, 23},	//787 QSqlField::setGenerated(bool)
    {61, 621, 1223, 1, 0, 0, 24},	//788 QSqlField::setAutoValue(bool)
    {61, 598, 0, 0, Smoke::mf_const, 139, 25},	//789 QSqlField::requiredStatus() const
    {61, 304, 0, 0, Smoke::mf_const, 374, 26},	//790 QSqlField::length() const
    {61, 386, 0, 0, Smoke::mf_const, 374, 27},	//791 QSqlField::precision() const
    {61, 201, 0, 0, Smoke::mf_const, 189, 28},	//792 QSqlField::defaultValue() const
    {61, 752, 0, 0, Smoke::mf_const, 374, 29},	//793 QSqlField::typeID() const
    {61, 285, 0, 0, Smoke::mf_const, 290, 30},	//794 QSqlField::isGenerated() const
    {61, 297, 0, 0, Smoke::mf_const, 290, 31},	//795 QSqlField::isValid() const
    {61, 74, 0, 0, Smoke::mf_ctor, 138, 32},	//796 QSqlField::QSqlField()
    {61, 74, 229, 1, Smoke::mf_ctor, 138, 33},	//797 QSqlField::QSqlField(const QString&)
    {61, 125, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 34},	//798 QSqlField::Unknown (enum)
    {61, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 35},	//799 QSqlField::Optional (enum)
    {61, 114, 0, 0, Smoke::mf_static|Smoke::mf_enum, 139, 36},	//800 QSqlField::Required (enum)
    {61, 771, 0, 0, Smoke::mf_dtor, 0, 37 },	//801 QSqlField::~QSqlField()
    {62, 78, 658, 2, Smoke::mf_ctor, 142, 1},	//802 QSqlIndex::QSqlIndex(const QString&, const QString&)
    {62, 78, 1268, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 142, 2},	//803 QSqlIndex::QSqlIndex(const QSqlIndex&)
    {62, 358, 1268, 1, 0, 141, 3},	//804 QSqlIndex::operator=(const QSqlIndex&)
    {62, 625, 229, 1, 0, 0, 4},	//805 QSqlIndex::setCursorName(const QString&)
    {62, 189, 0, 0, Smoke::mf_const, 161, 5},	//806 QSqlIndex::cursorName() const
    {62, 667, 229, 1, 0, 0, 6},	//807 QSqlIndex::setName(const QString&)
    {62, 309, 0, 0, Smoke::mf_const, 161, 7},	//808 QSqlIndex::name() const
    {62, 140, 1227, 1, 0, 0, 8},	//809 QSqlIndex::append(const QSqlField&)
    {62, 140, 1203, 2, 0, 0, 9},	//810 QSqlIndex::append(const QSqlField&, bool)
    {62, 277, 647, 1, Smoke::mf_const, 290, 10},	//811 QSqlIndex::isDescending(int) const
    {62, 638, 1270, 2, 0, 0, 11},	//812 QSqlIndex::setDescending(int, bool)
    {62, 78, 0, 0, Smoke::mf_ctor, 142, 12},	//813 QSqlIndex::QSqlIndex()
    {62, 78, 229, 1, Smoke::mf_ctor, 142, 13},	//814 QSqlIndex::QSqlIndex(const QString&)
    {62, 772, 0, 0, Smoke::mf_dtor, 0, 14 },	//815 QSqlIndex::~QSqlIndex()
    {63, 82, 1273, 1, Smoke::mf_ctor, 145, 1},	//816 QSqlQuery::QSqlQuery(QSqlResult*)
    {63, 82, 1275, 2, Smoke::mf_ctor, 145, 2},	//817 QSqlQuery::QSqlQuery(const QString&, QSqlDatabase)
    {63, 82, 1278, 1, Smoke::mf_ctor, 145, 3},	//818 QSqlQuery::QSqlQuery(QSqlDatabase)
    {63, 82, 1280, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 145, 4},	//819 QSqlQuery::QSqlQuery(const QSqlQuery&)
    {63, 358, 1280, 1, 0, 144, 5},	//820 QSqlQuery::operator=(const QSqlQuery&)
    {63, 297, 0, 0, Smoke::mf_const, 290, 6},	//821 QSqlQuery::isValid() const
    {63, 275, 0, 0, Smoke::mf_const, 290, 7},	//822 QSqlQuery::isActive() const
    {63, 291, 647, 1, Smoke::mf_const, 290, 8},	//823 QSqlQuery::isNull(int) const
    {63, 143, 0, 0, Smoke::mf_const, 374, 9},	//824 QSqlQuery::at() const
    {63, 303, 0, 0, Smoke::mf_const, 161, 10},	//825 QSqlQuery::lastQuery() const
    {63, 314, 0, 0, Smoke::mf_const, 374, 11},	//826 QSqlQuery::numRowsAffected() const
    {63, 301, 0, 0, Smoke::mf_const, 132, 12},	//827 QSqlQuery::lastError() const
    {63, 296, 0, 0, Smoke::mf_const, 290, 13},	//828 QSqlQuery::isSelect() const
    {63, 716, 0, 0, Smoke::mf_const, 374, 14},	//829 QSqlQuery::size() const
    {63, 211, 0, 0, Smoke::mf_const, 344, 15},	//830 QSqlQuery::driver() const
    {63, 601, 0, 0, Smoke::mf_const, 353, 16},	//831 QSqlQuery::result() const
    {63, 284, 0, 0, Smoke::mf_const, 290, 17},	//832 QSqlQuery::isForwardOnly() const
    {63, 578, 0, 0, Smoke::mf_const, 148, 18},	//833 QSqlQuery::record() const
    {63, 648, 1223, 1, 0, 0, 19},	//834 QSqlQuery::setForwardOnly(bool)
    {63, 222, 229, 1, 0, 290, 20},	//835 QSqlQuery::exec(const QString&)
    {63, 761, 647, 1, Smoke::mf_const, 189, 21},	//836 QSqlQuery::value(int) const
    {63, 673, 1185, 1, 0, 0, 22},	//837 QSqlQuery::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy)
    {63, 316, 0, 0, Smoke::mf_const, 119, 23},	//838 QSqlQuery::numericalPrecisionPolicy() const
    {63, 612, 1270, 2, 0, 290, 24},	//839 QSqlQuery::seek(int, bool)
    {63, 310, 0, 0, 0, 290, 25},	//840 QSqlQuery::next()
    {63, 389, 0, 0, 0, 290, 26},	//841 QSqlQuery::previous()
    {63, 243, 0, 0, 0, 290, 27},	//842 QSqlQuery::first()
    {63, 300, 0, 0, 0, 290, 28},	//843 QSqlQuery::last()
    {63, 167, 0, 0, 0, 0, 29},	//844 QSqlQuery::clear()
    {63, 222, 0, 0, 0, 290, 30},	//845 QSqlQuery::exec()
    {63, 224, 1282, 1, 0, 290, 31},	//846 QSqlQuery::execBatch(QSqlQuery::BatchExecutionMode)
    {63, 387, 229, 1, 0, 290, 32},	//847 QSqlQuery::prepare(const QString&)
    {63, 151, 1284, 3, 0, 0, 33},	//848 QSqlQuery::bindValue(const QString&, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    {63, 151, 1288, 3, 0, 0, 34},	//849 QSqlQuery::bindValue(int, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    {63, 132, 1292, 2, 0, 0, 35},	//850 QSqlQuery::addBindValue(const QVariant&, QFlags<QSql::ParamTypeFlag>)
    {63, 157, 229, 1, Smoke::mf_const, 189, 36},	//851 QSqlQuery::boundValue(const QString&) const
    {63, 157, 647, 1, Smoke::mf_const, 189, 37},	//852 QSqlQuery::boundValue(int) const
    {63, 162, 0, 0, Smoke::mf_const, 87, 38},	//853 QSqlQuery::boundValues() const
    {63, 226, 0, 0, Smoke::mf_const, 161, 39},	//854 QSqlQuery::executedQuery() const
    {63, 302, 0, 0, Smoke::mf_const, 189, 40},	//855 QSqlQuery::lastInsertId() const
    {63, 242, 0, 0, 0, 0, 41},	//856 QSqlQuery::finish()
    {63, 311, 0, 0, 0, 290, 42},	//857 QSqlQuery::nextResult()
    {63, 82, 0, 0, Smoke::mf_ctor, 145, 43},	//858 QSqlQuery::QSqlQuery()
    {63, 82, 229, 1, Smoke::mf_ctor, 145, 44},	//859 QSqlQuery::QSqlQuery(const QString&)
    {63, 612, 647, 1, 0, 290, 45},	//860 QSqlQuery::seek(int)
    {63, 224, 0, 0, 0, 290, 46},	//861 QSqlQuery::execBatch()
    {63, 151, 1295, 2, 0, 0, 47},	//862 QSqlQuery::bindValue(const QString&, const QVariant&)
    {63, 151, 1298, 2, 0, 0, 48},	//863 QSqlQuery::bindValue(int, const QVariant&)
    {63, 132, 1262, 1, 0, 0, 49},	//864 QSqlQuery::addBindValue(const QVariant&)
    {63, 129, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 50},	//865 QSqlQuery::ValuesAsRows (enum)
    {63, 128, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 51},	//866 QSqlQuery::ValuesAsColumns (enum)
    {63, 773, 0, 0, Smoke::mf_dtor, 0, 52 },	//867 QSqlQuery::~QSqlQuery()
    {64, 306, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 319, 1},	//868 QSqlQueryModel::metaObject() const
    {64, 565, 606, 1, Smoke::mf_virtual, 389, 2},	//869 QSqlQueryModel::qt_metacast(const char*)
    {64, 742, 731, 2, Smoke::mf_static, 161, 3},	//870 QSqlQueryModel::tr(const char*, const char*)
    {64, 746, 731, 2, Smoke::mf_static, 161, 4},	//871 QSqlQueryModel::trUtf8(const char*, const char*)
    {64, 742, 39, 3, Smoke::mf_static, 161, 5},	//872 QSqlQueryModel::tr(const char*, const char*, int)
    {64, 746, 39, 3, Smoke::mf_static, 161, 6},	//873 QSqlQueryModel::trUtf8(const char*, const char*, int)
    {64, 563, 1133, 3, Smoke::mf_virtual, 374, 7},	//874 QSqlQueryModel::qt_metacall(QMetaObject::Call, int, void**)
    {64, 86, 1201, 1, Smoke::mf_ctor, 147, 8},	//875 QSqlQueryModel::QSqlQueryModel(QObject*)
    {64, 608, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 374, 9},	//876 QSqlQueryModel::rowCount(const QModelIndex&) const
    {64, 172, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 374, 10},	//877 QSqlQueryModel::columnCount(const QModelIndex&) const
    {64, 578, 647, 1, Smoke::mf_const, 148, 11},	//878 QSqlQueryModel::record(int) const
    {64, 578, 0, 0, Smoke::mf_const, 148, 12},	//879 QSqlQueryModel::record() const
    {64, 191, 1301, 2, Smoke::mf_const|Smoke::mf_virtual, 189, 13},	//880 QSqlQueryModel::data(const QModelIndex&, int) const
    {64, 253, 1304, 3, Smoke::mf_const|Smoke::mf_virtual, 189, 14},	//881 QSqlQueryModel::headerData(int, Qt::Orientation, int) const
    {64, 653, 1308, 4, Smoke::mf_virtual, 290, 15},	//882 QSqlQueryModel::setHeaderData(int, Qt::Orientation, const QVariant&, int)
    {64, 265, 12, 3, Smoke::mf_virtual, 290, 16},	//883 QSqlQueryModel::insertColumns(int, int, const QModelIndex&)
    {64, 588, 12, 3, Smoke::mf_virtual, 290, 17},	//884 QSqlQueryModel::removeColumns(int, int, const QModelIndex&)
    {64, 687, 1280, 1, 0, 0, 18},	//885 QSqlQueryModel::setQuery(const QSqlQuery&)
    {64, 687, 1313, 2, 0, 0, 19},	//886 QSqlQueryModel::setQuery(const QString&, const QSqlDatabase&)
    {64, 572, 0, 0, Smoke::mf_const, 143, 20},	//887 QSqlQueryModel::query() const
    {64, 167, 0, 0, Smoke::mf_virtual, 0, 21},	//888 QSqlQueryModel::clear()
    {64, 301, 0, 0, Smoke::mf_const, 132, 22},	//889 QSqlQueryModel::lastError() const
    {64, 231, 5, 1, Smoke::mf_virtual, 0, 23},	//890 QSqlQueryModel::fetchMore(const QModelIndex&)
    {64, 164, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 290, 24},	//891 QSqlQueryModel::canFetchMore(const QModelIndex&) const
    {64, 573, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 25},	//892 QSqlQueryModel::queryChange()
    {64, 259, 5, 1, Smoke::mf_const|Smoke::mf_protected, 92, 26},	//893 QSqlQueryModel::indexInQuery(const QModelIndex&) const
    {64, 661, 1225, 1, Smoke::mf_protected, 0, 27},	//894 QSqlQueryModel::setLastError(const QSqlError&)
    {64, 742, 606, 1, Smoke::mf_static, 161, 28},	//895 QSqlQueryModel::tr(const char*)
    {64, 746, 606, 1, Smoke::mf_static, 161, 29},	//896 QSqlQueryModel::trUtf8(const char*)
    {64, 86, 0, 0, Smoke::mf_ctor, 147, 30},	//897 QSqlQueryModel::QSqlQueryModel()
    {64, 608, 0, 0, Smoke::mf_const, 374, 31},	//898 QSqlQueryModel::rowCount() const
    {64, 172, 0, 0, Smoke::mf_const, 374, 32},	//899 QSqlQueryModel::columnCount() const
    {64, 191, 5, 1, Smoke::mf_const, 189, 33},	//900 QSqlQueryModel::data(const QModelIndex&) const
    {64, 253, 1316, 2, Smoke::mf_const, 189, 34},	//901 QSqlQueryModel::headerData(int, Qt::Orientation) const
    {64, 653, 1319, 3, 0, 290, 35},	//902 QSqlQueryModel::setHeaderData(int, Qt::Orientation, const QVariant&)
    {64, 265, 1323, 2, 0, 290, 36},	//903 QSqlQueryModel::insertColumns(int, int)
    {64, 588, 1323, 2, 0, 290, 37},	//904 QSqlQueryModel::removeColumns(int, int)
    {64, 687, 229, 1, 0, 0, 38},	//905 QSqlQueryModel::setQuery(const QString&)
    {64, 231, 0, 0, 0, 0, 39},	//906 QSqlQueryModel::fetchMore()
    {64, 164, 0, 0, Smoke::mf_const, 290, 40},	//907 QSqlQueryModel::canFetchMore() const
    {64, 723, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 318, 41},	//908 QSqlQueryModel::staticMetaObject() const
    {64, 774, 0, 0, Smoke::mf_dtor, 0, 42 },	//909 QSqlQueryModel::~QSqlQueryModel()
    {65, 88, 0, 0, Smoke::mf_ctor, 150, 1},	//910 QSqlRecord::QSqlRecord()
    {65, 88, 1326, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 150, 2},	//911 QSqlRecord::QSqlRecord(const QSqlRecord&)
    {65, 358, 1326, 1, 0, 149, 3},	//912 QSqlRecord::operator=(const QSqlRecord&)
    {65, 360, 1326, 1, Smoke::mf_const, 290, 4},	//913 QSqlRecord::operator==(const QSqlRecord&) const
    {65, 324, 1326, 1, Smoke::mf_const, 290, 5},	//914 QSqlRecord::operator!=(const QSqlRecord&) const
    {65, 761, 647, 1, Smoke::mf_const, 189, 6},	//915 QSqlRecord::value(int) const
    {65, 761, 229, 1, Smoke::mf_const, 189, 7},	//916 QSqlRecord::value(const QString&) const
    {65, 713, 1298, 2, 0, 0, 8},	//917 QSqlRecord::setValue(int, const QVariant&)
    {65, 713, 1295, 2, 0, 0, 9},	//918 QSqlRecord::setValue(const QString&, const QVariant&)
    {65, 669, 647, 1, 0, 0, 10},	//919 QSqlRecord::setNull(int)
    {65, 669, 229, 1, 0, 0, 11},	//920 QSqlRecord::setNull(const QString&)
    {65, 291, 647, 1, Smoke::mf_const, 290, 12},	//921 QSqlRecord::isNull(int) const
    {65, 291, 229, 1, Smoke::mf_const, 290, 13},	//922 QSqlRecord::isNull(const QString&) const
    {65, 261, 229, 1, Smoke::mf_const, 374, 14},	//923 QSqlRecord::indexOf(const QString&) const
    {65, 239, 647, 1, Smoke::mf_const, 161, 15},	//924 QSqlRecord::fieldName(int) const
    {65, 235, 647, 1, Smoke::mf_const, 136, 16},	//925 QSqlRecord::field(int) const
    {65, 235, 229, 1, Smoke::mf_const, 136, 17},	//926 QSqlRecord::field(const QString&) const
    {65, 285, 647, 1, Smoke::mf_const, 290, 18},	//927 QSqlRecord::isGenerated(int) const
    {65, 285, 229, 1, Smoke::mf_const, 290, 19},	//928 QSqlRecord::isGenerated(const QString&) const
    {65, 650, 1193, 2, 0, 0, 20},	//929 QSqlRecord::setGenerated(const QString&, bool)
    {65, 650, 1270, 2, 0, 0, 21},	//930 QSqlRecord::setGenerated(int, bool)
    {65, 140, 1227, 1, 0, 0, 22},	//931 QSqlRecord::append(const QSqlField&)
    {65, 596, 1328, 2, 0, 0, 23},	//932 QSqlRecord::replace(int, const QSqlField&)
    {65, 263, 1328, 2, 0, 0, 24},	//933 QSqlRecord::insert(int, const QSqlField&)
    {65, 586, 647, 1, 0, 0, 25},	//934 QSqlRecord::remove(int)
    {65, 283, 0, 0, Smoke::mf_const, 290, 26},	//935 QSqlRecord::isEmpty() const
    {65, 180, 229, 1, Smoke::mf_const, 290, 27},	//936 QSqlRecord::contains(const QString&) const
    {65, 167, 0, 0, 0, 0, 28},	//937 QSqlRecord::clear()
    {65, 168, 0, 0, 0, 0, 29},	//938 QSqlRecord::clearValues()
    {65, 182, 0, 0, Smoke::mf_const, 374, 30},	//939 QSqlRecord::count() const
    {65, 775, 0, 0, Smoke::mf_dtor, 0, 31 },	//940 QSqlRecord::~QSqlRecord()
    {66, 90, 0, 0, Smoke::mf_ctor, 152, 1},	//941 QSqlRelation::QSqlRelation()
    {66, 90, 1229, 3, Smoke::mf_ctor, 152, 2},	//942 QSqlRelation::QSqlRelation(const QString&, const QString&, const QString&)
    {66, 737, 0, 0, Smoke::mf_const, 161, 3},	//943 QSqlRelation::tableName() const
    {66, 258, 0, 0, Smoke::mf_const, 161, 4},	//944 QSqlRelation::indexColumn() const
    {66, 206, 0, 0, Smoke::mf_const, 161, 5},	//945 QSqlRelation::displayColumn() const
    {66, 297, 0, 0, Smoke::mf_const, 290, 6},	//946 QSqlRelation::isValid() const
    {66, 90, 1331, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 152, 7},	//947 QSqlRelation::QSqlRelation(const QSqlRelation&)
    {66, 776, 0, 0, Smoke::mf_dtor, 0, 8 },	//948 QSqlRelation::~QSqlRelation()
    {67, 93, 1201, 1, Smoke::mf_ctor|Smoke::mf_explicit, 153, 1},	//949 QSqlRelationalDelegate::QSqlRelationalDelegate(QObject*)
    {67, 185, 1144, 3, Smoke::mf_const|Smoke::mf_virtual, 194, 2},	//950 QSqlRelationalDelegate::createEditor(QWidget*, const QStyleOptionViewItem&, const QModelIndex&) const
    {67, 644, 1333, 2, Smoke::mf_const|Smoke::mf_virtual, 0, 3},	//951 QSqlRelationalDelegate::setEditorData(QWidget*, const QModelIndex&) const
    {67, 665, 1336, 3, Smoke::mf_const|Smoke::mf_virtual, 0, 4},	//952 QSqlRelationalDelegate::setModelData(QWidget*, QAbstractItemModel*, const QModelIndex&) const
    {67, 93, 0, 0, Smoke::mf_ctor|Smoke::mf_explicit, 153, 5},	//953 QSqlRelationalDelegate::QSqlRelationalDelegate()
    {67, 777, 0, 0, Smoke::mf_dtor, 0, 6 },	//954 QSqlRelationalDelegate::~QSqlRelationalDelegate()
    {68, 306, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 319, 1},	//955 QSqlRelationalTableModel::metaObject() const
    {68, 565, 606, 1, Smoke::mf_virtual, 389, 2},	//956 QSqlRelationalTableModel::qt_metacast(const char*)
    {68, 742, 731, 2, Smoke::mf_static, 161, 3},	//957 QSqlRelationalTableModel::tr(const char*, const char*)
    {68, 746, 731, 2, Smoke::mf_static, 161, 4},	//958 QSqlRelationalTableModel::trUtf8(const char*, const char*)
    {68, 742, 39, 3, Smoke::mf_static, 161, 5},	//959 QSqlRelationalTableModel::tr(const char*, const char*, int)
    {68, 746, 39, 3, Smoke::mf_static, 161, 6},	//960 QSqlRelationalTableModel::trUtf8(const char*, const char*, int)
    {68, 563, 1133, 3, Smoke::mf_virtual, 374, 7},	//961 QSqlRelationalTableModel::qt_metacall(QMetaObject::Call, int, void**)
    {68, 95, 1340, 2, Smoke::mf_ctor, 154, 8},	//962 QSqlRelationalTableModel::QSqlRelationalTableModel(QObject*, QSqlDatabase)
    {68, 191, 1301, 2, Smoke::mf_const|Smoke::mf_virtual, 189, 9},	//963 QSqlRelationalTableModel::data(const QModelIndex&, int) const
    {68, 627, 1, 3, Smoke::mf_virtual, 290, 10},	//964 QSqlRelationalTableModel::setData(const QModelIndex&, const QVariant&, int)
    {68, 588, 12, 3, Smoke::mf_virtual, 290, 11},	//965 QSqlRelationalTableModel::removeColumns(int, int, const QModelIndex&)
    {68, 167, 0, 0, Smoke::mf_virtual, 0, 12},	//966 QSqlRelationalTableModel::clear()
    {68, 615, 0, 0, Smoke::mf_virtual, 290, 13},	//967 QSqlRelationalTableModel::select()
    {68, 707, 229, 1, Smoke::mf_virtual, 0, 14},	//968 QSqlRelationalTableModel::setTable(const QString&)
    {68, 695, 1343, 2, Smoke::mf_virtual, 0, 15},	//969 QSqlRelationalTableModel::setRelation(int, const QSqlRelation&)
    {68, 582, 647, 1, Smoke::mf_const, 151, 16},	//970 QSqlRelationalTableModel::relation(int) const
    {68, 584, 647, 1, Smoke::mf_const|Smoke::mf_virtual, 159, 17},	//971 QSqlRelationalTableModel::relationModel(int) const
    {68, 659, 1346, 1, 0, 0, 18},	//972 QSqlRelationalTableModel::setJoinMode(QSqlRelationalTableModel::JoinMode)
    {68, 604, 647, 1, Smoke::mf_virtual|Smoke::mf_slot, 0, 19},	//973 QSqlRelationalTableModel::revertRow(int)
    {68, 616, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 161, 20},	//974 QSqlRelationalTableModel::selectStatement() const
    {68, 758, 1348, 2, Smoke::mf_protected|Smoke::mf_virtual, 290, 21},	//975 QSqlRelationalTableModel::updateRowInTable(int, const QSqlRecord&)
    {68, 270, 1326, 1, Smoke::mf_protected|Smoke::mf_virtual, 290, 22},	//976 QSqlRelationalTableModel::insertRowIntoTable(const QSqlRecord&)
    {68, 382, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 161, 23},	//977 QSqlRelationalTableModel::orderByClause() const
    {68, 742, 606, 1, Smoke::mf_static, 161, 24},	//978 QSqlRelationalTableModel::tr(const char*)
    {68, 746, 606, 1, Smoke::mf_static, 161, 25},	//979 QSqlRelationalTableModel::trUtf8(const char*)
    {68, 95, 0, 0, Smoke::mf_ctor, 154, 26},	//980 QSqlRelationalTableModel::QSqlRelationalTableModel()
    {68, 95, 1201, 1, Smoke::mf_ctor, 154, 27},	//981 QSqlRelationalTableModel::QSqlRelationalTableModel(QObject*)
    {68, 191, 5, 1, Smoke::mf_const, 189, 28},	//982 QSqlRelationalTableModel::data(const QModelIndex&) const
    {68, 627, 1351, 2, 0, 290, 29},	//983 QSqlRelationalTableModel::setData(const QModelIndex&, const QVariant&)
    {68, 588, 1323, 2, 0, 290, 30},	//984 QSqlRelationalTableModel::removeColumns(int, int)
    {68, 723, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 318, 31},	//985 QSqlRelationalTableModel::staticMetaObject() const
    {68, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 32},	//986 QSqlRelationalTableModel::InnerJoin (enum)
    {68, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 33},	//987 QSqlRelationalTableModel::LeftJoin (enum)
    {68, 778, 0, 0, Smoke::mf_dtor, 0, 34 },	//988 QSqlRelationalTableModel::~QSqlRelationalTableModel()
    {69, 249, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 189, 1},	//989 QSqlResult::handle() const
    {69, 98, 1354, 1, Smoke::mf_ctor|Smoke::mf_protected, 156, 2},	//990 QSqlResult::QSqlResult(const QSqlDriver*)
    {69, 143, 0, 0, Smoke::mf_const|Smoke::mf_protected, 374, 3},	//991 QSqlResult::at() const
    {69, 303, 0, 0, Smoke::mf_const|Smoke::mf_protected, 161, 4},	//992 QSqlResult::lastQuery() const
    {69, 301, 0, 0, Smoke::mf_const|Smoke::mf_protected, 132, 5},	//993 QSqlResult::lastError() const
    {69, 297, 0, 0, Smoke::mf_const|Smoke::mf_protected, 290, 6},	//994 QSqlResult::isValid() const
    {69, 275, 0, 0, Smoke::mf_const|Smoke::mf_protected, 290, 7},	//995 QSqlResult::isActive() const
    {69, 296, 0, 0, Smoke::mf_const|Smoke::mf_protected, 290, 8},	//996 QSqlResult::isSelect() const
    {69, 284, 0, 0, Smoke::mf_const|Smoke::mf_protected, 290, 9},	//997 QSqlResult::isForwardOnly() const
    {69, 211, 0, 0, Smoke::mf_const|Smoke::mf_protected, 344, 10},	//998 QSqlResult::driver() const
    {69, 619, 647, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 11},	//999 QSqlResult::setAt(int)
    {69, 617, 1223, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 12},	//1000 QSqlResult::setActive(bool)
    {69, 661, 1225, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 13},	//1001 QSqlResult::setLastError(const QSqlError&)
    {69, 687, 229, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 14},	//1002 QSqlResult::setQuery(const QString&)
    {69, 701, 1223, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 15},	//1003 QSqlResult::setSelect(bool)
    {69, 648, 1223, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 16},	//1004 QSqlResult::setForwardOnly(bool)
    {69, 222, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 290, 17},	//1005 QSqlResult::exec()
    {69, 387, 229, 1, Smoke::mf_protected|Smoke::mf_virtual, 290, 18},	//1006 QSqlResult::prepare(const QString&)
    {69, 610, 229, 1, Smoke::mf_protected|Smoke::mf_virtual, 290, 19},	//1007 QSqlResult::savePrepare(const QString&)
    {69, 151, 1288, 3, Smoke::mf_protected|Smoke::mf_virtual, 0, 20},	//1008 QSqlResult::bindValue(int, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    {69, 151, 1284, 3, Smoke::mf_protected|Smoke::mf_virtual, 0, 21},	//1009 QSqlResult::bindValue(const QString&, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    {69, 132, 1292, 2, Smoke::mf_protected, 0, 22},	//1010 QSqlResult::addBindValue(const QVariant&, QFlags<QSql::ParamTypeFlag>)
    {69, 157, 229, 1, Smoke::mf_const|Smoke::mf_protected, 189, 23},	//1011 QSqlResult::boundValue(const QString&) const
    {69, 157, 647, 1, Smoke::mf_const|Smoke::mf_protected, 189, 24},	//1012 QSqlResult::boundValue(int) const
    {69, 154, 229, 1, Smoke::mf_const|Smoke::mf_protected, 40, 25},	//1013 QSqlResult::bindValueType(const QString&) const
    {69, 154, 647, 1, Smoke::mf_const|Smoke::mf_protected, 40, 26},	//1014 QSqlResult::bindValueType(int) const
    {69, 159, 0, 0, Smoke::mf_const|Smoke::mf_protected, 374, 27},	//1015 QSqlResult::boundValueCount() const
    {69, 162, 0, 0, Smoke::mf_const|Smoke::mf_protected, 193, 28},	//1016 QSqlResult::boundValues() const
    {69, 226, 0, 0, Smoke::mf_const|Smoke::mf_protected, 161, 29},	//1017 QSqlResult::executedQuery() const
    {69, 160, 647, 1, Smoke::mf_const|Smoke::mf_protected, 161, 30},	//1018 QSqlResult::boundValueName(int) const
    {69, 167, 0, 0, Smoke::mf_protected, 0, 31},	//1019 QSqlResult::clear()
    {69, 252, 0, 0, Smoke::mf_const|Smoke::mf_protected, 290, 32},	//1020 QSqlResult::hasOutValues() const
    {69, 156, 0, 0, Smoke::mf_const|Smoke::mf_protected, 157, 33},	//1021 QSqlResult::bindingSyntax() const
    {69, 191, 647, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 189, 34},	//1022 QSqlResult::data(int) [pure virtual]
    {69, 291, 647, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 290, 35},	//1023 QSqlResult::isNull(int) [pure virtual]
    {69, 599, 229, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 290, 36},	//1024 QSqlResult::reset(const QString&) [pure virtual]
    {69, 227, 647, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 290, 37},	//1025 QSqlResult::fetch(int) [pure virtual]
    {69, 233, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 290, 38},	//1026 QSqlResult::fetchNext()
    {69, 234, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 290, 39},	//1027 QSqlResult::fetchPrevious()
    {69, 229, 0, 0, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 290, 40},	//1028 QSqlResult::fetchFirst() [pure virtual]
    {69, 230, 0, 0, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 290, 41},	//1029 QSqlResult::fetchLast() [pure virtual]
    {69, 716, 0, 0, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 374, 42},	//1030 QSqlResult::size() [pure virtual]
    {69, 314, 0, 0, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 374, 43},	//1031 QSqlResult::numRowsAffected() [pure virtual]
    {69, 578, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 148, 44},	//1032 QSqlResult::record() const
    {69, 302, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 189, 45},	//1033 QSqlResult::lastInsertId() const
    {69, 763, 1356, 2, Smoke::mf_protected|Smoke::mf_virtual, 0, 46},	//1034 QSqlResult::virtual_hook(int, void*)
    {69, 224, 1223, 1, Smoke::mf_protected, 290, 47},	//1035 QSqlResult::execBatch(bool)
    {69, 204, 0, 0, Smoke::mf_protected, 0, 48},	//1036 QSqlResult::detachFromResultSet()
    {69, 673, 1185, 1, Smoke::mf_protected, 0, 49},	//1037 QSqlResult::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy)
    {69, 316, 0, 0, Smoke::mf_const|Smoke::mf_protected, 119, 50},	//1038 QSqlResult::numericalPrecisionPolicy() const
    {69, 311, 0, 0, Smoke::mf_protected, 290, 51},	//1039 QSqlResult::nextResult()
    {69, 224, 0, 0, Smoke::mf_protected, 290, 52},	//1040 QSqlResult::execBatch()
    {69, 54, 0, 0, Smoke::mf_static|Smoke::mf_enum, 157, 53},	//1041 QSqlResult::PositionalBinding (enum)
    {69, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 157, 54},	//1042 QSqlResult::NamedBinding (enum)
    {69, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 158, 55},	//1043 QSqlResult::BatchOperation (enum)
    {69, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 158, 56},	//1044 QSqlResult::DetachFromResultSet (enum)
    {69, 116, 0, 0, Smoke::mf_static|Smoke::mf_enum, 158, 57},	//1045 QSqlResult::SetNumericalPrecision (enum)
    {69, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 158, 58},	//1046 QSqlResult::NextResult (enum)
    {69, 779, 0, 0, Smoke::mf_dtor, 0, 59 },	//1047 QSqlResult::~QSqlResult()
    {70, 306, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 319, 1},	//1048 QSqlTableModel::metaObject() const
    {70, 565, 606, 1, Smoke::mf_virtual, 389, 2},	//1049 QSqlTableModel::qt_metacast(const char*)
    {70, 742, 731, 2, Smoke::mf_static, 161, 3},	//1050 QSqlTableModel::tr(const char*, const char*)
    {70, 746, 731, 2, Smoke::mf_static, 161, 4},	//1051 QSqlTableModel::trUtf8(const char*, const char*)
    {70, 742, 39, 3, Smoke::mf_static, 161, 5},	//1052 QSqlTableModel::tr(const char*, const char*, int)
    {70, 746, 39, 3, Smoke::mf_static, 161, 6},	//1053 QSqlTableModel::trUtf8(const char*, const char*, int)
    {70, 563, 1133, 3, Smoke::mf_virtual, 374, 7},	//1054 QSqlTableModel::qt_metacall(QMetaObject::Call, int, void**)
    {70, 100, 1340, 2, Smoke::mf_ctor, 159, 8},	//1055 QSqlTableModel::QSqlTableModel(QObject*, QSqlDatabase)
    {70, 615, 0, 0, Smoke::mf_virtual, 290, 9},	//1056 QSqlTableModel::select()
    {70, 707, 229, 1, Smoke::mf_virtual, 0, 10},	//1057 QSqlTableModel::setTable(const QString&)
    {70, 737, 0, 0, Smoke::mf_const, 161, 11},	//1058 QSqlTableModel::tableName() const
    {70, 244, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 61, 12},	//1059 QSqlTableModel::flags(const QModelIndex&) const
    {70, 191, 1301, 2, Smoke::mf_const|Smoke::mf_virtual, 189, 13},	//1060 QSqlTableModel::data(const QModelIndex&, int) const
    {70, 627, 1, 3, Smoke::mf_virtual, 290, 14},	//1061 QSqlTableModel::setData(const QModelIndex&, const QVariant&, int)
    {70, 253, 1304, 3, Smoke::mf_const|Smoke::mf_virtual, 189, 15},	//1062 QSqlTableModel::headerData(int, Qt::Orientation, int) const
    {70, 279, 5, 1, Smoke::mf_const, 290, 16},	//1063 QSqlTableModel::isDirty(const QModelIndex&) const
    {70, 167, 0, 0, Smoke::mf_virtual, 0, 17},	//1064 QSqlTableModel::clear()
    {70, 642, 1359, 1, Smoke::mf_virtual, 0, 18},	//1065 QSqlTableModel::setEditStrategy(QSqlTableModel::EditStrategy)
    {70, 216, 0, 0, Smoke::mf_const, 160, 19},	//1066 QSqlTableModel::editStrategy() const
    {70, 392, 0, 0, Smoke::mf_const, 140, 20},	//1067 QSqlTableModel::primaryKey() const
    {70, 195, 0, 0, Smoke::mf_const, 122, 21},	//1068 QSqlTableModel::database() const
    {70, 237, 229, 1, Smoke::mf_const, 374, 22},	//1069 QSqlTableModel::fieldIndex(const QString&) const
    {70, 718, 16, 2, Smoke::mf_virtual, 0, 23},	//1070 QSqlTableModel::sort(int, Qt::SortOrder)
    {70, 703, 16, 2, Smoke::mf_virtual, 0, 24},	//1071 QSqlTableModel::setSort(int, Qt::SortOrder)
    {70, 241, 0, 0, Smoke::mf_const, 161, 25},	//1072 QSqlTableModel::filter() const
    {70, 646, 229, 1, Smoke::mf_virtual, 0, 26},	//1073 QSqlTableModel::setFilter(const QString&)
    {70, 608, 5, 1, Smoke::mf_const|Smoke::mf_virtual, 374, 27},	//1074 QSqlTableModel::rowCount(const QModelIndex&) const
    {70, 588, 12, 3, Smoke::mf_virtual, 290, 28},	//1075 QSqlTableModel::removeColumns(int, int, const QModelIndex&)
    {70, 593, 12, 3, Smoke::mf_virtual, 290, 29},	//1076 QSqlTableModel::removeRows(int, int, const QModelIndex&)
    {70, 272, 12, 3, Smoke::mf_virtual, 290, 30},	//1077 QSqlTableModel::insertRows(int, int, const QModelIndex&)
    {70, 268, 1348, 2, 0, 290, 31},	//1078 QSqlTableModel::insertRecord(int, const QSqlRecord&)
    {70, 693, 1348, 2, 0, 290, 32},	//1079 QSqlTableModel::setRecord(int, const QSqlRecord&)
    {70, 604, 647, 1, Smoke::mf_virtual, 0, 33},	//1080 QSqlTableModel::revertRow(int)
    {70, 728, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 290, 34},	//1081 QSqlTableModel::submit()
    {70, 602, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 0, 35},	//1082 QSqlTableModel::revert()
    {70, 729, 0, 0, Smoke::mf_slot, 290, 36},	//1083 QSqlTableModel::submitAll()
    {70, 603, 0, 0, Smoke::mf_slot, 0, 37},	//1084 QSqlTableModel::revertAll()
    {70, 393, 1361, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 38},	//1085 QSqlTableModel::primeInsert(int, QSqlRecord&)
    {70, 146, 1364, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 39},	//1086 QSqlTableModel::beforeInsert(QSqlRecord&)
    {70, 148, 1361, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 40},	//1087 QSqlTableModel::beforeUpdate(int, QSqlRecord&)
    {70, 144, 647, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 41},	//1088 QSqlTableModel::beforeDelete(int)
    {70, 758, 1348, 2, Smoke::mf_protected|Smoke::mf_virtual, 290, 42},	//1089 QSqlTableModel::updateRowInTable(int, const QSqlRecord&)
    {70, 270, 1326, 1, Smoke::mf_protected|Smoke::mf_virtual, 290, 43},	//1090 QSqlTableModel::insertRowIntoTable(const QSqlRecord&)
    {70, 202, 647, 1, Smoke::mf_protected|Smoke::mf_virtual, 290, 44},	//1091 QSqlTableModel::deleteRowFromTable(int)
    {70, 382, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 161, 45},	//1092 QSqlTableModel::orderByClause() const
    {70, 616, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 161, 46},	//1093 QSqlTableModel::selectStatement() const
    {70, 685, 1268, 1, Smoke::mf_protected, 0, 47},	//1094 QSqlTableModel::setPrimaryKey(const QSqlIndex&)
    {70, 687, 1280, 1, Smoke::mf_protected, 0, 48},	//1095 QSqlTableModel::setQuery(const QSqlQuery&)
    {70, 259, 5, 1, Smoke::mf_const|Smoke::mf_protected, 92, 49},	//1096 QSqlTableModel::indexInQuery(const QModelIndex&) const
    {70, 742, 606, 1, Smoke::mf_static, 161, 50},	//1097 QSqlTableModel::tr(const char*)
    {70, 746, 606, 1, Smoke::mf_static, 161, 51},	//1098 QSqlTableModel::trUtf8(const char*)
    {70, 100, 0, 0, Smoke::mf_ctor, 159, 52},	//1099 QSqlTableModel::QSqlTableModel()
    {70, 100, 1201, 1, Smoke::mf_ctor, 159, 53},	//1100 QSqlTableModel::QSqlTableModel(QObject*)
    {70, 191, 5, 1, Smoke::mf_const, 189, 54},	//1101 QSqlTableModel::data(const QModelIndex&) const
    {70, 627, 1351, 2, 0, 290, 55},	//1102 QSqlTableModel::setData(const QModelIndex&, const QVariant&)
    {70, 253, 1316, 2, Smoke::mf_const, 189, 56},	//1103 QSqlTableModel::headerData(int, Qt::Orientation) const
    {70, 608, 0, 0, Smoke::mf_const, 374, 57},	//1104 QSqlTableModel::rowCount() const
    {70, 588, 1323, 2, 0, 290, 58},	//1105 QSqlTableModel::removeColumns(int, int)
    {70, 593, 1323, 2, 0, 290, 59},	//1106 QSqlTableModel::removeRows(int, int)
    {70, 272, 1323, 2, 0, 290, 60},	//1107 QSqlTableModel::insertRows(int, int)
    {70, 723, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 318, 61},	//1108 QSqlTableModel::staticMetaObject() const
    {70, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 62},	//1109 QSqlTableModel::OnFieldChange (enum)
    {70, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 63},	//1110 QSqlTableModel::OnRowChange (enum)
    {70, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 64},	//1111 QSqlTableModel::OnManualSubmit (enum)
    {70, 780, 0, 0, Smoke::mf_dtor, 0, 65 },	//1112 QSqlTableModel::~QSqlTableModel()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    590,  // QSqlDatabase::QSqlDatabase(const QSqlDatabase&)
    634,  // QSqlDatabase::QSqlDatabase(QSqlDriver*)
    0,
    925,  // QSqlRecord::field(int) const
    926,  // QSqlRecord::field(const QString&) const
    0,
    927,  // QSqlRecord::isGenerated(int) const
    928,  // QSqlRecord::isGenerated(const QString&) const
    0,
    921,  // QSqlRecord::isNull(int) const
    922,  // QSqlRecord::isNull(const QString&) const
    0,
    929,  // QSqlRecord::setGenerated(const QString&, bool)
    930,  // QSqlRecord::setGenerated(int, bool)
    0,
    919,  // QSqlRecord::setNull(int)
    920,  // QSqlRecord::setNull(const QString&)
    0,
    917,  // QSqlRecord::setValue(int, const QVariant&)
    918,  // QSqlRecord::setValue(const QString&, const QVariant&)
    0,
    915,  // QSqlRecord::value(int) const
    916,  // QSqlRecord::value(const QString&) const
    0,
    1008,  // QSqlResult::bindValue(int, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    1009,  // QSqlResult::bindValue(const QString&, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    0,
    1013,  // QSqlResult::bindValueType(const QString&) const
    1014,  // QSqlResult::bindValueType(int) const
    0,
    1011,  // QSqlResult::boundValue(const QString&) const
    1012,  // QSqlResult::boundValue(int) const
    0,
    816,  // QSqlQuery::QSqlQuery(QSqlResult*)
    818,  // QSqlQuery::QSqlQuery(QSqlDatabase)
    819,  // QSqlQuery::QSqlQuery(const QSqlQuery&)
    0,
    862,  // QSqlQuery::bindValue(const QString&, const QVariant&)
    863,  // QSqlQuery::bindValue(int, const QVariant&)
    0,
    848,  // QSqlQuery::bindValue(const QString&, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    849,  // QSqlQuery::bindValue(int, const QVariant&, QFlags<QSql::ParamTypeFlag>)
    0,
    851,  // QSqlQuery::boundValue(const QString&) const
    852,  // QSqlQuery::boundValue(int) const
    0,
    29,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    41,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    69,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    155,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    184,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    239,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    242,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    312,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    322,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    323,  // QGlobalSpace::operator!=(QChar, QChar)
    336,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    397,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    489,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    515,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    519,  // QGlobalSpace::operator!=(QBool, QBool)
    0,
    262,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    287,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    310,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    388,  // QGlobalSpace::operator!=(QBool, bool)
    427,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    0,
    264,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    288,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    384,  // QGlobalSpace::operator!=(bool, QBool)
    432,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    461,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    0,
    50,  // QGlobalSpace::operator*(const QPointF&, const QMatrix&)
    51,  // QGlobalSpace::operator*(const QLine&, const QTransform&)
    95,  // QGlobalSpace::operator*(const QPolygonF&, const QTransform&)
    123,  // QGlobalSpace::operator*(const QLine&, const QMatrix&)
    126,  // QGlobalSpace::operator*(const QLineF&, const QMatrix&)
    128,  // QGlobalSpace::operator*(const QPainterPath&, const QMatrix&)
    160,  // QGlobalSpace::operator*(const QPainterPath&, const QTransform&)
    192,  // QGlobalSpace::operator*(const QPolygon&, const QMatrix&)
    214,  // QGlobalSpace::operator*(const QPointF&, const QTransform&)
    235,  // QGlobalSpace::operator*(const QPoint&, const QMatrix&)
    311,  // QGlobalSpace::operator*(const QLineF&, const QTransform&)
    387,  // QGlobalSpace::operator*(const QPolygon&, const QTransform&)
    426,  // QGlobalSpace::operator*(const QRegion&, const QTransform&)
    440,  // QGlobalSpace::operator*(const QPolygonF&, const QMatrix&)
    482,  // QGlobalSpace::operator*(const QPoint&, const QTransform&)
    504,  // QGlobalSpace::operator*(const QRegion&, const QMatrix&)
    0,
    24,  // QGlobalSpace::operator*(const QPoint&, double)
    56,  // QGlobalSpace::operator*(const QSizeF&, double)
    172,  // QGlobalSpace::operator*(const QPointF&, double)
    255,  // QGlobalSpace::operator*(const QTransform&, double)
    281,  // QGlobalSpace::operator*(const QPoint&, float)
    406,  // QGlobalSpace::operator*(const QSize&, double)
    491,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    27,  // QGlobalSpace::operator*(double, const QPointF&)
    31,  // QGlobalSpace::operator*(double, const QSizeF&)
    337,  // QGlobalSpace::operator*(double, const QSize&)
    350,  // QGlobalSpace::operator*(double, const QPoint&)
    436,  // QGlobalSpace::operator*(int, const QPoint&)
    508,  // QGlobalSpace::operator*(float, const QPoint&)
    0,
    42,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    104,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    420,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    463,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    503,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    0,
    84,  // QGlobalSpace::operator+(QChar, const QString&)
    358,  // QGlobalSpace::operator+(const QByteArray&, char)
    395,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    455,  // QGlobalSpace::operator+(const QTransform&, double)
    0,
    140,  // QGlobalSpace::operator+(char, const QByteArray&)
    297,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    513,  // QGlobalSpace::operator+(const QString&, QChar)
    0,
    207,  // QGlobalSpace::operator-(const QPointF&)
    442,  // QGlobalSpace::operator-(const QPoint&)
    0,
    63,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    391,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    452,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    493,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    0,
    141,  // QGlobalSpace::operator/(const QPoint&, double)
    152,  // QGlobalSpace::operator/(const QTransform&, double)
    189,  // QGlobalSpace::operator/(const QSizeF&, double)
    360,  // QGlobalSpace::operator/(const QPointF&, double)
    476,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    159,  // QGlobalSpace::operator<(QChar, QChar)
    199,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    258,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    0,
    26,  // QGlobalSpace::operator<<(QDebug, const QItemSelectionRange&)
    30,  // QGlobalSpace::operator<<(QDebug, const QStyleOption&)
    34,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    36,  // QGlobalSpace::operator<<(QDataStream&, const QSizePolicy&)
    39,  // QGlobalSpace::operator<<(QDebug, const QTransform&)
    44,  // QGlobalSpace::operator<<(QDataStream&, const QTransform&)
    46,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    57,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    76,  // QGlobalSpace::operator<<(QDebug, const QFont&)
    78,  // QGlobalSpace::operator<<(QDebug, const QPolygon&)
    79,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    88,  // QGlobalSpace::operator<<(QDataStream&, const QPalette&)
    89,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    90,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    91,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    103,  // QGlobalSpace::operator<<(QDebug, const QPolygonF&)
    106,  // QGlobalSpace::operator<<(QDebug, const QColor&)
    116,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    120,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    131,  // QGlobalSpace::operator<<(QDataStream&, const QKeySequence&)
    133,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    135,  // QGlobalSpace::operator<<(QDataStream&, const QCursor&)
    158,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    161,  // QGlobalSpace::operator<<(QDataStream&, const QBrush&)
    180,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    201,  // QGlobalSpace::operator<<(QDebug, const QSqlField&)
    210,  // QGlobalSpace::operator<<(QDataStream&, const QPixmap&)
    213,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    222,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    226,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    254,  // QGlobalSpace::operator<<(QDataStream&, const QPolygon&)
    259,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    270,  // QGlobalSpace::operator<<(QDebug, const QSqlDatabase&)
    271,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    273,  // QGlobalSpace::operator<<(QDebug, const QPainterPath&)
    276,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    294,  // QGlobalSpace::operator<<(QDebug, const QSqlRecord&)
    314,  // QGlobalSpace::operator<<(QDataStream&, const QPolygonF&)
    315,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    318,  // QGlobalSpace::operator<<(QDataStream&, const QFont&)
    321,  // QGlobalSpace::operator<<(QDataStream&, const QMatrix&)
    329,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    334,  // QGlobalSpace::operator<<(QDataStream&, const QPainterPath&)
    341,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    344,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    352,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    355,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    356,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    357,  // QGlobalSpace::operator<<(QDataStream&, const QImage&)
    359,  // QGlobalSpace::operator<<(QDebug, const QKeySequence&)
    365,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    374,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    382,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    386,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    396,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    399,  // QGlobalSpace::operator<<(QDataStream&, const QRegion&)
    401,  // QGlobalSpace::operator<<(QDebug, const QMatrix&)
    404,  // QGlobalSpace::operator<<(QDataStream&, const QColor&)
    408,  // QGlobalSpace::operator<<(QDebug, const QBrush&)
    412,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    417,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    421,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    424,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    453,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    468,  // QGlobalSpace::operator<<(QDebug, const QSqlError&)
    471,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    473,  // QGlobalSpace::operator<<(QDataStream&, const QIcon&)
    486,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    502,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    507,  // QGlobalSpace::operator<<(QDebug, const QRegion&)
    520,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    522,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    526,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    0,
    67,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    142,  // QGlobalSpace::operator<<(QDebug, QFlags<QStyle::StateFlag>)
    166,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    381,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    437,  // QGlobalSpace::operator<<(QDebug, const QStyleOption::OptionType&)
    450,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    474,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    0,
    301,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    363,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    423,  // QGlobalSpace::operator<=(QChar, QChar)
    0,
    54,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    65,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    70,  // QGlobalSpace::operator==(QBool, QBool)
    75,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    151,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    176,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    220,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    248,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    293,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    308,  // QGlobalSpace::operator==(QChar, QChar)
    331,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    335,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    383,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    448,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    506,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    523,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    0,
    246,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    407,  // QGlobalSpace::operator==(QString::Null, const QString&)
    413,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    460,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    505,  // QGlobalSpace::operator==(QBool, bool)
    0,
    143,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    197,  // QGlobalSpace::operator==(const QString&, QString::Null)
    296,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    402,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    479,  // QGlobalSpace::operator==(bool, QBool)
    0,
    193,  // QGlobalSpace::operator>(QChar, QChar)
    267,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    291,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    64,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    218,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    362,  // QGlobalSpace::operator>=(QChar, QChar)
    0,
    35,  // QGlobalSpace::operator>>(QDataStream&, QImage&)
    81,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    114,  // QGlobalSpace::operator>>(QDataStream&, QColor&)
    130,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    137,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    144,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    148,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    149,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    150,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    168,  // QGlobalSpace::operator>>(QDataStream&, QRegion&)
    171,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    187,  // QGlobalSpace::operator>>(QDataStream&, QCursor&)
    191,  // QGlobalSpace::operator>>(QDataStream&, QTransform&)
    204,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    227,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    253,  // QGlobalSpace::operator>>(QDataStream&, QIcon&)
    263,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    269,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    275,  // QGlobalSpace::operator>>(QDataStream&, QBrush&)
    290,  // QGlobalSpace::operator>>(QDataStream&, QSizePolicy&)
    298,  // QGlobalSpace::operator>>(QDataStream&, QMatrix&)
    302,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    332,  // QGlobalSpace::operator>>(QDataStream&, QPolygonF&)
    333,  // QGlobalSpace::operator>>(QDataStream&, QPalette&)
    370,  // QGlobalSpace::operator>>(QDataStream&, QFont&)
    378,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    411,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    416,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    418,  // QGlobalSpace::operator>>(QDataStream&, QKeySequence&)
    443,  // QGlobalSpace::operator>>(QDataStream&, QPolygon&)
    454,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    462,  // QGlobalSpace::operator>>(QDataStream&, QPixmap&)
    465,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    477,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    478,  // QGlobalSpace::operator>>(QDataStream&, QPainterPath&)
    488,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    511,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    0,
    307,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    447,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    0,
    22,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    28,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    32,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    33,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger)
    37,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    38,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, int)
    45,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    49,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    53,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    55,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    58,  // QGlobalSpace::operator|(QDir::Filter, int)
    66,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    71,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget)
    72,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QStyleOptionQ3ListViewItem::Q3ListViewItemFeature)
    73,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    77,  // QGlobalSpace::operator|(QSql::ParamTypeFlag, int)
    80,  // QGlobalSpace::operator|(QSql::ParamTypeFlag, QSql::ParamTypeFlag)
    83,  // QGlobalSpace::operator|(QStyle::SubControl, int)
    86,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    87,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    101,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    105,  // QGlobalSpace::operator|(QWidget::RenderFlag, int)
    107,  // QGlobalSpace::operator|(Qt::DropAction, int)
    110,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    113,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    115,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    117,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    118,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    121,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    122,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, int)
    127,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    129,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    132,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    134,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, int)
    136,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    138,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    139,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    153,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>)
    154,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature)
    156,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, int)
    157,  // QGlobalSpace::operator|(QFile::Permission, int)
    164,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag)
    165,  // QGlobalSpace::operator|(QStyle::StateFlag, int)
    169,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, int)
    170,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    178,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    182,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    183,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    185,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    186,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QSizePolicy::ControlType)
    188,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    190,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    196,  // QGlobalSpace::operator|(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>)
    200,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature)
    203,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    209,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    212,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    215,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    216,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    225,  // QGlobalSpace::operator|(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>)
    230,  // QGlobalSpace::operator|(QAbstractSpinBox::StepEnabledFlag, int)
    231,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    234,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    236,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    237,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    240,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    243,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    244,  // QGlobalSpace::operator|(Qt::WindowType, int)
    245,  // QGlobalSpace::operator|(QWidget::RenderFlag, QWidget::RenderFlag)
    252,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    256,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    257,  // QGlobalSpace::operator|(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>)
    261,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, int)
    266,  // QGlobalSpace::operator|(QStyle::StateFlag, QFlags<QStyle::StateFlag>)
    268,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>)
    272,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    282,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    285,  // QGlobalSpace::operator|(QStyleOptionToolButton::ToolButtonFeature, int)
    289,  // QGlobalSpace::operator|(QSizePolicy::ControlType, int)
    299,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    300,  // QGlobalSpace::operator|(QStyleOptionQ3ListViewItem::Q3ListViewItemFeature, QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>)
    303,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    304,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    306,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    309,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    316,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    320,  // QGlobalSpace::operator|(QStyle::SubControl, QFlags<QStyle::SubControl>)
    324,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    328,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    330,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    338,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    340,  // QGlobalSpace::operator|(QStyle::SubControl, QStyle::SubControl)
    342,  // QGlobalSpace::operator|(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>)
    346,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QStyleOptionViewItemV2::ViewItemFeature)
    371,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    373,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    376,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>)
    380,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    389,  // QGlobalSpace::operator|(Qt::WindowState, int)
    390,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, QFlags<QStyleOptionViewItemV2::ViewItemFeature>)
    400,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    403,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    405,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    409,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    410,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    415,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QStyleOptionFrameV2::FrameFeature)
    429,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    431,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    435,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    439,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    444,  // QGlobalSpace::operator|(QSql::ParamTypeFlag, QFlags<QSql::ParamTypeFlag>)
    449,  // QGlobalSpace::operator|(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag)
    456,  // QGlobalSpace::operator|(QStyle::StateFlag, QStyle::StateFlag)
    458,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    464,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    466,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    469,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    470,  // QGlobalSpace::operator|(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>)
    475,  // QGlobalSpace::operator|(QStyleOptionViewItemV2::ViewItemFeature, int)
    480,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    481,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    483,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, int)
    484,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature)
    492,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    495,  // QGlobalSpace::operator|(QStyleOptionFrameV2::FrameFeature, QFlags<QStyleOptionFrameV2::FrameFeature>)
    497,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    499,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    500,  // QGlobalSpace::operator|(Qt::Orientation, int)
    512,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    517,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    518,  // QGlobalSpace::operator|(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>)
    525,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    0,
    59,  // QGlobalSpace::qFuzzyCompare(const QTransform&, const QTransform&)
    345,  // QGlobalSpace::qFuzzyCompare(const QMatrix&, const QMatrix&)
    0,
    146,  // QGlobalSpace::qFuzzyCompare(double, double)
    369,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    221,  // QGlobalSpace::qFuzzyIsNull(double)
    496,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    21,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    74,  // QGlobalSpace::qHash(const QStringRef&)
    92,  // QGlobalSpace::qHash(const QBitArray&)
    163,  // QGlobalSpace::qHash(const QByteArray&)
    219,  // QGlobalSpace::qHash(QChar)
    277,  // QGlobalSpace::qHash(const QUrl&)
    339,  // QGlobalSpace::qHash(const QModelIndex&)
    457,  // QGlobalSpace::qHash(const QItemSelectionRange&)
    0,
    48,  // QGlobalSpace::qHash(unsigned char)
    97,  // QGlobalSpace::qHash(const QString&)
    98,  // QGlobalSpace::qHash(unsigned short)
    100,  // QGlobalSpace::qHash(long)
    102,  // QGlobalSpace::qHash(long long)
    211,  // QGlobalSpace::qHash(unsigned long long)
    313,  // QGlobalSpace::qHash(signed char)
    353,  // QGlobalSpace::qHash(short)
    385,  // QGlobalSpace::qHash(unsigned long)
    425,  // QGlobalSpace::qHash(unsigned int)
    451,  // QGlobalSpace::qHash(int)
    485,  // QGlobalSpace::qHash(char)
    0,
    198,  // QGlobalSpace::qIntCast(float)
    249,  // QGlobalSpace::qIntCast(double)
    0,
    278,  // QGlobalSpace::qIsFinite(float)
    490,  // QGlobalSpace::qIsFinite(double)
    0,
    25,  // QGlobalSpace::qIsInf(double)
    112,  // QGlobalSpace::qIsInf(float)
    0,
    145,  // QGlobalSpace::qIsNaN(float)
    351,  // QGlobalSpace::qIsNaN(double)
    0,
    147,  // QGlobalSpace::qIsNull(float)
    247,  // QGlobalSpace::qIsNull(double)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {20, 21, 548},	// QGlobalSpace::LicensedActiveQt
    {20, 22, 543},	// QGlobalSpace::LicensedCore
    {20, 23, 549},	// QGlobalSpace::LicensedDBus
    {20, 24, 547},	// QGlobalSpace::LicensedDeclarative
    {20, 25, 546},	// QGlobalSpace::LicensedGui
    {20, 26, 555},	// QGlobalSpace::LicensedHelp
    {20, 27, 554},	// QGlobalSpace::LicensedMultimedia
    {20, 28, 541},	// QGlobalSpace::LicensedNetwork
    {20, 29, 538},	// QGlobalSpace::LicensedOpenGL
    {20, 30, 540},	// QGlobalSpace::LicensedOpenVG
    {20, 31, 539},	// QGlobalSpace::LicensedQt3Support
    {20, 32, 552},	// QGlobalSpace::LicensedQt3SupportLight
    {20, 33, 553},	// QGlobalSpace::LicensedScript
    {20, 34, 551},	// QGlobalSpace::LicensedScriptTools
    {20, 35, 542},	// QGlobalSpace::LicensedSql
    {20, 36, 544},	// QGlobalSpace::LicensedSvg
    {20, 37, 550},	// QGlobalSpace::LicensedTest
    {20, 38, 532},	// QGlobalSpace::LicensedXml
    {20, 39, 545},	// QGlobalSpace::LicensedXmlPatterns
    {20, 103, 527},	// QGlobalSpace::Q_COMPLEX_TYPE
    {20, 104, 531},	// QGlobalSpace::Q_DUMMY_TYPE
    {20, 105, 530},	// QGlobalSpace::Q_MOVABLE_TYPE
    {20, 106, 528},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {20, 107, 529},	// QGlobalSpace::Q_STATIC_TYPE
    {20, 108, 535},	// QGlobalSpace::QtCriticalMsg
    {20, 109, 533},	// QGlobalSpace::QtDebugMsg
    {20, 110, 536},	// QGlobalSpace::QtFatalMsg
    {20, 111, 537},	// QGlobalSpace::QtSystemMsg
    {20, 112, 534},	// QGlobalSpace::QtWarningMsg
    {20, 326, -47},	// QGlobalSpace::operator!=##
    {20, 327, -63},	// QGlobalSpace::operator!=#$
    {20, 328, -69},	// QGlobalSpace::operator!=$#
    {20, 330, 19},	// QGlobalSpace::operator&##
    {20, 332, -75},	// QGlobalSpace::operator*##
    {20, 333, -92},	// QGlobalSpace::operator*#$
    {20, 334, -100},	// QGlobalSpace::operator*$#
    {20, 336, -107},	// QGlobalSpace::operator+##
    {20, 337, -113},	// QGlobalSpace::operator+#$
    {20, 338, -118},	// QGlobalSpace::operator+$#
    {20, 339, 284},	// QGlobalSpace::operator+$$
    {20, 341, -122},	// QGlobalSpace::operator-#
    {20, 342, -125},	// QGlobalSpace::operator-##
    {20, 343, 524},	// QGlobalSpace::operator-#$
    {20, 345, -130},	// QGlobalSpace::operator/#$
    {20, 347, -136},	// QGlobalSpace::operator<##
    {20, 348, 119},	// QGlobalSpace::operator<#$
    {20, 349, 232},	// QGlobalSpace::operator<$#
    {20, 351, -140},	// QGlobalSpace::operator<<##
    {20, 352, -214},	// QGlobalSpace::operator<<#$
    {20, 353, 109},	// QGlobalSpace::operator<<#?
    {20, 355, -222},	// QGlobalSpace::operator<=##
    {20, 356, 241},	// QGlobalSpace::operator<=#$
    {20, 357, 398},	// QGlobalSpace::operator<=$#
    {20, 362, -226},	// QGlobalSpace::operator==##
    {20, 363, -243},	// QGlobalSpace::operator==#$
    {20, 364, -249},	// QGlobalSpace::operator==$#
    {20, 366, -255},	// QGlobalSpace::operator>##
    {20, 367, 419},	// QGlobalSpace::operator>#$
    {20, 368, 377},	// QGlobalSpace::operator>$#
    {20, 370, -259},	// QGlobalSpace::operator>=##
    {20, 371, 349},	// QGlobalSpace::operator>=#$
    {20, 372, 194},	// QGlobalSpace::operator>=$#
    {20, 374, -263},	// QGlobalSpace::operator>>##
    {20, 375, -301},	// QGlobalSpace::operator>>#$
    {20, 376, 393},	// QGlobalSpace::operator>>#?
    {20, 378, 250},	// QGlobalSpace::operator^##
    {20, 380, 295},	// QGlobalSpace::operator|##
    {20, 381, -304},	// QGlobalSpace::operator|$$
    {20, 396, 265},	// QGlobalSpace::qAcos$
    {20, 398, 233},	// QGlobalSpace::qAddPostRoutine$
    {20, 400, 82},	// QGlobalSpace::qAlpha$
    {20, 401, 217},	// QGlobalSpace::qAppName
    {20, 403, 367},	// QGlobalSpace::qAsin$
    {20, 405, 93},	// QGlobalSpace::qAtan$
    {20, 407, 224},	// QGlobalSpace::qAtan2$$
    {20, 408, 514},	// QGlobalSpace::qBadAlloc
    {20, 410, 487},	// QGlobalSpace::qBlue$
    {20, 412, 60},	// QGlobalSpace::qCeil$
    {20, 414, 251},	// QGlobalSpace::qChecksum$$
    {20, 416, 229},	// QGlobalSpace::qCompress#
    {20, 417, 228},	// QGlobalSpace::qCompress#$
    {20, 418, 434},	// QGlobalSpace::qCompress$$
    {20, 419, 433},	// QGlobalSpace::qCompress$$$
    {20, 421, 108},	// QGlobalSpace::qCos$
    {20, 422, 20},	// QGlobalSpace::qCritical
    {20, 423, 441},	// QGlobalSpace::qDebug
    {20, 425, 238},	// QGlobalSpace::qExp$
    {20, 427, 43},	// QGlobalSpace::qFabs$
    {20, 429, 472},	// QGlobalSpace::qFastCos$
    {20, 431, 501},	// QGlobalSpace::qFastSin$
    {20, 433, 347},	// QGlobalSpace::qFlagLocation$
    {20, 435, 327},	// QGlobalSpace::qFloor$
    {20, 437, 422},	// QGlobalSpace::qFree$
    {20, 439, 195},	// QGlobalSpace::qFreeAligned$
    {20, 441, -437},	// QGlobalSpace::qFuzzyCompare##
    {20, 442, -440},	// QGlobalSpace::qFuzzyCompare$$
    {20, 444, -443},	// QGlobalSpace::qFuzzyIsNull$
    {20, 446, 62},	// QGlobalSpace::qGray$
    {20, 447, 125},	// QGlobalSpace::qGray$$$
    {20, 449, 85},	// QGlobalSpace::qGreen$
    {20, 451, -446},	// QGlobalSpace::qHash#
    {20, 452, -455},	// QGlobalSpace::qHash$
    {20, 453, 354},	// QGlobalSpace::qInf
    {20, 455, 179},	// QGlobalSpace::qInstallMsgHandler$
    {20, 457, -468},	// QGlobalSpace::qIntCast$
    {20, 459, -471},	// QGlobalSpace::qIsFinite$
    {20, 461, 305},	// QGlobalSpace::qIsGray$
    {20, 463, -474},	// QGlobalSpace::qIsInf$
    {20, 465, -477},	// QGlobalSpace::qIsNaN$
    {20, 467, -480},	// QGlobalSpace::qIsNull$
    {20, 469, 392},	// QGlobalSpace::qLn$
    {20, 471, 521},	// QGlobalSpace::qMalloc$
    {20, 473, 430},	// QGlobalSpace::qMallocAligned$$
    {20, 475, 348},	// QGlobalSpace::qMemCopy$$$
    {20, 477, 223},	// QGlobalSpace::qMemSet$$$
    {20, 479, 459},	// QGlobalSpace::qPow$$
    {20, 480, 47},	// QGlobalSpace::qQNaN
    {20, 482, 283},	// QGlobalSpace::qRealloc$$
    {20, 484, 208},	// QGlobalSpace::qReallocAligned$$$$
    {20, 486, 68},	// QGlobalSpace::qRed$
    {20, 488, 99},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {20, 490, 343},	// QGlobalSpace::qRemovePostRoutine$
    {20, 492, 326},	// QGlobalSpace::qRgb$$$
    {20, 494, 516},	// QGlobalSpace::qRgba$$$$
    {20, 496, 292},	// QGlobalSpace::qRound$
    {20, 498, 428},	// QGlobalSpace::qRound64$
    {20, 499, 494},	// QGlobalSpace::qSNaN
    {20, 501, 379},	// QGlobalSpace::qSetFieldWidth$
    {20, 503, 174},	// QGlobalSpace::qSetPadChar#
    {20, 505, 364},	// QGlobalSpace::qSetRealNumberPrecision$
    {20, 506, 177},	// QGlobalSpace::qSharedBuild
    {20, 508, 366},	// QGlobalSpace::qSin$
    {20, 510, 317},	// QGlobalSpace::qSqrt$
    {20, 512, 205},	// QGlobalSpace::qStringComparisonHelper#$
    {20, 514, 446},	// QGlobalSpace::qTan$
    {20, 516, 361},	// QGlobalSpace::qUncompress#
    {20, 517, 498},	// QGlobalSpace::qUncompress$$
    {20, 518, 52},	// QGlobalSpace::qVersion
    {20, 519, 124},	// QGlobalSpace::qWarning
    {20, 521, 94},	// QGlobalSpace::qbswap_helper$$$
    {20, 523, 260},	// QGlobalSpace::qgetenv$
    {20, 525, 202},	// QGlobalSpace::qputenv$#
    {20, 526, 61},	// QGlobalSpace::qrand
    {20, 528, 111},	// QGlobalSpace::qsrand$
    {20, 530, 173},	// QGlobalSpace::qstrcmp##
    {20, 531, 175},	// QGlobalSpace::qstrcmp#$
    {20, 532, 445},	// QGlobalSpace::qstrcmp$#
    {20, 533, 319},	// QGlobalSpace::qstrcmp$$
    {20, 535, 40},	// QGlobalSpace::qstrcpy$$
    {20, 537, 438},	// QGlobalSpace::qstrdup$
    {20, 539, 368},	// QGlobalSpace::qstricmp$$
    {20, 541, 394},	// QGlobalSpace::qstrlen$
    {20, 543, 206},	// QGlobalSpace::qstrncmp$$$
    {20, 545, 274},	// QGlobalSpace::qstrncpy$$$
    {20, 547, 162},	// QGlobalSpace::qstrnicmp$$$
    {20, 549, 325},	// QGlobalSpace::qstrnlen$$
    {20, 551, 510},	// QGlobalSpace::qtTrId$
    {20, 552, 509},	// QGlobalSpace::qtTrId$$
    {20, 554, 23},	// QGlobalSpace::qt_assert$$$
    {20, 556, 286},	// QGlobalSpace::qt_assert_x$$$$
    {20, 558, 167},	// QGlobalSpace::qt_check_pointer$$
    {20, 559, 280},	// QGlobalSpace::qt_error_string
    {20, 560, 279},	// QGlobalSpace::qt_error_string$
    {20, 562, 467},	// QGlobalSpace::qt_message_output$$
    {20, 567, 375},	// QGlobalSpace::qt_noop
    {20, 569, 181},	// QGlobalSpace::qt_qFindChild_helper#$#
    {20, 571, 414},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {20, 575, 96},	// QGlobalSpace::qvariant_cast_helper#$$
    {20, 577, 372},	// QGlobalSpace::qvsnprintf$$$?
    {54, 1, 588},	// QSql::AfterLastRow
    {54, 2, 582},	// QSql::AllTables
    {54, 6, 587},	// QSql::BeforeFirstRow
    {54, 7, 586},	// QSql::Binary
    {54, 14, 578},	// QSql::HighPrecision
    {54, 15, 583},	// QSql::In
    {54, 16, 585},	// QSql::InOut
    {54, 40, 577},	// QSql::LowPrecisionDouble
    {54, 41, 575},	// QSql::LowPrecisionInt32
    {54, 42, 576},	// QSql::LowPrecisionInt64
    {54, 53, 584},	// QSql::Out
    {54, 119, 580},	// QSql::SystemTables
    {54, 121, 579},	// QSql::Tables
    {54, 130, 581},	// QSql::Views
    {55, 57, 589},	// QSqlDatabase::QSqlDatabase
    {55, 58, -1},	// QSqlDatabase::QSqlDatabase#
    {55, 59, 633},	// QSqlDatabase::QSqlDatabase$
    {55, 136, 639},	// QSqlDatabase::addDatabase#
    {55, 137, 624},	// QSqlDatabase::addDatabase#$
    {55, 138, 638},	// QSqlDatabase::addDatabase$
    {55, 139, 623},	// QSqlDatabase::addDatabase$$
    {55, 170, 625},	// QSqlDatabase::cloneDatabase#$
    {55, 171, 594},	// QSqlDatabase::close
    {55, 174, 604},	// QSqlDatabase::commit
    {55, 177, 618},	// QSqlDatabase::connectOptions
    {55, 178, 619},	// QSqlDatabase::connectionName
    {55, 179, 630},	// QSqlDatabase::connectionNames
    {55, 180, 642},	// QSqlDatabase::contains
    {55, 181, 628},	// QSqlDatabase::contains$
    {55, 195, 640},	// QSqlDatabase::database
    {55, 196, 641},	// QSqlDatabase::database$
    {55, 197, 626},	// QSqlDatabase::database$$
    {55, 198, 612},	// QSqlDatabase::databaseName
    {55, 200, 643},	// QSqlDatabase::defaultConnection
    {55, 211, 622},	// QSqlDatabase::driver
    {55, 212, 616},	// QSqlDatabase::driverName
    {55, 214, 629},	// QSqlDatabase::drivers
    {55, 222, 636},	// QSqlDatabase::exec
    {55, 223, 600},	// QSqlDatabase::exec$
    {55, 256, 615},	// QSqlDatabase::hostName
    {55, 282, 632},	// QSqlDatabase::isDriverAvailable$
    {55, 293, 595},	// QSqlDatabase::isOpen
    {55, 294, 596},	// QSqlDatabase::isOpenError
    {55, 297, 602},	// QSqlDatabase::isValid
    {55, 301, 601},	// QSqlDatabase::lastError
    {55, 316, 621},	// QSqlDatabase::numericalPrecisionPolicy
    {55, 317, 592},	// QSqlDatabase::open
    {55, 319, 593},	// QSqlDatabase::open$$
    {55, 359, 591},	// QSqlDatabase::operator=#
    {55, 384, 614},	// QSqlDatabase::password
    {55, 385, 617},	// QSqlDatabase::port
    {55, 391, 598},	// QSqlDatabase::primaryIndex$
    {55, 579, 599},	// QSqlDatabase::record$
    {55, 581, 631},	// QSqlDatabase::registerSqlDriver$#
    {55, 592, 627},	// QSqlDatabase::removeDatabase$
    {55, 606, 605},	// QSqlDatabase::rollback
    {55, 623, 637},	// QSqlDatabase::setConnectOptions
    {55, 624, 611},	// QSqlDatabase::setConnectOptions$
    {55, 631, 606},	// QSqlDatabase::setDatabaseName$
    {55, 635, 644},	// QSqlDatabase::setDefaultConnection$
    {55, 657, 609},	// QSqlDatabase::setHostName$
    {55, 674, 620},	// QSqlDatabase::setNumericalPrecisionPolicy$
    {55, 680, 608},	// QSqlDatabase::setPassword$
    {55, 682, 610},	// QSqlDatabase::setPort$
    {55, 712, 607},	// QSqlDatabase::setUserName$
    {55, 738, 635},	// QSqlDatabase::tables
    {55, 739, 597},	// QSqlDatabase::tables$
    {55, 750, 603},	// QSqlDatabase::transaction
    {55, 760, 613},	// QSqlDatabase::userName
    {55, 765, 645},	// QSqlDatabase::~QSqlDatabase
    {56, 3, 699},	// QSqlDriver::BLOB
    {56, 5, 705},	// QSqlDriver::BatchOperations
    {56, 9, 715},	// QSqlDriver::DeleteStatement
    {56, 11, 708},	// QSqlDriver::EventNotifications
    {56, 12, 716},	// QSqlDriver::FieldName
    {56, 13, 709},	// QSqlDriver::FinishQuery
    {56, 18, 714},	// QSqlDriver::InsertStatement
    {56, 19, 704},	// QSqlDriver::LastInsertId
    {56, 43, 707},	// QSqlDriver::LowPrecisionNumbers
    {56, 44, 710},	// QSqlDriver::MultipleResultSets
    {56, 46, 702},	// QSqlDriver::NamedPlaceholders
    {56, 55, 703},	// QSqlDriver::PositionalPlaceholders
    {56, 56, 701},	// QSqlDriver::PreparedQueries
    {56, 60, 689},	// QSqlDriver::QSqlDriver
    {56, 61, 653},	// QSqlDriver::QSqlDriver#
    {56, 113, 698},	// QSqlDriver::QuerySize
    {56, 115, 712},	// QSqlDriver::SelectStatement
    {56, 117, 706},	// QSqlDriver::SimpleLocking
    {56, 120, 717},	// QSqlDriver::TableName
    {56, 123, 697},	// QSqlDriver::Transactions
    {56, 124, 700},	// QSqlDriver::Unicode
    {56, 127, 713},	// QSqlDriver::UpdateStatement
    {56, 131, 711},	// QSqlDriver::WhereStatement
    {56, 150, 656},	// QSqlDriver::beginTransaction
    {56, 171, 668},	// QSqlDriver::close
    {56, 175, 657},	// QSqlDriver::commitTransaction
    {56, 188, 669},	// QSqlDriver::createResult
    {56, 219, 663},	// QSqlDriver::escapeIdentifier$$
    {56, 247, 690},	// QSqlDriver::formatValue#
    {56, 248, 662},	// QSqlDriver::formatValue#$
    {56, 249, 666},	// QSqlDriver::handle
    {56, 251, 667},	// QSqlDriver::hasFeature$
    {56, 288, 674},	// QSqlDriver::isIdentifierEscaped$$
    {56, 290, 685},	// QSqlDriver::isIdentifierEscapedImplementation$$
    {56, 293, 654},	// QSqlDriver::isOpen
    {56, 294, 655},	// QSqlDriver::isOpenError
    {56, 301, 665},	// QSqlDriver::lastError
    {56, 306, 646},	// QSqlDriver::metaObject
    {56, 313, 678},	// QSqlDriver::notification$
    {56, 316, 677},	// QSqlDriver::numericalPrecisionPolicy
    {56, 318, 691},	// QSqlDriver::open$
    {56, 319, 692},	// QSqlDriver::open$$
    {56, 320, 693},	// QSqlDriver::open$$$
    {56, 321, 694},	// QSqlDriver::open$$$$
    {56, 322, 695},	// QSqlDriver::open$$$$$
    {56, 323, 670},	// QSqlDriver::open$$$$$$
    {56, 391, 660},	// QSqlDriver::primaryIndex$
    {56, 564, 652},	// QSqlDriver::qt_metacall$$?
    {56, 566, 647},	// QSqlDriver::qt_metacast$
    {56, 579, 661},	// QSqlDriver::record$
    {56, 607, 658},	// QSqlDriver::rollbackTransaction
    {56, 662, 681},	// QSqlDriver::setLastError#
    {56, 674, 676},	// QSqlDriver::setNumericalPrecisionPolicy$
    {56, 676, 679},	// QSqlDriver::setOpen$
    {56, 678, 680},	// QSqlDriver::setOpenError$
    {56, 722, 664},	// QSqlDriver::sqlStatement$$#$
    {56, 723, 696},	// QSqlDriver::staticMetaObject
    {56, 725, 675},	// QSqlDriver::stripDelimiters$$
    {56, 727, 686},	// QSqlDriver::stripDelimitersImplementation$$
    {56, 731, 671},	// QSqlDriver::subscribeToNotification$
    {56, 733, 682},	// QSqlDriver::subscribeToNotificationImplementation$
    {56, 734, 673},	// QSqlDriver::subscribedToNotifications
    {56, 735, 684},	// QSqlDriver::subscribedToNotificationsImplementation
    {56, 739, 659},	// QSqlDriver::tables$
    {56, 743, 687},	// QSqlDriver::tr$
    {56, 744, 648},	// QSqlDriver::tr$$
    {56, 745, 650},	// QSqlDriver::tr$$$
    {56, 747, 688},	// QSqlDriver::trUtf8$
    {56, 748, 649},	// QSqlDriver::trUtf8$$
    {56, 749, 651},	// QSqlDriver::trUtf8$$$
    {56, 754, 672},	// QSqlDriver::unsubscribeFromNotification$
    {56, 756, 683},	// QSqlDriver::unsubscribeFromNotificationImplementation$
    {56, 766, 718},	// QSqlDriver::~QSqlDriver
    {57, 62, 720},	// QSqlDriverCreatorBase::QSqlDriverCreatorBase
    {57, 63, 721},	// QSqlDriverCreatorBase::QSqlDriverCreatorBase#
    {57, 187, 719},	// QSqlDriverCreatorBase::createObject
    {57, 767, 722},	// QSqlDriverCreatorBase::~QSqlDriverCreatorBase
    {58, 64, 724},	// QSqlDriverFactoryInterface::QSqlDriverFactoryInterface
    {58, 65, 725},	// QSqlDriverFactoryInterface::QSqlDriverFactoryInterface#
    {58, 184, 723},	// QSqlDriverFactoryInterface::create$
    {58, 768, 726},	// QSqlDriverFactoryInterface::~QSqlDriverFactoryInterface
    {59, 66, 739},	// QSqlDriverPlugin::QSqlDriverPlugin
    {59, 67, 734},	// QSqlDriverPlugin::QSqlDriverPlugin#
    {59, 184, 736},	// QSqlDriverPlugin::create$
    {59, 299, 735},	// QSqlDriverPlugin::keys
    {59, 306, 727},	// QSqlDriverPlugin::metaObject
    {59, 564, 733},	// QSqlDriverPlugin::qt_metacall$$?
    {59, 566, 728},	// QSqlDriverPlugin::qt_metacast$
    {59, 723, 740},	// QSqlDriverPlugin::staticMetaObject
    {59, 743, 737},	// QSqlDriverPlugin::tr$
    {59, 744, 729},	// QSqlDriverPlugin::tr$$
    {59, 745, 731},	// QSqlDriverPlugin::tr$$$
    {59, 747, 738},	// QSqlDriverPlugin::trUtf8$
    {59, 748, 730},	// QSqlDriverPlugin::trUtf8$$
    {59, 749, 732},	// QSqlDriverPlugin::trUtf8$$$
    {59, 769, 741},	// QSqlDriverPlugin::~QSqlDriverPlugin
    {60, 8, 760},	// QSqlError::ConnectionError
    {60, 48, 759},	// QSqlError::NoError
    {60, 68, 755},	// QSqlError::QSqlError
    {60, 69, 743},	// QSqlError::QSqlError#
    {60, 70, 756},	// QSqlError::QSqlError$
    {60, 71, 757},	// QSqlError::QSqlError$$
    {60, 72, 758},	// QSqlError::QSqlError$$$
    {60, 73, 742},	// QSqlError::QSqlError$$$$
    {60, 118, 761},	// QSqlError::StatementError
    {60, 122, 762},	// QSqlError::TransactionError
    {60, 126, 763},	// QSqlError::UnknownError
    {60, 199, 747},	// QSqlError::databaseText
    {60, 213, 745},	// QSqlError::driverText
    {60, 297, 754},	// QSqlError::isValid
    {60, 315, 751},	// QSqlError::number
    {60, 359, 744},	// QSqlError::operator=#
    {60, 633, 748},	// QSqlError::setDatabaseText$
    {60, 641, 746},	// QSqlError::setDriverText$
    {60, 672, 752},	// QSqlError::setNumber$
    {60, 710, 750},	// QSqlError::setType$
    {60, 740, 753},	// QSqlError::text
    {60, 751, 749},	// QSqlError::type
    {60, 770, 764},	// QSqlError::~QSqlError
    {61, 52, 799},	// QSqlField::Optional
    {61, 74, 796},	// QSqlField::QSqlField
    {61, 75, 766},	// QSqlField::QSqlField#
    {61, 76, 797},	// QSqlField::QSqlField$
    {61, 77, 765},	// QSqlField::QSqlField$$
    {61, 114, 800},	// QSqlField::Required
    {61, 125, 798},	// QSqlField::Unknown
    {61, 167, 777},	// QSqlField::clear
    {61, 201, 792},	// QSqlField::defaultValue
    {61, 276, 779},	// QSqlField::isAutoValue
    {61, 285, 794},	// QSqlField::isGenerated
    {61, 291, 774},	// QSqlField::isNull
    {61, 295, 776},	// QSqlField::isReadOnly
    {61, 297, 795},	// QSqlField::isValid
    {61, 304, 790},	// QSqlField::length
    {61, 309, 773},	// QSqlField::name
    {61, 325, 769},	// QSqlField::operator!=#
    {61, 359, 767},	// QSqlField::operator=#
    {61, 361, 768},	// QSqlField::operator==#
    {61, 386, 791},	// QSqlField::precision
    {61, 598, 789},	// QSqlField::requiredStatus
    {61, 622, 788},	// QSqlField::setAutoValue$
    {61, 637, 785},	// QSqlField::setDefaultValue#
    {61, 651, 787},	// QSqlField::setGenerated$
    {61, 664, 783},	// QSqlField::setLength$
    {61, 668, 772},	// QSqlField::setName$
    {61, 684, 784},	// QSqlField::setPrecision$
    {61, 692, 775},	// QSqlField::setReadOnly$
    {61, 698, 782},	// QSqlField::setRequired$
    {61, 700, 781},	// QSqlField::setRequiredStatus$
    {61, 706, 786},	// QSqlField::setSqlType$
    {61, 710, 780},	// QSqlField::setType$
    {61, 714, 770},	// QSqlField::setValue#
    {61, 751, 778},	// QSqlField::type
    {61, 752, 793},	// QSqlField::typeID
    {61, 761, 771},	// QSqlField::value
    {61, 771, 801},	// QSqlField::~QSqlField
    {62, 78, 813},	// QSqlIndex::QSqlIndex
    {62, 79, 803},	// QSqlIndex::QSqlIndex#
    {62, 80, 814},	// QSqlIndex::QSqlIndex$
    {62, 81, 802},	// QSqlIndex::QSqlIndex$$
    {62, 141, 809},	// QSqlIndex::append#
    {62, 142, 810},	// QSqlIndex::append#$
    {62, 189, 806},	// QSqlIndex::cursorName
    {62, 278, 811},	// QSqlIndex::isDescending$
    {62, 309, 808},	// QSqlIndex::name
    {62, 359, 804},	// QSqlIndex::operator=#
    {62, 626, 805},	// QSqlIndex::setCursorName$
    {62, 639, 812},	// QSqlIndex::setDescending$$
    {62, 668, 807},	// QSqlIndex::setName$
    {62, 772, 815},	// QSqlIndex::~QSqlIndex
    {63, 82, 858},	// QSqlQuery::QSqlQuery
    {63, 83, -34},	// QSqlQuery::QSqlQuery#
    {63, 84, 859},	// QSqlQuery::QSqlQuery$
    {63, 85, 817},	// QSqlQuery::QSqlQuery$#
    {63, 128, 866},	// QSqlQuery::ValuesAsColumns
    {63, 129, 865},	// QSqlQuery::ValuesAsRows
    {63, 133, 864},	// QSqlQuery::addBindValue#
    {63, 134, 850},	// QSqlQuery::addBindValue#$
    {63, 143, 824},	// QSqlQuery::at
    {63, 152, -38},	// QSqlQuery::bindValue$#
    {63, 153, -41},	// QSqlQuery::bindValue$#$
    {63, 158, -44},	// QSqlQuery::boundValue$
    {63, 162, 853},	// QSqlQuery::boundValues
    {63, 167, 844},	// QSqlQuery::clear
    {63, 211, 830},	// QSqlQuery::driver
    {63, 222, 845},	// QSqlQuery::exec
    {63, 223, 835},	// QSqlQuery::exec$
    {63, 224, 861},	// QSqlQuery::execBatch
    {63, 225, 846},	// QSqlQuery::execBatch$
    {63, 226, 854},	// QSqlQuery::executedQuery
    {63, 242, 856},	// QSqlQuery::finish
    {63, 243, 842},	// QSqlQuery::first
    {63, 275, 822},	// QSqlQuery::isActive
    {63, 284, 832},	// QSqlQuery::isForwardOnly
    {63, 292, 823},	// QSqlQuery::isNull$
    {63, 296, 828},	// QSqlQuery::isSelect
    {63, 297, 821},	// QSqlQuery::isValid
    {63, 300, 843},	// QSqlQuery::last
    {63, 301, 827},	// QSqlQuery::lastError
    {63, 302, 855},	// QSqlQuery::lastInsertId
    {63, 303, 825},	// QSqlQuery::lastQuery
    {63, 310, 840},	// QSqlQuery::next
    {63, 311, 857},	// QSqlQuery::nextResult
    {63, 314, 826},	// QSqlQuery::numRowsAffected
    {63, 316, 838},	// QSqlQuery::numericalPrecisionPolicy
    {63, 359, 820},	// QSqlQuery::operator=#
    {63, 388, 847},	// QSqlQuery::prepare$
    {63, 389, 841},	// QSqlQuery::previous
    {63, 578, 833},	// QSqlQuery::record
    {63, 601, 831},	// QSqlQuery::result
    {63, 613, 860},	// QSqlQuery::seek$
    {63, 614, 839},	// QSqlQuery::seek$$
    {63, 649, 834},	// QSqlQuery::setForwardOnly$
    {63, 674, 837},	// QSqlQuery::setNumericalPrecisionPolicy$
    {63, 716, 829},	// QSqlQuery::size
    {63, 762, 836},	// QSqlQuery::value$
    {63, 773, 867},	// QSqlQuery::~QSqlQuery
    {64, 86, 897},	// QSqlQueryModel::QSqlQueryModel
    {64, 87, 875},	// QSqlQueryModel::QSqlQueryModel#
    {64, 164, 907},	// QSqlQueryModel::canFetchMore
    {64, 165, 891},	// QSqlQueryModel::canFetchMore#
    {64, 167, 888},	// QSqlQueryModel::clear
    {64, 172, 899},	// QSqlQueryModel::columnCount
    {64, 173, 877},	// QSqlQueryModel::columnCount#
    {64, 192, 900},	// QSqlQueryModel::data#
    {64, 193, 880},	// QSqlQueryModel::data#$
    {64, 231, 906},	// QSqlQueryModel::fetchMore
    {64, 232, 890},	// QSqlQueryModel::fetchMore#
    {64, 254, 901},	// QSqlQueryModel::headerData$$
    {64, 255, 881},	// QSqlQueryModel::headerData$$$
    {64, 260, 893},	// QSqlQueryModel::indexInQuery#
    {64, 266, 903},	// QSqlQueryModel::insertColumns$$
    {64, 267, 883},	// QSqlQueryModel::insertColumns$$#
    {64, 301, 889},	// QSqlQueryModel::lastError
    {64, 306, 868},	// QSqlQueryModel::metaObject
    {64, 564, 874},	// QSqlQueryModel::qt_metacall$$?
    {64, 566, 869},	// QSqlQueryModel::qt_metacast$
    {64, 572, 887},	// QSqlQueryModel::query
    {64, 573, 892},	// QSqlQueryModel::queryChange
    {64, 578, 879},	// QSqlQueryModel::record
    {64, 579, 878},	// QSqlQueryModel::record$
    {64, 589, 904},	// QSqlQueryModel::removeColumns$$
    {64, 590, 884},	// QSqlQueryModel::removeColumns$$#
    {64, 608, 898},	// QSqlQueryModel::rowCount
    {64, 609, 876},	// QSqlQueryModel::rowCount#
    {64, 654, 902},	// QSqlQueryModel::setHeaderData$$#
    {64, 655, 882},	// QSqlQueryModel::setHeaderData$$#$
    {64, 662, 894},	// QSqlQueryModel::setLastError#
    {64, 688, 885},	// QSqlQueryModel::setQuery#
    {64, 689, 905},	// QSqlQueryModel::setQuery$
    {64, 690, 886},	// QSqlQueryModel::setQuery$#
    {64, 723, 908},	// QSqlQueryModel::staticMetaObject
    {64, 743, 895},	// QSqlQueryModel::tr$
    {64, 744, 870},	// QSqlQueryModel::tr$$
    {64, 745, 872},	// QSqlQueryModel::tr$$$
    {64, 747, 896},	// QSqlQueryModel::trUtf8$
    {64, 748, 871},	// QSqlQueryModel::trUtf8$$
    {64, 749, 873},	// QSqlQueryModel::trUtf8$$$
    {64, 774, 909},	// QSqlQueryModel::~QSqlQueryModel
    {65, 88, 910},	// QSqlRecord::QSqlRecord
    {65, 89, 911},	// QSqlRecord::QSqlRecord#
    {65, 141, 931},	// QSqlRecord::append#
    {65, 167, 937},	// QSqlRecord::clear
    {65, 168, 938},	// QSqlRecord::clearValues
    {65, 181, 936},	// QSqlRecord::contains$
    {65, 182, 939},	// QSqlRecord::count
    {65, 236, -4},	// QSqlRecord::field$
    {65, 240, 924},	// QSqlRecord::fieldName$
    {65, 262, 923},	// QSqlRecord::indexOf$
    {65, 264, 933},	// QSqlRecord::insert$#
    {65, 283, 935},	// QSqlRecord::isEmpty
    {65, 286, -7},	// QSqlRecord::isGenerated$
    {65, 292, -10},	// QSqlRecord::isNull$
    {65, 325, 914},	// QSqlRecord::operator!=#
    {65, 359, 912},	// QSqlRecord::operator=#
    {65, 361, 913},	// QSqlRecord::operator==#
    {65, 587, 934},	// QSqlRecord::remove$
    {65, 597, 932},	// QSqlRecord::replace$#
    {65, 652, -13},	// QSqlRecord::setGenerated$$
    {65, 670, -16},	// QSqlRecord::setNull$
    {65, 715, -19},	// QSqlRecord::setValue$#
    {65, 762, -22},	// QSqlRecord::value$
    {65, 775, 940},	// QSqlRecord::~QSqlRecord
    {66, 90, 941},	// QSqlRelation::QSqlRelation
    {66, 91, 947},	// QSqlRelation::QSqlRelation#
    {66, 92, 942},	// QSqlRelation::QSqlRelation$$$
    {66, 206, 945},	// QSqlRelation::displayColumn
    {66, 258, 944},	// QSqlRelation::indexColumn
    {66, 297, 946},	// QSqlRelation::isValid
    {66, 737, 943},	// QSqlRelation::tableName
    {66, 776, 948},	// QSqlRelation::~QSqlRelation
    {67, 93, 953},	// QSqlRelationalDelegate::QSqlRelationalDelegate
    {67, 94, 949},	// QSqlRelationalDelegate::QSqlRelationalDelegate#
    {67, 186, 950},	// QSqlRelationalDelegate::createEditor###
    {67, 645, 951},	// QSqlRelationalDelegate::setEditorData##
    {67, 666, 952},	// QSqlRelationalDelegate::setModelData###
    {67, 777, 954},	// QSqlRelationalDelegate::~QSqlRelationalDelegate
    {68, 17, 986},	// QSqlRelationalTableModel::InnerJoin
    {68, 20, 987},	// QSqlRelationalTableModel::LeftJoin
    {68, 95, 980},	// QSqlRelationalTableModel::QSqlRelationalTableModel
    {68, 96, 981},	// QSqlRelationalTableModel::QSqlRelationalTableModel#
    {68, 97, 962},	// QSqlRelationalTableModel::QSqlRelationalTableModel##
    {68, 167, 966},	// QSqlRelationalTableModel::clear
    {68, 192, 982},	// QSqlRelationalTableModel::data#
    {68, 193, 963},	// QSqlRelationalTableModel::data#$
    {68, 271, 976},	// QSqlRelationalTableModel::insertRowIntoTable#
    {68, 306, 955},	// QSqlRelationalTableModel::metaObject
    {68, 382, 977},	// QSqlRelationalTableModel::orderByClause
    {68, 564, 961},	// QSqlRelationalTableModel::qt_metacall$$?
    {68, 566, 956},	// QSqlRelationalTableModel::qt_metacast$
    {68, 583, 970},	// QSqlRelationalTableModel::relation$
    {68, 585, 971},	// QSqlRelationalTableModel::relationModel$
    {68, 589, 984},	// QSqlRelationalTableModel::removeColumns$$
    {68, 590, 965},	// QSqlRelationalTableModel::removeColumns$$#
    {68, 605, 973},	// QSqlRelationalTableModel::revertRow$
    {68, 615, 967},	// QSqlRelationalTableModel::select
    {68, 616, 974},	// QSqlRelationalTableModel::selectStatement
    {68, 628, 983},	// QSqlRelationalTableModel::setData##
    {68, 629, 964},	// QSqlRelationalTableModel::setData##$
    {68, 660, 972},	// QSqlRelationalTableModel::setJoinMode$
    {68, 696, 969},	// QSqlRelationalTableModel::setRelation$#
    {68, 708, 968},	// QSqlRelationalTableModel::setTable$
    {68, 723, 985},	// QSqlRelationalTableModel::staticMetaObject
    {68, 743, 978},	// QSqlRelationalTableModel::tr$
    {68, 744, 957},	// QSqlRelationalTableModel::tr$$
    {68, 745, 959},	// QSqlRelationalTableModel::tr$$$
    {68, 747, 979},	// QSqlRelationalTableModel::trUtf8$
    {68, 748, 958},	// QSqlRelationalTableModel::trUtf8$$
    {68, 749, 960},	// QSqlRelationalTableModel::trUtf8$$$
    {68, 759, 975},	// QSqlRelationalTableModel::updateRowInTable$#
    {68, 778, 988},	// QSqlRelationalTableModel::~QSqlRelationalTableModel
    {69, 4, 1043},	// QSqlResult::BatchOperation
    {69, 10, 1044},	// QSqlResult::DetachFromResultSet
    {69, 45, 1042},	// QSqlResult::NamedBinding
    {69, 47, 1046},	// QSqlResult::NextResult
    {69, 54, 1041},	// QSqlResult::PositionalBinding
    {69, 99, 990},	// QSqlResult::QSqlResult#
    {69, 116, 1045},	// QSqlResult::SetNumericalPrecision
    {69, 134, 1010},	// QSqlResult::addBindValue#$
    {69, 143, 991},	// QSqlResult::at
    {69, 153, -25},	// QSqlResult::bindValue$#$
    {69, 155, -28},	// QSqlResult::bindValueType$
    {69, 156, 1021},	// QSqlResult::bindingSyntax
    {69, 158, -31},	// QSqlResult::boundValue$
    {69, 159, 1015},	// QSqlResult::boundValueCount
    {69, 161, 1018},	// QSqlResult::boundValueName$
    {69, 162, 1016},	// QSqlResult::boundValues
    {69, 167, 1019},	// QSqlResult::clear
    {69, 194, 1022},	// QSqlResult::data$
    {69, 204, 1036},	// QSqlResult::detachFromResultSet
    {69, 211, 998},	// QSqlResult::driver
    {69, 222, 1005},	// QSqlResult::exec
    {69, 224, 1040},	// QSqlResult::execBatch
    {69, 225, 1035},	// QSqlResult::execBatch$
    {69, 226, 1017},	// QSqlResult::executedQuery
    {69, 228, 1025},	// QSqlResult::fetch$
    {69, 229, 1028},	// QSqlResult::fetchFirst
    {69, 230, 1029},	// QSqlResult::fetchLast
    {69, 233, 1026},	// QSqlResult::fetchNext
    {69, 234, 1027},	// QSqlResult::fetchPrevious
    {69, 249, 989},	// QSqlResult::handle
    {69, 252, 1020},	// QSqlResult::hasOutValues
    {69, 275, 995},	// QSqlResult::isActive
    {69, 284, 997},	// QSqlResult::isForwardOnly
    {69, 292, 1023},	// QSqlResult::isNull$
    {69, 296, 996},	// QSqlResult::isSelect
    {69, 297, 994},	// QSqlResult::isValid
    {69, 301, 993},	// QSqlResult::lastError
    {69, 302, 1033},	// QSqlResult::lastInsertId
    {69, 303, 992},	// QSqlResult::lastQuery
    {69, 311, 1039},	// QSqlResult::nextResult
    {69, 314, 1031},	// QSqlResult::numRowsAffected
    {69, 316, 1038},	// QSqlResult::numericalPrecisionPolicy
    {69, 388, 1006},	// QSqlResult::prepare$
    {69, 578, 1032},	// QSqlResult::record
    {69, 600, 1024},	// QSqlResult::reset$
    {69, 611, 1007},	// QSqlResult::savePrepare$
    {69, 618, 1000},	// QSqlResult::setActive$
    {69, 620, 999},	// QSqlResult::setAt$
    {69, 649, 1004},	// QSqlResult::setForwardOnly$
    {69, 662, 1001},	// QSqlResult::setLastError#
    {69, 674, 1037},	// QSqlResult::setNumericalPrecisionPolicy$
    {69, 689, 1002},	// QSqlResult::setQuery$
    {69, 702, 1003},	// QSqlResult::setSelect$
    {69, 716, 1030},	// QSqlResult::size
    {69, 764, 1034},	// QSqlResult::virtual_hook$$
    {69, 779, 1047},	// QSqlResult::~QSqlResult
    {70, 49, 1109},	// QSqlTableModel::OnFieldChange
    {70, 50, 1111},	// QSqlTableModel::OnManualSubmit
    {70, 51, 1110},	// QSqlTableModel::OnRowChange
    {70, 100, 1099},	// QSqlTableModel::QSqlTableModel
    {70, 101, 1100},	// QSqlTableModel::QSqlTableModel#
    {70, 102, 1055},	// QSqlTableModel::QSqlTableModel##
    {70, 145, 1088},	// QSqlTableModel::beforeDelete$
    {70, 147, 1086},	// QSqlTableModel::beforeInsert#
    {70, 149, 1087},	// QSqlTableModel::beforeUpdate$#
    {70, 167, 1064},	// QSqlTableModel::clear
    {70, 192, 1101},	// QSqlTableModel::data#
    {70, 193, 1060},	// QSqlTableModel::data#$
    {70, 195, 1068},	// QSqlTableModel::database
    {70, 203, 1091},	// QSqlTableModel::deleteRowFromTable$
    {70, 216, 1066},	// QSqlTableModel::editStrategy
    {70, 238, 1069},	// QSqlTableModel::fieldIndex$
    {70, 241, 1072},	// QSqlTableModel::filter
    {70, 245, 1059},	// QSqlTableModel::flags#
    {70, 254, 1103},	// QSqlTableModel::headerData$$
    {70, 255, 1062},	// QSqlTableModel::headerData$$$
    {70, 260, 1096},	// QSqlTableModel::indexInQuery#
    {70, 269, 1078},	// QSqlTableModel::insertRecord$#
    {70, 271, 1090},	// QSqlTableModel::insertRowIntoTable#
    {70, 273, 1107},	// QSqlTableModel::insertRows$$
    {70, 274, 1077},	// QSqlTableModel::insertRows$$#
    {70, 280, 1063},	// QSqlTableModel::isDirty#
    {70, 306, 1048},	// QSqlTableModel::metaObject
    {70, 382, 1092},	// QSqlTableModel::orderByClause
    {70, 392, 1067},	// QSqlTableModel::primaryKey
    {70, 394, 1085},	// QSqlTableModel::primeInsert$#
    {70, 564, 1054},	// QSqlTableModel::qt_metacall$$?
    {70, 566, 1049},	// QSqlTableModel::qt_metacast$
    {70, 589, 1105},	// QSqlTableModel::removeColumns$$
    {70, 590, 1075},	// QSqlTableModel::removeColumns$$#
    {70, 594, 1106},	// QSqlTableModel::removeRows$$
    {70, 595, 1076},	// QSqlTableModel::removeRows$$#
    {70, 602, 1082},	// QSqlTableModel::revert
    {70, 603, 1084},	// QSqlTableModel::revertAll
    {70, 605, 1080},	// QSqlTableModel::revertRow$
    {70, 608, 1104},	// QSqlTableModel::rowCount
    {70, 609, 1074},	// QSqlTableModel::rowCount#
    {70, 615, 1056},	// QSqlTableModel::select
    {70, 616, 1093},	// QSqlTableModel::selectStatement
    {70, 628, 1102},	// QSqlTableModel::setData##
    {70, 629, 1061},	// QSqlTableModel::setData##$
    {70, 643, 1065},	// QSqlTableModel::setEditStrategy$
    {70, 647, 1073},	// QSqlTableModel::setFilter$
    {70, 686, 1094},	// QSqlTableModel::setPrimaryKey#
    {70, 688, 1095},	// QSqlTableModel::setQuery#
    {70, 694, 1079},	// QSqlTableModel::setRecord$#
    {70, 704, 1071},	// QSqlTableModel::setSort$$
    {70, 708, 1057},	// QSqlTableModel::setTable$
    {70, 719, 1070},	// QSqlTableModel::sort$$
    {70, 723, 1108},	// QSqlTableModel::staticMetaObject
    {70, 728, 1081},	// QSqlTableModel::submit
    {70, 729, 1083},	// QSqlTableModel::submitAll
    {70, 737, 1058},	// QSqlTableModel::tableName
    {70, 743, 1097},	// QSqlTableModel::tr$
    {70, 744, 1050},	// QSqlTableModel::tr$$
    {70, 745, 1052},	// QSqlTableModel::tr$$$
    {70, 747, 1098},	// QSqlTableModel::trUtf8$
    {70, 748, 1051},	// QSqlTableModel::trUtf8$$
    {70, 749, 1053},	// QSqlTableModel::trUtf8$$$
    {70, 759, 1089},	// QSqlTableModel::updateRowInTable$#
    {70, 780, 1112},	// QSqlTableModel::~QSqlTableModel
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();
SMOKE_IMPORT void init_qtgui_Smoke();

static bool initialized = false;
Smoke *qtsql_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtsql_Smoke() {
    init_qtcore_Smoke();
    init_qtgui_Smoke();
    if (initialized) return;
    qtsql_Smoke = new Smoke(
        "qtsql",
        __smokeqtsql::classes, 84,
        __smokeqtsql::methods, 1113,
        __smokeqtsql::methodMaps, 692,
        __smokeqtsql::methodNames, 780,
        __smokeqtsql::types, 391,
        __smokeqtsql::inheritanceList,
        __smokeqtsql::argumentList,
        __smokeqtsql::ambiguousMethodList,
        __smokeqtsql::cast );
    initialized = true;
}

void delete_qtsql_Smoke() { delete qtsql_Smoke; }

}
