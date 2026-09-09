#include <qtxmlpatterns_includes.h>

#include <smoke.h>
#include <qtxmlpatterns_smoke.h>

namespace __smokeqtxmlpatterns {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QAbstractMessageHandler
      switch(to) {
        case 33: return (void*)(QObject*)(QAbstractMessageHandler*)xptr;
        case 1: return (void*)(QAbstractMessageHandler*)xptr;
        default: return xptr;
      }
    case 2:   //QAbstractUriResolver
      switch(to) {
        case 33: return (void*)(QObject*)(QAbstractUriResolver*)xptr;
        case 2: return (void*)(QAbstractUriResolver*)xptr;
        default: return xptr;
      }
    case 3:   //QAbstractXmlNodeModel
      switch(to) {
        case 41: return (void*)(QSharedData*)(QAbstractXmlNodeModel*)xptr;
        case 3: return (void*)(QAbstractXmlNodeModel*)xptr;
        case 42: return (void*)(QSimpleXmlNodeModel*)(QAbstractXmlNodeModel*)xptr;
        default: return xptr;
      }
    case 4:   //QAbstractXmlReceiver
      switch(to) {
        case 4: return (void*)(QAbstractXmlReceiver*)xptr;
        case 70: return (void*)(QXmlSerializer*)(QAbstractXmlReceiver*)xptr;
        case 61: return (void*)(QXmlFormatter*)(QAbstractXmlReceiver*)xptr;
        default: return xptr;
      }
    case 5:   //QBitArray
      switch(to) {
        case 5: return (void*)(QBitArray*)xptr;
        default: return xptr;
      }
    case 6:   //QBool
      switch(to) {
        case 6: return (void*)(QBool*)xptr;
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
        case 16: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 9: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 10:   //QDataStream
      switch(to) {
        case 10: return (void*)(QDataStream*)xptr;
        default: return xptr;
      }
    case 11:   //QDate
      switch(to) {
        case 11: return (void*)(QDate*)xptr;
        default: return xptr;
      }
    case 12:   //QDateTime
      switch(to) {
        case 12: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 13:   //QDebug
      switch(to) {
        case 13: return (void*)(QDebug*)xptr;
        default: return xptr;
      }
    case 14:   //QDir
      switch(to) {
        case 14: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 15:   //QEasingCurve
      switch(to) {
        case 15: return (void*)(QEasingCurve*)xptr;
        default: return xptr;
      }
    case 16:   //QEvent
      switch(to) {
        case 16: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 18:   //QHashDummyValue
      switch(to) {
        case 18: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 19:   //QHostAddress
      switch(to) {
        case 19: return (void*)(QHostAddress*)xptr;
        default: return xptr;
      }
    case 20:   //QIODevice
      switch(to) {
        case 33: return (void*)(QObject*)(QIODevice*)xptr;
        case 20: return (void*)(QIODevice*)xptr;
        default: return xptr;
      }
    case 21:   //QIncompatibleFlag
      switch(to) {
        case 21: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 22:   //QLatin1String
      switch(to) {
        case 22: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 23:   //QLine
      switch(to) {
        case 23: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 24:   //QLineF
      switch(to) {
        case 24: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 25:   //QLocale
      switch(to) {
        case 25: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 26:   //QMargins
      switch(to) {
        case 26: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 27:   //QMetaObject
      switch(to) {
        case 27: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 28:   //QModelIndex
      switch(to) {
        case 28: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 29:   //QNetworkAccessManager
      switch(to) {
        case 33: return (void*)(QObject*)(QNetworkAccessManager*)xptr;
        case 29: return (void*)(QNetworkAccessManager*)xptr;
        default: return xptr;
      }
    case 30:   //QNetworkCacheMetaData
      switch(to) {
        case 30: return (void*)(QNetworkCacheMetaData*)xptr;
        default: return xptr;
      }
    case 31:   //QNetworkCookie
      switch(to) {
        case 31: return (void*)(QNetworkCookie*)xptr;
        default: return xptr;
      }
    case 32:   //QNetworkInterface
      switch(to) {
        case 32: return (void*)(QNetworkInterface*)xptr;
        default: return xptr;
      }
    case 33:   //QObject
      switch(to) {
        case 33: return (void*)(QObject*)xptr;
        case 2: return (void*)(QAbstractUriResolver*)(QObject*)xptr;
        case 1: return (void*)(QAbstractMessageHandler*)(QObject*)xptr;
        default: return xptr;
      }
    case 34:   //QPatternist::Item
      switch(to) {
        case 34: return (void*)(QPatternist::Item*)xptr;
        default: return xptr;
      }
    case 35:   //QPersistentModelIndex
      switch(to) {
        case 35: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 36:   //QPoint
      switch(to) {
        case 36: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 37:   //QPointF
      switch(to) {
        case 37: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 38:   //QRect
      switch(to) {
        case 38: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 39:   //QRectF
      switch(to) {
        case 39: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 40:   //QRegExp
      switch(to) {
        case 40: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 41:   //QSharedData
      switch(to) {
        case 41: return (void*)(QSharedData*)xptr;
        case 3: return (void*)(QAbstractXmlNodeModel*)(QSharedData*)xptr;
        case 42: return (void*)(QSimpleXmlNodeModel*)(QSharedData*)xptr;
        default: return xptr;
      }
    case 42:   //QSimpleXmlNodeModel
      switch(to) {
        case 3: return (void*)(QAbstractXmlNodeModel*)(QSimpleXmlNodeModel*)xptr;
        case 41: return (void*)(QSharedData*)(QSimpleXmlNodeModel*)xptr;
        case 42: return (void*)(QSimpleXmlNodeModel*)xptr;
        default: return xptr;
      }
    case 43:   //QSize
      switch(to) {
        case 43: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 44:   //QSizeF
      switch(to) {
        case 44: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 45:   //QSourceLocation
      switch(to) {
        case 45: return (void*)(QSourceLocation*)xptr;
        default: return xptr;
      }
    case 46:   //QSslCertificate
      switch(to) {
        case 46: return (void*)(QSslCertificate*)xptr;
        default: return xptr;
      }
    case 47:   //QSslCipher
      switch(to) {
        case 47: return (void*)(QSslCipher*)xptr;
        default: return xptr;
      }
    case 48:   //QSslError
      switch(to) {
        case 48: return (void*)(QSslError*)xptr;
        default: return xptr;
      }
    case 49:   //QSslKey
      switch(to) {
        case 49: return (void*)(QSslKey*)xptr;
        default: return xptr;
      }
    case 50:   //QString::Null
      switch(to) {
        case 50: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 51:   //QStringRef
      switch(to) {
        case 51: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 52:   //QTextCodec
      switch(to) {
        case 52: return (void*)(QTextCodec*)xptr;
        default: return xptr;
      }
    case 53:   //QTextStream
      switch(to) {
        case 53: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 54:   //QTextStreamManipulator
      switch(to) {
        case 54: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 55:   //QTime
      switch(to) {
        case 55: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 56:   //QTimerEvent
      switch(to) {
        case 16: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 56: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 57:   //QUrl
      switch(to) {
        case 57: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 58:   //QUuid
      switch(to) {
        case 58: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 59:   //QVariant
      switch(to) {
        case 59: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 60:   //QVariantComparisonHelper
      switch(to) {
        case 60: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    case 61:   //QXmlFormatter
      switch(to) {
        case 70: return (void*)(QXmlSerializer*)(QXmlFormatter*)xptr;
        case 4: return (void*)(QAbstractXmlReceiver*)(QXmlFormatter*)xptr;
        case 61: return (void*)(QXmlFormatter*)xptr;
        default: return xptr;
      }
    case 62:   //QXmlItem
      switch(to) {
        case 62: return (void*)(QXmlItem*)xptr;
        default: return xptr;
      }
    case 63:   //QXmlName
      switch(to) {
        case 63: return (void*)(QXmlName*)xptr;
        default: return xptr;
      }
    case 64:   //QXmlNamePool
      switch(to) {
        case 64: return (void*)(QXmlNamePool*)xptr;
        default: return xptr;
      }
    case 65:   //QXmlNodeModelIndex
      switch(to) {
        case 65: return (void*)(QXmlNodeModelIndex*)xptr;
        default: return xptr;
      }
    case 66:   //QXmlQuery
      switch(to) {
        case 66: return (void*)(QXmlQuery*)xptr;
        default: return xptr;
      }
    case 67:   //QXmlResultItems
      switch(to) {
        case 67: return (void*)(QXmlResultItems*)xptr;
        default: return xptr;
      }
    case 68:   //QXmlSchema
      switch(to) {
        case 68: return (void*)(QXmlSchema*)xptr;
        default: return xptr;
      }
    case 69:   //QXmlSchemaValidator
      switch(to) {
        case 69: return (void*)(QXmlSchemaValidator*)xptr;
        default: return xptr;
      }
    case 70:   //QXmlSerializer
      switch(to) {
        case 4: return (void*)(QAbstractXmlReceiver*)(QXmlSerializer*)xptr;
        case 70: return (void*)(QXmlSerializer*)xptr;
        case 61: return (void*)(QXmlFormatter*)(QXmlSerializer*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    33, 0,	// 1: QObject
    41, 0,	// 3: QSharedData
    3, 0,	// 5: QAbstractXmlNodeModel
    70, 0,	// 7: QXmlSerializer
    4, 0,	// 9: QAbstractXmlReceiver
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QXmlQuery(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QAbstractXmlNodeModel(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QXmlNodeModelIndex(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QAbstractMessageHandler(Smoke::Index, void*, Smoke::Stack);
void xcall_QAbstractUriResolver(Smoke::Index, void*, Smoke::Stack);
void xcall_QAbstractXmlNodeModel(Smoke::Index, void*, Smoke::Stack);
void xcall_QAbstractXmlReceiver(Smoke::Index, void*, Smoke::Stack);
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QSimpleXmlNodeModel(Smoke::Index, void*, Smoke::Stack);
void xcall_QSourceLocation(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlFormatter(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlItem(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlName(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlNamePool(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlNodeModelIndex(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlQuery(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlResultItems(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlSchema(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlSchemaValidator(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlSerializer(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QAbstractMessageHandler", false, 1, xcall_QAbstractMessageHandler, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QAbstractMessageHandler) },	//1
    { "QAbstractUriResolver", false, 1, xcall_QAbstractUriResolver, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QAbstractUriResolver) },	//2
    { "QAbstractXmlNodeModel", false, 3, xcall_QAbstractXmlNodeModel, xenum_QAbstractXmlNodeModel, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QAbstractXmlNodeModel) },	//3
    { "QAbstractXmlReceiver", false, 0, xcall_QAbstractXmlReceiver, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QAbstractXmlReceiver) },	//4
    { "QBitArray", true, 0, 0, 0, 0, 0 },	//5
    { "QBool", true, 0, 0, 0, 0, 0 },	//6
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//7
    { "QChar", true, 0, 0, 0, 0, 0 },	//8
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//9
    { "QDataStream", true, 0, 0, 0, 0, 0 },	//10
    { "QDate", true, 0, 0, 0, 0, 0 },	//11
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//12
    { "QDebug", true, 0, 0, 0, 0, 0 },	//13
    { "QDir", true, 0, 0, 0, 0, 0 },	//14
    { "QEasingCurve", true, 0, 0, 0, 0, 0 },	//15
    { "QEvent", true, 0, 0, 0, 0, 0 },	//16
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//17
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//18
    { "QHostAddress", true, 0, 0, 0, 0, 0 },	//19
    { "QIODevice", true, 0, 0, 0, 0, 0 },	//20
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//21
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//22
    { "QLine", true, 0, 0, 0, 0, 0 },	//23
    { "QLineF", true, 0, 0, 0, 0, 0 },	//24
    { "QLocale", true, 0, 0, 0, 0, 0 },	//25
    { "QMargins", true, 0, 0, 0, 0, 0 },	//26
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//27
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//28
    { "QNetworkAccessManager", true, 0, 0, 0, 0, 0 },	//29
    { "QNetworkCacheMetaData", true, 0, 0, 0, 0, 0 },	//30
    { "QNetworkCookie", true, 0, 0, 0, 0, 0 },	//31
    { "QNetworkInterface", true, 0, 0, 0, 0, 0 },	//32
    { "QObject", true, 0, 0, 0, 0, 0 },	//33
    { "QPatternist::Item", true, 0, 0, 0, 0, 0 },	//34
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//35
    { "QPoint", true, 0, 0, 0, 0, 0 },	//36
    { "QPointF", true, 0, 0, 0, 0, 0 },	//37
    { "QRect", true, 0, 0, 0, 0, 0 },	//38
    { "QRectF", true, 0, 0, 0, 0, 0 },	//39
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//40
    { "QSharedData", true, 0, 0, 0, 0, 0 },	//41
    { "QSimpleXmlNodeModel", false, 5, xcall_QSimpleXmlNodeModel, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSimpleXmlNodeModel) },	//42
    { "QSize", true, 0, 0, 0, 0, 0 },	//43
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//44
    { "QSourceLocation", false, 0, xcall_QSourceLocation, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSourceLocation) },	//45
    { "QSslCertificate", true, 0, 0, 0, 0, 0 },	//46
    { "QSslCipher", true, 0, 0, 0, 0, 0 },	//47
    { "QSslError", true, 0, 0, 0, 0, 0 },	//48
    { "QSslKey", true, 0, 0, 0, 0, 0 },	//49
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//50
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//51
    { "QTextCodec", true, 0, 0, 0, 0, 0 },	//52
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//53
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//54
    { "QTime", true, 0, 0, 0, 0, 0 },	//55
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//56
    { "QUrl", true, 0, 0, 0, 0, 0 },	//57
    { "QUuid", true, 0, 0, 0, 0, 0 },	//58
    { "QVariant", true, 0, 0, 0, 0, 0 },	//59
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//60
    { "QXmlFormatter", false, 7, xcall_QXmlFormatter, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QXmlFormatter) },	//61
    { "QXmlItem", false, 0, xcall_QXmlItem, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QXmlItem) },	//62
    { "QXmlName", false, 0, xcall_QXmlName, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QXmlName) },	//63
    { "QXmlNamePool", false, 0, xcall_QXmlNamePool, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QXmlNamePool) },	//64
    { "QXmlNodeModelIndex", false, 0, xcall_QXmlNodeModelIndex, xenum_QXmlNodeModelIndex, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QXmlNodeModelIndex) },	//65
    { "QXmlQuery", false, 0, xcall_QXmlQuery, xenum_QXmlQuery, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QXmlQuery) },	//66
    { "QXmlResultItems", false, 0, xcall_QXmlResultItems, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QXmlResultItems) },	//67
    { "QXmlSchema", false, 0, xcall_QXmlSchema, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QXmlSchema) },	//68
    { "QXmlSchemaValidator", false, 0, xcall_QXmlSchemaValidator, 0, Smoke::cf_constructor, sizeof(QXmlSchemaValidator) },	//69
    { "QXmlSerializer", false, 9, xcall_QXmlSerializer, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QXmlSerializer) },	//70
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QAbstractMessageHandler*", 1, Smoke::t_class|Smoke::tf_ptr },	//2
    { "QAbstractSocket::SocketError", 0, Smoke::t_enum|Smoke::tf_stack },	//3
    { "QAbstractSocket::SocketState", 0, Smoke::t_enum|Smoke::tf_stack },	//4
    { "QAbstractUriResolver*", 2, Smoke::t_class|Smoke::tf_ptr },	//5
    { "QAbstractXmlNodeModel*", 3, Smoke::t_class|Smoke::tf_ptr },	//6
    { "QAbstractXmlNodeModel::NodeCopySetting", 3, Smoke::t_enum|Smoke::tf_stack },	//7
    { "QAbstractXmlNodeModel::SimpleAxis", 3, Smoke::t_enum|Smoke::tf_stack },	//8
    { "QAbstractXmlReceiver*", 4, Smoke::t_class|Smoke::tf_ptr },	//9
    { "QAbstractXmlReceiver* const", 4, Smoke::t_class|Smoke::tf_ptr },	//10
    { "QBitArray", 5, Smoke::t_class|Smoke::tf_stack },	//11
    { "QBitArray&", 5, Smoke::t_class|Smoke::tf_ref },	//12
    { "QBool", 6, Smoke::t_class|Smoke::tf_stack },	//13
    { "QByteArray", 7, Smoke::t_class|Smoke::tf_stack },	//14
    { "QByteArray&", 7, Smoke::t_class|Smoke::tf_ref },	//15
    { "QChar", 8, Smoke::t_class|Smoke::tf_stack },	//16
    { "QChar&", 8, Smoke::t_class|Smoke::tf_ref },	//17
    { "QChildEvent*", 9, Smoke::t_class|Smoke::tf_ptr },	//18
    { "QDataStream&", 10, Smoke::t_class|Smoke::tf_ref },	//19
    { "QDate&", 11, Smoke::t_class|Smoke::tf_ref },	//20
    { "QDateTime&", 12, Smoke::t_class|Smoke::tf_ref },	//21
    { "QDebug", 13, Smoke::t_class|Smoke::tf_stack },	//22
    { "QDir::Filter", 14, Smoke::t_enum|Smoke::tf_stack },	//23
    { "QDir::SortFlag", 14, Smoke::t_enum|Smoke::tf_stack },	//24
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//25
    { "QEasingCurve&", 15, Smoke::t_class|Smoke::tf_ref },	//26
    { "QEvent*", 16, Smoke::t_class|Smoke::tf_ptr },	//27
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//28
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//29
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//30
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//31
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//32
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//33
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//34
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//35
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//36
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//37
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//38
    { "QFlags<QNetworkConfigurationManager::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//39
    { "QFlags<QNetworkInterface::InterfaceFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//40
    { "QFlags<QNetworkProxy::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//41
    { "QFlags<QSsl::SslOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//42
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//43
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//44
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//45
    { "QFlags<QUdpSocket::BindFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//46
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//47
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//48
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//49
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//50
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//51
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//52
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//53
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//54
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//55
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//56
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//57
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//58
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//59
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//60
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//61
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//62
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//63
    { "QHostAddress&", 19, Smoke::t_class|Smoke::tf_ref },	//64
    { "QHostAddress::SpecialAddress", 19, Smoke::t_enum|Smoke::tf_stack },	//65
    { "QIODevice*", 20, Smoke::t_class|Smoke::tf_ptr },	//66
    { "QIODevice::OpenModeFlag", 20, Smoke::t_enum|Smoke::tf_stack },	//67
    { "QIncompatibleFlag", 21, Smoke::t_class|Smoke::tf_stack },	//68
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//69
    { "QLine&", 23, Smoke::t_class|Smoke::tf_ref },	//70
    { "QLineF&", 24, Smoke::t_class|Smoke::tf_ref },	//71
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//72
    { "QLocalSocket::LocalSocketError", 0, Smoke::t_enum|Smoke::tf_stack },	//73
    { "QLocalSocket::LocalSocketState", 0, Smoke::t_enum|Smoke::tf_stack },	//74
    { "QLocale&", 25, Smoke::t_class|Smoke::tf_ref },	//75
    { "QLocale::NumberOption", 25, Smoke::t_enum|Smoke::tf_stack },	//76
    { "QMetaObject::Call", 27, Smoke::t_enum|Smoke::tf_stack },	//77
    { "QNetworkAccessManager*", 29, Smoke::t_class|Smoke::tf_ptr },	//78
    { "QNetworkCacheMetaData&", 30, Smoke::t_class|Smoke::tf_ref },	//79
    { "QNetworkConfigurationManager::Capability", 0, Smoke::t_enum|Smoke::tf_stack },	//80
    { "QNetworkInterface::InterfaceFlag", 32, Smoke::t_enum|Smoke::tf_stack },	//81
    { "QNetworkProxy::Capability", 0, Smoke::t_enum|Smoke::tf_stack },	//82
    { "QObject*", 33, Smoke::t_class|Smoke::tf_ptr },	//83
    { "QObject*(*)()", 33, Smoke::t_class|Smoke::tf_ptr },	//84
    { "QPoint&", 36, Smoke::t_class|Smoke::tf_ref },	//85
    { "QPointF&", 37, Smoke::t_class|Smoke::tf_ref },	//86
    { "QRect&", 38, Smoke::t_class|Smoke::tf_ref },	//87
    { "QRectF&", 39, Smoke::t_class|Smoke::tf_ref },	//88
    { "QRegExp&", 40, Smoke::t_class|Smoke::tf_ref },	//89
    { "QSimpleXmlNodeModel*", 42, Smoke::t_class|Smoke::tf_ptr },	//90
    { "QSize&", 43, Smoke::t_class|Smoke::tf_ref },	//91
    { "QSizeF&", 44, Smoke::t_class|Smoke::tf_ref },	//92
    { "QSourceLocation", 45, Smoke::t_class|Smoke::tf_stack },	//93
    { "QSourceLocation&", 45, Smoke::t_class|Smoke::tf_ref },	//94
    { "QSourceLocation*", 45, Smoke::t_class|Smoke::tf_ptr },	//95
    { "QSsl::AlternateNameEntryType", 0, Smoke::t_enum|Smoke::tf_stack },	//96
    { "QSsl::EncodingFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//97
    { "QSsl::KeyAlgorithm", 0, Smoke::t_enum|Smoke::tf_stack },	//98
    { "QSsl::KeyType", 0, Smoke::t_enum|Smoke::tf_stack },	//99
    { "QSsl::SslOption", 0, Smoke::t_enum|Smoke::tf_stack },	//100
    { "QSsl::SslProtocol", 0, Smoke::t_enum|Smoke::tf_stack },	//101
    { "QSslCertificate::SubjectInfo", 46, Smoke::t_enum|Smoke::tf_stack },	//102
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//103
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//104
    { "QString*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//105
    { "QString::Null", 50, Smoke::t_class|Smoke::tf_stack },	//106
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//107
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//108
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//109
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//110
    { "QTextCodec::ConversionFlag", 52, Smoke::t_enum|Smoke::tf_stack },	//111
    { "QTextStream&", 53, Smoke::t_class|Smoke::tf_ref },	//112
    { "QTextStream&(*)(QTextStream&)", 53, Smoke::t_class|Smoke::tf_ref },	//113
    { "QTextStream::NumberFlag", 53, Smoke::t_enum|Smoke::tf_stack },	//114
    { "QTextStreamManipulator", 54, Smoke::t_class|Smoke::tf_stack },	//115
    { "QTime&", 55, Smoke::t_class|Smoke::tf_ref },	//116
    { "QTimerEvent*", 56, Smoke::t_class|Smoke::tf_ptr },	//117
    { "QUdpSocket::BindFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//118
    { "QUrl", 57, Smoke::t_class|Smoke::tf_stack },	//119
    { "QUrl&", 57, Smoke::t_class|Smoke::tf_ref },	//120
    { "QUrl::FormattingOption", 57, Smoke::t_enum|Smoke::tf_stack },	//121
    { "QUuid&", 58, Smoke::t_class|Smoke::tf_ref },	//122
    { "QVariant", 59, Smoke::t_class|Smoke::tf_stack },	//123
    { "QVariant&", 59, Smoke::t_class|Smoke::tf_ref },	//124
    { "QVariant::Type", 59, Smoke::t_enum|Smoke::tf_stack },	//125
    { "QVariant::Type&", 59, Smoke::t_enum|Smoke::tf_ref },	//126
    { "QVector<QXmlName>", 0, Smoke::t_voidp|Smoke::tf_stack },	//127
    { "QVector<QXmlNodeModelIndex>", 0, Smoke::t_voidp|Smoke::tf_stack },	//128
    { "QXmlFormatter*", 61, Smoke::t_class|Smoke::tf_ptr },	//129
    { "QXmlItem", 62, Smoke::t_class|Smoke::tf_stack },	//130
    { "QXmlItem&", 62, Smoke::t_class|Smoke::tf_ref },	//131
    { "QXmlItem*", 62, Smoke::t_class|Smoke::tf_ptr },	//132
    { "QXmlName", 63, Smoke::t_class|Smoke::tf_stack },	//133
    { "QXmlName&", 63, Smoke::t_class|Smoke::tf_ref },	//134
    { "QXmlName*", 63, Smoke::t_class|Smoke::tf_ptr },	//135
    { "QXmlName::Constant", 63, Smoke::t_enum|Smoke::tf_stack },	//136
    { "QXmlNamePool", 64, Smoke::t_class|Smoke::tf_stack },	//137
    { "QXmlNamePool&", 64, Smoke::t_class|Smoke::tf_ref },	//138
    { "QXmlNamePool*", 64, Smoke::t_class|Smoke::tf_ptr },	//139
    { "QXmlNodeModelIndex", 65, Smoke::t_class|Smoke::tf_stack },	//140
    { "QXmlNodeModelIndex*", 65, Smoke::t_class|Smoke::tf_ptr },	//141
    { "QXmlNodeModelIndex::Axis", 65, Smoke::t_enum|Smoke::tf_stack },	//142
    { "QXmlNodeModelIndex::Constants", 65, Smoke::t_enum|Smoke::tf_stack },	//143
    { "QXmlNodeModelIndex::DocumentOrder", 65, Smoke::t_enum|Smoke::tf_stack },	//144
    { "QXmlNodeModelIndex::NodeKind", 65, Smoke::t_enum|Smoke::tf_stack },	//145
    { "QXmlQuery&", 66, Smoke::t_class|Smoke::tf_ref },	//146
    { "QXmlQuery*", 66, Smoke::t_class|Smoke::tf_ptr },	//147
    { "QXmlQuery::QueryLanguage", 66, Smoke::t_enum|Smoke::tf_stack },	//148
    { "QXmlResultItems*", 67, Smoke::t_class|Smoke::tf_ptr },	//149
    { "QXmlSchema", 68, Smoke::t_class|Smoke::tf_stack },	//150
    { "QXmlSchema*", 68, Smoke::t_class|Smoke::tf_ptr },	//151
    { "QXmlSchemaValidator*", 69, Smoke::t_class|Smoke::tf_ptr },	//152
    { "QXmlSerializer*", 70, Smoke::t_class|Smoke::tf_ptr },	//153
    { "QXmlSerializer::State", 70, Smoke::t_enum|Smoke::tf_stack },	//154
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//155
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//156
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//157
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//158
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//159
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//160
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//161
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//162
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//163
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//164
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//165
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//166
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//167
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//168
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//169
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//170
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//171
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//172
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//173
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//174
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//175
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//176
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//177
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//178
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//179
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//180
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//181
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//182
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//183
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//184
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//185
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//186
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//187
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//188
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//189
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//190
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//191
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//192
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//193
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//194
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//195
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//196
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//197
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//198
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//199
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//200
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//201
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//202
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//203
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//204
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//205
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//206
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//207
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//208
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//209
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//210
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//211
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//212
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//213
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//214
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//215
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//216
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//217
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//218
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//219
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//220
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//221
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//222
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//223
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//224
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//225
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//226
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//227
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//228
    { "QtMsgType", 17, Smoke::t_enum|Smoke::tf_stack },	//229
    { "QtValidLicenseForActiveQtModule", 17, Smoke::t_enum|Smoke::tf_stack },	//230
    { "QtValidLicenseForCoreModule", 17, Smoke::t_enum|Smoke::tf_stack },	//231
    { "QtValidLicenseForDBusModule", 17, Smoke::t_enum|Smoke::tf_stack },	//232
    { "QtValidLicenseForDeclarativeModule", 17, Smoke::t_enum|Smoke::tf_stack },	//233
    { "QtValidLicenseForGuiModule", 17, Smoke::t_enum|Smoke::tf_stack },	//234
    { "QtValidLicenseForHelpModule", 17, Smoke::t_enum|Smoke::tf_stack },	//235
    { "QtValidLicenseForMultimediaModule", 17, Smoke::t_enum|Smoke::tf_stack },	//236
    { "QtValidLicenseForNetworkModule", 17, Smoke::t_enum|Smoke::tf_stack },	//237
    { "QtValidLicenseForOpenGLModule", 17, Smoke::t_enum|Smoke::tf_stack },	//238
    { "QtValidLicenseForOpenVGModule", 17, Smoke::t_enum|Smoke::tf_stack },	//239
    { "QtValidLicenseForQt3SupportLightModule", 17, Smoke::t_enum|Smoke::tf_stack },	//240
    { "QtValidLicenseForQt3SupportModule", 17, Smoke::t_enum|Smoke::tf_stack },	//241
    { "QtValidLicenseForScriptModule", 17, Smoke::t_enum|Smoke::tf_stack },	//242
    { "QtValidLicenseForScriptToolsModule", 17, Smoke::t_enum|Smoke::tf_stack },	//243
    { "QtValidLicenseForSqlModule", 17, Smoke::t_enum|Smoke::tf_stack },	//244
    { "QtValidLicenseForSvgModule", 17, Smoke::t_enum|Smoke::tf_stack },	//245
    { "QtValidLicenseForTestModule", 17, Smoke::t_enum|Smoke::tf_stack },	//246
    { "QtValidLicenseForXmlModule", 17, Smoke::t_enum|Smoke::tf_stack },	//247
    { "QtValidLicenseForXmlPatternsModule", 17, Smoke::t_enum|Smoke::tf_stack },	//248
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//249
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//250
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//251
    { "const QAbstractUriResolver*", 2, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//252
    { "const QAbstractXmlNodeModel*", 3, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//253
    { "const QBitArray&", 5, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//254
    { "const QByteArray", 7, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//255
    { "const QByteArray&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//256
    { "const QChar&", 8, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//257
    { "const QDate&", 11, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//258
    { "const QDateTime&", 12, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//259
    { "const QDir&", 14, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//260
    { "const QEasingCurve&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//261
    { "const QFlags<QAbstractXmlNodeModel::NodeCopySetting>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//262
    { "const QHashDummyValue&", 18, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//263
    { "const QHostAddress&", 19, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//264
    { "const QLatin1String&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//265
    { "const QLine&", 23, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//266
    { "const QLineF&", 24, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//267
    { "const QLocale&", 25, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//268
    { "const QMargins&", 26, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//269
    { "const QMetaObject&", 27, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//270
    { "const QMetaObject*", 27, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//271
    { "const QModelIndex&", 28, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//272
    { "const QNetworkCacheMetaData&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//273
    { "const QNetworkCookie&", 31, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//274
    { "const QNetworkInterface&", 32, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//275
    { "const QObject*", 33, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//276
    { "const QPatternist::Item&", 34, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//277
    { "const QPersistentModelIndex&", 35, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//278
    { "const QPoint", 36, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//279
    { "const QPoint&", 36, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//280
    { "const QPointF", 37, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//281
    { "const QPointF&", 37, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//282
    { "const QRect&", 38, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//283
    { "const QRectF&", 39, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//284
    { "const QRegExp&", 40, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//285
    { "const QRegExp*", 40, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//286
    { "const QSize", 43, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//287
    { "const QSize&", 43, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//288
    { "const QSizeF", 44, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//289
    { "const QSizeF&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//290
    { "const QSourceLocation&", 45, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//291
    { "const QSslCertificate&", 46, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//292
    { "const QSslCipher&", 47, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//293
    { "const QSslError&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//294
    { "const QSslError::SslError&", 48, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//295
    { "const QSslKey&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//296
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//297
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//298
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//299
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//300
    { "const QStringRef&", 51, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//301
    { "const QTextCodec*", 52, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//302
    { "const QTime&", 55, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//303
    { "const QUrl&", 57, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//304
    { "const QUuid&", 58, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//305
    { "const QVariant&", 59, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//306
    { "const QVariant::Type", 59, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//307
    { "const QVariantComparisonHelper&", 60, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//308
    { "const QXmlItem&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//309
    { "const QXmlName&", 63, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//310
    { "const QXmlNamePool&", 64, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//311
    { "const QXmlNodeModelIndex&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//312
    { "const QXmlQuery&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//313
    { "const QXmlSchema&", 68, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//314
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//315
    { "const short", 0, Smoke::t_short|Smoke::tf_stack|Smoke::tf_const },	//316
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//317
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//318
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//319
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//320
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//321
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//322
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//323
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//324
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//325
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//326
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//327
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//328
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//329
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//330
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//331
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//332
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//333
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//334
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//335
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//336
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//337
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//338
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    315, 0,	//1  const char*
    315, 315, 0,	//3  const char*, const char*
    315, 315, 321, 0,	//6  const char*, const char*, int
    77, 321, 337, 0,	//10  QMetaObject::Call, int, void**
    83, 0,	//14  QObject*
    229, 298, 304, 291, 0,	//16  QtMsgType, const QString&, const QUrl&, const QSourceLocation&
    229, 298, 0,	//21  QtMsgType, const QString&
    229, 298, 304, 0,	//24  QtMsgType, const QString&, const QUrl&
    304, 304, 0,	//28  const QUrl&, const QUrl&
    312, 0,	//31  const QXmlNodeModelIndex&
    312, 312, 0,	//33  const QXmlNodeModelIndex&, const QXmlNodeModelIndex&
    312, 316, 0,	//36  const QXmlNodeModelIndex&, const short
    312, 10, 0,	//39  const QXmlNodeModelIndex&, QAbstractXmlReceiver* const
    310, 0,	//42  const QXmlName&
    312, 10, 262, 0,	//44  const QXmlNodeModelIndex&, QAbstractXmlReceiver* const, const QFlags<QAbstractXmlNodeModel::NodeCopySetting>&
    8, 312, 0,	//48  QAbstractXmlNodeModel::SimpleAxis, const QXmlNodeModelIndex&
    323, 0,	//51  long long
    336, 323, 0,	//53  void*, long long
    323, 323, 0,	//56  long long, long long
    336, 0,	//59  void*
    310, 301, 0,	//61  const QXmlName&, const QStringRef&
    298, 0,	//64  const QString&
    301, 0,	//66  const QStringRef&
    310, 298, 0,	//68  const QXmlName&, const QString&
    306, 0,	//71  const QVariant&
    277, 0,	//73  const QPatternist::Item&
    319, 0,	//75  double
    29, 29, 0,	//77  QFile::Permission, QFile::Permission
    19, 17, 0,	//80  QDataStream&, QChar&
    25, 33, 0,	//83  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    19, 75, 0,	//86  QDataStream&, QLocale&
    226, 321, 0,	//89  Qt::WindowType, int
    251, 315, 329, 0,	//92  char*, const char*, unsigned int
    329, 0,	//96  unsigned int
    250, 0,	//98  char
    290, 319, 0,	//100  const QSizeF&, double
    22, 266, 0,	//103  QDebug, const QLine&
    256, 315, 0,	//106  const QByteArray&, const char*
    19, 87, 0,	//109  QDataStream&, QRect&
    191, 191, 0,	//112  Qt::ItemFlag, Qt::ItemFlag
    306, 308, 0,	//115  const QVariant&, const QVariantComparisonHelper&
    22, 36, 0,	//118  QDebug, QFlags<QIODevice::OpenModeFlag>
    288, 288, 0,	//121  const QSize&, const QSize&
    22, 264, 0,	//124  QDebug, const QHostAddress&
    16, 298, 0,	//127  QChar, const QString&
    315, 315, 329, 0,	//130  const char*, const char*, unsigned int
    301, 301, 0,	//134  const QStringRef&, const QStringRef&
    22, 73, 0,	//137  QDebug, QLocalSocket::LocalSocketError
    251, 326, 315, 333, 0,	//140  char*, size_t, const char*, va_list
    282, 282, 0,	//145  const QPointF&, const QPointF&
    298, 301, 0,	//148  const QString&, const QStringRef&
    19, 264, 0,	//151  QDataStream&, const QHostAddress&
    298, 16, 0,	//154  const QString&, QChar
    315, 329, 0,	//157  const char*, unsigned int
    19, 26, 0,	//160  QDataStream&, QEasingCurve&
    22, 258, 0,	//163  QDebug, const QDate&
    265, 301, 0,	//166  const QLatin1String&, const QStringRef&
    216, 216, 0,	//169  Qt::ToolBarArea, Qt::ToolBarArea
    22, 267, 0,	//172  QDebug, const QLineF&
    284, 284, 0,	//175  const QRectF&, const QRectF&
    327, 0,	//178  unsigned char
    276, 298, 286, 270, 72, 0,	//180  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    301, 265, 0,	//186  const QStringRef&, const QLatin1String&
    321, 0,	//189  int
    19, 20, 0,	//191  QDataStream&, QDate&
    320, 0,	//194  float
    213, 321, 0,	//196  Qt::TextInteractionFlag, int
    16, 16, 0,	//199  QChar, QChar
    16, 0,	//202  QChar
    19, 120, 0,	//204  QDataStream&, QUrl&
    22, 272, 0,	//207  QDebug, const QModelIndex&
    69, 37, 0,	//210  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    22, 295, 0,	//213  QDebug, const QSslError::SslError&
    315, 321, 0,	//216  const char*, int
    319, 319, 0,	//219  double, double
    19, 307, 0,	//222  QDataStream&, const QVariant::Type
    324, 0,	//225  short
    19, 306, 0,	//227  QDataStream&, const QVariant&
    213, 59, 0,	//230  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    22, 292, 0,	//233  QDebug, const QSslCertificate&
    191, 54, 0,	//236  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    322, 0,	//239  long
    188, 53, 0,	//241  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    19, 290, 0,	//244  QDataStream&, const QSizeF&
    106, 106, 0,	//247  QString::Null, QString::Null
    315, 256, 0,	//250  const char*, const QByteArray&
    81, 81, 0,	//253  QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag
    81, 40, 0,	//256  QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>
    65, 264, 0,	//259  QHostAddress::SpecialAddress, const QHostAddress&
    254, 0,	//262  const QBitArray&
    25, 25, 0,	//264  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    251, 315, 0,	//267  char*, const char*
    254, 254, 0,	//270  const QBitArray&, const QBitArray&
    280, 280, 0,	//273  const QPoint&, const QPoint&
    194, 55, 0,	//276  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    282, 319, 0,	//279  const QPointF&, double
    291, 0,	//282  const QSourceLocation&
    22, 290, 0,	//284  QDebug, const QSizeF&
    263, 263, 0,	//287  const QHashDummyValue&, const QHashDummyValue&
    1, 1, 0,	//290  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    118, 321, 0,	//293  QUdpSocket::BindFlag, int
    283, 283, 0,	//296  const QRect&, const QRect&
    19, 122, 0,	//299  QDataStream&, QUuid&
    256, 256, 0,	//302  const QByteArray&, const QByteArray&
    317, 321, 0,	//305  const unsigned char*, int
    118, 46, 0,	//308  QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>
    256, 321, 0,	//311  const QByteArray&, int
    256, 0,	//314  const QByteArray&
    19, 298, 0,	//316  QDataStream&, const QString&
    112, 113, 0,	//319  QTextStream&, QTextStream&(*)(QTextStream&)
    22, 294, 0,	//322  QDebug, const QSslError&
    177, 321, 0,	//325  Qt::DropAction, int
    336, 326, 326, 326, 0,	//328  void*, size_t, size_t, size_t
    197, 321, 0,	//333  Qt::MatchFlag, int
    19, 280, 0,	//336  QDataStream&, const QPoint&
    22, 4, 0,	//339  QDebug, QAbstractSocket::SocketState
    22, 283, 0,	//342  QDebug, const QRect&
    22, 3, 0,	//345  QDebug, QAbstractSocket::SocketError
    111, 44, 0,	//348  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    332, 0,	//351  unsigned short
    213, 213, 0,	//353  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    107, 43, 0,	//356  QString::SectionFlag, QFlags<QString::SectionFlag>
    22, 260, 0,	//359  QDebug, const QDir&
    22, 291, 0,	//362  QDebug, const QSourceLocation&
    199, 199, 0,	//365  Qt::MouseButton, Qt::MouseButton
    336, 326, 0,	//368  void*, size_t
    177, 177, 0,	//371  Qt::DropAction, Qt::DropAction
    100, 321, 0,	//374  QSsl::SslOption, int
    1, 321, 0,	//377  QAbstractFileEngine::FileFlag, int
    298, 106, 0,	//380  const QString&, QString::Null
    182, 51, 0,	//383  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    28, 321, 0,	//386  QEventLoop::ProcessEventsFlag, int
    22, 102, 0,	//389  QDebug, QSslCertificate::SubjectInfo
    67, 67, 0,	//392  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    76, 76, 0,	//395  QLocale::NumberOption, QLocale::NumberOption
    19, 71, 0,	//398  QDataStream&, QLineF&
    22, 296, 0,	//401  QDebug, const QSslKey&
    19, 267, 0,	//404  QDataStream&, const QLineF&
    290, 290, 0,	//407  const QSizeF&, const QSizeF&
    319, 288, 0,	//410  double, const QSize&
    175, 49, 0,	//413  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    197, 56, 0,	//416  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    280, 320, 0,	//419  const QPoint&, float
    282, 0,	//422  const QPointF&
    155, 321, 0,	//424  Qt::AlignmentFlag, int
    186, 321, 0,	//427  Qt::ImageConversionFlag, int
    22, 288, 0,	//430  QDebug, const QSize&
    264, 0,	//433  const QHostAddress&
    111, 321, 0,	//435  QTextCodec::ConversionFlag, int
    22, 280, 0,	//438  QDebug, const QPoint&
    280, 0,	//441  const QPoint&
    22, 304, 0,	//443  QDebug, const QUrl&
    19, 282, 0,	//446  QDataStream&, const QPointF&
    111, 111, 0,	//449  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    19, 64, 0,	//452  QDataStream&, QHostAddress&
    13, 13, 0,	//455  QBool, QBool
    315, 301, 0,	//458  const char*, const QStringRef&
    331, 0,	//461  unsigned long long
    114, 321, 0,	//463  QTextStream::NumberFlag, int
    22, 282, 0,	//466  QDebug, const QPointF&
    106, 298, 0,	//469  QString::Null, const QString&
    334, 0,	//472  void(*)()
    76, 38, 0,	//474  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    182, 182, 0,	//477  Qt::GestureFlag, Qt::GestureFlag
    19, 88, 0,	//480  QDataStream&, QRectF&
    320, 320, 0,	//483  float, float
    19, 257, 0,	//486  QDataStream&, const QChar&
    19, 86, 0,	//489  QDataStream&, QPointF&
    288, 319, 0,	//492  const QSize&, double
    335, 0,	//495  void(*)(QtMsgType,const char*)
    112, 115, 0,	//497  QTextStream&, QTextStreamManipulator
    155, 155, 0,	//500  Qt::AlignmentFlag, Qt::AlignmentFlag
    19, 70, 0,	//503  QDataStream&, QLine&
    23, 23, 0,	//506  QDir::Filter, QDir::Filter
    280, 319, 0,	//509  const QPoint&, double
    19, 256, 0,	//512  QDataStream&, const QByteArray&
    19, 261, 0,	//515  QDataStream&, const QEasingCurve&
    19, 273, 0,	//518  QDataStream&, const QNetworkCacheMetaData&
    186, 186, 0,	//521  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    225, 321, 0,	//524  Qt::WindowState, int
    19, 104, 0,	//527  QDataStream&, QString&
    276, 298, 270, 0,	//530  const QObject*, const QString&, const QMetaObject&
    19, 284, 0,	//534  QDataStream&, const QRectF&
    19, 12, 0,	//537  QDataStream&, QBitArray&
    19, 91, 0,	//540  QDataStream&, QSize&
    194, 194, 0,	//543  Qt::KeyboardModifier, Qt::KeyboardModifier
    249, 13, 0,	//546  bool, QBool
    114, 114, 0,	//549  QTextStream::NumberFlag, QTextStream::NumberFlag
    19, 21, 0,	//552  QDataStream&, QDateTime&
    306, 125, 336, 0,	//555  const QVariant&, QVariant::Type, void*
    301, 298, 0,	//559  const QStringRef&, const QString&
    317, 328, 321, 0,	//562  const unsigned char*, unsigned char*, int
    194, 321, 0,	//566  Qt::KeyboardModifier, int
    19, 259, 0,	//569  QDataStream&, const QDateTime&
    229, 315, 0,	//572  QtMsgType, const char*
    28, 34, 0,	//575  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    269, 269, 0,	//578  const QMargins&, const QMargins&
    121, 121, 0,	//581  QUrl::FormattingOption, QUrl::FormattingOption
    82, 82, 0,	//584  QNetworkProxy::Capability, QNetworkProxy::Capability
    80, 39, 0,	//587  QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>
    22, 307, 0,	//590  QDebug, const QVariant::Type
    19, 116, 0,	//593  QDataStream&, QTime&
    175, 321, 0,	//596  Qt::DockWidgetArea, int
    226, 226, 0,	//599  Qt::WindowType, Qt::WindowType
    22, 259, 0,	//602  QDebug, const QDateTime&
    336, 321, 326, 0,	//605  void*, int, size_t
    325, 0,	//609  signed char
    226, 63, 0,	//611  Qt::WindowType, QFlags<Qt::WindowType>
    225, 225, 0,	//614  Qt::WindowState, Qt::WindowState
    19, 109, 0,	//617  QDataStream&, QStringList&
    22, 306, 0,	//620  QDebug, const QVariant&
    29, 321, 0,	//623  QFile::Permission, int
    84, 0,	//626  QObject*(*)()
    319, 282, 0,	//628  double, const QPointF&
    321, 280, 0,	//631  int, const QPoint&
    19, 304, 0,	//634  QDataStream&, const QUrl&
    19, 85, 0,	//637  QDataStream&, QPoint&
    19, 303, 0,	//640  QDataStream&, const QTime&
    118, 118, 0,	//643  QUdpSocket::BindFlag, QUdpSocket::BindFlag
    19, 89, 0,	//646  QDataStream&, QRegExp&
    188, 321, 0,	//649  Qt::InputMethodHint, int
    19, 268, 0,	//652  QDataStream&, const QLocale&
    326, 326, 0,	//655  size_t, size_t
    19, 254, 0,	//658  QDataStream&, const QBitArray&
    315, 315, 315, 321, 0,	//661  const char*, const char*, const char*, int
    121, 47, 0,	//666  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    28, 28, 0,	//669  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    256, 250, 0,	//672  const QByteArray&, char
    82, 321, 0,	//675  QNetworkProxy::Capability, int
    69, 69, 0,	//678  QLibrary::LoadHint, QLibrary::LoadHint
    155, 48, 0,	//681  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    19, 305, 0,	//684  QDataStream&, const QUuid&
    67, 36, 0,	//687  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    19, 266, 0,	//690  QDataStream&, const QLine&
    182, 321, 0,	//693  Qt::GestureFlag, int
    301, 315, 0,	//696  const QStringRef&, const char*
    24, 32, 0,	//699  QDir::SortFlag, QFlags<QDir::SortFlag>
    22, 274, 0,	//702  QDebug, const QNetworkCookie&
    19, 258, 0,	//705  QDataStream&, const QDate&
    250, 256, 0,	//708  char, const QByteArray&
    69, 321, 0,	//711  QLibrary::LoadHint, int
    317, 321, 321, 0,	//714  const unsigned char*, int, int
    201, 201, 0,	//718  Qt::Orientation, Qt::Orientation
    298, 298, 0,	//721  const QString&, const QString&
    13, 249, 0,	//724  QBool, bool
    19, 299, 0,	//727  QDataStream&, const QStringList&
    19, 285, 0,	//730  QDataStream&, const QRegExp&
    24, 321, 0,	//733  QDir::SortFlag, int
    336, 318, 326, 0,	//736  void*, const void*, size_t
    216, 60, 0,	//740  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    22, 74, 0,	//743  QDebug, QLocalSocket::LocalSocketState
    22, 278, 0,	//746  QDebug, const QPersistentModelIndex&
    309, 0,	//749  const QXmlItem&
    19, 124, 0,	//751  QDataStream&, QVariant&
    304, 0,	//754  const QUrl&
    219, 61, 0,	//756  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    320, 280, 0,	//759  float, const QPoint&
    319, 280, 0,	//762  double, const QPoint&
    22, 275, 0,	//765  QDebug, const QNetworkInterface&
    22, 276, 0,	//768  QDebug, const QObject*
    22, 293, 0,	//771  QDebug, const QSslCipher&
    29, 35, 0,	//774  QFile::Permission, QFlags<QFile::Permission>
    19, 79, 0,	//777  QDataStream&, QNetworkCacheMetaData&
    100, 100, 0,	//780  QSsl::SslOption, QSsl::SslOption
    22, 284, 0,	//783  QDebug, const QRectF&
    114, 45, 0,	//786  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    24, 24, 0,	//789  QDir::SortFlag, QDir::SortFlag
    82, 41, 0,	//792  QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>
    81, 321, 0,	//795  QNetworkInterface::InterfaceFlag, int
    219, 321, 0,	//798  Qt::TouchPointState, int
    23, 321, 0,	//801  QDir::Filter, int
    330, 0,	//804  unsigned long
    1, 30, 0,	//806  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    199, 57, 0,	//809  Qt::MouseButton, QFlags<Qt::MouseButton>
    177, 50, 0,	//812  Qt::DropAction, QFlags<Qt::DropAction>
    326, 0,	//815  size_t
    201, 321, 0,	//817  Qt::Orientation, int
    216, 321, 0,	//820  Qt::ToolBarArea, int
    19, 15, 0,	//823  QDataStream&, QByteArray&
    19, 126, 0,	//826  QDataStream&, QVariant::Type&
    19, 283, 0,	//829  QDataStream&, const QRect&
    22, 261, 0,	//832  QDebug, const QEasingCurve&
    278, 0,	//835  const QPersistentModelIndex&
    80, 80, 0,	//837  QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability
    22, 303, 0,	//840  QDebug, const QTime&
    76, 321, 0,	//843  QLocale::NumberOption, int
    219, 219, 0,	//846  Qt::TouchPointState, Qt::TouchPointState
    100, 42, 0,	//849  QSsl::SslOption, QFlags<QSsl::SslOption>
    186, 52, 0,	//852  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    225, 62, 0,	//855  Qt::WindowState, QFlags<Qt::WindowState>
    175, 175, 0,	//858  Qt::DockWidgetArea, Qt::DockWidgetArea
    25, 321, 0,	//861  QDirIterator::IteratorFlag, int
    319, 290, 0,	//864  double, const QSizeF&
    22, 269, 0,	//867  QDebug, const QMargins&
    272, 0,	//870  const QModelIndex&
    280, 321, 0,	//872  const QPoint&, int
    121, 321, 0,	//875  QUrl::FormattingOption, int
    197, 197, 0,	//878  Qt::MatchFlag, Qt::MatchFlag
    188, 188, 0,	//881  Qt::InputMethodHint, Qt::InputMethodHint
    201, 58, 0,	//884  Qt::Orientation, QFlags<Qt::Orientation>
    22, 31, 0,	//887  QDebug, QFlags<QDir::Filter>
    191, 321, 0,	//890  Qt::ItemFlag, int
    199, 321, 0,	//893  Qt::MouseButton, int
    19, 92, 0,	//896  QDataStream&, QSizeF&
    67, 321, 0,	//899  QIODevice::OpenModeFlag, int
    107, 321, 0,	//902  QString::SectionFlag, int
    80, 321, 0,	//905  QNetworkConfigurationManager::Capability, int
    19, 288, 0,	//908  QDataStream&, const QSize&
    23, 31, 0,	//911  QDir::Filter, QFlags<QDir::Filter>
    107, 107, 0,	//914  QString::SectionFlag, QString::SectionFlag
    27, 0,	//917  QEvent*
    83, 27, 0,	//919  QObject*, QEvent*
    117, 0,	//922  QTimerEvent*
    18, 0,	//924  QChildEvent*
    311, 0,	//926  const QXmlNamePool&
    304, 321, 321, 0,	//928  const QUrl&, int, int
    304, 321, 0,	//932  const QUrl&, int
    313, 66, 0,	//935  const QXmlQuery&, QIODevice*
    138, 298, 298, 298, 0,	//938  QXmlNamePool&, const QString&, const QString&, const QString&
    298, 311, 0,	//943  const QString&, const QXmlNamePool&
    138, 298, 0,	//946  QXmlNamePool&, const QString&
    138, 298, 298, 0,	//949  QXmlNamePool&, const QString&, const QString&
    313, 0,	//953  const QXmlQuery&
    148, 311, 0,	//955  QXmlQuery::QueryLanguage, const QXmlNamePool&
    2, 0,	//958  QAbstractMessageHandler*
    298, 304, 0,	//960  const QString&, const QUrl&
    66, 304, 0,	//963  QIODevice*, const QUrl&
    310, 309, 0,	//966  const QXmlName&, const QXmlItem&
    298, 309, 0,	//969  const QString&, const QXmlItem&
    310, 66, 0,	//972  const QXmlName&, QIODevice*
    298, 66, 0,	//975  const QString&, QIODevice*
    310, 313, 0,	//978  const QXmlName&, const QXmlQuery&
    298, 313, 0,	//981  const QString&, const QXmlQuery&
    149, 0,	//984  QXmlResultItems*
    9, 0,	//986  QAbstractXmlReceiver*
    110, 0,	//988  QStringList*
    66, 0,	//990  QIODevice*
    105, 0,	//992  QString*
    252, 0,	//994  const QAbstractUriResolver*
    78, 0,	//996  QNetworkAccessManager*
    148, 0,	//998  QXmlQuery::QueryLanguage
    314, 0,	//1000  const QXmlSchema&
    256, 304, 0,	//1002  const QByteArray&, const QUrl&
    302, 0,	//1005  const QTextCodec*
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "Attribute",	//1
    "AxisAncestor",	//2
    "AxisAncestorOrSelf",	//3
    "AxisAttribute",	//4
    "AxisAttributeOrTop",	//5
    "AxisChild",	//6
    "AxisChildOrTop",	//7
    "AxisDescendant",	//8
    "AxisDescendantOrSelf",	//9
    "AxisFollowing",	//10
    "AxisFollowingSibling",	//11
    "AxisNamespace",	//12
    "AxisParent",	//13
    "AxisPreceding",	//14
    "AxisPrecedingSibling",	//15
    "AxisSelf",	//16
    "Comment",	//17
    "Document",	//18
    "Element",	//19
    "FirstChild",	//20
    "Follows",	//21
    "InheritNamespaces",	//22
    "Is",	//23
    "LicensedActiveQt",	//24
    "LicensedCore",	//25
    "LicensedDBus",	//26
    "LicensedDeclarative",	//27
    "LicensedGui",	//28
    "LicensedHelp",	//29
    "LicensedMultimedia",	//30
    "LicensedNetwork",	//31
    "LicensedOpenGL",	//32
    "LicensedOpenVG",	//33
    "LicensedQt3Support",	//34
    "LicensedQt3SupportLight",	//35
    "LicensedScript",	//36
    "LicensedScriptTools",	//37
    "LicensedSql",	//38
    "LicensedSvg",	//39
    "LicensedTest",	//40
    "LicensedXml",	//41
    "LicensedXmlPatterns",	//42
    "Namespace",	//43
    "NextSibling",	//44
    "Parent",	//45
    "Precedes",	//46
    "PreserveNamespaces",	//47
    "PreviousSibling",	//48
    "ProcessingInstruction",	//49
    "QAbstractMessageHandler",	//50
    "QAbstractMessageHandler#",	//51
    "QAbstractUriResolver",	//52
    "QAbstractUriResolver#",	//53
    "QAbstractXmlNodeModel",	//54
    "QAbstractXmlReceiver",	//55
    "QSimpleXmlNodeModel",	//56
    "QSimpleXmlNodeModel#",	//57
    "QSourceLocation",	//58
    "QSourceLocation#",	//59
    "QSourceLocation#$",	//60
    "QSourceLocation#$$",	//61
    "QXmlFormatter",	//62
    "QXmlFormatter##",	//63
    "QXmlItem",	//64
    "QXmlItem#",	//65
    "QXmlName",	//66
    "QXmlName#",	//67
    "QXmlName#$",	//68
    "QXmlName#$$",	//69
    "QXmlName#$$$",	//70
    "QXmlNamePool",	//71
    "QXmlNamePool#",	//72
    "QXmlNodeModelIndex",	//73
    "QXmlNodeModelIndex#",	//74
    "QXmlQuery",	//75
    "QXmlQuery#",	//76
    "QXmlQuery$",	//77
    "QXmlQuery$#",	//78
    "QXmlResultItems",	//79
    "QXmlSchema",	//80
    "QXmlSchema#",	//81
    "QXmlSchemaValidator",	//82
    "QXmlSchemaValidator#",	//83
    "QXmlSerializer",	//84
    "QXmlSerializer##",	//85
    "Q_COMPLEX_TYPE",	//86
    "Q_DUMMY_TYPE",	//87
    "Q_MOVABLE_TYPE",	//88
    "Q_PRIMITIVE_TYPE",	//89
    "Q_STATIC_TYPE",	//90
    "QtCriticalMsg",	//91
    "QtDebugMsg",	//92
    "QtFatalMsg",	//93
    "QtSystemMsg",	//94
    "QtWarningMsg",	//95
    "Text",	//96
    "XPath20",	//97
    "XQuery10",	//98
    "XSLT20",	//99
    "XmlSchema11IdentityConstraintField",	//100
    "XmlSchema11IdentityConstraintSelector",	//101
    "additionalData",	//102
    "atomicValue",	//103
    "atomicValue#",	//104
    "attribute",	//105
    "attribute##",	//106
    "attributes",	//107
    "attributes#",	//108
    "baseUri",	//109
    "baseUri#",	//110
    "bindVariable",	//111
    "bindVariable##",	//112
    "bindVariable$#",	//113
    "characters",	//114
    "characters#",	//115
    "childEvent",	//116
    "codec",	//117
    "column",	//118
    "comment",	//119
    "comment$",	//120
    "compareOrder",	//121
    "compareOrder##",	//122
    "connectNotify",	//123
    "copyNodeTo",	//124
    "copyNodeTo###",	//125
    "createIndex",	//126
    "createIndex$",	//127
    "createIndex$$",	//128
    "current",	//129
    "customEvent",	//130
    "data",	//131
    "disconnectNotify",	//132
    "documentUri",	//133
    "documentUri#",	//134
    "elementById",	//135
    "elementById#",	//136
    "endDocument",	//137
    "endElement",	//138
    "endOfSequence",	//139
    "evaluateTo",	//140
    "evaluateTo#",	//141
    "evaluateTo$",	//142
    "evaluateTo?",	//143
    "event",	//144
    "eventFilter",	//145
    "fromClarkName",	//146
    "fromClarkName$#",	//147
    "handleMessage",	//148
    "handleMessage$$##",	//149
    "hasError",	//150
    "indentationDepth",	//151
    "initialTemplateName",	//152
    "internalPointer",	//153
    "isAtomicValue",	//154
    "isDeepEqual",	//155
    "isDeepEqual##",	//156
    "isNCName",	//157
    "isNCName$",	//158
    "isNode",	//159
    "isNull",	//160
    "isValid",	//161
    "item",	//162
    "item#",	//163
    "kind",	//164
    "kind#",	//165
    "line",	//166
    "load",	//167
    "load#",	//168
    "load##",	//169
    "localName",	//170
    "localName#",	//171
    "message",	//172
    "message$$",	//173
    "message$$#",	//174
    "message$$##",	//175
    "messageHandler",	//176
    "metaObject",	//177
    "model",	//178
    "name",	//179
    "name#",	//180
    "namePool",	//181
    "namespaceBinding",	//182
    "namespaceBinding#",	//183
    "namespaceBindings",	//184
    "namespaceBindings#",	//185
    "namespaceForPrefix",	//186
    "namespaceForPrefix#$",	//187
    "namespaceUri",	//188
    "namespaceUri#",	//189
    "networkAccessManager",	//190
    "next",	//191
    "nextFromSimpleAxis",	//192
    "nextFromSimpleAxis$#",	//193
    "nodesByIdref",	//194
    "nodesByIdref#",	//195
    "operator!=",	//196
    "operator!=#",	//197
    "operator!=##",	//198
    "operator!=#$",	//199
    "operator!=$#",	//200
    "operator&",	//201
    "operator&##",	//202
    "operator*",	//203
    "operator*#$",	//204
    "operator*$#",	//205
    "operator+",	//206
    "operator+##",	//207
    "operator+#$",	//208
    "operator+$#",	//209
    "operator+$$",	//210
    "operator-",	//211
    "operator-#",	//212
    "operator-##",	//213
    "operator/",	//214
    "operator/#$",	//215
    "operator<",	//216
    "operator<##",	//217
    "operator<#$",	//218
    "operator<$#",	//219
    "operator<<",	//220
    "operator<<##",	//221
    "operator<<#$",	//222
    "operator<<#?",	//223
    "operator<=",	//224
    "operator<=##",	//225
    "operator<=#$",	//226
    "operator<=$#",	//227
    "operator=",	//228
    "operator=#",	//229
    "operator==",	//230
    "operator==#",	//231
    "operator==##",	//232
    "operator==#$",	//233
    "operator==$#",	//234
    "operator>",	//235
    "operator>##",	//236
    "operator>#$",	//237
    "operator>$#",	//238
    "operator>=",	//239
    "operator>=##",	//240
    "operator>=#$",	//241
    "operator>=$#",	//242
    "operator>>",	//243
    "operator>>##",	//244
    "operator>>#$",	//245
    "operator>>#?",	//246
    "operator^",	//247
    "operator^##",	//248
    "operator|",	//249
    "operator|##",	//250
    "operator|$$",	//251
    "outputDevice",	//252
    "prefix",	//253
    "prefix#",	//254
    "processingInstruction",	//255
    "processingInstruction#$",	//256
    "qAcos",	//257
    "qAcos$",	//258
    "qAddPostRoutine",	//259
    "qAddPostRoutine$",	//260
    "qAppName",	//261
    "qAsin",	//262
    "qAsin$",	//263
    "qAtan",	//264
    "qAtan$",	//265
    "qAtan2",	//266
    "qAtan2$$",	//267
    "qBadAlloc",	//268
    "qCeil",	//269
    "qCeil$",	//270
    "qChecksum",	//271
    "qChecksum$$",	//272
    "qCompress",	//273
    "qCompress#",	//274
    "qCompress#$",	//275
    "qCompress$$",	//276
    "qCompress$$$",	//277
    "qCos",	//278
    "qCos$",	//279
    "qCritical",	//280
    "qDebug",	//281
    "qExp",	//282
    "qExp$",	//283
    "qFabs",	//284
    "qFabs$",	//285
    "qFastCos",	//286
    "qFastCos$",	//287
    "qFastSin",	//288
    "qFastSin$",	//289
    "qFlagLocation",	//290
    "qFlagLocation$",	//291
    "qFloor",	//292
    "qFloor$",	//293
    "qFree",	//294
    "qFree$",	//295
    "qFreeAligned",	//296
    "qFreeAligned$",	//297
    "qFuzzyCompare",	//298
    "qFuzzyCompare$$",	//299
    "qFuzzyIsNull",	//300
    "qFuzzyIsNull$",	//301
    "qHash",	//302
    "qHash#",	//303
    "qHash$",	//304
    "qInf",	//305
    "qInstallMsgHandler",	//306
    "qInstallMsgHandler$",	//307
    "qIntCast",	//308
    "qIntCast$",	//309
    "qIsFinite",	//310
    "qIsFinite$",	//311
    "qIsForwardIteratorEnd",	//312
    "qIsForwardIteratorEnd#",	//313
    "qIsInf",	//314
    "qIsInf$",	//315
    "qIsNaN",	//316
    "qIsNaN$",	//317
    "qIsNull",	//318
    "qIsNull$",	//319
    "qLn",	//320
    "qLn$",	//321
    "qMalloc",	//322
    "qMalloc$",	//323
    "qMallocAligned",	//324
    "qMallocAligned$$",	//325
    "qMemCopy",	//326
    "qMemCopy$$$",	//327
    "qMemSet",	//328
    "qMemSet$$$",	//329
    "qPow",	//330
    "qPow$$",	//331
    "qQNaN",	//332
    "qRealloc",	//333
    "qRealloc$$",	//334
    "qReallocAligned",	//335
    "qReallocAligned$$$$",	//336
    "qRegisterStaticPluginInstanceFunction",	//337
    "qRegisterStaticPluginInstanceFunction#",	//338
    "qRemovePostRoutine",	//339
    "qRemovePostRoutine$",	//340
    "qRound",	//341
    "qRound$",	//342
    "qRound64",	//343
    "qRound64$",	//344
    "qSNaN",	//345
    "qSetFieldWidth",	//346
    "qSetFieldWidth$",	//347
    "qSetPadChar",	//348
    "qSetPadChar#",	//349
    "qSetRealNumberPrecision",	//350
    "qSetRealNumberPrecision$",	//351
    "qSharedBuild",	//352
    "qSin",	//353
    "qSin$",	//354
    "qSqrt",	//355
    "qSqrt$",	//356
    "qStringComparisonHelper",	//357
    "qStringComparisonHelper#$",	//358
    "qTan",	//359
    "qTan$",	//360
    "qUncompress",	//361
    "qUncompress#",	//362
    "qUncompress$$",	//363
    "qVersion",	//364
    "qWarning",	//365
    "qbswap_helper",	//366
    "qbswap_helper$$$",	//367
    "qgetenv",	//368
    "qgetenv$",	//369
    "qputenv",	//370
    "qputenv$#",	//371
    "qrand",	//372
    "qsrand",	//373
    "qsrand$",	//374
    "qstrcmp",	//375
    "qstrcmp##",	//376
    "qstrcmp#$",	//377
    "qstrcmp$#",	//378
    "qstrcmp$$",	//379
    "qstrcpy",	//380
    "qstrcpy$$",	//381
    "qstrdup",	//382
    "qstrdup$",	//383
    "qstricmp",	//384
    "qstricmp$$",	//385
    "qstrlen",	//386
    "qstrlen$",	//387
    "qstrncmp",	//388
    "qstrncmp$$$",	//389
    "qstrncpy",	//390
    "qstrncpy$$$",	//391
    "qstrnicmp",	//392
    "qstrnicmp$$$",	//393
    "qstrnlen",	//394
    "qstrnlen$$",	//395
    "qtTrId",	//396
    "qtTrId$",	//397
    "qtTrId$$",	//398
    "qt_assert",	//399
    "qt_assert$$$",	//400
    "qt_assert_x",	//401
    "qt_assert_x$$$$",	//402
    "qt_check_pointer",	//403
    "qt_check_pointer$$",	//404
    "qt_error_string",	//405
    "qt_error_string$",	//406
    "qt_message_output",	//407
    "qt_message_output$$",	//408
    "qt_metacall",	//409
    "qt_metacall$$?",	//410
    "qt_metacast",	//411
    "qt_metacast$",	//412
    "qt_noop",	//413
    "qt_qFindChild_helper",	//414
    "qt_qFindChild_helper#$#",	//415
    "qt_qFindChildren_helper",	//416
    "qt_qFindChildren_helper#$##?",	//417
    "queryLanguage",	//418
    "qvariant_cast_helper",	//419
    "qvariant_cast_helper#$$",	//420
    "qvsnprintf",	//421
    "qvsnprintf$$$?",	//422
    "reset",	//423
    "resolve",	//424
    "resolve##",	//425
    "root",	//426
    "root#",	//427
    "schema",	//428
    "sendAsNode",	//429
    "sendAsNode#",	//430
    "sendNamespaces",	//431
    "sendNamespaces##",	//432
    "setCodec",	//433
    "setCodec#",	//434
    "setColumn",	//435
    "setColumn$",	//436
    "setFocus",	//437
    "setFocus#",	//438
    "setFocus$",	//439
    "setIndentationDepth",	//440
    "setIndentationDepth$",	//441
    "setInitialTemplateName",	//442
    "setInitialTemplateName#",	//443
    "setInitialTemplateName$",	//444
    "setLine",	//445
    "setLine$",	//446
    "setMessageHandler",	//447
    "setMessageHandler#",	//448
    "setNetworkAccessManager",	//449
    "setNetworkAccessManager#",	//450
    "setQuery",	//451
    "setQuery#",	//452
    "setQuery##",	//453
    "setQuery$",	//454
    "setQuery$#",	//455
    "setSchema",	//456
    "setSchema#",	//457
    "setUri",	//458
    "setUri#",	//459
    "setUriResolver",	//460
    "setUriResolver#",	//461
    "sourceLocation",	//462
    "sourceLocation#",	//463
    "startDocument",	//464
    "startElement",	//465
    "startElement#",	//466
    "startOfSequence",	//467
    "staticMetaObject",	//468
    "stringValue",	//469
    "stringValue#",	//470
    "timerEvent",	//471
    "toAtomicValue",	//472
    "toClarkName",	//473
    "toClarkName#",	//474
    "toNodeModelIndex",	//475
    "tr",	//476
    "tr$",	//477
    "tr$$",	//478
    "tr$$$",	//479
    "trUtf8",	//480
    "trUtf8$",	//481
    "trUtf8$$",	//482
    "trUtf8$$$",	//483
    "typedValue",	//484
    "typedValue#",	//485
    "uri",	//486
    "uriResolver",	//487
    "validate",	//488
    "validate#",	//489
    "validate##",	//490
    "whitespaceOnly",	//491
    "whitespaceOnly#",	//492
    "~QAbstractMessageHandler",	//493
    "~QAbstractUriResolver",	//494
    "~QAbstractXmlNodeModel",	//495
    "~QAbstractXmlReceiver",	//496
    "~QSimpleXmlNodeModel",	//497
    "~QSourceLocation",	//498
    "~QXmlFormatter",	//499
    "~QXmlItem",	//500
    "~QXmlName",	//501
    "~QXmlNamePool",	//502
    "~QXmlNodeModelIndex",	//503
    "~QXmlQuery",	//504
    "~QXmlResultItems",	//505
    "~QXmlSchema",	//506
    "~QXmlSchemaValidator",	//507
    "~QXmlSerializer",	//508
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {1, 177, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 271, 1},	//1 QAbstractMessageHandler::metaObject() const
    {1, 411, 1, 1, Smoke::mf_virtual, 336, 2},	//2 QAbstractMessageHandler::qt_metacast(const char*)
    {1, 476, 3, 2, Smoke::mf_static, 103, 3},	//3 QAbstractMessageHandler::tr(const char*, const char*)
    {1, 480, 3, 2, Smoke::mf_static, 103, 4},	//4 QAbstractMessageHandler::trUtf8(const char*, const char*)
    {1, 476, 6, 3, Smoke::mf_static, 103, 5},	//5 QAbstractMessageHandler::tr(const char*, const char*, int)
    {1, 480, 6, 3, Smoke::mf_static, 103, 6},	//6 QAbstractMessageHandler::trUtf8(const char*, const char*, int)
    {1, 409, 10, 3, Smoke::mf_virtual, 321, 7},	//7 QAbstractMessageHandler::qt_metacall(QMetaObject::Call, int, void**)
    {1, 50, 14, 1, Smoke::mf_ctor, 2, 8},	//8 QAbstractMessageHandler::QAbstractMessageHandler(QObject*)
    {1, 172, 16, 4, 0, 0, 9},	//9 QAbstractMessageHandler::message(QtMsgType, const QString&, const QUrl&, const QSourceLocation&)
    {1, 148, 16, 4, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 10},	//10 QAbstractMessageHandler::handleMessage(QtMsgType, const QString&, const QUrl&, const QSourceLocation&) [pure virtual]
    {1, 476, 1, 1, Smoke::mf_static, 103, 11},	//11 QAbstractMessageHandler::tr(const char*)
    {1, 480, 1, 1, Smoke::mf_static, 103, 12},	//12 QAbstractMessageHandler::trUtf8(const char*)
    {1, 50, 0, 0, Smoke::mf_ctor, 2, 13},	//13 QAbstractMessageHandler::QAbstractMessageHandler()
    {1, 172, 21, 2, 0, 0, 14},	//14 QAbstractMessageHandler::message(QtMsgType, const QString&)
    {1, 172, 24, 3, 0, 0, 15},	//15 QAbstractMessageHandler::message(QtMsgType, const QString&, const QUrl&)
    {1, 468, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 270, 16},	//16 QAbstractMessageHandler::staticMetaObject() const
    {1, 493, 0, 0, Smoke::mf_dtor, 0, 17 },	//17 QAbstractMessageHandler::~QAbstractMessageHandler()
    {2, 177, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 271, 1},	//18 QAbstractUriResolver::metaObject() const
    {2, 411, 1, 1, Smoke::mf_virtual, 336, 2},	//19 QAbstractUriResolver::qt_metacast(const char*)
    {2, 476, 3, 2, Smoke::mf_static, 103, 3},	//20 QAbstractUriResolver::tr(const char*, const char*)
    {2, 480, 3, 2, Smoke::mf_static, 103, 4},	//21 QAbstractUriResolver::trUtf8(const char*, const char*)
    {2, 476, 6, 3, Smoke::mf_static, 103, 5},	//22 QAbstractUriResolver::tr(const char*, const char*, int)
    {2, 480, 6, 3, Smoke::mf_static, 103, 6},	//23 QAbstractUriResolver::trUtf8(const char*, const char*, int)
    {2, 409, 10, 3, Smoke::mf_virtual, 321, 7},	//24 QAbstractUriResolver::qt_metacall(QMetaObject::Call, int, void**)
    {2, 52, 14, 1, Smoke::mf_ctor, 5, 8},	//25 QAbstractUriResolver::QAbstractUriResolver(QObject*)
    {2, 424, 28, 2, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 119, 9},	//26 QAbstractUriResolver::resolve(const QUrl&, const QUrl&) const [pure virtual]
    {2, 476, 1, 1, Smoke::mf_static, 103, 10},	//27 QAbstractUriResolver::tr(const char*)
    {2, 480, 1, 1, Smoke::mf_static, 103, 11},	//28 QAbstractUriResolver::trUtf8(const char*)
    {2, 52, 0, 0, Smoke::mf_ctor, 5, 12},	//29 QAbstractUriResolver::QAbstractUriResolver()
    {2, 468, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 270, 13},	//30 QAbstractUriResolver::staticMetaObject() const
    {2, 494, 0, 0, Smoke::mf_dtor, 0, 14 },	//31 QAbstractUriResolver::~QAbstractUriResolver()
    {3, 54, 0, 0, Smoke::mf_ctor, 6, 1},	//32 QAbstractXmlNodeModel::QAbstractXmlNodeModel()
    {3, 109, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 119, 2},	//33 QAbstractXmlNodeModel::baseUri(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 133, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 119, 3},	//34 QAbstractXmlNodeModel::documentUri(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 164, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 145, 4},	//35 QAbstractXmlNodeModel::kind(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 121, 33, 2, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 144, 5},	//36 QAbstractXmlNodeModel::compareOrder(const QXmlNodeModelIndex&, const QXmlNodeModelIndex&) const [pure virtual]
    {3, 426, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 140, 6},	//37 QAbstractXmlNodeModel::root(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 179, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 133, 7},	//38 QAbstractXmlNodeModel::name(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 469, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 103, 8},	//39 QAbstractXmlNodeModel::stringValue(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 484, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 123, 9},	//40 QAbstractXmlNodeModel::typedValue(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 186, 36, 2, Smoke::mf_const|Smoke::mf_virtual, 324, 10},	//41 QAbstractXmlNodeModel::namespaceForPrefix(const QXmlNodeModelIndex&, const short) const
    {3, 155, 33, 2, Smoke::mf_const|Smoke::mf_virtual, 249, 11},	//42 QAbstractXmlNodeModel::isDeepEqual(const QXmlNodeModelIndex&, const QXmlNodeModelIndex&) const
    {3, 431, 39, 2, Smoke::mf_const|Smoke::mf_virtual, 0, 12},	//43 QAbstractXmlNodeModel::sendNamespaces(const QXmlNodeModelIndex&, QAbstractXmlReceiver* const) const
    {3, 184, 31, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 127, 13},	//44 QAbstractXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 135, 42, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 140, 14},	//45 QAbstractXmlNodeModel::elementById(const QXmlName&) const [pure virtual]
    {3, 194, 42, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 128, 15},	//46 QAbstractXmlNodeModel::nodesByIdref(const QXmlName&) const [pure virtual]
    {3, 124, 44, 3, Smoke::mf_const|Smoke::mf_virtual, 0, 16},	//47 QAbstractXmlNodeModel::copyNodeTo(const QXmlNodeModelIndex&, QAbstractXmlReceiver* const, const QFlags<QAbstractXmlNodeModel::NodeCopySetting>&) const
    {3, 462, 31, 1, Smoke::mf_const, 93, 17},	//48 QAbstractXmlNodeModel::sourceLocation(const QXmlNodeModelIndex&) const
    {3, 192, 48, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 140, 18},	//49 QAbstractXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis, const QXmlNodeModelIndex&) const [pure virtual]
    {3, 107, 31, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 128, 19},	//50 QAbstractXmlNodeModel::attributes(const QXmlNodeModelIndex&) const [pure virtual]
    {3, 126, 51, 1, Smoke::mf_const|Smoke::mf_protected, 140, 20},	//51 QAbstractXmlNodeModel::createIndex(long long) const
    {3, 126, 53, 2, Smoke::mf_const|Smoke::mf_protected, 140, 21},	//52 QAbstractXmlNodeModel::createIndex(void*, long long) const
    {3, 126, 56, 2, Smoke::mf_const|Smoke::mf_protected, 140, 22},	//53 QAbstractXmlNodeModel::createIndex(long long, long long) const
    {3, 126, 59, 1, Smoke::mf_const|Smoke::mf_protected, 140, 23},	//54 QAbstractXmlNodeModel::createIndex(void*) const
    {3, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 8, 24},	//55 QAbstractXmlNodeModel::Parent (enum)
    {3, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 8, 25},	//56 QAbstractXmlNodeModel::FirstChild (enum)
    {3, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 8, 26},	//57 QAbstractXmlNodeModel::PreviousSibling (enum)
    {3, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 8, 27},	//58 QAbstractXmlNodeModel::NextSibling (enum)
    {3, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 28},	//59 QAbstractXmlNodeModel::InheritNamespaces (enum)
    {3, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 29},	//60 QAbstractXmlNodeModel::PreserveNamespaces (enum)
    {3, 495, 0, 0, Smoke::mf_dtor, 0, 30 },	//61 QAbstractXmlNodeModel::~QAbstractXmlNodeModel()
    {4, 55, 0, 0, Smoke::mf_ctor, 9, 1},	//62 QAbstractXmlReceiver::QAbstractXmlReceiver()
    {4, 465, 42, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 2},	//63 QAbstractXmlReceiver::startElement(const QXmlName&) [pure virtual]
    {4, 138, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 3},	//64 QAbstractXmlReceiver::endElement() [pure virtual]
    {4, 105, 61, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 4},	//65 QAbstractXmlReceiver::attribute(const QXmlName&, const QStringRef&) [pure virtual]
    {4, 119, 64, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 5},	//66 QAbstractXmlReceiver::comment(const QString&) [pure virtual]
    {4, 114, 66, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 6},	//67 QAbstractXmlReceiver::characters(const QStringRef&) [pure virtual]
    {4, 464, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 7},	//68 QAbstractXmlReceiver::startDocument() [pure virtual]
    {4, 137, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 8},	//69 QAbstractXmlReceiver::endDocument() [pure virtual]
    {4, 255, 68, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 9},	//70 QAbstractXmlReceiver::processingInstruction(const QXmlName&, const QString&) [pure virtual]
    {4, 103, 71, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 10},	//71 QAbstractXmlReceiver::atomicValue(const QVariant&) [pure virtual]
    {4, 182, 42, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 11},	//72 QAbstractXmlReceiver::namespaceBinding(const QXmlName&) [pure virtual]
    {4, 467, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 12},	//73 QAbstractXmlReceiver::startOfSequence() [pure virtual]
    {4, 139, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 13},	//74 QAbstractXmlReceiver::endOfSequence() [pure virtual]
    {4, 491, 66, 1, Smoke::mf_virtual, 0, 14},	//75 QAbstractXmlReceiver::whitespaceOnly(const QStringRef&)
    {4, 162, 73, 1, Smoke::mf_virtual, 0, 15},	//76 QAbstractXmlReceiver::item(const QPatternist::Item&)
    {4, 429, 73, 1, Smoke::mf_protected, 0, 16},	//77 QAbstractXmlReceiver::sendAsNode(const QPatternist::Item&)
    {4, 496, 0, 0, Smoke::mf_dtor, 0, 17 },	//78 QAbstractXmlReceiver::~QAbstractXmlReceiver()
    {17, 341, 75, 1, Smoke::mf_static, 321, 1},	//79 QGlobalSpace::qRound(double)
    {17, 249, 77, 2, Smoke::mf_static, 35, 2},	//80 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {17, 257, 75, 1, Smoke::mf_static, 319, 3},	//81 QGlobalSpace::qAcos(double)
    {17, 243, 80, 2, Smoke::mf_static, 19, 4},	//82 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {17, 249, 83, 2, Smoke::mf_static, 33, 5},	//83 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {17, 243, 86, 2, Smoke::mf_static, 19, 6},	//84 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {17, 261, 0, 0, Smoke::mf_static, 103, 7},	//85 QGlobalSpace::qAppName()
    {17, 249, 89, 2, Smoke::mf_static, 68, 8},	//86 QGlobalSpace::operator|(Qt::WindowType, int)
    {17, 390, 92, 3, Smoke::mf_static, 251, 9},	//87 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {17, 302, 96, 1, Smoke::mf_static, 329, 10},	//88 QGlobalSpace::qHash(unsigned int)
    {17, 302, 98, 1, Smoke::mf_static, 329, 11},	//89 QGlobalSpace::qHash(char)
    {17, 203, 100, 2, Smoke::mf_static, 289, 12},	//90 QGlobalSpace::operator*(const QSizeF&, double)
    {17, 220, 103, 2, Smoke::mf_static, 22, 13},	//91 QGlobalSpace::operator<<(QDebug, const QLine&)
    {17, 368, 1, 1, Smoke::mf_static, 14, 14},	//92 QGlobalSpace::qgetenv(const char*)
    {17, 216, 106, 2, Smoke::mf_static, 249, 15},	//93 QGlobalSpace::operator<(const QByteArray&, const char*)
    {17, 243, 109, 2, Smoke::mf_static, 19, 16},	//94 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {17, 249, 112, 2, Smoke::mf_static, 54, 17},	//95 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {17, 230, 115, 2, Smoke::mf_static, 249, 18},	//96 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {17, 220, 118, 2, Smoke::mf_static, 22, 19},	//97 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {17, 230, 121, 2, Smoke::mf_static, 249, 20},	//98 QGlobalSpace::operator==(const QSize&, const QSize&)
    {17, 220, 124, 2, Smoke::mf_static, 22, 21},	//99 QGlobalSpace::operator<<(QDebug, const QHostAddress&)
    {17, 288, 75, 1, Smoke::mf_static, 319, 22},	//100 QGlobalSpace::qFastSin(double)
    {17, 206, 127, 2, Smoke::mf_static, 297, 23},	//101 QGlobalSpace::operator+(QChar, const QString&)
    {17, 388, 130, 3, Smoke::mf_static, 321, 24},	//102 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {17, 224, 134, 2, Smoke::mf_static, 249, 25},	//103 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {17, 220, 137, 2, Smoke::mf_static, 22, 26},	//104 QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketError)
    {17, 421, 140, 4, Smoke::mf_static, 321, 27},	//105 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {17, 196, 145, 2, Smoke::mf_static, 249, 28},	//106 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {17, 196, 148, 2, Smoke::mf_static, 249, 29},	//107 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {17, 220, 151, 2, Smoke::mf_static, 19, 30},	//108 QGlobalSpace::operator<<(QDataStream&, const QHostAddress&)
    {17, 206, 154, 2, Smoke::mf_static, 297, 31},	//109 QGlobalSpace::operator+(const QString&, QChar)
    {17, 206, 121, 2, Smoke::mf_static, 287, 32},	//110 QGlobalSpace::operator+(const QSize&, const QSize&)
    {17, 394, 157, 2, Smoke::mf_static, 329, 33},	//111 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {17, 230, 134, 2, Smoke::mf_static, 249, 34},	//112 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {17, 243, 160, 2, Smoke::mf_static, 19, 35},	//113 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {17, 220, 163, 2, Smoke::mf_static, 22, 36},	//114 QGlobalSpace::operator<<(QDebug, const QDate&)
    {17, 196, 166, 2, Smoke::mf_static, 249, 37},	//115 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {17, 249, 169, 2, Smoke::mf_static, 60, 38},	//116 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {17, 220, 172, 2, Smoke::mf_static, 22, 39},	//117 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {17, 196, 175, 2, Smoke::mf_static, 249, 40},	//118 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {17, 302, 178, 1, Smoke::mf_static, 329, 41},	//119 QGlobalSpace::qHash(unsigned char)
    {17, 416, 180, 5, Smoke::mf_static, 0, 42},	//120 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {17, 230, 186, 2, Smoke::mf_static, 249, 43},	//121 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {17, 405, 189, 1, Smoke::mf_static, 103, 44},	//122 QGlobalSpace::qt_error_string(int)
    {17, 405, 0, 0, Smoke::mf_static, 103, 45},	//123 QGlobalSpace::qt_error_string()
    {17, 243, 191, 2, Smoke::mf_static, 19, 46},	//124 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {17, 318, 194, 1, Smoke::mf_static, 249, 47},	//125 QGlobalSpace::qIsNull(float)
    {17, 249, 196, 2, Smoke::mf_static, 68, 48},	//126 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {17, 332, 0, 0, Smoke::mf_static, 319, 49},	//127 QGlobalSpace::qQNaN()
    {17, 196, 199, 2, Smoke::mf_static, 249, 50},	//128 QGlobalSpace::operator!=(QChar, QChar)
    {17, 348, 202, 1, Smoke::mf_static, 115, 51},	//129 QGlobalSpace::qSetPadChar(QChar)
    {17, 243, 204, 2, Smoke::mf_static, 19, 52},	//130 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {17, 211, 145, 2, Smoke::mf_static, 281, 53},	//131 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {17, 220, 207, 2, Smoke::mf_static, 22, 54},	//132 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {17, 249, 210, 2, Smoke::mf_static, 37, 55},	//133 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {17, 220, 213, 2, Smoke::mf_static, 22, 56},	//134 QGlobalSpace::operator<<(QDebug, const QSslError::SslError&)
    {17, 396, 216, 2, Smoke::mf_static, 103, 57},	//135 QGlobalSpace::qtTrId(const char*, int)
    {17, 396, 1, 1, Smoke::mf_static, 103, 58},	//136 QGlobalSpace::qtTrId(const char*)
    {17, 266, 219, 2, Smoke::mf_static, 319, 59},	//137 QGlobalSpace::qAtan2(double, double)
    {17, 220, 222, 2, Smoke::mf_static, 19, 60},	//138 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {17, 302, 225, 1, Smoke::mf_static, 329, 61},	//139 QGlobalSpace::qHash(short)
    {17, 220, 227, 2, Smoke::mf_static, 19, 62},	//140 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {17, 249, 230, 2, Smoke::mf_static, 59, 63},	//141 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {17, 310, 75, 1, Smoke::mf_static, 249, 64},	//142 QGlobalSpace::qIsFinite(double)
    {17, 220, 233, 2, Smoke::mf_static, 22, 65},	//143 QGlobalSpace::operator<<(QDebug, const QSslCertificate&)
    {17, 249, 236, 2, Smoke::mf_static, 54, 66},	//144 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {17, 375, 106, 2, Smoke::mf_static, 321, 67},	//145 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {17, 382, 1, 1, Smoke::mf_static, 251, 68},	//146 QGlobalSpace::qstrdup(const char*)
    {17, 302, 239, 1, Smoke::mf_static, 329, 69},	//147 QGlobalSpace::qHash(long)
    {17, 249, 241, 2, Smoke::mf_static, 53, 70},	//148 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {17, 375, 3, 2, Smoke::mf_static, 321, 71},	//149 QGlobalSpace::qstrcmp(const char*, const char*)
    {17, 220, 244, 2, Smoke::mf_static, 19, 72},	//150 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {17, 196, 247, 2, Smoke::mf_static, 249, 73},	//151 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {17, 206, 250, 2, Smoke::mf_static, 255, 74},	//152 QGlobalSpace::operator+(const char*, const QByteArray&)
    {17, 249, 253, 2, Smoke::mf_static, 40, 75},	//153 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag)
    {17, 249, 256, 2, Smoke::mf_static, 40, 76},	//154 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>)
    {17, 230, 259, 2, Smoke::mf_static, 249, 77},	//155 QGlobalSpace::operator==(QHostAddress::SpecialAddress, const QHostAddress&)
    {17, 302, 262, 1, Smoke::mf_static, 329, 78},	//156 QGlobalSpace::qHash(const QBitArray&)
    {17, 249, 264, 2, Smoke::mf_static, 33, 79},	//157 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {17, 380, 267, 2, Smoke::mf_static, 251, 80},	//158 QGlobalSpace::qstrcpy(char*, const char*)
    {17, 249, 270, 2, Smoke::mf_static, 11, 81},	//159 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {17, 196, 273, 2, Smoke::mf_static, 249, 82},	//160 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {17, 216, 250, 2, Smoke::mf_static, 249, 83},	//161 QGlobalSpace::operator<(const char*, const QByteArray&)
    {17, 264, 75, 1, Smoke::mf_static, 319, 84},	//162 QGlobalSpace::qAtan(double)
    {17, 375, 250, 2, Smoke::mf_static, 321, 85},	//163 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {17, 239, 199, 2, Smoke::mf_static, 249, 86},	//164 QGlobalSpace::operator>=(QChar, QChar)
    {17, 249, 276, 2, Smoke::mf_static, 55, 87},	//165 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {17, 224, 199, 2, Smoke::mf_static, 249, 88},	//166 QGlobalSpace::operator<=(QChar, QChar)
    {17, 203, 279, 2, Smoke::mf_static, 281, 89},	//167 QGlobalSpace::operator*(const QPointF&, double)
    {17, 302, 282, 1, Smoke::mf_static, 329, 90},	//168 QGlobalSpace::qHash(const QSourceLocation&)
    {17, 220, 284, 2, Smoke::mf_static, 22, 91},	//169 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {17, 230, 287, 2, Smoke::mf_static, 249, 92},	//170 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {17, 249, 290, 2, Smoke::mf_static, 30, 93},	//171 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {17, 249, 293, 2, Smoke::mf_static, 68, 94},	//172 QGlobalSpace::operator|(QUdpSocket::BindFlag, int)
    {17, 403, 216, 2, Smoke::mf_static, 0, 95},	//173 QGlobalSpace::qt_check_pointer(const char*, int)
    {17, 230, 247, 2, Smoke::mf_static, 249, 96},	//174 QGlobalSpace::operator==(QString::Null, QString::Null)
    {17, 196, 296, 2, Smoke::mf_static, 249, 97},	//175 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {17, 243, 299, 2, Smoke::mf_static, 19, 98},	//176 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {17, 224, 302, 2, Smoke::mf_static, 249, 99},	//177 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {17, 361, 305, 2, Smoke::mf_static, 14, 100},	//178 QGlobalSpace::qUncompress(const unsigned char*, int)
    {17, 249, 308, 2, Smoke::mf_static, 46, 101},	//179 QGlobalSpace::operator|(QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>)
    {17, 273, 311, 2, Smoke::mf_static, 14, 102},	//180 QGlobalSpace::qCompress(const QByteArray&, int)
    {17, 273, 314, 1, Smoke::mf_static, 14, 103},	//181 QGlobalSpace::qCompress(const QByteArray&)
    {17, 220, 316, 2, Smoke::mf_static, 19, 104},	//182 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {17, 243, 319, 2, Smoke::mf_static, 112, 105},	//183 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {17, 220, 322, 2, Smoke::mf_static, 22, 106},	//184 QGlobalSpace::operator<<(QDebug, const QSslError&)
    {17, 249, 325, 2, Smoke::mf_static, 68, 107},	//185 QGlobalSpace::operator|(Qt::DropAction, int)
    {17, 335, 328, 4, Smoke::mf_static, 336, 108},	//186 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {17, 249, 333, 2, Smoke::mf_static, 68, 109},	//187 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {17, 355, 75, 1, Smoke::mf_static, 319, 110},	//188 QGlobalSpace::qSqrt(double)
    {17, 220, 336, 2, Smoke::mf_static, 19, 111},	//189 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {17, 220, 319, 2, Smoke::mf_static, 112, 112},	//190 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {17, 220, 339, 2, Smoke::mf_static, 22, 113},	//191 QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketState)
    {17, 220, 342, 2, Smoke::mf_static, 22, 114},	//192 QGlobalSpace::operator<<(QDebug, const QRect&)
    {17, 220, 345, 2, Smoke::mf_static, 22, 115},	//193 QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketError)
    {17, 235, 134, 2, Smoke::mf_static, 249, 116},	//194 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {17, 239, 302, 2, Smoke::mf_static, 249, 117},	//195 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {17, 308, 194, 1, Smoke::mf_static, 321, 118},	//196 QGlobalSpace::qIntCast(float)
    {17, 249, 348, 2, Smoke::mf_static, 44, 119},	//197 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {17, 230, 145, 2, Smoke::mf_static, 249, 120},	//198 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {17, 235, 250, 2, Smoke::mf_static, 249, 121},	//199 QGlobalSpace::operator>(const char*, const QByteArray&)
    {17, 284, 75, 1, Smoke::mf_static, 319, 122},	//200 QGlobalSpace::qFabs(double)
    {17, 302, 351, 1, Smoke::mf_static, 329, 123},	//201 QGlobalSpace::qHash(unsigned short)
    {17, 230, 250, 2, Smoke::mf_static, 249, 124},	//202 QGlobalSpace::operator==(const char*, const QByteArray&)
    {17, 249, 353, 2, Smoke::mf_static, 59, 125},	//203 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {17, 249, 356, 2, Smoke::mf_static, 43, 126},	//204 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {17, 220, 359, 2, Smoke::mf_static, 22, 127},	//205 QGlobalSpace::operator<<(QDebug, const QDir&)
    {17, 220, 362, 2, Smoke::mf_static, 22, 128},	//206 QGlobalSpace::operator<<(QDebug, const QSourceLocation&)
    {17, 249, 365, 2, Smoke::mf_static, 57, 129},	//207 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {17, 196, 134, 2, Smoke::mf_static, 249, 130},	//208 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {17, 333, 368, 2, Smoke::mf_static, 336, 131},	//209 QGlobalSpace::qRealloc(void*, size_t)
    {17, 249, 371, 2, Smoke::mf_static, 50, 132},	//210 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {17, 249, 374, 2, Smoke::mf_static, 68, 133},	//211 QGlobalSpace::operator|(QSsl::SslOption, int)
    {17, 249, 377, 2, Smoke::mf_static, 68, 134},	//212 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {17, 230, 380, 2, Smoke::mf_static, 249, 135},	//213 QGlobalSpace::operator==(const QString&, QString::Null)
    {17, 249, 383, 2, Smoke::mf_static, 51, 136},	//214 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {17, 365, 0, 0, Smoke::mf_static, 22, 137},	//215 QGlobalSpace::qWarning()
    {17, 249, 386, 2, Smoke::mf_static, 68, 138},	//216 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {17, 298, 219, 2, Smoke::mf_static, 249, 139},	//217 QGlobalSpace::qFuzzyCompare(double, double)
    {17, 220, 389, 2, Smoke::mf_static, 22, 140},	//218 QGlobalSpace::operator<<(QDebug, QSslCertificate::SubjectInfo)
    {17, 249, 392, 2, Smoke::mf_static, 36, 141},	//219 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {17, 249, 395, 2, Smoke::mf_static, 38, 142},	//220 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {17, 243, 398, 2, Smoke::mf_static, 19, 143},	//221 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {17, 220, 401, 2, Smoke::mf_static, 22, 144},	//222 QGlobalSpace::operator<<(QDebug, const QSslKey&)
    {17, 220, 404, 2, Smoke::mf_static, 19, 145},	//223 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {17, 196, 407, 2, Smoke::mf_static, 249, 146},	//224 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {17, 203, 410, 2, Smoke::mf_static, 287, 147},	//225 QGlobalSpace::operator*(double, const QSize&)
    {17, 302, 31, 1, Smoke::mf_static, 329, 148},	//226 QGlobalSpace::qHash(const QXmlNodeModelIndex&)
    {17, 249, 413, 2, Smoke::mf_static, 49, 149},	//227 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {17, 281, 0, 0, Smoke::mf_static, 22, 150},	//228 QGlobalSpace::qDebug()
    {17, 302, 51, 1, Smoke::mf_static, 329, 151},	//229 QGlobalSpace::qHash(long long)
    {17, 249, 416, 2, Smoke::mf_static, 56, 152},	//230 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {17, 203, 419, 2, Smoke::mf_static, 279, 153},	//231 QGlobalSpace::operator*(const QPoint&, float)
    {17, 211, 422, 1, Smoke::mf_static, 281, 154},	//232 QGlobalSpace::operator-(const QPointF&)
    {17, 249, 424, 2, Smoke::mf_static, 68, 155},	//233 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {17, 314, 194, 1, Smoke::mf_static, 249, 156},	//234 QGlobalSpace::qIsInf(float)
    {17, 249, 427, 2, Smoke::mf_static, 68, 157},	//235 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {17, 224, 250, 2, Smoke::mf_static, 249, 158},	//236 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {17, 220, 430, 2, Smoke::mf_static, 22, 159},	//237 QGlobalSpace::operator<<(QDebug, const QSize&)
    {17, 302, 433, 1, Smoke::mf_static, 329, 160},	//238 QGlobalSpace::qHash(const QHostAddress&)
    {17, 196, 302, 2, Smoke::mf_static, 249, 161},	//239 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {17, 302, 42, 1, Smoke::mf_static, 329, 162},	//240 QGlobalSpace::qHash(const QXmlName&)
    {17, 235, 199, 2, Smoke::mf_static, 249, 163},	//241 QGlobalSpace::operator>(QChar, QChar)
    {17, 214, 100, 2, Smoke::mf_static, 289, 164},	//242 QGlobalSpace::operator/(const QSizeF&, double)
    {17, 249, 435, 2, Smoke::mf_static, 68, 165},	//243 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {17, 220, 438, 2, Smoke::mf_static, 22, 166},	//244 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {17, 375, 302, 2, Smoke::mf_static, 321, 167},	//245 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {17, 201, 270, 2, Smoke::mf_static, 11, 168},	//246 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {17, 211, 441, 1, Smoke::mf_static, 279, 169},	//247 QGlobalSpace::operator-(const QPoint&)
    {17, 220, 443, 2, Smoke::mf_static, 22, 170},	//248 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {17, 239, 106, 2, Smoke::mf_static, 249, 171},	//249 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {17, 220, 446, 2, Smoke::mf_static, 19, 172},	//250 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {17, 249, 449, 2, Smoke::mf_static, 44, 173},	//251 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {17, 216, 134, 2, Smoke::mf_static, 249, 174},	//252 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {17, 243, 452, 2, Smoke::mf_static, 19, 175},	//253 QGlobalSpace::operator>>(QDataStream&, QHostAddress&)
    {17, 196, 455, 2, Smoke::mf_static, 249, 176},	//254 QGlobalSpace::operator!=(QBool, QBool)
    {17, 196, 458, 2, Smoke::mf_static, 249, 177},	//255 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {17, 302, 461, 1, Smoke::mf_static, 329, 178},	//256 QGlobalSpace::qHash(unsigned long long)
    {17, 290, 1, 1, Smoke::mf_static, 315, 179},	//257 QGlobalSpace::qFlagLocation(const char*)
    {17, 214, 279, 2, Smoke::mf_static, 281, 180},	//258 QGlobalSpace::operator/(const QPointF&, double)
    {17, 308, 75, 1, Smoke::mf_static, 321, 181},	//259 QGlobalSpace::qIntCast(double)
    {17, 249, 463, 2, Smoke::mf_static, 68, 182},	//260 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {17, 361, 314, 1, Smoke::mf_static, 14, 183},	//261 QGlobalSpace::qUncompress(const QByteArray&)
    {17, 220, 466, 2, Smoke::mf_static, 22, 184},	//262 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {17, 196, 115, 2, Smoke::mf_static, 249, 185},	//263 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {17, 230, 469, 2, Smoke::mf_static, 249, 186},	//264 QGlobalSpace::operator==(QString::Null, const QString&)
    {17, 224, 106, 2, Smoke::mf_static, 249, 187},	//265 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {17, 286, 75, 1, Smoke::mf_static, 319, 188},	//266 QGlobalSpace::qFastCos(double)
    {17, 339, 472, 1, Smoke::mf_static, 0, 189},	//267 QGlobalSpace::qRemovePostRoutine(void(*)())
    {17, 249, 474, 2, Smoke::mf_static, 38, 190},	//268 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {17, 249, 477, 2, Smoke::mf_static, 51, 191},	//269 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {17, 243, 480, 2, Smoke::mf_static, 19, 192},	//270 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {17, 298, 483, 2, Smoke::mf_static, 249, 193},	//271 QGlobalSpace::qFuzzyCompare(float, float)
    {17, 220, 486, 2, Smoke::mf_static, 19, 194},	//272 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {17, 271, 157, 2, Smoke::mf_static, 332, 195},	//273 QGlobalSpace::qChecksum(const char*, unsigned int)
    {17, 243, 489, 2, Smoke::mf_static, 19, 196},	//274 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {17, 203, 492, 2, Smoke::mf_static, 287, 197},	//275 QGlobalSpace::operator*(const QSize&, double)
    {17, 306, 495, 1, Smoke::mf_static, 335, 198},	//276 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {17, 211, 273, 2, Smoke::mf_static, 279, 199},	//277 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {17, 220, 497, 2, Smoke::mf_static, 112, 200},	//278 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {17, 249, 500, 2, Smoke::mf_static, 48, 201},	//279 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {17, 243, 503, 2, Smoke::mf_static, 19, 202},	//280 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {17, 249, 506, 2, Smoke::mf_static, 31, 203},	//281 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {17, 280, 0, 0, Smoke::mf_static, 22, 204},	//282 QGlobalSpace::qCritical()
    {17, 214, 509, 2, Smoke::mf_static, 279, 205},	//283 QGlobalSpace::operator/(const QPoint&, double)
    {17, 330, 219, 2, Smoke::mf_static, 319, 206},	//284 QGlobalSpace::qPow(double, double)
    {17, 220, 512, 2, Smoke::mf_static, 19, 207},	//285 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {17, 220, 515, 2, Smoke::mf_static, 19, 208},	//286 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {17, 196, 469, 2, Smoke::mf_static, 249, 209},	//287 QGlobalSpace::operator!=(QString::Null, const QString&)
    {17, 220, 518, 2, Smoke::mf_static, 19, 210},	//288 QGlobalSpace::operator<<(QDataStream&, const QNetworkCacheMetaData&)
    {17, 302, 189, 1, Smoke::mf_static, 329, 211},	//289 QGlobalSpace::qHash(int)
    {17, 249, 521, 2, Smoke::mf_static, 52, 212},	//290 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {17, 413, 0, 0, Smoke::mf_static, 0, 213},	//291 QGlobalSpace::qt_noop()
    {17, 230, 148, 2, Smoke::mf_static, 249, 214},	//292 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {17, 249, 524, 2, Smoke::mf_static, 68, 215},	//293 QGlobalSpace::operator|(Qt::WindowState, int)
    {17, 196, 186, 2, Smoke::mf_static, 249, 216},	//294 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {17, 243, 527, 2, Smoke::mf_static, 19, 217},	//295 QGlobalSpace::operator>>(QDataStream&, QString&)
    {17, 414, 530, 3, Smoke::mf_static, 83, 218},	//296 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {17, 220, 534, 2, Smoke::mf_static, 19, 219},	//297 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {17, 230, 455, 2, Smoke::mf_static, 249, 220},	//298 QGlobalSpace::operator==(QBool, QBool)
    {17, 243, 537, 2, Smoke::mf_static, 19, 221},	//299 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {17, 282, 75, 1, Smoke::mf_static, 319, 222},	//300 QGlobalSpace::qExp(double)
    {17, 243, 540, 2, Smoke::mf_static, 19, 223},	//301 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {17, 249, 543, 2, Smoke::mf_static, 55, 224},	//302 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {17, 230, 546, 2, Smoke::mf_static, 249, 225},	//303 QGlobalSpace::operator==(bool, QBool)
    {17, 249, 549, 2, Smoke::mf_static, 45, 226},	//304 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {17, 243, 552, 2, Smoke::mf_static, 19, 227},	//305 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {17, 300, 75, 1, Smoke::mf_static, 249, 228},	//306 QGlobalSpace::qFuzzyIsNull(double)
    {17, 419, 555, 3, Smoke::mf_static, 249, 229},	//307 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {17, 230, 559, 2, Smoke::mf_static, 249, 230},	//308 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {17, 366, 562, 3, Smoke::mf_static, 0, 231},	//309 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {17, 302, 202, 1, Smoke::mf_static, 329, 232},	//310 QGlobalSpace::qHash(QChar)
    {17, 249, 566, 2, Smoke::mf_static, 68, 233},	//311 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {17, 220, 569, 2, Smoke::mf_static, 19, 234},	//312 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {17, 196, 559, 2, Smoke::mf_static, 249, 235},	//313 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {17, 196, 546, 2, Smoke::mf_static, 249, 236},	//314 QGlobalSpace::operator!=(bool, QBool)
    {17, 407, 572, 2, Smoke::mf_static, 0, 237},	//315 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {17, 249, 575, 2, Smoke::mf_static, 34, 238},	//316 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {17, 373, 96, 1, Smoke::mf_static, 0, 239},	//317 QGlobalSpace::qsrand(unsigned int)
    {17, 230, 578, 2, Smoke::mf_static, 249, 240},	//318 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {17, 249, 581, 2, Smoke::mf_static, 47, 241},	//319 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {17, 249, 584, 2, Smoke::mf_static, 41, 242},	//320 QGlobalSpace::operator|(QNetworkProxy::Capability, QNetworkProxy::Capability)
    {17, 249, 587, 2, Smoke::mf_static, 39, 243},	//321 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>)
    {17, 220, 590, 2, Smoke::mf_static, 22, 244},	//322 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {17, 243, 593, 2, Smoke::mf_static, 19, 245},	//323 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {17, 249, 596, 2, Smoke::mf_static, 68, 246},	//324 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {17, 196, 380, 2, Smoke::mf_static, 249, 247},	//325 QGlobalSpace::operator!=(const QString&, QString::Null)
    {17, 384, 3, 2, Smoke::mf_static, 321, 248},	//326 QGlobalSpace::qstricmp(const char*, const char*)
    {17, 249, 599, 2, Smoke::mf_static, 63, 249},	//327 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {17, 220, 602, 2, Smoke::mf_static, 22, 250},	//328 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {17, 328, 605, 3, Smoke::mf_static, 336, 251},	//329 QGlobalSpace::qMemSet(void*, int, size_t)
    {17, 196, 121, 2, Smoke::mf_static, 249, 252},	//330 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {17, 269, 75, 1, Smoke::mf_static, 321, 253},	//331 QGlobalSpace::qCeil(double)
    {17, 302, 609, 1, Smoke::mf_static, 329, 254},	//332 QGlobalSpace::qHash(signed char)
    {17, 249, 611, 2, Smoke::mf_static, 63, 255},	//333 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {17, 230, 175, 2, Smoke::mf_static, 249, 256},	//334 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {17, 249, 614, 2, Smoke::mf_static, 62, 257},	//335 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {17, 230, 458, 2, Smoke::mf_static, 249, 258},	//336 QGlobalSpace::operator==(const char*, const QStringRef&)
    {17, 243, 617, 2, Smoke::mf_static, 19, 259},	//337 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {17, 220, 620, 2, Smoke::mf_static, 22, 260},	//338 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {17, 249, 623, 2, Smoke::mf_static, 68, 261},	//339 QGlobalSpace::operator|(QFile::Permission, int)
    {17, 206, 273, 2, Smoke::mf_static, 279, 262},	//340 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {17, 206, 106, 2, Smoke::mf_static, 255, 263},	//341 QGlobalSpace::operator+(const QByteArray&, const char*)
    {17, 259, 472, 1, Smoke::mf_static, 0, 264},	//342 QGlobalSpace::qAddPostRoutine(void(*)())
    {17, 337, 626, 1, Smoke::mf_static, 0, 265},	//343 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {17, 203, 628, 2, Smoke::mf_static, 281, 266},	//344 QGlobalSpace::operator*(double, const QPointF&)
    {17, 203, 631, 2, Smoke::mf_static, 279, 267},	//345 QGlobalSpace::operator*(int, const QPoint&)
    {17, 352, 0, 0, Smoke::mf_static, 249, 268},	//346 QGlobalSpace::qSharedBuild()
    {17, 220, 634, 2, Smoke::mf_static, 19, 269},	//347 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {17, 243, 637, 2, Smoke::mf_static, 19, 270},	//348 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {17, 220, 640, 2, Smoke::mf_static, 19, 271},	//349 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {17, 305, 0, 0, Smoke::mf_static, 319, 272},	//350 QGlobalSpace::qInf()
    {17, 392, 130, 3, Smoke::mf_static, 321, 273},	//351 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {17, 249, 643, 2, Smoke::mf_static, 46, 274},	//352 QGlobalSpace::operator|(QUdpSocket::BindFlag, QUdpSocket::BindFlag)
    {17, 302, 66, 1, Smoke::mf_static, 329, 275},	//353 QGlobalSpace::qHash(const QStringRef&)
    {17, 243, 646, 2, Smoke::mf_static, 19, 276},	//354 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {17, 249, 649, 2, Smoke::mf_static, 68, 277},	//355 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {17, 235, 302, 2, Smoke::mf_static, 249, 278},	//356 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {17, 220, 652, 2, Smoke::mf_static, 19, 279},	//357 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {17, 230, 199, 2, Smoke::mf_static, 249, 280},	//358 QGlobalSpace::operator==(QChar, QChar)
    {17, 278, 75, 1, Smoke::mf_static, 319, 281},	//359 QGlobalSpace::qCos(double)
    {17, 324, 655, 2, Smoke::mf_static, 336, 282},	//360 QGlobalSpace::qMallocAligned(size_t, size_t)
    {17, 220, 658, 2, Smoke::mf_static, 19, 283},	//361 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {17, 401, 661, 4, Smoke::mf_static, 0, 284},	//362 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {17, 249, 666, 2, Smoke::mf_static, 47, 285},	//363 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {17, 249, 669, 2, Smoke::mf_static, 34, 286},	//364 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {17, 312, 31, 1, Smoke::mf_static, 249, 287},	//365 QGlobalSpace::qIsForwardIteratorEnd(const QXmlNodeModelIndex&)
    {17, 206, 672, 2, Smoke::mf_static, 255, 288},	//366 QGlobalSpace::operator+(const QByteArray&, char)
    {17, 249, 675, 2, Smoke::mf_static, 68, 289},	//367 QGlobalSpace::operator|(QNetworkProxy::Capability, int)
    {17, 249, 678, 2, Smoke::mf_static, 37, 290},	//368 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {17, 364, 0, 0, Smoke::mf_static, 315, 291},	//369 QGlobalSpace::qVersion()
    {17, 249, 681, 2, Smoke::mf_static, 48, 292},	//370 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {17, 206, 145, 2, Smoke::mf_static, 281, 293},	//371 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {17, 220, 684, 2, Smoke::mf_static, 19, 294},	//372 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {17, 249, 687, 2, Smoke::mf_static, 36, 295},	//373 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {17, 220, 690, 2, Smoke::mf_static, 19, 296},	//374 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {17, 249, 693, 2, Smoke::mf_static, 68, 297},	//375 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {17, 230, 407, 2, Smoke::mf_static, 249, 298},	//376 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {17, 357, 696, 2, Smoke::mf_static, 249, 299},	//377 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {17, 249, 699, 2, Smoke::mf_static, 32, 300},	//378 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {17, 220, 702, 2, Smoke::mf_static, 22, 301},	//379 QGlobalSpace::operator<<(QDebug, const QNetworkCookie&)
    {17, 220, 705, 2, Smoke::mf_static, 19, 302},	//380 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {17, 206, 708, 2, Smoke::mf_static, 255, 303},	//381 QGlobalSpace::operator+(char, const QByteArray&)
    {17, 249, 711, 2, Smoke::mf_static, 68, 304},	//382 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {17, 216, 302, 2, Smoke::mf_static, 249, 305},	//383 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {17, 273, 714, 3, Smoke::mf_static, 14, 306},	//384 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {17, 273, 305, 2, Smoke::mf_static, 14, 307},	//385 QGlobalSpace::qCompress(const unsigned char*, int)
    {17, 292, 75, 1, Smoke::mf_static, 321, 308},	//386 QGlobalSpace::qFloor(double)
    {17, 249, 718, 2, Smoke::mf_static, 58, 309},	//387 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {17, 302, 64, 1, Smoke::mf_static, 329, 310},	//388 QGlobalSpace::qHash(const QString&)
    {17, 206, 721, 2, Smoke::mf_static, 297, 311},	//389 QGlobalSpace::operator+(const QString&, const QString&)
    {17, 196, 724, 2, Smoke::mf_static, 249, 312},	//390 QGlobalSpace::operator!=(QBool, bool)
    {17, 230, 302, 2, Smoke::mf_static, 249, 313},	//391 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {17, 220, 727, 2, Smoke::mf_static, 19, 314},	//392 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {17, 316, 194, 1, Smoke::mf_static, 249, 315},	//393 QGlobalSpace::qIsNaN(float)
    {17, 220, 730, 2, Smoke::mf_static, 19, 316},	//394 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {17, 249, 733, 2, Smoke::mf_static, 68, 317},	//395 QGlobalSpace::operator|(QDir::SortFlag, int)
    {17, 326, 736, 3, Smoke::mf_static, 336, 318},	//396 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {17, 294, 59, 1, Smoke::mf_static, 0, 319},	//397 QGlobalSpace::qFree(void*)
    {17, 230, 696, 2, Smoke::mf_static, 249, 320},	//398 QGlobalSpace::operator==(const QStringRef&, const char*)
    {17, 316, 75, 1, Smoke::mf_static, 249, 321},	//399 QGlobalSpace::qIsNaN(double)
    {17, 249, 740, 2, Smoke::mf_static, 60, 322},	//400 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {17, 203, 509, 2, Smoke::mf_static, 279, 323},	//401 QGlobalSpace::operator*(const QPoint&, double)
    {17, 220, 743, 2, Smoke::mf_static, 22, 324},	//402 QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketState)
    {17, 220, 746, 2, Smoke::mf_static, 22, 325},	//403 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {17, 312, 749, 1, Smoke::mf_static, 249, 326},	//404 QGlobalSpace::qIsForwardIteratorEnd(const QXmlItem&)
    {17, 350, 189, 1, Smoke::mf_static, 115, 327},	//405 QGlobalSpace::qSetRealNumberPrecision(int)
    {17, 372, 0, 0, Smoke::mf_static, 321, 328},	//406 QGlobalSpace::qrand()
    {17, 243, 751, 2, Smoke::mf_static, 19, 329},	//407 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {17, 302, 754, 1, Smoke::mf_static, 329, 330},	//408 QGlobalSpace::qHash(const QUrl&)
    {17, 249, 756, 2, Smoke::mf_static, 61, 331},	//409 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {17, 206, 302, 2, Smoke::mf_static, 255, 332},	//410 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {17, 203, 759, 2, Smoke::mf_static, 279, 333},	//411 QGlobalSpace::operator*(float, const QPoint&)
    {17, 203, 762, 2, Smoke::mf_static, 279, 334},	//412 QGlobalSpace::operator*(double, const QPoint&)
    {17, 220, 765, 2, Smoke::mf_static, 22, 335},	//413 QGlobalSpace::operator<<(QDebug, const QNetworkInterface&)
    {17, 196, 696, 2, Smoke::mf_static, 249, 336},	//414 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {17, 353, 75, 1, Smoke::mf_static, 319, 337},	//415 QGlobalSpace::qSin(double)
    {17, 220, 768, 2, Smoke::mf_static, 22, 338},	//416 QGlobalSpace::operator<<(QDebug, const QObject*)
    {17, 220, 771, 2, Smoke::mf_static, 22, 339},	//417 QGlobalSpace::operator<<(QDebug, const QSslCipher&)
    {17, 230, 273, 2, Smoke::mf_static, 249, 340},	//418 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {17, 249, 774, 2, Smoke::mf_static, 35, 341},	//419 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {17, 399, 6, 3, Smoke::mf_static, 0, 342},	//420 QGlobalSpace::qt_assert(const char*, const char*, int)
    {17, 243, 777, 2, Smoke::mf_static, 19, 343},	//421 QGlobalSpace::operator>>(QDataStream&, QNetworkCacheMetaData&)
    {17, 249, 780, 2, Smoke::mf_static, 42, 344},	//422 QGlobalSpace::operator|(QSsl::SslOption, QSsl::SslOption)
    {17, 220, 783, 2, Smoke::mf_static, 22, 345},	//423 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {17, 386, 1, 1, Smoke::mf_static, 329, 346},	//424 QGlobalSpace::qstrlen(const char*)
    {17, 249, 786, 2, Smoke::mf_static, 45, 347},	//425 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {17, 249, 789, 2, Smoke::mf_static, 32, 348},	//426 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {17, 314, 75, 1, Smoke::mf_static, 249, 349},	//427 QGlobalSpace::qIsInf(double)
    {17, 211, 121, 2, Smoke::mf_static, 287, 350},	//428 QGlobalSpace::operator-(const QSize&, const QSize&)
    {17, 249, 792, 2, Smoke::mf_static, 41, 351},	//429 QGlobalSpace::operator|(QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>)
    {17, 249, 795, 2, Smoke::mf_static, 68, 352},	//430 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, int)
    {17, 214, 492, 2, Smoke::mf_static, 287, 353},	//431 QGlobalSpace::operator/(const QSize&, double)
    {17, 239, 250, 2, Smoke::mf_static, 249, 354},	//432 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {17, 249, 798, 2, Smoke::mf_static, 68, 355},	//433 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {17, 249, 801, 2, Smoke::mf_static, 68, 356},	//434 QGlobalSpace::operator|(QDir::Filter, int)
    {17, 196, 250, 2, Smoke::mf_static, 249, 357},	//435 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {17, 359, 75, 1, Smoke::mf_static, 319, 358},	//436 QGlobalSpace::qTan(double)
    {17, 343, 75, 1, Smoke::mf_static, 323, 359},	//437 QGlobalSpace::qRound64(double)
    {17, 302, 804, 1, Smoke::mf_static, 329, 360},	//438 QGlobalSpace::qHash(unsigned long)
    {17, 249, 806, 2, Smoke::mf_static, 30, 361},	//439 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {17, 345, 0, 0, Smoke::mf_static, 319, 362},	//440 QGlobalSpace::qSNaN()
    {17, 216, 199, 2, Smoke::mf_static, 249, 363},	//441 QGlobalSpace::operator<(QChar, QChar)
    {17, 249, 809, 2, Smoke::mf_static, 57, 364},	//442 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {17, 249, 812, 2, Smoke::mf_static, 50, 365},	//443 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {17, 211, 407, 2, Smoke::mf_static, 289, 366},	//444 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {17, 322, 815, 1, Smoke::mf_static, 336, 367},	//445 QGlobalSpace::qMalloc(size_t)
    {17, 318, 75, 1, Smoke::mf_static, 249, 368},	//446 QGlobalSpace::qIsNull(double)
    {17, 370, 250, 2, Smoke::mf_static, 249, 369},	//447 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {17, 249, 817, 2, Smoke::mf_static, 68, 370},	//448 QGlobalSpace::operator|(Qt::Orientation, int)
    {17, 249, 820, 2, Smoke::mf_static, 68, 371},	//449 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {17, 243, 823, 2, Smoke::mf_static, 19, 372},	//450 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {17, 243, 826, 2, Smoke::mf_static, 19, 373},	//451 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {17, 300, 194, 1, Smoke::mf_static, 249, 374},	//452 QGlobalSpace::qFuzzyIsNull(float)
    {17, 220, 829, 2, Smoke::mf_static, 19, 375},	//453 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {17, 220, 832, 2, Smoke::mf_static, 22, 376},	//454 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {17, 302, 835, 1, Smoke::mf_static, 329, 377},	//455 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {17, 249, 837, 2, Smoke::mf_static, 39, 378},	//456 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability)
    {17, 220, 840, 2, Smoke::mf_static, 22, 379},	//457 QGlobalSpace::operator<<(QDebug, const QTime&)
    {17, 249, 843, 2, Smoke::mf_static, 68, 380},	//458 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {17, 249, 846, 2, Smoke::mf_static, 61, 381},	//459 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {17, 235, 106, 2, Smoke::mf_static, 249, 382},	//460 QGlobalSpace::operator>(const QByteArray&, const char*)
    {17, 249, 849, 2, Smoke::mf_static, 42, 383},	//461 QGlobalSpace::operator|(QSsl::SslOption, QFlags<QSsl::SslOption>)
    {17, 196, 578, 2, Smoke::mf_static, 249, 384},	//462 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {17, 249, 852, 2, Smoke::mf_static, 52, 385},	//463 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {17, 346, 189, 1, Smoke::mf_static, 115, 386},	//464 QGlobalSpace::qSetFieldWidth(int)
    {17, 249, 855, 2, Smoke::mf_static, 62, 387},	//465 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {17, 249, 858, 2, Smoke::mf_static, 49, 388},	//466 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {17, 249, 861, 2, Smoke::mf_static, 68, 389},	//467 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {17, 203, 864, 2, Smoke::mf_static, 289, 390},	//468 QGlobalSpace::operator*(double, const QSizeF&)
    {17, 239, 134, 2, Smoke::mf_static, 249, 391},	//469 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {17, 220, 867, 2, Smoke::mf_static, 22, 392},	//470 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {17, 302, 314, 1, Smoke::mf_static, 329, 393},	//471 QGlobalSpace::qHash(const QByteArray&)
    {17, 230, 166, 2, Smoke::mf_static, 249, 394},	//472 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {17, 302, 870, 1, Smoke::mf_static, 329, 395},	//473 QGlobalSpace::qHash(const QModelIndex&)
    {17, 203, 872, 2, Smoke::mf_static, 279, 396},	//474 QGlobalSpace::operator*(const QPoint&, int)
    {17, 230, 296, 2, Smoke::mf_static, 249, 397},	//475 QGlobalSpace::operator==(const QRect&, const QRect&)
    {17, 249, 875, 2, Smoke::mf_static, 68, 398},	//476 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {17, 249, 878, 2, Smoke::mf_static, 56, 399},	//477 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {17, 249, 881, 2, Smoke::mf_static, 53, 400},	//478 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {17, 296, 59, 1, Smoke::mf_static, 0, 401},	//479 QGlobalSpace::qFreeAligned(void*)
    {17, 249, 884, 2, Smoke::mf_static, 58, 402},	//480 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {17, 220, 887, 2, Smoke::mf_static, 22, 403},	//481 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {17, 230, 106, 2, Smoke::mf_static, 249, 404},	//482 QGlobalSpace::operator==(const QByteArray&, const char*)
    {17, 249, 890, 2, Smoke::mf_static, 68, 405},	//483 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {17, 249, 893, 2, Smoke::mf_static, 68, 406},	//484 QGlobalSpace::operator|(Qt::MouseButton, int)
    {17, 320, 75, 1, Smoke::mf_static, 319, 407},	//485 QGlobalSpace::qLn(double)
    {17, 230, 724, 2, Smoke::mf_static, 249, 408},	//486 QGlobalSpace::operator==(QBool, bool)
    {17, 196, 106, 2, Smoke::mf_static, 249, 409},	//487 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {17, 247, 270, 2, Smoke::mf_static, 11, 410},	//488 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {17, 262, 75, 1, Smoke::mf_static, 319, 411},	//489 QGlobalSpace::qAsin(double)
    {17, 243, 896, 2, Smoke::mf_static, 19, 412},	//490 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {17, 268, 0, 0, Smoke::mf_static, 0, 413},	//491 QGlobalSpace::qBadAlloc()
    {17, 249, 899, 2, Smoke::mf_static, 68, 414},	//492 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {17, 249, 902, 2, Smoke::mf_static, 68, 415},	//493 QGlobalSpace::operator|(QString::SectionFlag, int)
    {17, 249, 905, 2, Smoke::mf_static, 68, 416},	//494 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, int)
    {17, 220, 908, 2, Smoke::mf_static, 19, 417},	//495 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {17, 310, 194, 1, Smoke::mf_static, 249, 418},	//496 QGlobalSpace::qIsFinite(float)
    {17, 206, 407, 2, Smoke::mf_static, 289, 419},	//497 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {17, 249, 911, 2, Smoke::mf_static, 31, 420},	//498 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {17, 249, 914, 2, Smoke::mf_static, 43, 421},	//499 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {17, 86, 0, 0, Smoke::mf_static|Smoke::mf_enum, 322, 422},	//500 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {17, 89, 0, 0, Smoke::mf_static|Smoke::mf_enum, 322, 423},	//501 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {17, 90, 0, 0, Smoke::mf_static|Smoke::mf_enum, 322, 424},	//502 QGlobalSpace::Q_STATIC_TYPE (enum)
    {17, 88, 0, 0, Smoke::mf_static|Smoke::mf_enum, 322, 425},	//503 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {17, 87, 0, 0, Smoke::mf_static|Smoke::mf_enum, 322, 426},	//504 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {17, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 247, 427},	//505 QGlobalSpace::LicensedXml (enum)
    {17, 92, 0, 0, Smoke::mf_static|Smoke::mf_enum, 229, 428},	//506 QGlobalSpace::QtDebugMsg (enum)
    {17, 95, 0, 0, Smoke::mf_static|Smoke::mf_enum, 229, 429},	//507 QGlobalSpace::QtWarningMsg (enum)
    {17, 91, 0, 0, Smoke::mf_static|Smoke::mf_enum, 229, 430},	//508 QGlobalSpace::QtCriticalMsg (enum)
    {17, 93, 0, 0, Smoke::mf_static|Smoke::mf_enum, 229, 431},	//509 QGlobalSpace::QtFatalMsg (enum)
    {17, 94, 0, 0, Smoke::mf_static|Smoke::mf_enum, 229, 432},	//510 QGlobalSpace::QtSystemMsg (enum)
    {17, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 238, 433},	//511 QGlobalSpace::LicensedOpenGL (enum)
    {17, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 241, 434},	//512 QGlobalSpace::LicensedQt3Support (enum)
    {17, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 435},	//513 QGlobalSpace::LicensedOpenVG (enum)
    {17, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 237, 436},	//514 QGlobalSpace::LicensedNetwork (enum)
    {17, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 244, 437},	//515 QGlobalSpace::LicensedSql (enum)
    {17, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 231, 438},	//516 QGlobalSpace::LicensedCore (enum)
    {17, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 245, 439},	//517 QGlobalSpace::LicensedSvg (enum)
    {17, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 248, 440},	//518 QGlobalSpace::LicensedXmlPatterns (enum)
    {17, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 234, 441},	//519 QGlobalSpace::LicensedGui (enum)
    {17, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 233, 442},	//520 QGlobalSpace::LicensedDeclarative (enum)
    {17, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 230, 443},	//521 QGlobalSpace::LicensedActiveQt (enum)
    {17, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 232, 444},	//522 QGlobalSpace::LicensedDBus (enum)
    {17, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 246, 445},	//523 QGlobalSpace::LicensedTest (enum)
    {17, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 243, 446},	//524 QGlobalSpace::LicensedScriptTools (enum)
    {17, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 240, 447},	//525 QGlobalSpace::LicensedQt3SupportLight (enum)
    {17, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 242, 448},	//526 QGlobalSpace::LicensedScript (enum)
    {17, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 236, 449},	//527 QGlobalSpace::LicensedMultimedia (enum)
    {17, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 235, 450},	//528 QGlobalSpace::LicensedHelp (enum)
    {33, 144, 917, 1, Smoke::mf_virtual, 249, 0},	//529 QObject::event(QEvent*)
    {33, 145, 919, 2, Smoke::mf_virtual, 249, 0},	//530 QObject::eventFilter(QObject*, QEvent*)
    {33, 471, 922, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//531 QObject::timerEvent(QTimerEvent*)
    {33, 116, 924, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//532 QObject::childEvent(QChildEvent*)
    {33, 130, 917, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//533 QObject::customEvent(QEvent*)
    {33, 123, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//534 QObject::connectNotify(const char*)
    {33, 132, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//535 QObject::disconnectNotify(const char*)
    {42, 56, 926, 1, Smoke::mf_ctor, 90, 1},	//536 QSimpleXmlNodeModel::QSimpleXmlNodeModel(const QXmlNamePool&)
    {42, 109, 31, 1, Smoke::mf_const|Smoke::mf_virtual, 119, 2},	//537 QSimpleXmlNodeModel::baseUri(const QXmlNodeModelIndex&) const
    {42, 181, 0, 0, Smoke::mf_const, 138, 3},	//538 QSimpleXmlNodeModel::namePool() const
    {42, 184, 31, 1, Smoke::mf_const|Smoke::mf_virtual, 127, 4},	//539 QSimpleXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex&) const
    {42, 469, 31, 1, Smoke::mf_const|Smoke::mf_virtual, 103, 5},	//540 QSimpleXmlNodeModel::stringValue(const QXmlNodeModelIndex&) const
    {42, 135, 42, 1, Smoke::mf_const|Smoke::mf_virtual, 140, 6},	//541 QSimpleXmlNodeModel::elementById(const QXmlName&) const
    {42, 194, 42, 1, Smoke::mf_const|Smoke::mf_virtual, 128, 7},	//542 QSimpleXmlNodeModel::nodesByIdref(const QXmlName&) const
    {42, 497, 0, 0, Smoke::mf_dtor, 0, 8 },	//543 QSimpleXmlNodeModel::~QSimpleXmlNodeModel()
    {45, 58, 0, 0, Smoke::mf_ctor, 95, 1},	//544 QSourceLocation::QSourceLocation()
    {45, 58, 282, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 95, 2},	//545 QSourceLocation::QSourceLocation(const QSourceLocation&)
    {45, 58, 928, 3, Smoke::mf_ctor, 95, 3},	//546 QSourceLocation::QSourceLocation(const QUrl&, int, int)
    {45, 228, 282, 1, 0, 94, 4},	//547 QSourceLocation::operator=(const QSourceLocation&)
    {45, 230, 282, 1, Smoke::mf_const, 249, 5},	//548 QSourceLocation::operator==(const QSourceLocation&) const
    {45, 196, 282, 1, Smoke::mf_const, 249, 6},	//549 QSourceLocation::operator!=(const QSourceLocation&) const
    {45, 118, 0, 0, Smoke::mf_const, 323, 7},	//550 QSourceLocation::column() const
    {45, 435, 51, 1, 0, 0, 8},	//551 QSourceLocation::setColumn(long long)
    {45, 166, 0, 0, Smoke::mf_const, 323, 9},	//552 QSourceLocation::line() const
    {45, 445, 51, 1, 0, 0, 10},	//553 QSourceLocation::setLine(long long)
    {45, 486, 0, 0, Smoke::mf_const, 119, 11},	//554 QSourceLocation::uri() const
    {45, 458, 754, 1, 0, 0, 12},	//555 QSourceLocation::setUri(const QUrl&)
    {45, 160, 0, 0, Smoke::mf_const, 249, 13},	//556 QSourceLocation::isNull() const
    {45, 58, 754, 1, Smoke::mf_ctor, 95, 14},	//557 QSourceLocation::QSourceLocation(const QUrl&)
    {45, 58, 932, 2, Smoke::mf_ctor, 95, 15},	//558 QSourceLocation::QSourceLocation(const QUrl&, int)
    {45, 498, 0, 0, Smoke::mf_dtor, 0, 16 },	//559 QSourceLocation::~QSourceLocation()
    {61, 62, 935, 2, Smoke::mf_ctor, 129, 1},	//560 QXmlFormatter::QXmlFormatter(const QXmlQuery&, QIODevice*)
    {61, 114, 66, 1, Smoke::mf_virtual, 0, 2},	//561 QXmlFormatter::characters(const QStringRef&)
    {61, 119, 64, 1, Smoke::mf_virtual, 0, 3},	//562 QXmlFormatter::comment(const QString&)
    {61, 465, 42, 1, Smoke::mf_virtual, 0, 4},	//563 QXmlFormatter::startElement(const QXmlName&)
    {61, 138, 0, 0, Smoke::mf_virtual, 0, 5},	//564 QXmlFormatter::endElement()
    {61, 105, 61, 2, Smoke::mf_virtual, 0, 6},	//565 QXmlFormatter::attribute(const QXmlName&, const QStringRef&)
    {61, 255, 68, 2, Smoke::mf_virtual, 0, 7},	//566 QXmlFormatter::processingInstruction(const QXmlName&, const QString&)
    {61, 103, 71, 1, Smoke::mf_virtual, 0, 8},	//567 QXmlFormatter::atomicValue(const QVariant&)
    {61, 464, 0, 0, Smoke::mf_virtual, 0, 9},	//568 QXmlFormatter::startDocument()
    {61, 137, 0, 0, Smoke::mf_virtual, 0, 10},	//569 QXmlFormatter::endDocument()
    {61, 467, 0, 0, Smoke::mf_virtual, 0, 11},	//570 QXmlFormatter::startOfSequence()
    {61, 139, 0, 0, Smoke::mf_virtual, 0, 12},	//571 QXmlFormatter::endOfSequence()
    {61, 151, 0, 0, Smoke::mf_const, 321, 13},	//572 QXmlFormatter::indentationDepth() const
    {61, 440, 189, 1, 0, 0, 14},	//573 QXmlFormatter::setIndentationDepth(int)
    {61, 162, 73, 1, Smoke::mf_virtual, 0, 15},	//574 QXmlFormatter::item(const QPatternist::Item&)
    {61, 499, 0, 0, Smoke::mf_dtor, 0, 16 },	//575 QXmlFormatter::~QXmlFormatter()
    {62, 64, 0, 0, Smoke::mf_ctor, 132, 1},	//576 QXmlItem::QXmlItem()
    {62, 64, 749, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 132, 2},	//577 QXmlItem::QXmlItem(const QXmlItem&)
    {62, 64, 31, 1, Smoke::mf_ctor, 132, 3},	//578 QXmlItem::QXmlItem(const QXmlNodeModelIndex&)
    {62, 64, 71, 1, Smoke::mf_ctor, 132, 4},	//579 QXmlItem::QXmlItem(const QVariant&)
    {62, 228, 749, 1, 0, 131, 5},	//580 QXmlItem::operator=(const QXmlItem&)
    {62, 160, 0, 0, Smoke::mf_const, 249, 6},	//581 QXmlItem::isNull() const
    {62, 159, 0, 0, Smoke::mf_const, 249, 7},	//582 QXmlItem::isNode() const
    {62, 154, 0, 0, Smoke::mf_const, 249, 8},	//583 QXmlItem::isAtomicValue() const
    {62, 472, 0, 0, Smoke::mf_const, 123, 9},	//584 QXmlItem::toAtomicValue() const
    {62, 475, 0, 0, Smoke::mf_const, 140, 10},	//585 QXmlItem::toNodeModelIndex() const
    {62, 500, 0, 0, Smoke::mf_dtor, 0, 11 },	//586 QXmlItem::~QXmlItem()
    {63, 66, 0, 0, Smoke::mf_ctor, 135, 1},	//587 QXmlName::QXmlName()
    {63, 66, 938, 4, Smoke::mf_ctor, 135, 2},	//588 QXmlName::QXmlName(QXmlNamePool&, const QString&, const QString&, const QString&)
    {63, 188, 926, 1, Smoke::mf_const, 103, 3},	//589 QXmlName::namespaceUri(const QXmlNamePool&) const
    {63, 253, 926, 1, Smoke::mf_const, 103, 4},	//590 QXmlName::prefix(const QXmlNamePool&) const
    {63, 170, 926, 1, Smoke::mf_const, 103, 5},	//591 QXmlName::localName(const QXmlNamePool&) const
    {63, 473, 926, 1, Smoke::mf_const, 103, 6},	//592 QXmlName::toClarkName(const QXmlNamePool&) const
    {63, 230, 42, 1, Smoke::mf_const, 249, 7},	//593 QXmlName::operator==(const QXmlName&) const
    {63, 196, 42, 1, Smoke::mf_const, 249, 8},	//594 QXmlName::operator!=(const QXmlName&) const
    {63, 228, 42, 1, 0, 134, 9},	//595 QXmlName::operator=(const QXmlName&)
    {63, 160, 0, 0, Smoke::mf_const, 249, 10},	//596 QXmlName::isNull() const
    {63, 157, 64, 1, Smoke::mf_static, 249, 11},	//597 QXmlName::isNCName(const QString&)
    {63, 146, 943, 2, Smoke::mf_static, 133, 12},	//598 QXmlName::fromClarkName(const QString&, const QXmlNamePool&)
    {63, 66, 42, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 135, 13},	//599 QXmlName::QXmlName(const QXmlName&)
    {63, 66, 946, 2, Smoke::mf_ctor, 135, 14},	//600 QXmlName::QXmlName(QXmlNamePool&, const QString&)
    {63, 66, 949, 3, Smoke::mf_ctor, 135, 15},	//601 QXmlName::QXmlName(QXmlNamePool&, const QString&, const QString&)
    {63, 501, 0, 0, Smoke::mf_dtor, 0, 16 },	//602 QXmlName::~QXmlName()
    {64, 71, 0, 0, Smoke::mf_ctor, 139, 1},	//603 QXmlNamePool::QXmlNamePool()
    {64, 71, 926, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 139, 2},	//604 QXmlNamePool::QXmlNamePool(const QXmlNamePool&)
    {64, 228, 926, 1, 0, 138, 3},	//605 QXmlNamePool::operator=(const QXmlNamePool&)
    {64, 502, 0, 0, Smoke::mf_dtor, 0, 4 },	//606 QXmlNamePool::~QXmlNamePool()
    {65, 73, 0, 0, Smoke::mf_ctor, 141, 1},	//607 QXmlNodeModelIndex::QXmlNodeModelIndex()
    {65, 73, 31, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 141, 2},	//608 QXmlNodeModelIndex::QXmlNodeModelIndex(const QXmlNodeModelIndex&)
    {65, 230, 31, 1, Smoke::mf_const, 249, 3},	//609 QXmlNodeModelIndex::operator==(const QXmlNodeModelIndex&) const
    {65, 196, 31, 1, Smoke::mf_const, 249, 4},	//610 QXmlNodeModelIndex::operator!=(const QXmlNodeModelIndex&) const
    {65, 131, 0, 0, Smoke::mf_const, 323, 5},	//611 QXmlNodeModelIndex::data() const
    {65, 153, 0, 0, Smoke::mf_const, 336, 6},	//612 QXmlNodeModelIndex::internalPointer() const
    {65, 178, 0, 0, Smoke::mf_const, 253, 7},	//613 QXmlNodeModelIndex::model() const
    {65, 102, 0, 0, Smoke::mf_const, 323, 8},	//614 QXmlNodeModelIndex::additionalData() const
    {65, 160, 0, 0, Smoke::mf_const, 249, 9},	//615 QXmlNodeModelIndex::isNull() const
    {65, 423, 0, 0, 0, 0, 10},	//616 QXmlNodeModelIndex::reset()
    {65, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 11},	//617 QXmlNodeModelIndex::Attribute (enum)
    {65, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 12},	//618 QXmlNodeModelIndex::Comment (enum)
    {65, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 13},	//619 QXmlNodeModelIndex::Document (enum)
    {65, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 14},	//620 QXmlNodeModelIndex::Element (enum)
    {65, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 15},	//621 QXmlNodeModelIndex::Namespace (enum)
    {65, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 16},	//622 QXmlNodeModelIndex::ProcessingInstruction (enum)
    {65, 96, 0, 0, Smoke::mf_static|Smoke::mf_enum, 145, 17},	//623 QXmlNodeModelIndex::Text (enum)
    {65, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 18},	//624 QXmlNodeModelIndex::Precedes (enum)
    {65, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 19},	//625 QXmlNodeModelIndex::Is (enum)
    {65, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 20},	//626 QXmlNodeModelIndex::Follows (enum)
    {65, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 21},	//627 QXmlNodeModelIndex::AxisChild (enum)
    {65, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 22},	//628 QXmlNodeModelIndex::AxisDescendant (enum)
    {65, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 23},	//629 QXmlNodeModelIndex::AxisAttribute (enum)
    {65, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 24},	//630 QXmlNodeModelIndex::AxisSelf (enum)
    {65, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 25},	//631 QXmlNodeModelIndex::AxisDescendantOrSelf (enum)
    {65, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 26},	//632 QXmlNodeModelIndex::AxisFollowingSibling (enum)
    {65, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 27},	//633 QXmlNodeModelIndex::AxisNamespace (enum)
    {65, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 28},	//634 QXmlNodeModelIndex::AxisFollowing (enum)
    {65, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 29},	//635 QXmlNodeModelIndex::AxisParent (enum)
    {65, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 30},	//636 QXmlNodeModelIndex::AxisAncestor (enum)
    {65, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 31},	//637 QXmlNodeModelIndex::AxisPrecedingSibling (enum)
    {65, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 32},	//638 QXmlNodeModelIndex::AxisPreceding (enum)
    {65, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 33},	//639 QXmlNodeModelIndex::AxisAncestorOrSelf (enum)
    {65, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 34},	//640 QXmlNodeModelIndex::AxisChildOrTop (enum)
    {65, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 35},	//641 QXmlNodeModelIndex::AxisAttributeOrTop (enum)
    {65, 503, 0, 0, Smoke::mf_dtor, 0, 36 },	//642 QXmlNodeModelIndex::~QXmlNodeModelIndex()
    {66, 75, 0, 0, Smoke::mf_ctor, 147, 1},	//643 QXmlQuery::QXmlQuery()
    {66, 75, 953, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 147, 2},	//644 QXmlQuery::QXmlQuery(const QXmlQuery&)
    {66, 75, 926, 1, Smoke::mf_ctor, 147, 3},	//645 QXmlQuery::QXmlQuery(const QXmlNamePool&)
    {66, 75, 955, 2, Smoke::mf_ctor, 147, 4},	//646 QXmlQuery::QXmlQuery(QXmlQuery::QueryLanguage, const QXmlNamePool&)
    {66, 228, 953, 1, 0, 146, 5},	//647 QXmlQuery::operator=(const QXmlQuery&)
    {66, 447, 958, 1, 0, 0, 6},	//648 QXmlQuery::setMessageHandler(QAbstractMessageHandler*)
    {66, 176, 0, 0, Smoke::mf_const, 2, 7},	//649 QXmlQuery::messageHandler() const
    {66, 451, 960, 2, 0, 0, 8},	//650 QXmlQuery::setQuery(const QString&, const QUrl&)
    {66, 451, 963, 2, 0, 0, 9},	//651 QXmlQuery::setQuery(QIODevice*, const QUrl&)
    {66, 451, 28, 2, 0, 0, 10},	//652 QXmlQuery::setQuery(const QUrl&, const QUrl&)
    {66, 181, 0, 0, Smoke::mf_const, 137, 11},	//653 QXmlQuery::namePool() const
    {66, 111, 966, 2, 0, 0, 12},	//654 QXmlQuery::bindVariable(const QXmlName&, const QXmlItem&)
    {66, 111, 969, 2, 0, 0, 13},	//655 QXmlQuery::bindVariable(const QString&, const QXmlItem&)
    {66, 111, 972, 2, 0, 0, 14},	//656 QXmlQuery::bindVariable(const QXmlName&, QIODevice*)
    {66, 111, 975, 2, 0, 0, 15},	//657 QXmlQuery::bindVariable(const QString&, QIODevice*)
    {66, 111, 978, 2, 0, 0, 16},	//658 QXmlQuery::bindVariable(const QXmlName&, const QXmlQuery&)
    {66, 111, 981, 2, 0, 0, 17},	//659 QXmlQuery::bindVariable(const QString&, const QXmlQuery&)
    {66, 161, 0, 0, Smoke::mf_const, 249, 18},	//660 QXmlQuery::isValid() const
    {66, 140, 984, 1, Smoke::mf_const, 0, 19},	//661 QXmlQuery::evaluateTo(QXmlResultItems*) const
    {66, 140, 986, 1, Smoke::mf_const, 249, 20},	//662 QXmlQuery::evaluateTo(QAbstractXmlReceiver*) const
    {66, 140, 988, 1, Smoke::mf_const, 249, 21},	//663 QXmlQuery::evaluateTo(QStringList*) const
    {66, 140, 990, 1, Smoke::mf_const, 249, 22},	//664 QXmlQuery::evaluateTo(QIODevice*) const
    {66, 140, 992, 1, Smoke::mf_const, 249, 23},	//665 QXmlQuery::evaluateTo(QString*) const
    {66, 460, 994, 1, 0, 0, 24},	//666 QXmlQuery::setUriResolver(const QAbstractUriResolver*)
    {66, 487, 0, 0, Smoke::mf_const, 252, 25},	//667 QXmlQuery::uriResolver() const
    {66, 437, 749, 1, 0, 0, 26},	//668 QXmlQuery::setFocus(const QXmlItem&)
    {66, 437, 754, 1, 0, 249, 27},	//669 QXmlQuery::setFocus(const QUrl&)
    {66, 437, 990, 1, 0, 249, 28},	//670 QXmlQuery::setFocus(QIODevice*)
    {66, 437, 64, 1, 0, 249, 29},	//671 QXmlQuery::setFocus(const QString&)
    {66, 442, 42, 1, 0, 0, 30},	//672 QXmlQuery::setInitialTemplateName(const QXmlName&)
    {66, 442, 64, 1, 0, 0, 31},	//673 QXmlQuery::setInitialTemplateName(const QString&)
    {66, 152, 0, 0, Smoke::mf_const, 133, 32},	//674 QXmlQuery::initialTemplateName() const
    {66, 449, 996, 1, 0, 0, 33},	//675 QXmlQuery::setNetworkAccessManager(QNetworkAccessManager*)
    {66, 190, 0, 0, Smoke::mf_const, 78, 34},	//676 QXmlQuery::networkAccessManager() const
    {66, 418, 0, 0, Smoke::mf_const, 148, 35},	//677 QXmlQuery::queryLanguage() const
    {66, 75, 998, 1, Smoke::mf_ctor, 147, 36},	//678 QXmlQuery::QXmlQuery(QXmlQuery::QueryLanguage)
    {66, 451, 64, 1, 0, 0, 37},	//679 QXmlQuery::setQuery(const QString&)
    {66, 451, 990, 1, 0, 0, 38},	//680 QXmlQuery::setQuery(QIODevice*)
    {66, 451, 754, 1, 0, 0, 39},	//681 QXmlQuery::setQuery(const QUrl&)
    {66, 98, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 40},	//682 QXmlQuery::XQuery10 (enum)
    {66, 99, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 41},	//683 QXmlQuery::XSLT20 (enum)
    {66, 101, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 42},	//684 QXmlQuery::XmlSchema11IdentityConstraintSelector (enum)
    {66, 100, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 43},	//685 QXmlQuery::XmlSchema11IdentityConstraintField (enum)
    {66, 97, 0, 0, Smoke::mf_static|Smoke::mf_enum, 148, 44},	//686 QXmlQuery::XPath20 (enum)
    {66, 504, 0, 0, Smoke::mf_dtor, 0, 45 },	//687 QXmlQuery::~QXmlQuery()
    {67, 79, 0, 0, Smoke::mf_ctor, 149, 1},	//688 QXmlResultItems::QXmlResultItems()
    {67, 150, 0, 0, Smoke::mf_const, 249, 2},	//689 QXmlResultItems::hasError() const
    {67, 191, 0, 0, 0, 130, 3},	//690 QXmlResultItems::next()
    {67, 129, 0, 0, Smoke::mf_const, 130, 4},	//691 QXmlResultItems::current() const
    {67, 505, 0, 0, Smoke::mf_dtor, 0, 5 },	//692 QXmlResultItems::~QXmlResultItems()
    {68, 80, 0, 0, Smoke::mf_ctor, 151, 1},	//693 QXmlSchema::QXmlSchema()
    {68, 80, 1000, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 151, 2},	//694 QXmlSchema::QXmlSchema(const QXmlSchema&)
    {68, 167, 754, 1, 0, 249, 3},	//695 QXmlSchema::load(const QUrl&)
    {68, 167, 963, 2, 0, 249, 4},	//696 QXmlSchema::load(QIODevice*, const QUrl&)
    {68, 167, 1002, 2, 0, 249, 5},	//697 QXmlSchema::load(const QByteArray&, const QUrl&)
    {68, 161, 0, 0, Smoke::mf_const, 249, 6},	//698 QXmlSchema::isValid() const
    {68, 181, 0, 0, Smoke::mf_const, 137, 7},	//699 QXmlSchema::namePool() const
    {68, 133, 0, 0, Smoke::mf_const, 119, 8},	//700 QXmlSchema::documentUri() const
    {68, 447, 958, 1, 0, 0, 9},	//701 QXmlSchema::setMessageHandler(QAbstractMessageHandler*)
    {68, 176, 0, 0, Smoke::mf_const, 2, 10},	//702 QXmlSchema::messageHandler() const
    {68, 460, 994, 1, 0, 0, 11},	//703 QXmlSchema::setUriResolver(const QAbstractUriResolver*)
    {68, 487, 0, 0, Smoke::mf_const, 252, 12},	//704 QXmlSchema::uriResolver() const
    {68, 449, 996, 1, 0, 0, 13},	//705 QXmlSchema::setNetworkAccessManager(QNetworkAccessManager*)
    {68, 190, 0, 0, Smoke::mf_const, 78, 14},	//706 QXmlSchema::networkAccessManager() const
    {68, 167, 990, 1, 0, 249, 15},	//707 QXmlSchema::load(QIODevice*)
    {68, 167, 314, 1, 0, 249, 16},	//708 QXmlSchema::load(const QByteArray&)
    {68, 506, 0, 0, Smoke::mf_dtor, 0, 17 },	//709 QXmlSchema::~QXmlSchema()
    {69, 82, 0, 0, Smoke::mf_ctor, 152, 1},	//710 QXmlSchemaValidator::QXmlSchemaValidator()
    {69, 82, 1000, 1, Smoke::mf_ctor, 152, 2},	//711 QXmlSchemaValidator::QXmlSchemaValidator(const QXmlSchema&)
    {69, 456, 1000, 1, 0, 0, 3},	//712 QXmlSchemaValidator::setSchema(const QXmlSchema&)
    {69, 488, 754, 1, Smoke::mf_const, 249, 4},	//713 QXmlSchemaValidator::validate(const QUrl&) const
    {69, 488, 963, 2, Smoke::mf_const, 249, 5},	//714 QXmlSchemaValidator::validate(QIODevice*, const QUrl&) const
    {69, 488, 1002, 2, Smoke::mf_const, 249, 6},	//715 QXmlSchemaValidator::validate(const QByteArray&, const QUrl&) const
    {69, 181, 0, 0, Smoke::mf_const, 137, 7},	//716 QXmlSchemaValidator::namePool() const
    {69, 428, 0, 0, Smoke::mf_const, 150, 8},	//717 QXmlSchemaValidator::schema() const
    {69, 447, 958, 1, 0, 0, 9},	//718 QXmlSchemaValidator::setMessageHandler(QAbstractMessageHandler*)
    {69, 176, 0, 0, Smoke::mf_const, 2, 10},	//719 QXmlSchemaValidator::messageHandler() const
    {69, 460, 994, 1, 0, 0, 11},	//720 QXmlSchemaValidator::setUriResolver(const QAbstractUriResolver*)
    {69, 487, 0, 0, Smoke::mf_const, 252, 12},	//721 QXmlSchemaValidator::uriResolver() const
    {69, 449, 996, 1, 0, 0, 13},	//722 QXmlSchemaValidator::setNetworkAccessManager(QNetworkAccessManager*)
    {69, 190, 0, 0, Smoke::mf_const, 78, 14},	//723 QXmlSchemaValidator::networkAccessManager() const
    {69, 488, 990, 1, Smoke::mf_const, 249, 15},	//724 QXmlSchemaValidator::validate(QIODevice*) const
    {69, 488, 314, 1, Smoke::mf_const, 249, 16},	//725 QXmlSchemaValidator::validate(const QByteArray&) const
    {69, 507, 0, 0, Smoke::mf_dtor, 0, 17 },	//726 QXmlSchemaValidator::~QXmlSchemaValidator()
    {70, 84, 935, 2, Smoke::mf_ctor, 153, 1},	//727 QXmlSerializer::QXmlSerializer(const QXmlQuery&, QIODevice*)
    {70, 182, 42, 1, Smoke::mf_virtual, 0, 2},	//728 QXmlSerializer::namespaceBinding(const QXmlName&)
    {70, 114, 66, 1, Smoke::mf_virtual, 0, 3},	//729 QXmlSerializer::characters(const QStringRef&)
    {70, 119, 64, 1, Smoke::mf_virtual, 0, 4},	//730 QXmlSerializer::comment(const QString&)
    {70, 465, 42, 1, Smoke::mf_virtual, 0, 5},	//731 QXmlSerializer::startElement(const QXmlName&)
    {70, 138, 0, 0, Smoke::mf_virtual, 0, 6},	//732 QXmlSerializer::endElement()
    {70, 105, 61, 2, Smoke::mf_virtual, 0, 7},	//733 QXmlSerializer::attribute(const QXmlName&, const QStringRef&)
    {70, 255, 68, 2, Smoke::mf_virtual, 0, 8},	//734 QXmlSerializer::processingInstruction(const QXmlName&, const QString&)
    {70, 103, 71, 1, Smoke::mf_virtual, 0, 9},	//735 QXmlSerializer::atomicValue(const QVariant&)
    {70, 464, 0, 0, Smoke::mf_virtual, 0, 10},	//736 QXmlSerializer::startDocument()
    {70, 137, 0, 0, Smoke::mf_virtual, 0, 11},	//737 QXmlSerializer::endDocument()
    {70, 467, 0, 0, Smoke::mf_virtual, 0, 12},	//738 QXmlSerializer::startOfSequence()
    {70, 139, 0, 0, Smoke::mf_virtual, 0, 13},	//739 QXmlSerializer::endOfSequence()
    {70, 252, 0, 0, Smoke::mf_const, 66, 14},	//740 QXmlSerializer::outputDevice() const
    {70, 433, 1005, 1, 0, 0, 15},	//741 QXmlSerializer::setCodec(const QTextCodec*)
    {70, 117, 0, 0, Smoke::mf_const, 302, 16},	//742 QXmlSerializer::codec() const
    {70, 162, 73, 1, Smoke::mf_virtual, 0, 17},	//743 QXmlSerializer::item(const QPatternist::Item&)
    {70, 508, 0, 0, Smoke::mf_dtor, 0, 18 },	//744 QXmlSerializer::~QXmlSerializer()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    713,  // QXmlSchemaValidator::validate(const QUrl&) const
    724,  // QXmlSchemaValidator::validate(QIODevice*) const
    725,  // QXmlSchemaValidator::validate(const QByteArray&) const
    0,
    714,  // QXmlSchemaValidator::validate(QIODevice*, const QUrl&) const
    715,  // QXmlSchemaValidator::validate(const QByteArray&, const QUrl&) const
    0,
    51,  // QAbstractXmlNodeModel::createIndex(long long) const
    54,  // QAbstractXmlNodeModel::createIndex(void*) const
    0,
    52,  // QAbstractXmlNodeModel::createIndex(void*, long long) const
    53,  // QAbstractXmlNodeModel::createIndex(long long, long long) const
    0,
    545,  // QSourceLocation::QSourceLocation(const QSourceLocation&)
    557,  // QSourceLocation::QSourceLocation(const QUrl&)
    0,
    577,  // QXmlItem::QXmlItem(const QXmlItem&)
    578,  // QXmlItem::QXmlItem(const QXmlNodeModelIndex&)
    579,  // QXmlItem::QXmlItem(const QVariant&)
    0,
    644,  // QXmlQuery::QXmlQuery(const QXmlQuery&)
    645,  // QXmlQuery::QXmlQuery(const QXmlNamePool&)
    0,
    654,  // QXmlQuery::bindVariable(const QXmlName&, const QXmlItem&)
    656,  // QXmlQuery::bindVariable(const QXmlName&, QIODevice*)
    658,  // QXmlQuery::bindVariable(const QXmlName&, const QXmlQuery&)
    0,
    655,  // QXmlQuery::bindVariable(const QString&, const QXmlItem&)
    657,  // QXmlQuery::bindVariable(const QString&, QIODevice*)
    659,  // QXmlQuery::bindVariable(const QString&, const QXmlQuery&)
    0,
    661,  // QXmlQuery::evaluateTo(QXmlResultItems*) const
    662,  // QXmlQuery::evaluateTo(QAbstractXmlReceiver*) const
    664,  // QXmlQuery::evaluateTo(QIODevice*) const
    0,
    668,  // QXmlQuery::setFocus(const QXmlItem&)
    669,  // QXmlQuery::setFocus(const QUrl&)
    670,  // QXmlQuery::setFocus(QIODevice*)
    0,
    680,  // QXmlQuery::setQuery(QIODevice*)
    681,  // QXmlQuery::setQuery(const QUrl&)
    0,
    651,  // QXmlQuery::setQuery(QIODevice*, const QUrl&)
    652,  // QXmlQuery::setQuery(const QUrl&, const QUrl&)
    0,
    695,  // QXmlSchema::load(const QUrl&)
    707,  // QXmlSchema::load(QIODevice*)
    708,  // QXmlSchema::load(const QByteArray&)
    0,
    696,  // QXmlSchema::load(QIODevice*, const QUrl&)
    697,  // QXmlSchema::load(const QByteArray&, const QUrl&)
    0,
    106,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    115,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    118,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    128,  // QGlobalSpace::operator!=(QChar, QChar)
    151,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    160,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    175,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    208,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    224,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    239,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    254,  // QGlobalSpace::operator!=(QBool, QBool)
    263,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    294,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    330,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    462,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    0,
    287,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    313,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    390,  // QGlobalSpace::operator!=(QBool, bool)
    414,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    487,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    0,
    107,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    255,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    314,  // QGlobalSpace::operator!=(bool, QBool)
    325,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    435,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    0,
    90,  // QGlobalSpace::operator*(const QSizeF&, double)
    167,  // QGlobalSpace::operator*(const QPointF&, double)
    231,  // QGlobalSpace::operator*(const QPoint&, float)
    275,  // QGlobalSpace::operator*(const QSize&, double)
    401,  // QGlobalSpace::operator*(const QPoint&, double)
    474,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    225,  // QGlobalSpace::operator*(double, const QSize&)
    344,  // QGlobalSpace::operator*(double, const QPointF&)
    345,  // QGlobalSpace::operator*(int, const QPoint&)
    411,  // QGlobalSpace::operator*(float, const QPoint&)
    412,  // QGlobalSpace::operator*(double, const QPoint&)
    468,  // QGlobalSpace::operator*(double, const QSizeF&)
    0,
    110,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    340,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    371,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    410,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    497,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    0,
    101,  // QGlobalSpace::operator+(QChar, const QString&)
    341,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    366,  // QGlobalSpace::operator+(const QByteArray&, char)
    0,
    109,  // QGlobalSpace::operator+(const QString&, QChar)
    152,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    381,  // QGlobalSpace::operator+(char, const QByteArray&)
    0,
    232,  // QGlobalSpace::operator-(const QPointF&)
    247,  // QGlobalSpace::operator-(const QPoint&)
    0,
    131,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    277,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    428,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    444,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    0,
    242,  // QGlobalSpace::operator/(const QSizeF&, double)
    258,  // QGlobalSpace::operator/(const QPointF&, double)
    283,  // QGlobalSpace::operator/(const QPoint&, double)
    431,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    252,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    383,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    441,  // QGlobalSpace::operator<(QChar, QChar)
    0,
    91,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    99,  // QGlobalSpace::operator<<(QDebug, const QHostAddress&)
    108,  // QGlobalSpace::operator<<(QDataStream&, const QHostAddress&)
    114,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    117,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    132,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    140,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    143,  // QGlobalSpace::operator<<(QDebug, const QSslCertificate&)
    150,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    169,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    184,  // QGlobalSpace::operator<<(QDebug, const QSslError&)
    189,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    190,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    192,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    205,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    206,  // QGlobalSpace::operator<<(QDebug, const QSourceLocation&)
    222,  // QGlobalSpace::operator<<(QDebug, const QSslKey&)
    223,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    237,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    244,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    248,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    250,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    262,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    272,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    278,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    285,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    286,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    288,  // QGlobalSpace::operator<<(QDataStream&, const QNetworkCacheMetaData&)
    297,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    312,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    328,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    338,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    347,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    349,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    357,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    361,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    372,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    374,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    379,  // QGlobalSpace::operator<<(QDebug, const QNetworkCookie&)
    380,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    394,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    403,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    413,  // QGlobalSpace::operator<<(QDebug, const QNetworkInterface&)
    416,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    417,  // QGlobalSpace::operator<<(QDebug, const QSslCipher&)
    423,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    453,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    454,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    457,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    470,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    495,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    0,
    97,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    104,  // QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketError)
    134,  // QGlobalSpace::operator<<(QDebug, const QSslError::SslError&)
    138,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    182,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    191,  // QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketState)
    193,  // QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketError)
    218,  // QGlobalSpace::operator<<(QDebug, QSslCertificate::SubjectInfo)
    322,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    402,  // QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketState)
    481,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    0,
    103,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    166,  // QGlobalSpace::operator<=(QChar, QChar)
    177,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    0,
    96,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    98,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    112,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    121,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    170,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    174,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    198,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    298,  // QGlobalSpace::operator==(QBool, QBool)
    318,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    334,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    358,  // QGlobalSpace::operator==(QChar, QChar)
    376,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    391,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    418,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    472,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    475,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    0,
    264,  // QGlobalSpace::operator==(QString::Null, const QString&)
    308,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    398,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    482,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    486,  // QGlobalSpace::operator==(QBool, bool)
    0,
    155,  // QGlobalSpace::operator==(QHostAddress::SpecialAddress, const QHostAddress&)
    202,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    213,  // QGlobalSpace::operator==(const QString&, QString::Null)
    292,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    303,  // QGlobalSpace::operator==(bool, QBool)
    336,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    0,
    194,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    241,  // QGlobalSpace::operator>(QChar, QChar)
    356,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    164,  // QGlobalSpace::operator>=(QChar, QChar)
    195,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    469,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    0,
    82,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    84,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    94,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    113,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    124,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    130,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    176,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    183,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    221,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    253,  // QGlobalSpace::operator>>(QDataStream&, QHostAddress&)
    270,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    274,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    280,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    299,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    301,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    305,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    323,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    348,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    354,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    407,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    421,  // QGlobalSpace::operator>>(QDataStream&, QNetworkCacheMetaData&)
    450,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    490,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    0,
    295,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    451,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    0,
    80,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    83,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    86,  // QGlobalSpace::operator|(Qt::WindowType, int)
    95,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    116,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    126,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    133,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    141,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    144,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    148,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    153,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag)
    154,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>)
    157,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    165,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    171,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    172,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, int)
    179,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>)
    185,  // QGlobalSpace::operator|(Qt::DropAction, int)
    187,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    197,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    203,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    204,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    207,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    210,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    211,  // QGlobalSpace::operator|(QSsl::SslOption, int)
    212,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    214,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    216,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    219,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    220,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    227,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    230,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    233,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    235,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    243,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    251,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    260,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    268,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    269,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    279,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    281,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    290,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    293,  // QGlobalSpace::operator|(Qt::WindowState, int)
    302,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    304,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    311,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    316,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    319,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    320,  // QGlobalSpace::operator|(QNetworkProxy::Capability, QNetworkProxy::Capability)
    321,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>)
    324,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    327,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    333,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    335,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    339,  // QGlobalSpace::operator|(QFile::Permission, int)
    352,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, QUdpSocket::BindFlag)
    355,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    363,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    364,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    367,  // QGlobalSpace::operator|(QNetworkProxy::Capability, int)
    368,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    370,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    373,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    375,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    378,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    382,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    387,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    395,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    400,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    409,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    419,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    422,  // QGlobalSpace::operator|(QSsl::SslOption, QSsl::SslOption)
    425,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    426,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    429,  // QGlobalSpace::operator|(QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>)
    430,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, int)
    433,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    434,  // QGlobalSpace::operator|(QDir::Filter, int)
    439,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    442,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    443,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    448,  // QGlobalSpace::operator|(Qt::Orientation, int)
    449,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    456,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability)
    458,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    459,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    461,  // QGlobalSpace::operator|(QSsl::SslOption, QFlags<QSsl::SslOption>)
    463,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    465,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    466,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    467,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    476,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    477,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    478,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    480,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    483,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    484,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    492,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    493,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    494,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, int)
    498,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    499,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    0,
    217,  // QGlobalSpace::qFuzzyCompare(double, double)
    271,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    306,  // QGlobalSpace::qFuzzyIsNull(double)
    452,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    156,  // QGlobalSpace::qHash(const QBitArray&)
    168,  // QGlobalSpace::qHash(const QSourceLocation&)
    226,  // QGlobalSpace::qHash(const QXmlNodeModelIndex&)
    238,  // QGlobalSpace::qHash(const QHostAddress&)
    240,  // QGlobalSpace::qHash(const QXmlName&)
    310,  // QGlobalSpace::qHash(QChar)
    353,  // QGlobalSpace::qHash(const QStringRef&)
    408,  // QGlobalSpace::qHash(const QUrl&)
    455,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    471,  // QGlobalSpace::qHash(const QByteArray&)
    473,  // QGlobalSpace::qHash(const QModelIndex&)
    0,
    88,  // QGlobalSpace::qHash(unsigned int)
    89,  // QGlobalSpace::qHash(char)
    119,  // QGlobalSpace::qHash(unsigned char)
    139,  // QGlobalSpace::qHash(short)
    147,  // QGlobalSpace::qHash(long)
    201,  // QGlobalSpace::qHash(unsigned short)
    229,  // QGlobalSpace::qHash(long long)
    256,  // QGlobalSpace::qHash(unsigned long long)
    289,  // QGlobalSpace::qHash(int)
    332,  // QGlobalSpace::qHash(signed char)
    388,  // QGlobalSpace::qHash(const QString&)
    438,  // QGlobalSpace::qHash(unsigned long)
    0,
    196,  // QGlobalSpace::qIntCast(float)
    259,  // QGlobalSpace::qIntCast(double)
    0,
    142,  // QGlobalSpace::qIsFinite(double)
    496,  // QGlobalSpace::qIsFinite(float)
    0,
    365,  // QGlobalSpace::qIsForwardIteratorEnd(const QXmlNodeModelIndex&)
    404,  // QGlobalSpace::qIsForwardIteratorEnd(const QXmlItem&)
    0,
    234,  // QGlobalSpace::qIsInf(float)
    427,  // QGlobalSpace::qIsInf(double)
    0,
    393,  // QGlobalSpace::qIsNaN(float)
    399,  // QGlobalSpace::qIsNaN(double)
    0,
    125,  // QGlobalSpace::qIsNull(float)
    446,  // QGlobalSpace::qIsNull(double)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {1, 50, 13},	// QAbstractMessageHandler::QAbstractMessageHandler
    {1, 51, 8},	// QAbstractMessageHandler::QAbstractMessageHandler#
    {1, 149, 10},	// QAbstractMessageHandler::handleMessage$$##
    {1, 173, 14},	// QAbstractMessageHandler::message$$
    {1, 174, 15},	// QAbstractMessageHandler::message$$#
    {1, 175, 9},	// QAbstractMessageHandler::message$$##
    {1, 177, 1},	// QAbstractMessageHandler::metaObject
    {1, 410, 7},	// QAbstractMessageHandler::qt_metacall$$?
    {1, 412, 2},	// QAbstractMessageHandler::qt_metacast$
    {1, 468, 16},	// QAbstractMessageHandler::staticMetaObject
    {1, 477, 11},	// QAbstractMessageHandler::tr$
    {1, 478, 3},	// QAbstractMessageHandler::tr$$
    {1, 479, 5},	// QAbstractMessageHandler::tr$$$
    {1, 481, 12},	// QAbstractMessageHandler::trUtf8$
    {1, 482, 4},	// QAbstractMessageHandler::trUtf8$$
    {1, 483, 6},	// QAbstractMessageHandler::trUtf8$$$
    {1, 493, 17},	// QAbstractMessageHandler::~QAbstractMessageHandler
    {2, 52, 29},	// QAbstractUriResolver::QAbstractUriResolver
    {2, 53, 25},	// QAbstractUriResolver::QAbstractUriResolver#
    {2, 177, 18},	// QAbstractUriResolver::metaObject
    {2, 410, 24},	// QAbstractUriResolver::qt_metacall$$?
    {2, 412, 19},	// QAbstractUriResolver::qt_metacast$
    {2, 425, 26},	// QAbstractUriResolver::resolve##
    {2, 468, 30},	// QAbstractUriResolver::staticMetaObject
    {2, 477, 27},	// QAbstractUriResolver::tr$
    {2, 478, 20},	// QAbstractUriResolver::tr$$
    {2, 479, 22},	// QAbstractUriResolver::tr$$$
    {2, 481, 28},	// QAbstractUriResolver::trUtf8$
    {2, 482, 21},	// QAbstractUriResolver::trUtf8$$
    {2, 483, 23},	// QAbstractUriResolver::trUtf8$$$
    {2, 494, 31},	// QAbstractUriResolver::~QAbstractUriResolver
    {3, 20, 56},	// QAbstractXmlNodeModel::FirstChild
    {3, 22, 59},	// QAbstractXmlNodeModel::InheritNamespaces
    {3, 44, 58},	// QAbstractXmlNodeModel::NextSibling
    {3, 45, 55},	// QAbstractXmlNodeModel::Parent
    {3, 47, 60},	// QAbstractXmlNodeModel::PreserveNamespaces
    {3, 48, 57},	// QAbstractXmlNodeModel::PreviousSibling
    {3, 54, 32},	// QAbstractXmlNodeModel::QAbstractXmlNodeModel
    {3, 108, 50},	// QAbstractXmlNodeModel::attributes#
    {3, 110, 33},	// QAbstractXmlNodeModel::baseUri#
    {3, 122, 36},	// QAbstractXmlNodeModel::compareOrder##
    {3, 125, 47},	// QAbstractXmlNodeModel::copyNodeTo###
    {3, 127, -8},	// QAbstractXmlNodeModel::createIndex$
    {3, 128, -11},	// QAbstractXmlNodeModel::createIndex$$
    {3, 134, 34},	// QAbstractXmlNodeModel::documentUri#
    {3, 136, 45},	// QAbstractXmlNodeModel::elementById#
    {3, 156, 42},	// QAbstractXmlNodeModel::isDeepEqual##
    {3, 165, 35},	// QAbstractXmlNodeModel::kind#
    {3, 180, 38},	// QAbstractXmlNodeModel::name#
    {3, 185, 44},	// QAbstractXmlNodeModel::namespaceBindings#
    {3, 187, 41},	// QAbstractXmlNodeModel::namespaceForPrefix#$
    {3, 193, 49},	// QAbstractXmlNodeModel::nextFromSimpleAxis$#
    {3, 195, 46},	// QAbstractXmlNodeModel::nodesByIdref#
    {3, 427, 37},	// QAbstractXmlNodeModel::root#
    {3, 432, 43},	// QAbstractXmlNodeModel::sendNamespaces##
    {3, 463, 48},	// QAbstractXmlNodeModel::sourceLocation#
    {3, 470, 39},	// QAbstractXmlNodeModel::stringValue#
    {3, 485, 40},	// QAbstractXmlNodeModel::typedValue#
    {3, 495, 61},	// QAbstractXmlNodeModel::~QAbstractXmlNodeModel
    {4, 55, 62},	// QAbstractXmlReceiver::QAbstractXmlReceiver
    {4, 104, 71},	// QAbstractXmlReceiver::atomicValue#
    {4, 106, 65},	// QAbstractXmlReceiver::attribute##
    {4, 115, 67},	// QAbstractXmlReceiver::characters#
    {4, 120, 66},	// QAbstractXmlReceiver::comment$
    {4, 137, 69},	// QAbstractXmlReceiver::endDocument
    {4, 138, 64},	// QAbstractXmlReceiver::endElement
    {4, 139, 74},	// QAbstractXmlReceiver::endOfSequence
    {4, 163, 76},	// QAbstractXmlReceiver::item#
    {4, 183, 72},	// QAbstractXmlReceiver::namespaceBinding#
    {4, 256, 70},	// QAbstractXmlReceiver::processingInstruction#$
    {4, 430, 77},	// QAbstractXmlReceiver::sendAsNode#
    {4, 464, 68},	// QAbstractXmlReceiver::startDocument
    {4, 466, 63},	// QAbstractXmlReceiver::startElement#
    {4, 467, 73},	// QAbstractXmlReceiver::startOfSequence
    {4, 492, 75},	// QAbstractXmlReceiver::whitespaceOnly#
    {4, 496, 78},	// QAbstractXmlReceiver::~QAbstractXmlReceiver
    {17, 24, 521},	// QGlobalSpace::LicensedActiveQt
    {17, 25, 516},	// QGlobalSpace::LicensedCore
    {17, 26, 522},	// QGlobalSpace::LicensedDBus
    {17, 27, 520},	// QGlobalSpace::LicensedDeclarative
    {17, 28, 519},	// QGlobalSpace::LicensedGui
    {17, 29, 528},	// QGlobalSpace::LicensedHelp
    {17, 30, 527},	// QGlobalSpace::LicensedMultimedia
    {17, 31, 514},	// QGlobalSpace::LicensedNetwork
    {17, 32, 511},	// QGlobalSpace::LicensedOpenGL
    {17, 33, 513},	// QGlobalSpace::LicensedOpenVG
    {17, 34, 512},	// QGlobalSpace::LicensedQt3Support
    {17, 35, 525},	// QGlobalSpace::LicensedQt3SupportLight
    {17, 36, 526},	// QGlobalSpace::LicensedScript
    {17, 37, 524},	// QGlobalSpace::LicensedScriptTools
    {17, 38, 515},	// QGlobalSpace::LicensedSql
    {17, 39, 517},	// QGlobalSpace::LicensedSvg
    {17, 40, 523},	// QGlobalSpace::LicensedTest
    {17, 41, 505},	// QGlobalSpace::LicensedXml
    {17, 42, 518},	// QGlobalSpace::LicensedXmlPatterns
    {17, 86, 500},	// QGlobalSpace::Q_COMPLEX_TYPE
    {17, 87, 504},	// QGlobalSpace::Q_DUMMY_TYPE
    {17, 88, 503},	// QGlobalSpace::Q_MOVABLE_TYPE
    {17, 89, 501},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {17, 90, 502},	// QGlobalSpace::Q_STATIC_TYPE
    {17, 91, 508},	// QGlobalSpace::QtCriticalMsg
    {17, 92, 506},	// QGlobalSpace::QtDebugMsg
    {17, 93, 509},	// QGlobalSpace::QtFatalMsg
    {17, 94, 510},	// QGlobalSpace::QtSystemMsg
    {17, 95, 507},	// QGlobalSpace::QtWarningMsg
    {17, 198, -53},	// QGlobalSpace::operator!=##
    {17, 199, -69},	// QGlobalSpace::operator!=#$
    {17, 200, -75},	// QGlobalSpace::operator!=$#
    {17, 202, 246},	// QGlobalSpace::operator&##
    {17, 204, -81},	// QGlobalSpace::operator*#$
    {17, 205, -88},	// QGlobalSpace::operator*$#
    {17, 207, -95},	// QGlobalSpace::operator+##
    {17, 208, -101},	// QGlobalSpace::operator+#$
    {17, 209, -105},	// QGlobalSpace::operator+$#
    {17, 210, 389},	// QGlobalSpace::operator+$$
    {17, 212, -109},	// QGlobalSpace::operator-#
    {17, 213, -112},	// QGlobalSpace::operator-##
    {17, 215, -117},	// QGlobalSpace::operator/#$
    {17, 217, -122},	// QGlobalSpace::operator<##
    {17, 218, 93},	// QGlobalSpace::operator<#$
    {17, 219, 161},	// QGlobalSpace::operator<$#
    {17, 221, -126},	// QGlobalSpace::operator<<##
    {17, 222, -178},	// QGlobalSpace::operator<<#$
    {17, 223, 392},	// QGlobalSpace::operator<<#?
    {17, 225, -190},	// QGlobalSpace::operator<=##
    {17, 226, 265},	// QGlobalSpace::operator<=#$
    {17, 227, 236},	// QGlobalSpace::operator<=$#
    {17, 232, -194},	// QGlobalSpace::operator==##
    {17, 233, -211},	// QGlobalSpace::operator==#$
    {17, 234, -217},	// QGlobalSpace::operator==$#
    {17, 236, -224},	// QGlobalSpace::operator>##
    {17, 237, 460},	// QGlobalSpace::operator>#$
    {17, 238, 199},	// QGlobalSpace::operator>$#
    {17, 240, -228},	// QGlobalSpace::operator>=##
    {17, 241, 249},	// QGlobalSpace::operator>=#$
    {17, 242, 432},	// QGlobalSpace::operator>=$#
    {17, 244, -232},	// QGlobalSpace::operator>>##
    {17, 245, -256},	// QGlobalSpace::operator>>#$
    {17, 246, 337},	// QGlobalSpace::operator>>#?
    {17, 248, 488},	// QGlobalSpace::operator^##
    {17, 250, 159},	// QGlobalSpace::operator|##
    {17, 251, -259},	// QGlobalSpace::operator|$$
    {17, 258, 81},	// QGlobalSpace::qAcos$
    {17, 260, 342},	// QGlobalSpace::qAddPostRoutine$
    {17, 261, 85},	// QGlobalSpace::qAppName
    {17, 263, 489},	// QGlobalSpace::qAsin$
    {17, 265, 162},	// QGlobalSpace::qAtan$
    {17, 267, 137},	// QGlobalSpace::qAtan2$$
    {17, 268, 491},	// QGlobalSpace::qBadAlloc
    {17, 270, 331},	// QGlobalSpace::qCeil$
    {17, 272, 273},	// QGlobalSpace::qChecksum$$
    {17, 274, 181},	// QGlobalSpace::qCompress#
    {17, 275, 180},	// QGlobalSpace::qCompress#$
    {17, 276, 385},	// QGlobalSpace::qCompress$$
    {17, 277, 384},	// QGlobalSpace::qCompress$$$
    {17, 279, 359},	// QGlobalSpace::qCos$
    {17, 280, 282},	// QGlobalSpace::qCritical
    {17, 281, 228},	// QGlobalSpace::qDebug
    {17, 283, 300},	// QGlobalSpace::qExp$
    {17, 285, 200},	// QGlobalSpace::qFabs$
    {17, 287, 266},	// QGlobalSpace::qFastCos$
    {17, 289, 100},	// QGlobalSpace::qFastSin$
    {17, 291, 257},	// QGlobalSpace::qFlagLocation$
    {17, 293, 386},	// QGlobalSpace::qFloor$
    {17, 295, 397},	// QGlobalSpace::qFree$
    {17, 297, 479},	// QGlobalSpace::qFreeAligned$
    {17, 299, -362},	// QGlobalSpace::qFuzzyCompare$$
    {17, 301, -365},	// QGlobalSpace::qFuzzyIsNull$
    {17, 303, -368},	// QGlobalSpace::qHash#
    {17, 304, -380},	// QGlobalSpace::qHash$
    {17, 305, 350},	// QGlobalSpace::qInf
    {17, 307, 276},	// QGlobalSpace::qInstallMsgHandler$
    {17, 309, -393},	// QGlobalSpace::qIntCast$
    {17, 311, -396},	// QGlobalSpace::qIsFinite$
    {17, 313, -399},	// QGlobalSpace::qIsForwardIteratorEnd#
    {17, 315, -402},	// QGlobalSpace::qIsInf$
    {17, 317, -405},	// QGlobalSpace::qIsNaN$
    {17, 319, -408},	// QGlobalSpace::qIsNull$
    {17, 321, 485},	// QGlobalSpace::qLn$
    {17, 323, 445},	// QGlobalSpace::qMalloc$
    {17, 325, 360},	// QGlobalSpace::qMallocAligned$$
    {17, 327, 396},	// QGlobalSpace::qMemCopy$$$
    {17, 329, 329},	// QGlobalSpace::qMemSet$$$
    {17, 331, 284},	// QGlobalSpace::qPow$$
    {17, 332, 127},	// QGlobalSpace::qQNaN
    {17, 334, 209},	// QGlobalSpace::qRealloc$$
    {17, 336, 186},	// QGlobalSpace::qReallocAligned$$$$
    {17, 338, 343},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {17, 340, 267},	// QGlobalSpace::qRemovePostRoutine$
    {17, 342, 79},	// QGlobalSpace::qRound$
    {17, 344, 437},	// QGlobalSpace::qRound64$
    {17, 345, 440},	// QGlobalSpace::qSNaN
    {17, 347, 464},	// QGlobalSpace::qSetFieldWidth$
    {17, 349, 129},	// QGlobalSpace::qSetPadChar#
    {17, 351, 405},	// QGlobalSpace::qSetRealNumberPrecision$
    {17, 352, 346},	// QGlobalSpace::qSharedBuild
    {17, 354, 415},	// QGlobalSpace::qSin$
    {17, 356, 188},	// QGlobalSpace::qSqrt$
    {17, 358, 377},	// QGlobalSpace::qStringComparisonHelper#$
    {17, 360, 436},	// QGlobalSpace::qTan$
    {17, 362, 261},	// QGlobalSpace::qUncompress#
    {17, 363, 178},	// QGlobalSpace::qUncompress$$
    {17, 364, 369},	// QGlobalSpace::qVersion
    {17, 365, 215},	// QGlobalSpace::qWarning
    {17, 367, 309},	// QGlobalSpace::qbswap_helper$$$
    {17, 369, 92},	// QGlobalSpace::qgetenv$
    {17, 371, 447},	// QGlobalSpace::qputenv$#
    {17, 372, 406},	// QGlobalSpace::qrand
    {17, 374, 317},	// QGlobalSpace::qsrand$
    {17, 376, 245},	// QGlobalSpace::qstrcmp##
    {17, 377, 145},	// QGlobalSpace::qstrcmp#$
    {17, 378, 163},	// QGlobalSpace::qstrcmp$#
    {17, 379, 149},	// QGlobalSpace::qstrcmp$$
    {17, 381, 158},	// QGlobalSpace::qstrcpy$$
    {17, 383, 146},	// QGlobalSpace::qstrdup$
    {17, 385, 326},	// QGlobalSpace::qstricmp$$
    {17, 387, 424},	// QGlobalSpace::qstrlen$
    {17, 389, 102},	// QGlobalSpace::qstrncmp$$$
    {17, 391, 87},	// QGlobalSpace::qstrncpy$$$
    {17, 393, 351},	// QGlobalSpace::qstrnicmp$$$
    {17, 395, 111},	// QGlobalSpace::qstrnlen$$
    {17, 397, 136},	// QGlobalSpace::qtTrId$
    {17, 398, 135},	// QGlobalSpace::qtTrId$$
    {17, 400, 420},	// QGlobalSpace::qt_assert$$$
    {17, 402, 362},	// QGlobalSpace::qt_assert_x$$$$
    {17, 404, 173},	// QGlobalSpace::qt_check_pointer$$
    {17, 405, 123},	// QGlobalSpace::qt_error_string
    {17, 406, 122},	// QGlobalSpace::qt_error_string$
    {17, 408, 315},	// QGlobalSpace::qt_message_output$$
    {17, 413, 291},	// QGlobalSpace::qt_noop
    {17, 415, 296},	// QGlobalSpace::qt_qFindChild_helper#$#
    {17, 417, 120},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {17, 420, 307},	// QGlobalSpace::qvariant_cast_helper#$$
    {17, 422, 105},	// QGlobalSpace::qvsnprintf$$$?
    {42, 57, 536},	// QSimpleXmlNodeModel::QSimpleXmlNodeModel#
    {42, 110, 537},	// QSimpleXmlNodeModel::baseUri#
    {42, 136, 541},	// QSimpleXmlNodeModel::elementById#
    {42, 181, 538},	// QSimpleXmlNodeModel::namePool
    {42, 185, 539},	// QSimpleXmlNodeModel::namespaceBindings#
    {42, 195, 542},	// QSimpleXmlNodeModel::nodesByIdref#
    {42, 470, 540},	// QSimpleXmlNodeModel::stringValue#
    {42, 497, 543},	// QSimpleXmlNodeModel::~QSimpleXmlNodeModel
    {45, 58, 544},	// QSourceLocation::QSourceLocation
    {45, 59, -14},	// QSourceLocation::QSourceLocation#
    {45, 60, 558},	// QSourceLocation::QSourceLocation#$
    {45, 61, 546},	// QSourceLocation::QSourceLocation#$$
    {45, 118, 550},	// QSourceLocation::column
    {45, 160, 556},	// QSourceLocation::isNull
    {45, 166, 552},	// QSourceLocation::line
    {45, 197, 549},	// QSourceLocation::operator!=#
    {45, 229, 547},	// QSourceLocation::operator=#
    {45, 231, 548},	// QSourceLocation::operator==#
    {45, 436, 551},	// QSourceLocation::setColumn$
    {45, 446, 553},	// QSourceLocation::setLine$
    {45, 459, 555},	// QSourceLocation::setUri#
    {45, 486, 554},	// QSourceLocation::uri
    {45, 498, 559},	// QSourceLocation::~QSourceLocation
    {61, 63, 560},	// QXmlFormatter::QXmlFormatter##
    {61, 104, 567},	// QXmlFormatter::atomicValue#
    {61, 106, 565},	// QXmlFormatter::attribute##
    {61, 115, 561},	// QXmlFormatter::characters#
    {61, 120, 562},	// QXmlFormatter::comment$
    {61, 137, 569},	// QXmlFormatter::endDocument
    {61, 138, 564},	// QXmlFormatter::endElement
    {61, 139, 571},	// QXmlFormatter::endOfSequence
    {61, 151, 572},	// QXmlFormatter::indentationDepth
    {61, 163, 574},	// QXmlFormatter::item#
    {61, 256, 566},	// QXmlFormatter::processingInstruction#$
    {61, 441, 573},	// QXmlFormatter::setIndentationDepth$
    {61, 464, 568},	// QXmlFormatter::startDocument
    {61, 466, 563},	// QXmlFormatter::startElement#
    {61, 467, 570},	// QXmlFormatter::startOfSequence
    {61, 499, 575},	// QXmlFormatter::~QXmlFormatter
    {62, 64, 576},	// QXmlItem::QXmlItem
    {62, 65, -17},	// QXmlItem::QXmlItem#
    {62, 154, 583},	// QXmlItem::isAtomicValue
    {62, 159, 582},	// QXmlItem::isNode
    {62, 160, 581},	// QXmlItem::isNull
    {62, 229, 580},	// QXmlItem::operator=#
    {62, 472, 584},	// QXmlItem::toAtomicValue
    {62, 475, 585},	// QXmlItem::toNodeModelIndex
    {62, 500, 586},	// QXmlItem::~QXmlItem
    {63, 66, 587},	// QXmlName::QXmlName
    {63, 67, 599},	// QXmlName::QXmlName#
    {63, 68, 600},	// QXmlName::QXmlName#$
    {63, 69, 601},	// QXmlName::QXmlName#$$
    {63, 70, 588},	// QXmlName::QXmlName#$$$
    {63, 147, 598},	// QXmlName::fromClarkName$#
    {63, 158, 597},	// QXmlName::isNCName$
    {63, 160, 596},	// QXmlName::isNull
    {63, 171, 591},	// QXmlName::localName#
    {63, 189, 589},	// QXmlName::namespaceUri#
    {63, 197, 594},	// QXmlName::operator!=#
    {63, 229, 595},	// QXmlName::operator=#
    {63, 231, 593},	// QXmlName::operator==#
    {63, 254, 590},	// QXmlName::prefix#
    {63, 474, 592},	// QXmlName::toClarkName#
    {63, 501, 602},	// QXmlName::~QXmlName
    {64, 71, 603},	// QXmlNamePool::QXmlNamePool
    {64, 72, 604},	// QXmlNamePool::QXmlNamePool#
    {64, 229, 605},	// QXmlNamePool::operator=#
    {64, 502, 606},	// QXmlNamePool::~QXmlNamePool
    {65, 1, 617},	// QXmlNodeModelIndex::Attribute
    {65, 2, 636},	// QXmlNodeModelIndex::AxisAncestor
    {65, 3, 639},	// QXmlNodeModelIndex::AxisAncestorOrSelf
    {65, 4, 629},	// QXmlNodeModelIndex::AxisAttribute
    {65, 5, 641},	// QXmlNodeModelIndex::AxisAttributeOrTop
    {65, 6, 627},	// QXmlNodeModelIndex::AxisChild
    {65, 7, 640},	// QXmlNodeModelIndex::AxisChildOrTop
    {65, 8, 628},	// QXmlNodeModelIndex::AxisDescendant
    {65, 9, 631},	// QXmlNodeModelIndex::AxisDescendantOrSelf
    {65, 10, 634},	// QXmlNodeModelIndex::AxisFollowing
    {65, 11, 632},	// QXmlNodeModelIndex::AxisFollowingSibling
    {65, 12, 633},	// QXmlNodeModelIndex::AxisNamespace
    {65, 13, 635},	// QXmlNodeModelIndex::AxisParent
    {65, 14, 638},	// QXmlNodeModelIndex::AxisPreceding
    {65, 15, 637},	// QXmlNodeModelIndex::AxisPrecedingSibling
    {65, 16, 630},	// QXmlNodeModelIndex::AxisSelf
    {65, 17, 618},	// QXmlNodeModelIndex::Comment
    {65, 18, 619},	// QXmlNodeModelIndex::Document
    {65, 19, 620},	// QXmlNodeModelIndex::Element
    {65, 21, 626},	// QXmlNodeModelIndex::Follows
    {65, 23, 625},	// QXmlNodeModelIndex::Is
    {65, 43, 621},	// QXmlNodeModelIndex::Namespace
    {65, 46, 624},	// QXmlNodeModelIndex::Precedes
    {65, 49, 622},	// QXmlNodeModelIndex::ProcessingInstruction
    {65, 73, 607},	// QXmlNodeModelIndex::QXmlNodeModelIndex
    {65, 74, 608},	// QXmlNodeModelIndex::QXmlNodeModelIndex#
    {65, 96, 623},	// QXmlNodeModelIndex::Text
    {65, 102, 614},	// QXmlNodeModelIndex::additionalData
    {65, 131, 611},	// QXmlNodeModelIndex::data
    {65, 153, 612},	// QXmlNodeModelIndex::internalPointer
    {65, 160, 615},	// QXmlNodeModelIndex::isNull
    {65, 178, 613},	// QXmlNodeModelIndex::model
    {65, 197, 610},	// QXmlNodeModelIndex::operator!=#
    {65, 231, 609},	// QXmlNodeModelIndex::operator==#
    {65, 423, 616},	// QXmlNodeModelIndex::reset
    {65, 503, 642},	// QXmlNodeModelIndex::~QXmlNodeModelIndex
    {66, 75, 643},	// QXmlQuery::QXmlQuery
    {66, 76, -21},	// QXmlQuery::QXmlQuery#
    {66, 77, 678},	// QXmlQuery::QXmlQuery$
    {66, 78, 646},	// QXmlQuery::QXmlQuery$#
    {66, 97, 686},	// QXmlQuery::XPath20
    {66, 98, 682},	// QXmlQuery::XQuery10
    {66, 99, 683},	// QXmlQuery::XSLT20
    {66, 100, 685},	// QXmlQuery::XmlSchema11IdentityConstraintField
    {66, 101, 684},	// QXmlQuery::XmlSchema11IdentityConstraintSelector
    {66, 112, -24},	// QXmlQuery::bindVariable##
    {66, 113, -28},	// QXmlQuery::bindVariable$#
    {66, 141, -32},	// QXmlQuery::evaluateTo#
    {66, 142, 665},	// QXmlQuery::evaluateTo$
    {66, 143, 663},	// QXmlQuery::evaluateTo?
    {66, 152, 674},	// QXmlQuery::initialTemplateName
    {66, 161, 660},	// QXmlQuery::isValid
    {66, 176, 649},	// QXmlQuery::messageHandler
    {66, 181, 653},	// QXmlQuery::namePool
    {66, 190, 676},	// QXmlQuery::networkAccessManager
    {66, 229, 647},	// QXmlQuery::operator=#
    {66, 418, 677},	// QXmlQuery::queryLanguage
    {66, 438, -36},	// QXmlQuery::setFocus#
    {66, 439, 671},	// QXmlQuery::setFocus$
    {66, 443, 672},	// QXmlQuery::setInitialTemplateName#
    {66, 444, 673},	// QXmlQuery::setInitialTemplateName$
    {66, 448, 648},	// QXmlQuery::setMessageHandler#
    {66, 450, 675},	// QXmlQuery::setNetworkAccessManager#
    {66, 452, -40},	// QXmlQuery::setQuery#
    {66, 453, -43},	// QXmlQuery::setQuery##
    {66, 454, 679},	// QXmlQuery::setQuery$
    {66, 455, 650},	// QXmlQuery::setQuery$#
    {66, 461, 666},	// QXmlQuery::setUriResolver#
    {66, 487, 667},	// QXmlQuery::uriResolver
    {66, 504, 687},	// QXmlQuery::~QXmlQuery
    {67, 79, 688},	// QXmlResultItems::QXmlResultItems
    {67, 129, 691},	// QXmlResultItems::current
    {67, 150, 689},	// QXmlResultItems::hasError
    {67, 191, 690},	// QXmlResultItems::next
    {67, 505, 692},	// QXmlResultItems::~QXmlResultItems
    {68, 80, 693},	// QXmlSchema::QXmlSchema
    {68, 81, 694},	// QXmlSchema::QXmlSchema#
    {68, 133, 700},	// QXmlSchema::documentUri
    {68, 161, 698},	// QXmlSchema::isValid
    {68, 168, -46},	// QXmlSchema::load#
    {68, 169, -50},	// QXmlSchema::load##
    {68, 176, 702},	// QXmlSchema::messageHandler
    {68, 181, 699},	// QXmlSchema::namePool
    {68, 190, 706},	// QXmlSchema::networkAccessManager
    {68, 448, 701},	// QXmlSchema::setMessageHandler#
    {68, 450, 705},	// QXmlSchema::setNetworkAccessManager#
    {68, 461, 703},	// QXmlSchema::setUriResolver#
    {68, 487, 704},	// QXmlSchema::uriResolver
    {68, 506, 709},	// QXmlSchema::~QXmlSchema
    {69, 82, 710},	// QXmlSchemaValidator::QXmlSchemaValidator
    {69, 83, 711},	// QXmlSchemaValidator::QXmlSchemaValidator#
    {69, 176, 719},	// QXmlSchemaValidator::messageHandler
    {69, 181, 716},	// QXmlSchemaValidator::namePool
    {69, 190, 723},	// QXmlSchemaValidator::networkAccessManager
    {69, 428, 717},	// QXmlSchemaValidator::schema
    {69, 448, 718},	// QXmlSchemaValidator::setMessageHandler#
    {69, 450, 722},	// QXmlSchemaValidator::setNetworkAccessManager#
    {69, 457, 712},	// QXmlSchemaValidator::setSchema#
    {69, 461, 720},	// QXmlSchemaValidator::setUriResolver#
    {69, 487, 721},	// QXmlSchemaValidator::uriResolver
    {69, 489, -1},	// QXmlSchemaValidator::validate#
    {69, 490, -5},	// QXmlSchemaValidator::validate##
    {69, 507, 726},	// QXmlSchemaValidator::~QXmlSchemaValidator
    {70, 85, 727},	// QXmlSerializer::QXmlSerializer##
    {70, 104, 735},	// QXmlSerializer::atomicValue#
    {70, 106, 733},	// QXmlSerializer::attribute##
    {70, 115, 729},	// QXmlSerializer::characters#
    {70, 117, 742},	// QXmlSerializer::codec
    {70, 120, 730},	// QXmlSerializer::comment$
    {70, 137, 737},	// QXmlSerializer::endDocument
    {70, 138, 732},	// QXmlSerializer::endElement
    {70, 139, 739},	// QXmlSerializer::endOfSequence
    {70, 163, 743},	// QXmlSerializer::item#
    {70, 183, 728},	// QXmlSerializer::namespaceBinding#
    {70, 252, 740},	// QXmlSerializer::outputDevice
    {70, 256, 734},	// QXmlSerializer::processingInstruction#$
    {70, 434, 741},	// QXmlSerializer::setCodec#
    {70, 464, 736},	// QXmlSerializer::startDocument
    {70, 466, 731},	// QXmlSerializer::startElement#
    {70, 467, 738},	// QXmlSerializer::startOfSequence
    {70, 508, 744},	// QXmlSerializer::~QXmlSerializer
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();

static bool initialized = false;
Smoke *qtxmlpatterns_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtxmlpatterns_Smoke() {
    init_qtcore_Smoke();
    if (initialized) return;
    qtxmlpatterns_Smoke = new Smoke(
        "qtxmlpatterns",
        __smokeqtxmlpatterns::classes, 70,
        __smokeqtxmlpatterns::methods, 745,
        __smokeqtxmlpatterns::methodMaps, 424,
        __smokeqtxmlpatterns::methodNames, 508,
        __smokeqtxmlpatterns::types, 338,
        __smokeqtxmlpatterns::inheritanceList,
        __smokeqtxmlpatterns::argumentList,
        __smokeqtxmlpatterns::ambiguousMethodList,
        __smokeqtxmlpatterns::cast );
    initialized = true;
}

void delete_qtxmlpatterns_Smoke() { delete qtxmlpatterns_Smoke; }

}
