#include <qtxml_includes.h>

#include <smoke.h>
#include <qtxml_smoke.h>

namespace __smokeqtxml {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QBitArray
      switch(to) {
        case 1: return (void*)(QBitArray*)xptr;
        default: return xptr;
      }
    case 2:   //QBool
      switch(to) {
        case 2: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 3:   //QByteArray
      switch(to) {
        case 3: return (void*)(QByteArray*)xptr;
        default: return xptr;
      }
    case 4:   //QChar
      switch(to) {
        case 4: return (void*)(QChar*)xptr;
        default: return xptr;
      }
    case 5:   //QDataStream
      switch(to) {
        case 5: return (void*)(QDataStream*)xptr;
        default: return xptr;
      }
    case 6:   //QDate
      switch(to) {
        case 6: return (void*)(QDate*)xptr;
        default: return xptr;
      }
    case 7:   //QDateTime
      switch(to) {
        case 7: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 8:   //QDebug
      switch(to) {
        case 8: return (void*)(QDebug*)xptr;
        default: return xptr;
      }
    case 9:   //QDir
      switch(to) {
        case 9: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 10:   //QDomAttr
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomAttr*)xptr;
        case 10: return (void*)(QDomAttr*)xptr;
        default: return xptr;
      }
    case 11:   //QDomCDATASection
      switch(to) {
        case 27: return (void*)(QDomText*)(QDomCDATASection*)xptr;
        case 12: return (void*)(QDomCharacterData*)(QDomCDATASection*)xptr;
        case 22: return (void*)(QDomNode*)(QDomCDATASection*)xptr;
        case 11: return (void*)(QDomCDATASection*)xptr;
        default: return xptr;
      }
    case 12:   //QDomCharacterData
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomCharacterData*)xptr;
        case 12: return (void*)(QDomCharacterData*)xptr;
        case 27: return (void*)(QDomText*)(QDomCharacterData*)xptr;
        case 11: return (void*)(QDomCDATASection*)(QDomCharacterData*)xptr;
        case 13: return (void*)(QDomComment*)(QDomCharacterData*)xptr;
        default: return xptr;
      }
    case 13:   //QDomComment
      switch(to) {
        case 12: return (void*)(QDomCharacterData*)(QDomComment*)xptr;
        case 22: return (void*)(QDomNode*)(QDomComment*)xptr;
        case 13: return (void*)(QDomComment*)xptr;
        default: return xptr;
      }
    case 14:   //QDomDocument
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomDocument*)xptr;
        case 14: return (void*)(QDomDocument*)xptr;
        default: return xptr;
      }
    case 15:   //QDomDocumentFragment
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomDocumentFragment*)xptr;
        case 15: return (void*)(QDomDocumentFragment*)xptr;
        default: return xptr;
      }
    case 16:   //QDomDocumentType
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomDocumentType*)xptr;
        case 16: return (void*)(QDomDocumentType*)xptr;
        default: return xptr;
      }
    case 17:   //QDomElement
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomElement*)xptr;
        case 17: return (void*)(QDomElement*)xptr;
        default: return xptr;
      }
    case 18:   //QDomEntity
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomEntity*)xptr;
        case 18: return (void*)(QDomEntity*)xptr;
        default: return xptr;
      }
    case 19:   //QDomEntityReference
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomEntityReference*)xptr;
        case 19: return (void*)(QDomEntityReference*)xptr;
        default: return xptr;
      }
    case 20:   //QDomImplementation
      switch(to) {
        case 20: return (void*)(QDomImplementation*)xptr;
        default: return xptr;
      }
    case 21:   //QDomNamedNodeMap
      switch(to) {
        case 21: return (void*)(QDomNamedNodeMap*)xptr;
        default: return xptr;
      }
    case 22:   //QDomNode
      switch(to) {
        case 22: return (void*)(QDomNode*)xptr;
        case 27: return (void*)(QDomText*)(QDomNode*)xptr;
        case 25: return (void*)(QDomNotation*)(QDomNode*)xptr;
        case 15: return (void*)(QDomDocumentFragment*)(QDomNode*)xptr;
        case 17: return (void*)(QDomElement*)(QDomNode*)xptr;
        case 10: return (void*)(QDomAttr*)(QDomNode*)xptr;
        case 11: return (void*)(QDomCDATASection*)(QDomNode*)xptr;
        case 18: return (void*)(QDomEntity*)(QDomNode*)xptr;
        case 16: return (void*)(QDomDocumentType*)(QDomNode*)xptr;
        case 12: return (void*)(QDomCharacterData*)(QDomNode*)xptr;
        case 26: return (void*)(QDomProcessingInstruction*)(QDomNode*)xptr;
        case 13: return (void*)(QDomComment*)(QDomNode*)xptr;
        case 19: return (void*)(QDomEntityReference*)(QDomNode*)xptr;
        case 14: return (void*)(QDomDocument*)(QDomNode*)xptr;
        default: return xptr;
      }
    case 23:   //QDomNodeList
      switch(to) {
        case 23: return (void*)(QDomNodeList*)xptr;
        default: return xptr;
      }
    case 24:   //QDomNodePrivate
      switch(to) {
        case 24: return (void*)(QDomNodePrivate*)xptr;
        default: return xptr;
      }
    case 25:   //QDomNotation
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomNotation*)xptr;
        case 25: return (void*)(QDomNotation*)xptr;
        default: return xptr;
      }
    case 26:   //QDomProcessingInstruction
      switch(to) {
        case 22: return (void*)(QDomNode*)(QDomProcessingInstruction*)xptr;
        case 26: return (void*)(QDomProcessingInstruction*)xptr;
        default: return xptr;
      }
    case 27:   //QDomText
      switch(to) {
        case 12: return (void*)(QDomCharacterData*)(QDomText*)xptr;
        case 22: return (void*)(QDomNode*)(QDomText*)xptr;
        case 27: return (void*)(QDomText*)xptr;
        case 11: return (void*)(QDomCDATASection*)(QDomText*)xptr;
        default: return xptr;
      }
    case 28:   //QEasingCurve
      switch(to) {
        case 28: return (void*)(QEasingCurve*)xptr;
        default: return xptr;
      }
    case 30:   //QHashDummyValue
      switch(to) {
        case 30: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 31:   //QIODevice
      switch(to) {
        case 40: return (void*)(QObject*)(QIODevice*)xptr;
        case 31: return (void*)(QIODevice*)xptr;
        default: return xptr;
      }
    case 32:   //QIncompatibleFlag
      switch(to) {
        case 32: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 33:   //QLatin1String
      switch(to) {
        case 33: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 34:   //QLine
      switch(to) {
        case 34: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 35:   //QLineF
      switch(to) {
        case 35: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 36:   //QLocale
      switch(to) {
        case 36: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 37:   //QMargins
      switch(to) {
        case 37: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 38:   //QMetaObject
      switch(to) {
        case 38: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 39:   //QModelIndex
      switch(to) {
        case 39: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 40:   //QObject
      switch(to) {
        case 40: return (void*)(QObject*)xptr;
        default: return xptr;
      }
    case 41:   //QPersistentModelIndex
      switch(to) {
        case 41: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 42:   //QPoint
      switch(to) {
        case 42: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 43:   //QPointF
      switch(to) {
        case 43: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 44:   //QRect
      switch(to) {
        case 44: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 45:   //QRectF
      switch(to) {
        case 45: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 46:   //QRegExp
      switch(to) {
        case 46: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 47:   //QSize
      switch(to) {
        case 47: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 48:   //QSizeF
      switch(to) {
        case 48: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 49:   //QString::Null
      switch(to) {
        case 49: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 50:   //QStringRef
      switch(to) {
        case 50: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 51:   //QTextCodec
      switch(to) {
        case 51: return (void*)(QTextCodec*)xptr;
        default: return xptr;
      }
    case 52:   //QTextStream
      switch(to) {
        case 52: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 53:   //QTextStreamManipulator
      switch(to) {
        case 53: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 54:   //QTime
      switch(to) {
        case 54: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 55:   //QUrl
      switch(to) {
        case 55: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 56:   //QUuid
      switch(to) {
        case 56: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 57:   //QVariant
      switch(to) {
        case 57: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 58:   //QVariantComparisonHelper
      switch(to) {
        case 58: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    case 59:   //QXmlAttributes
      switch(to) {
        case 59: return (void*)(QXmlAttributes*)xptr;
        default: return xptr;
      }
    case 60:   //QXmlContentHandler
      switch(to) {
        case 60: return (void*)(QXmlContentHandler*)xptr;
        case 63: return (void*)(QXmlDefaultHandler*)(QXmlContentHandler*)xptr;
        default: return xptr;
      }
    case 61:   //QXmlDTDHandler
      switch(to) {
        case 61: return (void*)(QXmlDTDHandler*)xptr;
        case 63: return (void*)(QXmlDefaultHandler*)(QXmlDTDHandler*)xptr;
        default: return xptr;
      }
    case 62:   //QXmlDeclHandler
      switch(to) {
        case 62: return (void*)(QXmlDeclHandler*)xptr;
        case 63: return (void*)(QXmlDefaultHandler*)(QXmlDeclHandler*)xptr;
        default: return xptr;
      }
    case 63:   //QXmlDefaultHandler
      switch(to) {
        case 60: return (void*)(QXmlContentHandler*)(QXmlDefaultHandler*)xptr;
        case 65: return (void*)(QXmlErrorHandler*)(QXmlDefaultHandler*)xptr;
        case 61: return (void*)(QXmlDTDHandler*)(QXmlDefaultHandler*)xptr;
        case 64: return (void*)(QXmlEntityResolver*)(QXmlDefaultHandler*)xptr;
        case 67: return (void*)(QXmlLexicalHandler*)(QXmlDefaultHandler*)xptr;
        case 62: return (void*)(QXmlDeclHandler*)(QXmlDefaultHandler*)xptr;
        case 63: return (void*)(QXmlDefaultHandler*)xptr;
        default: return xptr;
      }
    case 64:   //QXmlEntityResolver
      switch(to) {
        case 64: return (void*)(QXmlEntityResolver*)xptr;
        case 63: return (void*)(QXmlDefaultHandler*)(QXmlEntityResolver*)xptr;
        default: return xptr;
      }
    case 65:   //QXmlErrorHandler
      switch(to) {
        case 65: return (void*)(QXmlErrorHandler*)xptr;
        case 63: return (void*)(QXmlDefaultHandler*)(QXmlErrorHandler*)xptr;
        default: return xptr;
      }
    case 66:   //QXmlInputSource
      switch(to) {
        case 66: return (void*)(QXmlInputSource*)xptr;
        default: return xptr;
      }
    case 67:   //QXmlLexicalHandler
      switch(to) {
        case 67: return (void*)(QXmlLexicalHandler*)xptr;
        case 63: return (void*)(QXmlDefaultHandler*)(QXmlLexicalHandler*)xptr;
        default: return xptr;
      }
    case 68:   //QXmlLocator
      switch(to) {
        case 68: return (void*)(QXmlLocator*)xptr;
        default: return xptr;
      }
    case 69:   //QXmlNamespaceSupport
      switch(to) {
        case 69: return (void*)(QXmlNamespaceSupport*)xptr;
        default: return xptr;
      }
    case 70:   //QXmlParseException
      switch(to) {
        case 70: return (void*)(QXmlParseException*)xptr;
        default: return xptr;
      }
    case 71:   //QXmlReader
      switch(to) {
        case 71: return (void*)(QXmlReader*)xptr;
        case 72: return (void*)(QXmlSimpleReader*)(QXmlReader*)xptr;
        default: return xptr;
      }
    case 72:   //QXmlSimpleReader
      switch(to) {
        case 71: return (void*)(QXmlReader*)(QXmlSimpleReader*)xptr;
        case 72: return (void*)(QXmlSimpleReader*)xptr;
        default: return xptr;
      }
    case 73:   //QXmlStreamAttribute
      switch(to) {
        case 73: return (void*)(QXmlStreamAttribute*)xptr;
        default: return xptr;
      }
    case 74:   //QXmlStreamAttributes
      switch(to) {
        case 74: return (void*)(QXmlStreamAttributes*)xptr;
        default: return xptr;
      }
    case 75:   //QXmlStreamReader
      switch(to) {
        case 75: return (void*)(QXmlStreamReader*)xptr;
        default: return xptr;
      }
    case 76:   //QXmlStreamWriter
      switch(to) {
        case 76: return (void*)(QXmlStreamWriter*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    22, 0,	// 1: QDomNode
    27, 0,	// 3: QDomText
    12, 0,	// 5: QDomCharacterData
    60, 65, 61, 64, 67, 62, 0,	// 7: QXmlContentHandler, QXmlErrorHandler, QXmlDTDHandler, QXmlEntityResolver, QXmlLexicalHandler, QXmlDeclHandler
    71, 0,	// 14: QXmlReader
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDomImplementation(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDomNode(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QDomAttr(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomCDATASection(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomCharacterData(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomComment(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomDocument(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomDocumentFragment(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomDocumentType(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomElement(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomEntity(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomEntityReference(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomImplementation(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomNamedNodeMap(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomNode(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomNodeList(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomNotation(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomProcessingInstruction(Smoke::Index, void*, Smoke::Stack);
void xcall_QDomText(Smoke::Index, void*, Smoke::Stack);
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlAttributes(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlContentHandler(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlDTDHandler(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlDeclHandler(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlDefaultHandler(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlEntityResolver(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlErrorHandler(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlInputSource(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlLexicalHandler(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlLocator(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlNamespaceSupport(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlParseException(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlReader(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlSimpleReader(Smoke::Index, void*, Smoke::Stack);
void xcall_QXmlStreamWriter(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QBitArray", true, 0, 0, 0, 0, 0 },	//1
    { "QBool", true, 0, 0, 0, 0, 0 },	//2
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//3
    { "QChar", true, 0, 0, 0, 0, 0 },	//4
    { "QDataStream", true, 0, 0, 0, 0, 0 },	//5
    { "QDate", true, 0, 0, 0, 0, 0 },	//6
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//7
    { "QDebug", true, 0, 0, 0, 0, 0 },	//8
    { "QDir", true, 0, 0, 0, 0, 0 },	//9
    { "QDomAttr", false, 1, xcall_QDomAttr, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomAttr) },	//10
    { "QDomCDATASection", false, 3, xcall_QDomCDATASection, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomCDATASection) },	//11
    { "QDomCharacterData", false, 1, xcall_QDomCharacterData, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomCharacterData) },	//12
    { "QDomComment", false, 5, xcall_QDomComment, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomComment) },	//13
    { "QDomDocument", false, 1, xcall_QDomDocument, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomDocument) },	//14
    { "QDomDocumentFragment", false, 1, xcall_QDomDocumentFragment, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomDocumentFragment) },	//15
    { "QDomDocumentType", false, 1, xcall_QDomDocumentType, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomDocumentType) },	//16
    { "QDomElement", false, 1, xcall_QDomElement, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomElement) },	//17
    { "QDomEntity", false, 1, xcall_QDomEntity, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomEntity) },	//18
    { "QDomEntityReference", false, 1, xcall_QDomEntityReference, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomEntityReference) },	//19
    { "QDomImplementation", false, 0, xcall_QDomImplementation, xenum_QDomImplementation, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomImplementation) },	//20
    { "QDomNamedNodeMap", false, 0, xcall_QDomNamedNodeMap, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomNamedNodeMap) },	//21
    { "QDomNode", false, 0, xcall_QDomNode, xenum_QDomNode, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomNode) },	//22
    { "QDomNodeList", false, 0, xcall_QDomNodeList, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomNodeList) },	//23
    { "QDomNodePrivate", true, 0, 0, 0, 0, 0 },	//24
    { "QDomNotation", false, 1, xcall_QDomNotation, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomNotation) },	//25
    { "QDomProcessingInstruction", false, 1, xcall_QDomProcessingInstruction, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomProcessingInstruction) },	//26
    { "QDomText", false, 5, xcall_QDomText, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDomText) },	//27
    { "QEasingCurve", true, 0, 0, 0, 0, 0 },	//28
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//29
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//30
    { "QIODevice", true, 0, 0, 0, 0, 0 },	//31
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//32
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//33
    { "QLine", true, 0, 0, 0, 0, 0 },	//34
    { "QLineF", true, 0, 0, 0, 0, 0 },	//35
    { "QLocale", true, 0, 0, 0, 0, 0 },	//36
    { "QMargins", true, 0, 0, 0, 0, 0 },	//37
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//38
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//39
    { "QObject", true, 0, 0, 0, 0, 0 },	//40
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//41
    { "QPoint", true, 0, 0, 0, 0, 0 },	//42
    { "QPointF", true, 0, 0, 0, 0, 0 },	//43
    { "QRect", true, 0, 0, 0, 0, 0 },	//44
    { "QRectF", true, 0, 0, 0, 0, 0 },	//45
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//46
    { "QSize", true, 0, 0, 0, 0, 0 },	//47
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//48
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//49
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//50
    { "QTextCodec", true, 0, 0, 0, 0, 0 },	//51
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//52
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//53
    { "QTime", true, 0, 0, 0, 0, 0 },	//54
    { "QUrl", true, 0, 0, 0, 0, 0 },	//55
    { "QUuid", true, 0, 0, 0, 0, 0 },	//56
    { "QVariant", true, 0, 0, 0, 0, 0 },	//57
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//58
    { "QXmlAttributes", false, 0, xcall_QXmlAttributes, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlAttributes) },	//59
    { "QXmlContentHandler", false, 0, xcall_QXmlContentHandler, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlContentHandler) },	//60
    { "QXmlDTDHandler", false, 0, xcall_QXmlDTDHandler, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlDTDHandler) },	//61
    { "QXmlDeclHandler", false, 0, xcall_QXmlDeclHandler, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlDeclHandler) },	//62
    { "QXmlDefaultHandler", false, 7, xcall_QXmlDefaultHandler, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QXmlDefaultHandler) },	//63
    { "QXmlEntityResolver", false, 0, xcall_QXmlEntityResolver, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlEntityResolver) },	//64
    { "QXmlErrorHandler", false, 0, xcall_QXmlErrorHandler, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlErrorHandler) },	//65
    { "QXmlInputSource", false, 0, xcall_QXmlInputSource, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlInputSource) },	//66
    { "QXmlLexicalHandler", false, 0, xcall_QXmlLexicalHandler, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlLexicalHandler) },	//67
    { "QXmlLocator", false, 0, xcall_QXmlLocator, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlLocator) },	//68
    { "QXmlNamespaceSupport", false, 0, xcall_QXmlNamespaceSupport, 0, Smoke::cf_constructor, sizeof(QXmlNamespaceSupport) },	//69
    { "QXmlParseException", false, 0, xcall_QXmlParseException, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QXmlParseException) },	//70
    { "QXmlReader", false, 0, xcall_QXmlReader, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QXmlReader) },	//71
    { "QXmlSimpleReader", false, 14, xcall_QXmlSimpleReader, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QXmlSimpleReader) },	//72
    { "QXmlStreamAttribute", true, 0, 0, 0, 0, 0 },	//73
    { "QXmlStreamAttributes", true, 0, 0, 0, 0, 0 },	//74
    { "QXmlStreamReader", true, 0, 0, 0, 0, 0 },	//75
    { "QXmlStreamWriter", false, 0, xcall_QXmlStreamWriter, 0, Smoke::cf_constructor, sizeof(QXmlStreamWriter) },	//76
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QBitArray", 1, Smoke::t_class|Smoke::tf_stack },	//2
    { "QBitArray&", 1, Smoke::t_class|Smoke::tf_ref },	//3
    { "QBool", 2, Smoke::t_class|Smoke::tf_stack },	//4
    { "QByteArray", 3, Smoke::t_class|Smoke::tf_stack },	//5
    { "QByteArray&", 3, Smoke::t_class|Smoke::tf_ref },	//6
    { "QByteArray*", 3, Smoke::t_class|Smoke::tf_ptr },	//7
    { "QChar", 4, Smoke::t_class|Smoke::tf_stack },	//8
    { "QChar&", 4, Smoke::t_class|Smoke::tf_ref },	//9
    { "QDataStream&", 5, Smoke::t_class|Smoke::tf_ref },	//10
    { "QDate&", 6, Smoke::t_class|Smoke::tf_ref },	//11
    { "QDateTime&", 7, Smoke::t_class|Smoke::tf_ref },	//12
    { "QDebug", 8, Smoke::t_class|Smoke::tf_stack },	//13
    { "QDir::Filter", 9, Smoke::t_enum|Smoke::tf_stack },	//14
    { "QDir::SortFlag", 9, Smoke::t_enum|Smoke::tf_stack },	//15
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//16
    { "QDomAttr", 10, Smoke::t_class|Smoke::tf_stack },	//17
    { "QDomAttr&", 10, Smoke::t_class|Smoke::tf_ref },	//18
    { "QDomAttr*", 10, Smoke::t_class|Smoke::tf_ptr },	//19
    { "QDomCDATASection", 11, Smoke::t_class|Smoke::tf_stack },	//20
    { "QDomCDATASection&", 11, Smoke::t_class|Smoke::tf_ref },	//21
    { "QDomCDATASection*", 11, Smoke::t_class|Smoke::tf_ptr },	//22
    { "QDomCharacterData", 12, Smoke::t_class|Smoke::tf_stack },	//23
    { "QDomCharacterData&", 12, Smoke::t_class|Smoke::tf_ref },	//24
    { "QDomCharacterData*", 12, Smoke::t_class|Smoke::tf_ptr },	//25
    { "QDomComment", 13, Smoke::t_class|Smoke::tf_stack },	//26
    { "QDomComment&", 13, Smoke::t_class|Smoke::tf_ref },	//27
    { "QDomComment*", 13, Smoke::t_class|Smoke::tf_ptr },	//28
    { "QDomDocument", 14, Smoke::t_class|Smoke::tf_stack },	//29
    { "QDomDocument&", 14, Smoke::t_class|Smoke::tf_ref },	//30
    { "QDomDocument*", 14, Smoke::t_class|Smoke::tf_ptr },	//31
    { "QDomDocumentFragment", 15, Smoke::t_class|Smoke::tf_stack },	//32
    { "QDomDocumentFragment&", 15, Smoke::t_class|Smoke::tf_ref },	//33
    { "QDomDocumentFragment*", 15, Smoke::t_class|Smoke::tf_ptr },	//34
    { "QDomDocumentType", 16, Smoke::t_class|Smoke::tf_stack },	//35
    { "QDomDocumentType&", 16, Smoke::t_class|Smoke::tf_ref },	//36
    { "QDomDocumentType*", 16, Smoke::t_class|Smoke::tf_ptr },	//37
    { "QDomElement", 17, Smoke::t_class|Smoke::tf_stack },	//38
    { "QDomElement&", 17, Smoke::t_class|Smoke::tf_ref },	//39
    { "QDomElement*", 17, Smoke::t_class|Smoke::tf_ptr },	//40
    { "QDomEntity", 18, Smoke::t_class|Smoke::tf_stack },	//41
    { "QDomEntity&", 18, Smoke::t_class|Smoke::tf_ref },	//42
    { "QDomEntity*", 18, Smoke::t_class|Smoke::tf_ptr },	//43
    { "QDomEntityReference", 19, Smoke::t_class|Smoke::tf_stack },	//44
    { "QDomEntityReference&", 19, Smoke::t_class|Smoke::tf_ref },	//45
    { "QDomEntityReference*", 19, Smoke::t_class|Smoke::tf_ptr },	//46
    { "QDomImplementation", 20, Smoke::t_class|Smoke::tf_stack },	//47
    { "QDomImplementation&", 20, Smoke::t_class|Smoke::tf_ref },	//48
    { "QDomImplementation*", 20, Smoke::t_class|Smoke::tf_ptr },	//49
    { "QDomImplementation::InvalidDataPolicy", 20, Smoke::t_enum|Smoke::tf_stack },	//50
    { "QDomNamedNodeMap", 21, Smoke::t_class|Smoke::tf_stack },	//51
    { "QDomNamedNodeMap&", 21, Smoke::t_class|Smoke::tf_ref },	//52
    { "QDomNamedNodeMap*", 21, Smoke::t_class|Smoke::tf_ptr },	//53
    { "QDomNode", 22, Smoke::t_class|Smoke::tf_stack },	//54
    { "QDomNode&", 22, Smoke::t_class|Smoke::tf_ref },	//55
    { "QDomNode*", 22, Smoke::t_class|Smoke::tf_ptr },	//56
    { "QDomNode::EncodingPolicy", 22, Smoke::t_enum|Smoke::tf_stack },	//57
    { "QDomNode::NodeType", 22, Smoke::t_enum|Smoke::tf_stack },	//58
    { "QDomNodeList", 23, Smoke::t_class|Smoke::tf_stack },	//59
    { "QDomNodeList&", 23, Smoke::t_class|Smoke::tf_ref },	//60
    { "QDomNodeList*", 23, Smoke::t_class|Smoke::tf_ptr },	//61
    { "QDomNodePrivate*", 24, Smoke::t_class|Smoke::tf_ptr },	//62
    { "QDomNotation", 25, Smoke::t_class|Smoke::tf_stack },	//63
    { "QDomNotation&", 25, Smoke::t_class|Smoke::tf_ref },	//64
    { "QDomNotation*", 25, Smoke::t_class|Smoke::tf_ptr },	//65
    { "QDomProcessingInstruction", 26, Smoke::t_class|Smoke::tf_stack },	//66
    { "QDomProcessingInstruction&", 26, Smoke::t_class|Smoke::tf_ref },	//67
    { "QDomProcessingInstruction*", 26, Smoke::t_class|Smoke::tf_ptr },	//68
    { "QDomText", 27, Smoke::t_class|Smoke::tf_stack },	//69
    { "QDomText&", 27, Smoke::t_class|Smoke::tf_ref },	//70
    { "QDomText*", 27, Smoke::t_class|Smoke::tf_ptr },	//71
    { "QEasingCurve&", 28, Smoke::t_class|Smoke::tf_ref },	//72
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//73
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//74
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//75
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//76
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//77
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//78
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//79
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//80
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//81
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//82
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//83
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//84
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//85
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//86
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//87
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//88
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//89
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//90
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//91
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//92
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//93
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//94
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//95
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//96
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//97
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//98
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//99
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//100
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//101
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//102
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//103
    { "QIODevice*", 31, Smoke::t_class|Smoke::tf_ptr },	//104
    { "QIODevice::OpenModeFlag", 31, Smoke::t_enum|Smoke::tf_stack },	//105
    { "QIncompatibleFlag", 32, Smoke::t_class|Smoke::tf_stack },	//106
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//107
    { "QLine&", 34, Smoke::t_class|Smoke::tf_ref },	//108
    { "QLineF&", 35, Smoke::t_class|Smoke::tf_ref },	//109
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//110
    { "QLocale&", 36, Smoke::t_class|Smoke::tf_ref },	//111
    { "QLocale::NumberOption", 36, Smoke::t_enum|Smoke::tf_stack },	//112
    { "QObject*", 40, Smoke::t_class|Smoke::tf_ptr },	//113
    { "QObject*(*)()", 40, Smoke::t_class|Smoke::tf_ptr },	//114
    { "QPoint&", 42, Smoke::t_class|Smoke::tf_ref },	//115
    { "QPointF&", 43, Smoke::t_class|Smoke::tf_ref },	//116
    { "QRect&", 44, Smoke::t_class|Smoke::tf_ref },	//117
    { "QRectF&", 45, Smoke::t_class|Smoke::tf_ref },	//118
    { "QRegExp&", 46, Smoke::t_class|Smoke::tf_ref },	//119
    { "QSize&", 47, Smoke::t_class|Smoke::tf_ref },	//120
    { "QSizeF&", 48, Smoke::t_class|Smoke::tf_ref },	//121
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//122
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//123
    { "QString*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//124
    { "QString::Null", 49, Smoke::t_class|Smoke::tf_stack },	//125
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//126
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//127
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//128
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//129
    { "QTextCodec*", 51, Smoke::t_class|Smoke::tf_ptr },	//130
    { "QTextCodec::ConversionFlag", 51, Smoke::t_enum|Smoke::tf_stack },	//131
    { "QTextStream&", 52, Smoke::t_class|Smoke::tf_ref },	//132
    { "QTextStream&(*)(QTextStream&)", 52, Smoke::t_class|Smoke::tf_ref },	//133
    { "QTextStream::NumberFlag", 52, Smoke::t_enum|Smoke::tf_stack },	//134
    { "QTextStreamManipulator", 53, Smoke::t_class|Smoke::tf_stack },	//135
    { "QTime&", 54, Smoke::t_class|Smoke::tf_ref },	//136
    { "QUrl&", 55, Smoke::t_class|Smoke::tf_ref },	//137
    { "QUrl::FormattingOption", 55, Smoke::t_enum|Smoke::tf_stack },	//138
    { "QUuid&", 56, Smoke::t_class|Smoke::tf_ref },	//139
    { "QVariant&", 57, Smoke::t_class|Smoke::tf_ref },	//140
    { "QVariant::Type", 57, Smoke::t_enum|Smoke::tf_stack },	//141
    { "QVariant::Type&", 57, Smoke::t_enum|Smoke::tf_ref },	//142
    { "QXmlAttributes*", 59, Smoke::t_class|Smoke::tf_ptr },	//143
    { "QXmlContentHandler*", 60, Smoke::t_class|Smoke::tf_ptr },	//144
    { "QXmlDTDHandler*", 61, Smoke::t_class|Smoke::tf_ptr },	//145
    { "QXmlDeclHandler*", 62, Smoke::t_class|Smoke::tf_ptr },	//146
    { "QXmlDefaultHandler*", 63, Smoke::t_class|Smoke::tf_ptr },	//147
    { "QXmlEntityResolver*", 64, Smoke::t_class|Smoke::tf_ptr },	//148
    { "QXmlErrorHandler*", 65, Smoke::t_class|Smoke::tf_ptr },	//149
    { "QXmlInputSource*", 66, Smoke::t_class|Smoke::tf_ptr },	//150
    { "QXmlInputSource*&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_ptr },	//151
    { "QXmlLexicalHandler*", 67, Smoke::t_class|Smoke::tf_ptr },	//152
    { "QXmlLocator*", 68, Smoke::t_class|Smoke::tf_ptr },	//153
    { "QXmlNamespaceSupport*", 69, Smoke::t_class|Smoke::tf_ptr },	//154
    { "QXmlParseException*", 70, Smoke::t_class|Smoke::tf_ptr },	//155
    { "QXmlReader*", 71, Smoke::t_class|Smoke::tf_ptr },	//156
    { "QXmlSimpleReader*", 72, Smoke::t_class|Smoke::tf_ptr },	//157
    { "QXmlStreamWriter*", 76, Smoke::t_class|Smoke::tf_ptr },	//158
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//159
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//160
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//161
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//162
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//163
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//164
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//165
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//166
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//167
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//168
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//169
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//170
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//171
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//172
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//173
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//174
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//175
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//176
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//177
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//178
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//179
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//180
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//181
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//182
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//183
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//184
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//185
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//186
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//187
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//188
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//189
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//190
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//191
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//192
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//193
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//194
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//195
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//196
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//197
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//198
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//199
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//200
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//201
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//202
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//203
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//204
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//205
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//206
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//207
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//208
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//209
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//210
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//211
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//212
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//213
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//214
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//215
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//216
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//217
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//218
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//219
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//220
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//221
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//222
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//223
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//224
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//225
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//226
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//227
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//228
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//229
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//230
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//231
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//232
    { "QtMsgType", 29, Smoke::t_enum|Smoke::tf_stack },	//233
    { "QtValidLicenseForActiveQtModule", 29, Smoke::t_enum|Smoke::tf_stack },	//234
    { "QtValidLicenseForCoreModule", 29, Smoke::t_enum|Smoke::tf_stack },	//235
    { "QtValidLicenseForDBusModule", 29, Smoke::t_enum|Smoke::tf_stack },	//236
    { "QtValidLicenseForDeclarativeModule", 29, Smoke::t_enum|Smoke::tf_stack },	//237
    { "QtValidLicenseForGuiModule", 29, Smoke::t_enum|Smoke::tf_stack },	//238
    { "QtValidLicenseForHelpModule", 29, Smoke::t_enum|Smoke::tf_stack },	//239
    { "QtValidLicenseForMultimediaModule", 29, Smoke::t_enum|Smoke::tf_stack },	//240
    { "QtValidLicenseForNetworkModule", 29, Smoke::t_enum|Smoke::tf_stack },	//241
    { "QtValidLicenseForOpenGLModule", 29, Smoke::t_enum|Smoke::tf_stack },	//242
    { "QtValidLicenseForOpenVGModule", 29, Smoke::t_enum|Smoke::tf_stack },	//243
    { "QtValidLicenseForQt3SupportLightModule", 29, Smoke::t_enum|Smoke::tf_stack },	//244
    { "QtValidLicenseForQt3SupportModule", 29, Smoke::t_enum|Smoke::tf_stack },	//245
    { "QtValidLicenseForScriptModule", 29, Smoke::t_enum|Smoke::tf_stack },	//246
    { "QtValidLicenseForScriptToolsModule", 29, Smoke::t_enum|Smoke::tf_stack },	//247
    { "QtValidLicenseForSqlModule", 29, Smoke::t_enum|Smoke::tf_stack },	//248
    { "QtValidLicenseForSvgModule", 29, Smoke::t_enum|Smoke::tf_stack },	//249
    { "QtValidLicenseForTestModule", 29, Smoke::t_enum|Smoke::tf_stack },	//250
    { "QtValidLicenseForXmlModule", 29, Smoke::t_enum|Smoke::tf_stack },	//251
    { "QtValidLicenseForXmlPatternsModule", 29, Smoke::t_enum|Smoke::tf_stack },	//252
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//253
    { "bool*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//254
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//255
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//256
    { "const QBitArray&", 1, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//257
    { "const QByteArray", 3, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//258
    { "const QByteArray&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//259
    { "const QChar&", 4, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//260
    { "const QDate&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//261
    { "const QDateTime&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//262
    { "const QDir&", 9, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//263
    { "const QDomAttr&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//264
    { "const QDomCDATASection&", 11, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//265
    { "const QDomCharacterData&", 12, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//266
    { "const QDomComment&", 13, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//267
    { "const QDomDocument&", 14, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//268
    { "const QDomDocumentFragment&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//269
    { "const QDomDocumentType&", 16, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//270
    { "const QDomElement&", 17, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//271
    { "const QDomEntity&", 18, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//272
    { "const QDomEntityReference&", 19, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//273
    { "const QDomImplementation&", 20, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//274
    { "const QDomNamedNodeMap&", 21, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//275
    { "const QDomNode&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//276
    { "const QDomNodeList&", 23, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//277
    { "const QDomNotation&", 25, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//278
    { "const QDomProcessingInstruction&", 26, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//279
    { "const QDomText&", 27, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//280
    { "const QEasingCurve&", 28, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//281
    { "const QHashDummyValue&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//282
    { "const QLatin1String&", 33, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//283
    { "const QLine&", 34, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//284
    { "const QLineF&", 35, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//285
    { "const QLocale&", 36, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//286
    { "const QMargins&", 37, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//287
    { "const QMetaObject&", 38, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//288
    { "const QModelIndex&", 39, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//289
    { "const QObject*", 40, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//290
    { "const QPersistentModelIndex&", 41, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//291
    { "const QPoint", 42, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//292
    { "const QPoint&", 42, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//293
    { "const QPointF", 43, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//294
    { "const QPointF&", 43, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//295
    { "const QRect&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//296
    { "const QRectF&", 45, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//297
    { "const QRegExp&", 46, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//298
    { "const QRegExp*", 46, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//299
    { "const QSize", 47, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//300
    { "const QSize&", 47, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//301
    { "const QSizeF", 48, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//302
    { "const QSizeF&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//303
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//304
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//305
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//306
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//307
    { "const QStringRef&", 50, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//308
    { "const QTime&", 54, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//309
    { "const QUrl&", 55, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//310
    { "const QUuid&", 56, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//311
    { "const QVariant&", 57, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//312
    { "const QVariant::Type", 57, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//313
    { "const QVariantComparisonHelper&", 58, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//314
    { "const QXmlAttributes&", 59, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//315
    { "const QXmlContentHandler&", 60, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//316
    { "const QXmlDTDHandler&", 61, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//317
    { "const QXmlDeclHandler&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//318
    { "const QXmlEntityResolver&", 64, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//319
    { "const QXmlErrorHandler&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//320
    { "const QXmlInputSource&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//321
    { "const QXmlInputSource*", 66, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//322
    { "const QXmlLexicalHandler&", 67, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//323
    { "const QXmlLocator&", 68, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//324
    { "const QXmlParseException&", 70, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//325
    { "const QXmlReader&", 71, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//326
    { "const QXmlStreamAttribute&", 73, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//327
    { "const QXmlStreamAttributes&", 74, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//328
    { "const QXmlStreamReader&", 75, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//329
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//330
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//331
    { "const unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack|Smoke::tf_const },	//332
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//333
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//334
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//335
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//336
    { "int*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//337
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//338
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//339
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//340
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//341
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//342
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//343
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//344
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//345
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//346
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//347
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//348
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//349
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//350
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//351
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//352
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//353
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    264, 0,	//1  const QDomAttr&
    305, 0,	//3  const QString&
    265, 0,	//5  const QDomCDATASection&
    266, 0,	//7  const QDomCharacterData&
    346, 346, 0,	//9  unsigned long, unsigned long
    346, 305, 0,	//12  unsigned long, const QString&
    346, 346, 305, 0,	//15  unsigned long, unsigned long, const QString&
    267, 0,	//19  const QDomComment&
    270, 0,	//21  const QDomDocumentType&
    268, 0,	//23  const QDomDocument&
    305, 305, 0,	//25  const QString&, const QString&
    276, 253, 0,	//28  const QDomNode&, bool
    259, 253, 124, 337, 337, 0,	//31  const QByteArray&, bool, QString*, int*, int*
    305, 253, 124, 337, 337, 0,	//37  const QString&, bool, QString*, int*, int*
    104, 253, 124, 337, 337, 0,	//43  QIODevice*, bool, QString*, int*, int*
    150, 253, 124, 337, 337, 0,	//49  QXmlInputSource*, bool, QString*, int*, int*
    259, 124, 337, 337, 0,	//55  const QByteArray&, QString*, int*, int*
    305, 124, 337, 337, 0,	//60  const QString&, QString*, int*, int*
    104, 124, 337, 337, 0,	//65  QIODevice*, QString*, int*, int*
    150, 156, 124, 337, 337, 0,	//70  QXmlInputSource*, QXmlReader*, QString*, int*, int*
    336, 0,	//76  int
    259, 253, 0,	//78  const QByteArray&, bool
    259, 253, 124, 0,	//81  const QByteArray&, bool, QString*
    259, 253, 124, 337, 0,	//85  const QByteArray&, bool, QString*, int*
    305, 253, 0,	//90  const QString&, bool
    305, 253, 124, 0,	//93  const QString&, bool, QString*
    305, 253, 124, 337, 0,	//97  const QString&, bool, QString*, int*
    104, 253, 0,	//102  QIODevice*, bool
    104, 253, 124, 0,	//105  QIODevice*, bool, QString*
    104, 253, 124, 337, 0,	//109  QIODevice*, bool, QString*, int*
    150, 253, 0,	//114  QXmlInputSource*, bool
    150, 253, 124, 0,	//117  QXmlInputSource*, bool, QString*
    150, 253, 124, 337, 0,	//121  QXmlInputSource*, bool, QString*, int*
    259, 0,	//126  const QByteArray&
    259, 124, 0,	//128  const QByteArray&, QString*
    259, 124, 337, 0,	//131  const QByteArray&, QString*, int*
    305, 124, 0,	//135  const QString&, QString*
    305, 124, 337, 0,	//138  const QString&, QString*, int*
    104, 0,	//142  QIODevice*
    104, 124, 0,	//144  QIODevice*, QString*
    104, 124, 337, 0,	//147  QIODevice*, QString*, int*
    150, 156, 0,	//151  QXmlInputSource*, QXmlReader*
    150, 156, 124, 0,	//154  QXmlInputSource*, QXmlReader*, QString*
    150, 156, 124, 337, 0,	//158  QXmlInputSource*, QXmlReader*, QString*, int*
    269, 0,	//163  const QDomDocumentFragment&
    271, 0,	//165  const QDomElement&
    305, 339, 0,	//167  const QString&, long long
    305, 347, 0,	//170  const QString&, unsigned long long
    305, 336, 0,	//173  const QString&, int
    305, 345, 0,	//176  const QString&, unsigned int
    305, 335, 0,	//179  const QString&, float
    305, 334, 0,	//182  const QString&, double
    304, 305, 305, 0,	//185  const QString, const QString&, const QString&
    304, 305, 336, 0,	//189  const QString, const QString&, int
    304, 305, 345, 0,	//193  const QString, const QString&, unsigned int
    304, 305, 339, 0,	//197  const QString, const QString&, long long
    304, 305, 347, 0,	//201  const QString, const QString&, unsigned long long
    304, 305, 334, 0,	//205  const QString, const QString&, double
    304, 305, 0,	//209  const QString, const QString&
    272, 0,	//212  const QDomEntity&
    273, 0,	//214  const QDomEntityReference&
    274, 0,	//216  const QDomImplementation&
    305, 305, 305, 0,	//218  const QString&, const QString&, const QString&
    305, 305, 270, 0,	//222  const QString&, const QString&, const QDomDocumentType&
    50, 0,	//226  QDomImplementation::InvalidDataPolicy
    275, 0,	//228  const QDomNamedNodeMap&
    276, 0,	//230  const QDomNode&
    276, 276, 0,	//232  const QDomNode&, const QDomNode&
    253, 0,	//235  bool
    132, 336, 0,	//237  QTextStream&, int
    132, 336, 57, 0,	//240  QTextStream&, int, QDomNode::EncodingPolicy
    62, 0,	//244  QDomNodePrivate*
    277, 0,	//246  const QDomNodeList&
    278, 0,	//248  const QDomNotation&
    279, 0,	//250  const QDomProcessingInstruction&
    280, 0,	//252  const QDomText&
    334, 0,	//254  double
    74, 74, 0,	//256  QFile::Permission, QFile::Permission
    10, 9, 0,	//259  QDataStream&, QChar&
    16, 78, 0,	//262  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    10, 111, 0,	//265  QDataStream&, QLocale&
    230, 336, 0,	//268  Qt::WindowType, int
    256, 330, 345, 0,	//271  char*, const char*, unsigned int
    345, 0,	//275  unsigned int
    255, 0,	//277  char
    303, 334, 0,	//279  const QSizeF&, double
    13, 284, 0,	//282  QDebug, const QLine&
    330, 0,	//285  const char*
    259, 330, 0,	//287  const QByteArray&, const char*
    10, 117, 0,	//290  QDataStream&, QRect&
    195, 195, 0,	//293  Qt::ItemFlag, Qt::ItemFlag
    312, 314, 0,	//296  const QVariant&, const QVariantComparisonHelper&
    13, 81, 0,	//299  QDebug, QFlags<QIODevice::OpenModeFlag>
    301, 301, 0,	//302  const QSize&, const QSize&
    8, 305, 0,	//305  QChar, const QString&
    330, 330, 345, 0,	//308  const char*, const char*, unsigned int
    308, 308, 0,	//312  const QStringRef&, const QStringRef&
    256, 342, 330, 349, 0,	//315  char*, size_t, const char*, va_list
    295, 295, 0,	//320  const QPointF&, const QPointF&
    305, 308, 0,	//323  const QString&, const QStringRef&
    305, 8, 0,	//326  const QString&, QChar
    330, 345, 0,	//329  const char*, unsigned int
    10, 72, 0,	//332  QDataStream&, QEasingCurve&
    13, 261, 0,	//335  QDebug, const QDate&
    283, 308, 0,	//338  const QLatin1String&, const QStringRef&
    220, 220, 0,	//341  Qt::ToolBarArea, Qt::ToolBarArea
    13, 285, 0,	//344  QDebug, const QLineF&
    297, 297, 0,	//347  const QRectF&, const QRectF&
    343, 0,	//350  unsigned char
    290, 305, 299, 288, 110, 0,	//352  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    308, 283, 0,	//358  const QStringRef&, const QLatin1String&
    10, 11, 0,	//361  QDataStream&, QDate&
    335, 0,	//364  float
    217, 336, 0,	//366  Qt::TextInteractionFlag, int
    8, 8, 0,	//369  QChar, QChar
    8, 0,	//372  QChar
    10, 137, 0,	//374  QDataStream&, QUrl&
    13, 289, 0,	//377  QDebug, const QModelIndex&
    107, 82, 0,	//380  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    330, 336, 0,	//383  const char*, int
    334, 334, 0,	//386  double, double
    10, 313, 0,	//389  QDataStream&, const QVariant::Type
    340, 0,	//392  short
    10, 312, 0,	//394  QDataStream&, const QVariant&
    217, 99, 0,	//397  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    195, 94, 0,	//400  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    338, 0,	//403  long
    192, 93, 0,	//405  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    330, 330, 0,	//408  const char*, const char*
    10, 303, 0,	//411  QDataStream&, const QSizeF&
    125, 125, 0,	//414  QString::Null, QString::Null
    330, 259, 0,	//417  const char*, const QByteArray&
    257, 0,	//420  const QBitArray&
    16, 16, 0,	//422  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    256, 330, 0,	//425  char*, const char*
    257, 257, 0,	//428  const QBitArray&, const QBitArray&
    293, 293, 0,	//431  const QPoint&, const QPoint&
    198, 95, 0,	//434  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    295, 334, 0,	//437  const QPointF&, double
    13, 303, 0,	//440  QDebug, const QSizeF&
    282, 282, 0,	//443  const QHashDummyValue&, const QHashDummyValue&
    1, 1, 0,	//446  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    296, 296, 0,	//449  const QRect&, const QRect&
    10, 139, 0,	//452  QDataStream&, QUuid&
    259, 259, 0,	//455  const QByteArray&, const QByteArray&
    331, 336, 0,	//458  const unsigned char*, int
    259, 336, 0,	//461  const QByteArray&, int
    10, 305, 0,	//464  QDataStream&, const QString&
    132, 133, 0,	//467  QTextStream&, QTextStream&(*)(QTextStream&)
    181, 336, 0,	//470  Qt::DropAction, int
    352, 342, 342, 342, 0,	//473  void*, size_t, size_t, size_t
    201, 336, 0,	//478  Qt::MatchFlag, int
    10, 293, 0,	//481  QDataStream&, const QPoint&
    13, 296, 0,	//484  QDebug, const QRect&
    131, 85, 0,	//487  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    348, 0,	//490  unsigned short
    217, 217, 0,	//492  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    126, 84, 0,	//495  QString::SectionFlag, QFlags<QString::SectionFlag>
    13, 263, 0,	//498  QDebug, const QDir&
    203, 203, 0,	//501  Qt::MouseButton, Qt::MouseButton
    352, 342, 0,	//504  void*, size_t
    181, 181, 0,	//507  Qt::DropAction, Qt::DropAction
    1, 336, 0,	//510  QAbstractFileEngine::FileFlag, int
    305, 125, 0,	//513  const QString&, QString::Null
    186, 91, 0,	//516  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    73, 336, 0,	//519  QEventLoop::ProcessEventsFlag, int
    105, 105, 0,	//522  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    112, 112, 0,	//525  QLocale::NumberOption, QLocale::NumberOption
    10, 109, 0,	//528  QDataStream&, QLineF&
    10, 285, 0,	//531  QDataStream&, const QLineF&
    303, 303, 0,	//534  const QSizeF&, const QSizeF&
    334, 301, 0,	//537  double, const QSize&
    179, 89, 0,	//540  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    339, 0,	//543  long long
    201, 96, 0,	//545  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    293, 335, 0,	//548  const QPoint&, float
    295, 0,	//551  const QPointF&
    159, 336, 0,	//553  Qt::AlignmentFlag, int
    190, 336, 0,	//556  Qt::ImageConversionFlag, int
    13, 301, 0,	//559  QDebug, const QSize&
    131, 336, 0,	//562  QTextCodec::ConversionFlag, int
    13, 293, 0,	//565  QDebug, const QPoint&
    293, 0,	//568  const QPoint&
    13, 310, 0,	//570  QDebug, const QUrl&
    10, 295, 0,	//573  QDataStream&, const QPointF&
    131, 131, 0,	//576  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    4, 4, 0,	//579  QBool, QBool
    330, 308, 0,	//582  const char*, const QStringRef&
    347, 0,	//585  unsigned long long
    134, 336, 0,	//587  QTextStream::NumberFlag, int
    13, 295, 0,	//590  QDebug, const QPointF&
    125, 305, 0,	//593  QString::Null, const QString&
    350, 0,	//596  void(*)()
    112, 83, 0,	//598  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    186, 186, 0,	//601  Qt::GestureFlag, Qt::GestureFlag
    10, 118, 0,	//604  QDataStream&, QRectF&
    335, 335, 0,	//607  float, float
    10, 260, 0,	//610  QDataStream&, const QChar&
    10, 116, 0,	//613  QDataStream&, QPointF&
    301, 334, 0,	//616  const QSize&, double
    351, 0,	//619  void(*)(QtMsgType,const char*)
    132, 135, 0,	//621  QTextStream&, QTextStreamManipulator
    159, 159, 0,	//624  Qt::AlignmentFlag, Qt::AlignmentFlag
    10, 108, 0,	//627  QDataStream&, QLine&
    14, 14, 0,	//630  QDir::Filter, QDir::Filter
    293, 334, 0,	//633  const QPoint&, double
    10, 259, 0,	//636  QDataStream&, const QByteArray&
    10, 281, 0,	//639  QDataStream&, const QEasingCurve&
    190, 190, 0,	//642  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    229, 336, 0,	//645  Qt::WindowState, int
    10, 123, 0,	//648  QDataStream&, QString&
    290, 305, 288, 0,	//651  const QObject*, const QString&, const QMetaObject&
    10, 297, 0,	//655  QDataStream&, const QRectF&
    10, 3, 0,	//658  QDataStream&, QBitArray&
    10, 120, 0,	//661  QDataStream&, QSize&
    198, 198, 0,	//664  Qt::KeyboardModifier, Qt::KeyboardModifier
    253, 4, 0,	//667  bool, QBool
    134, 134, 0,	//670  QTextStream::NumberFlag, QTextStream::NumberFlag
    10, 12, 0,	//673  QDataStream&, QDateTime&
    312, 141, 352, 0,	//676  const QVariant&, QVariant::Type, void*
    308, 305, 0,	//680  const QStringRef&, const QString&
    331, 344, 336, 0,	//683  const unsigned char*, unsigned char*, int
    198, 336, 0,	//687  Qt::KeyboardModifier, int
    10, 262, 0,	//690  QDataStream&, const QDateTime&
    233, 330, 0,	//693  QtMsgType, const char*
    73, 79, 0,	//696  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    287, 287, 0,	//699  const QMargins&, const QMargins&
    138, 138, 0,	//702  QUrl::FormattingOption, QUrl::FormattingOption
    13, 313, 0,	//705  QDebug, const QVariant::Type
    10, 136, 0,	//708  QDataStream&, QTime&
    179, 336, 0,	//711  Qt::DockWidgetArea, int
    230, 230, 0,	//714  Qt::WindowType, Qt::WindowType
    13, 262, 0,	//717  QDebug, const QDateTime&
    352, 336, 342, 0,	//720  void*, int, size_t
    341, 0,	//724  signed char
    230, 103, 0,	//726  Qt::WindowType, QFlags<Qt::WindowType>
    229, 229, 0,	//729  Qt::WindowState, Qt::WindowState
    10, 128, 0,	//732  QDataStream&, QStringList&
    13, 312, 0,	//735  QDebug, const QVariant&
    74, 336, 0,	//738  QFile::Permission, int
    114, 0,	//741  QObject*(*)()
    334, 295, 0,	//743  double, const QPointF&
    336, 293, 0,	//746  int, const QPoint&
    10, 310, 0,	//749  QDataStream&, const QUrl&
    10, 115, 0,	//752  QDataStream&, QPoint&
    10, 309, 0,	//755  QDataStream&, const QTime&
    308, 0,	//758  const QStringRef&
    10, 119, 0,	//760  QDataStream&, QRegExp&
    192, 336, 0,	//763  Qt::InputMethodHint, int
    10, 286, 0,	//766  QDataStream&, const QLocale&
    132, 276, 0,	//769  QTextStream&, const QDomNode&
    342, 342, 0,	//772  size_t, size_t
    10, 257, 0,	//775  QDataStream&, const QBitArray&
    330, 330, 330, 336, 0,	//778  const char*, const char*, const char*, int
    138, 87, 0,	//783  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    73, 73, 0,	//786  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    259, 255, 0,	//789  const QByteArray&, char
    107, 107, 0,	//792  QLibrary::LoadHint, QLibrary::LoadHint
    159, 88, 0,	//795  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    10, 311, 0,	//798  QDataStream&, const QUuid&
    105, 81, 0,	//801  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    10, 284, 0,	//804  QDataStream&, const QLine&
    186, 336, 0,	//807  Qt::GestureFlag, int
    308, 330, 0,	//810  const QStringRef&, const char*
    15, 77, 0,	//813  QDir::SortFlag, QFlags<QDir::SortFlag>
    10, 261, 0,	//816  QDataStream&, const QDate&
    255, 259, 0,	//819  char, const QByteArray&
    107, 336, 0,	//822  QLibrary::LoadHint, int
    331, 336, 336, 0,	//825  const unsigned char*, int, int
    205, 205, 0,	//829  Qt::Orientation, Qt::Orientation
    4, 253, 0,	//832  QBool, bool
    10, 306, 0,	//835  QDataStream&, const QStringList&
    10, 298, 0,	//838  QDataStream&, const QRegExp&
    15, 336, 0,	//841  QDir::SortFlag, int
    352, 333, 342, 0,	//844  void*, const void*, size_t
    352, 0,	//848  void*
    220, 100, 0,	//850  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    13, 291, 0,	//853  QDebug, const QPersistentModelIndex&
    10, 140, 0,	//856  QDataStream&, QVariant&
    310, 0,	//859  const QUrl&
    223, 101, 0,	//861  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    335, 293, 0,	//864  float, const QPoint&
    334, 293, 0,	//867  double, const QPoint&
    13, 290, 0,	//870  QDebug, const QObject*
    74, 80, 0,	//873  QFile::Permission, QFlags<QFile::Permission>
    330, 330, 336, 0,	//876  const char*, const char*, int
    13, 297, 0,	//880  QDebug, const QRectF&
    134, 86, 0,	//883  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    15, 15, 0,	//886  QDir::SortFlag, QDir::SortFlag
    223, 336, 0,	//889  Qt::TouchPointState, int
    14, 336, 0,	//892  QDir::Filter, int
    346, 0,	//895  unsigned long
    1, 75, 0,	//897  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    203, 97, 0,	//900  Qt::MouseButton, QFlags<Qt::MouseButton>
    181, 90, 0,	//903  Qt::DropAction, QFlags<Qt::DropAction>
    342, 0,	//906  size_t
    205, 336, 0,	//908  Qt::Orientation, int
    220, 336, 0,	//911  Qt::ToolBarArea, int
    10, 6, 0,	//914  QDataStream&, QByteArray&
    10, 142, 0,	//917  QDataStream&, QVariant::Type&
    10, 296, 0,	//920  QDataStream&, const QRect&
    13, 281, 0,	//923  QDebug, const QEasingCurve&
    291, 0,	//926  const QPersistentModelIndex&
    13, 309, 0,	//928  QDebug, const QTime&
    112, 336, 0,	//931  QLocale::NumberOption, int
    223, 223, 0,	//934  Qt::TouchPointState, Qt::TouchPointState
    190, 92, 0,	//937  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    229, 102, 0,	//940  Qt::WindowState, QFlags<Qt::WindowState>
    179, 179, 0,	//943  Qt::DockWidgetArea, Qt::DockWidgetArea
    16, 336, 0,	//946  QDirIterator::IteratorFlag, int
    334, 303, 0,	//949  double, const QSizeF&
    13, 287, 0,	//952  QDebug, const QMargins&
    289, 0,	//955  const QModelIndex&
    293, 336, 0,	//957  const QPoint&, int
    138, 336, 0,	//960  QUrl::FormattingOption, int
    201, 201, 0,	//963  Qt::MatchFlag, Qt::MatchFlag
    192, 192, 0,	//966  Qt::InputMethodHint, Qt::InputMethodHint
    205, 98, 0,	//969  Qt::Orientation, QFlags<Qt::Orientation>
    13, 76, 0,	//972  QDebug, QFlags<QDir::Filter>
    195, 336, 0,	//975  Qt::ItemFlag, int
    203, 336, 0,	//978  Qt::MouseButton, int
    10, 121, 0,	//981  QDataStream&, QSizeF&
    105, 336, 0,	//984  QIODevice::OpenModeFlag, int
    126, 336, 0,	//987  QString::SectionFlag, int
    10, 301, 0,	//990  QDataStream&, const QSize&
    14, 76, 0,	//993  QDir::Filter, QFlags<QDir::Filter>
    126, 126, 0,	//996  QString::SectionFlag, QString::SectionFlag
    283, 0,	//999  const QLatin1String&
    305, 305, 305, 305, 0,	//1001  const QString&, const QString&, const QString&, const QString&
    315, 0,	//1006  const QXmlAttributes&
    153, 0,	//1008  QXmlLocator*
    305, 305, 305, 315, 0,	//1010  const QString&, const QString&, const QString&, const QXmlAttributes&
    316, 0,	//1015  const QXmlContentHandler&
    317, 0,	//1017  const QXmlDTDHandler&
    305, 305, 305, 305, 305, 0,	//1019  const QString&, const QString&, const QString&, const QString&, const QString&
    318, 0,	//1025  const QXmlDeclHandler&
    325, 0,	//1027  const QXmlParseException&
    305, 305, 151, 0,	//1029  const QString&, const QString&, QXmlInputSource*&
    319, 0,	//1033  const QXmlEntityResolver&
    320, 0,	//1035  const QXmlErrorHandler&
    321, 0,	//1037  const QXmlInputSource&
    323, 0,	//1039  const QXmlLexicalHandler&
    324, 0,	//1041  const QXmlLocator&
    305, 123, 123, 0,	//1043  const QString&, QString&, QString&
    305, 253, 123, 123, 0,	//1047  const QString&, bool, QString&, QString&
    305, 336, 336, 305, 305, 0,	//1052  const QString&, int, int, const QString&, const QString&
    305, 336, 336, 0,	//1058  const QString&, int, int
    305, 336, 336, 305, 0,	//1062  const QString&, int, int, const QString&
    305, 254, 0,	//1067  const QString&, bool*
    305, 352, 0,	//1070  const QString&, void*
    148, 0,	//1073  QXmlEntityResolver*
    145, 0,	//1075  QXmlDTDHandler*
    144, 0,	//1077  QXmlContentHandler*
    149, 0,	//1079  QXmlErrorHandler*
    152, 0,	//1081  QXmlLexicalHandler*
    146, 0,	//1083  QXmlDeclHandler*
    322, 0,	//1085  const QXmlInputSource*
    326, 0,	//1087  const QXmlReader&
    322, 253, 0,	//1089  const QXmlInputSource*, bool
    7, 0,	//1092  QByteArray*
    124, 0,	//1094  QString*
    130, 0,	//1096  QTextCodec*
    327, 0,	//1098  const QXmlStreamAttribute&
    328, 0,	//1100  const QXmlStreamAttributes&
    329, 0,	//1102  const QXmlStreamReader&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "AcceptInvalidChars",	//1
    "AttributeNode",	//2
    "BaseNode",	//3
    "CDATASectionNode",	//4
    "CharacterDataNode",	//5
    "CommentNode",	//6
    "DTDHandler",	//7
    "DocumentFragmentNode",	//8
    "DocumentNode",	//9
    "DocumentTypeNode",	//10
    "DropInvalidChars",	//11
    "ElementNode",	//12
    "EncodingFromDocument",	//13
    "EncodingFromTextStream",	//14
    "EndOfData",	//15
    "EndOfDocument",	//16
    "EntityNode",	//17
    "EntityReferenceNode",	//18
    "LicensedActiveQt",	//19
    "LicensedCore",	//20
    "LicensedDBus",	//21
    "LicensedDeclarative",	//22
    "LicensedGui",	//23
    "LicensedHelp",	//24
    "LicensedMultimedia",	//25
    "LicensedNetwork",	//26
    "LicensedOpenGL",	//27
    "LicensedOpenVG",	//28
    "LicensedQt3Support",	//29
    "LicensedQt3SupportLight",	//30
    "LicensedScript",	//31
    "LicensedScriptTools",	//32
    "LicensedSql",	//33
    "LicensedSvg",	//34
    "LicensedTest",	//35
    "LicensedXml",	//36
    "LicensedXmlPatterns",	//37
    "NotationNode",	//38
    "ProcessingInstructionNode",	//39
    "QDomAttr",	//40
    "QDomAttr#",	//41
    "QDomCDATASection",	//42
    "QDomCDATASection#",	//43
    "QDomCharacterData",	//44
    "QDomCharacterData#",	//45
    "QDomComment",	//46
    "QDomComment#",	//47
    "QDomDocument",	//48
    "QDomDocument#",	//49
    "QDomDocument$",	//50
    "QDomDocumentFragment",	//51
    "QDomDocumentFragment#",	//52
    "QDomDocumentType",	//53
    "QDomDocumentType#",	//54
    "QDomElement",	//55
    "QDomElement#",	//56
    "QDomEntity",	//57
    "QDomEntity#",	//58
    "QDomEntityReference",	//59
    "QDomEntityReference#",	//60
    "QDomImplementation",	//61
    "QDomImplementation#",	//62
    "QDomNamedNodeMap",	//63
    "QDomNamedNodeMap#",	//64
    "QDomNode",	//65
    "QDomNode#",	//66
    "QDomNodeList",	//67
    "QDomNodeList#",	//68
    "QDomNotation",	//69
    "QDomNotation#",	//70
    "QDomProcessingInstruction",	//71
    "QDomProcessingInstruction#",	//72
    "QDomText",	//73
    "QDomText#",	//74
    "QXmlAttributes",	//75
    "QXmlAttributes#",	//76
    "QXmlContentHandler",	//77
    "QXmlContentHandler#",	//78
    "QXmlDTDHandler",	//79
    "QXmlDTDHandler#",	//80
    "QXmlDeclHandler",	//81
    "QXmlDeclHandler#",	//82
    "QXmlDefaultHandler",	//83
    "QXmlEntityResolver",	//84
    "QXmlEntityResolver#",	//85
    "QXmlErrorHandler",	//86
    "QXmlErrorHandler#",	//87
    "QXmlInputSource",	//88
    "QXmlInputSource#",	//89
    "QXmlLexicalHandler",	//90
    "QXmlLexicalHandler#",	//91
    "QXmlLocator",	//92
    "QXmlLocator#",	//93
    "QXmlNamespaceSupport",	//94
    "QXmlParseException",	//95
    "QXmlParseException#",	//96
    "QXmlParseException$",	//97
    "QXmlParseException$$",	//98
    "QXmlParseException$$$",	//99
    "QXmlParseException$$$$",	//100
    "QXmlParseException$$$$$",	//101
    "QXmlReader",	//102
    "QXmlReader#",	//103
    "QXmlSimpleReader",	//104
    "QXmlStreamWriter",	//105
    "QXmlStreamWriter#",	//106
    "QXmlStreamWriter$",	//107
    "Q_COMPLEX_TYPE",	//108
    "Q_DUMMY_TYPE",	//109
    "Q_MOVABLE_TYPE",	//110
    "Q_PRIMITIVE_TYPE",	//111
    "Q_STATIC_TYPE",	//112
    "QtCriticalMsg",	//113
    "QtDebugMsg",	//114
    "QtFatalMsg",	//115
    "QtSystemMsg",	//116
    "QtWarningMsg",	//117
    "ReturnNullNode",	//118
    "TextNode",	//119
    "append",	//120
    "append$$$$",	//121
    "appendChild",	//122
    "appendChild#",	//123
    "appendData",	//124
    "appendData$",	//125
    "at",	//126
    "at$",	//127
    "attribute",	//128
    "attribute$",	//129
    "attribute$$",	//130
    "attributeDecl",	//131
    "attributeDecl$$$$$",	//132
    "attributeNS",	//133
    "attributeNS$$",	//134
    "attributeNS$$$",	//135
    "attributeNode",	//136
    "attributeNode$",	//137
    "attributeNodeNS",	//138
    "attributeNodeNS$$",	//139
    "attributes",	//140
    "autoFormatting",	//141
    "autoFormattingIndent",	//142
    "characters",	//143
    "characters$",	//144
    "childNodes",	//145
    "clear",	//146
    "cloneNode",	//147
    "cloneNode$",	//148
    "codec",	//149
    "columnNumber",	//150
    "comment",	//151
    "comment$",	//152
    "contains",	//153
    "contains$",	//154
    "contentHandler",	//155
    "count",	//156
    "createAttribute",	//157
    "createAttribute$",	//158
    "createAttributeNS",	//159
    "createAttributeNS$$",	//160
    "createCDATASection",	//161
    "createCDATASection$",	//162
    "createComment",	//163
    "createComment$",	//164
    "createDocument",	//165
    "createDocument$$#",	//166
    "createDocumentFragment",	//167
    "createDocumentType",	//168
    "createDocumentType$$$",	//169
    "createElement",	//170
    "createElement$",	//171
    "createElementNS",	//172
    "createElementNS$$",	//173
    "createEntityReference",	//174
    "createEntityReference$",	//175
    "createProcessingInstruction",	//176
    "createProcessingInstruction$$",	//177
    "createTextNode",	//178
    "createTextNode$",	//179
    "data",	//180
    "declHandler",	//181
    "deleteData",	//182
    "deleteData$$",	//183
    "device",	//184
    "doctype",	//185
    "documentElement",	//186
    "elementById",	//187
    "elementById$",	//188
    "elementsByTagName",	//189
    "elementsByTagName$",	//190
    "elementsByTagNameNS",	//191
    "elementsByTagNameNS$$",	//192
    "endCDATA",	//193
    "endDTD",	//194
    "endDocument",	//195
    "endElement",	//196
    "endElement$$$",	//197
    "endEntity",	//198
    "endEntity$",	//199
    "endPrefixMapping",	//200
    "endPrefixMapping$",	//201
    "entities",	//202
    "entityResolver",	//203
    "error",	//204
    "error#",	//205
    "errorHandler",	//206
    "errorString",	//207
    "externalEntityDecl",	//208
    "externalEntityDecl$$$",	//209
    "fatalError",	//210
    "fatalError#",	//211
    "feature",	//212
    "feature$",	//213
    "feature$$",	//214
    "fetchData",	//215
    "firstChild",	//216
    "firstChildElement",	//217
    "firstChildElement$",	//218
    "fromRawData",	//219
    "fromRawData#",	//220
    "fromRawData#$",	//221
    "hasAttribute",	//222
    "hasAttribute$",	//223
    "hasAttributeNS",	//224
    "hasAttributeNS$$",	//225
    "hasAttributes",	//226
    "hasChildNodes",	//227
    "hasError",	//228
    "hasFeature",	//229
    "hasFeature$",	//230
    "hasFeature$$",	//231
    "hasProperty",	//232
    "hasProperty$",	//233
    "ignorableWhitespace",	//234
    "ignorableWhitespace$",	//235
    "impl",	//236
    "implementation",	//237
    "importNode",	//238
    "importNode#$",	//239
    "index",	//240
    "index#",	//241
    "index$",	//242
    "index$$",	//243
    "insertAfter",	//244
    "insertAfter##",	//245
    "insertBefore",	//246
    "insertBefore##",	//247
    "insertData",	//248
    "insertData$$",	//249
    "internalEntityDecl",	//250
    "internalEntityDecl$$",	//251
    "internalSubset",	//252
    "invalidDataPolicy",	//253
    "isAttr",	//254
    "isCDATASection",	//255
    "isCharacterData",	//256
    "isComment",	//257
    "isDocument",	//258
    "isDocumentFragment",	//259
    "isDocumentType",	//260
    "isElement",	//261
    "isEmpty",	//262
    "isEntity",	//263
    "isEntityReference",	//264
    "isNotation",	//265
    "isNull",	//266
    "isProcessingInstruction",	//267
    "isSupported",	//268
    "isSupported$$",	//269
    "isText",	//270
    "item",	//271
    "item$",	//272
    "lastChild",	//273
    "lastChildElement",	//274
    "lastChildElement$",	//275
    "length",	//276
    "lexicalHandler",	//277
    "lineNumber",	//278
    "localName",	//279
    "localName$",	//280
    "message",	//281
    "name",	//282
    "namedItem",	//283
    "namedItem$",	//284
    "namedItemNS",	//285
    "namedItemNS$$",	//286
    "namespaceURI",	//287
    "next",	//288
    "nextSibling",	//289
    "nextSiblingElement",	//290
    "nextSiblingElement$",	//291
    "nodeName",	//292
    "nodeType",	//293
    "nodeValue",	//294
    "normalize",	//295
    "notationDecl",	//296
    "notationDecl$$$",	//297
    "notationName",	//298
    "notations",	//299
    "operator!=",	//300
    "operator!=#",	//301
    "operator!=##",	//302
    "operator!=#$",	//303
    "operator!=$#",	//304
    "operator&",	//305
    "operator&##",	//306
    "operator*",	//307
    "operator*#$",	//308
    "operator*$#",	//309
    "operator+",	//310
    "operator+##",	//311
    "operator+#$",	//312
    "operator+$#",	//313
    "operator+$$",	//314
    "operator-",	//315
    "operator-#",	//316
    "operator-##",	//317
    "operator/",	//318
    "operator/#$",	//319
    "operator<",	//320
    "operator<##",	//321
    "operator<#$",	//322
    "operator<$#",	//323
    "operator<<",	//324
    "operator<<##",	//325
    "operator<<#$",	//326
    "operator<<#?",	//327
    "operator<=",	//328
    "operator<=##",	//329
    "operator<=#$",	//330
    "operator<=$#",	//331
    "operator=",	//332
    "operator=#",	//333
    "operator==",	//334
    "operator==#",	//335
    "operator==##",	//336
    "operator==#$",	//337
    "operator==$#",	//338
    "operator>",	//339
    "operator>##",	//340
    "operator>#$",	//341
    "operator>$#",	//342
    "operator>=",	//343
    "operator>=##",	//344
    "operator>=#$",	//345
    "operator>=$#",	//346
    "operator>>",	//347
    "operator>>##",	//348
    "operator>>#$",	//349
    "operator>>#?",	//350
    "operator^",	//351
    "operator^##",	//352
    "operator|",	//353
    "operator|##",	//354
    "operator|$$",	//355
    "ownerDocument",	//356
    "ownerElement",	//357
    "parentNode",	//358
    "parse",	//359
    "parse#",	//360
    "parse#$",	//361
    "parseContinue",	//362
    "popContext",	//363
    "prefix",	//364
    "prefix$",	//365
    "prefixes",	//366
    "prefixes$",	//367
    "previousSibling",	//368
    "previousSiblingElement",	//369
    "previousSiblingElement$",	//370
    "processName",	//371
    "processName$$$$",	//372
    "processingInstruction",	//373
    "processingInstruction$$",	//374
    "property",	//375
    "property$",	//376
    "property$$",	//377
    "publicId",	//378
    "pushContext",	//379
    "qAcos",	//380
    "qAcos$",	//381
    "qAddPostRoutine",	//382
    "qAddPostRoutine$",	//383
    "qAppName",	//384
    "qAsin",	//385
    "qAsin$",	//386
    "qAtan",	//387
    "qAtan$",	//388
    "qAtan2",	//389
    "qAtan2$$",	//390
    "qBadAlloc",	//391
    "qCeil",	//392
    "qCeil$",	//393
    "qChecksum",	//394
    "qChecksum$$",	//395
    "qCompress",	//396
    "qCompress#",	//397
    "qCompress#$",	//398
    "qCompress$$",	//399
    "qCompress$$$",	//400
    "qCos",	//401
    "qCos$",	//402
    "qCritical",	//403
    "qDebug",	//404
    "qExp",	//405
    "qExp$",	//406
    "qFabs",	//407
    "qFabs$",	//408
    "qFastCos",	//409
    "qFastCos$",	//410
    "qFastSin",	//411
    "qFastSin$",	//412
    "qFlagLocation",	//413
    "qFlagLocation$",	//414
    "qFloor",	//415
    "qFloor$",	//416
    "qFree",	//417
    "qFree$",	//418
    "qFreeAligned",	//419
    "qFreeAligned$",	//420
    "qFuzzyCompare",	//421
    "qFuzzyCompare$$",	//422
    "qFuzzyIsNull",	//423
    "qFuzzyIsNull$",	//424
    "qHash",	//425
    "qHash#",	//426
    "qHash$",	//427
    "qInf",	//428
    "qInstallMsgHandler",	//429
    "qInstallMsgHandler$",	//430
    "qIntCast",	//431
    "qIntCast$",	//432
    "qIsFinite",	//433
    "qIsFinite$",	//434
    "qIsInf",	//435
    "qIsInf$",	//436
    "qIsNaN",	//437
    "qIsNaN$",	//438
    "qIsNull",	//439
    "qIsNull$",	//440
    "qLn",	//441
    "qLn$",	//442
    "qMalloc",	//443
    "qMalloc$",	//444
    "qMallocAligned",	//445
    "qMallocAligned$$",	//446
    "qMemCopy",	//447
    "qMemCopy$$$",	//448
    "qMemSet",	//449
    "qMemSet$$$",	//450
    "qName",	//451
    "qName$",	//452
    "qPow",	//453
    "qPow$$",	//454
    "qQNaN",	//455
    "qRealloc",	//456
    "qRealloc$$",	//457
    "qReallocAligned",	//458
    "qReallocAligned$$$$",	//459
    "qRegisterStaticPluginInstanceFunction",	//460
    "qRegisterStaticPluginInstanceFunction#",	//461
    "qRemovePostRoutine",	//462
    "qRemovePostRoutine$",	//463
    "qRound",	//464
    "qRound$",	//465
    "qRound64",	//466
    "qRound64$",	//467
    "qSNaN",	//468
    "qSetFieldWidth",	//469
    "qSetFieldWidth$",	//470
    "qSetPadChar",	//471
    "qSetPadChar#",	//472
    "qSetRealNumberPrecision",	//473
    "qSetRealNumberPrecision$",	//474
    "qSharedBuild",	//475
    "qSin",	//476
    "qSin$",	//477
    "qSqrt",	//478
    "qSqrt$",	//479
    "qStringComparisonHelper",	//480
    "qStringComparisonHelper#$",	//481
    "qTan",	//482
    "qTan$",	//483
    "qUncompress",	//484
    "qUncompress#",	//485
    "qUncompress$$",	//486
    "qVersion",	//487
    "qWarning",	//488
    "qbswap_helper",	//489
    "qbswap_helper$$$",	//490
    "qgetenv",	//491
    "qgetenv$",	//492
    "qputenv",	//493
    "qputenv$#",	//494
    "qrand",	//495
    "qsrand",	//496
    "qsrand$",	//497
    "qstrcmp",	//498
    "qstrcmp##",	//499
    "qstrcmp#$",	//500
    "qstrcmp$#",	//501
    "qstrcmp$$",	//502
    "qstrcpy",	//503
    "qstrcpy$$",	//504
    "qstrdup",	//505
    "qstrdup$",	//506
    "qstricmp",	//507
    "qstricmp$$",	//508
    "qstrlen",	//509
    "qstrlen$",	//510
    "qstrncmp",	//511
    "qstrncmp$$$",	//512
    "qstrncpy",	//513
    "qstrncpy$$$",	//514
    "qstrnicmp",	//515
    "qstrnicmp$$$",	//516
    "qstrnlen",	//517
    "qstrnlen$$",	//518
    "qtTrId",	//519
    "qtTrId$",	//520
    "qtTrId$$",	//521
    "qt_assert",	//522
    "qt_assert$$$",	//523
    "qt_assert_x",	//524
    "qt_assert_x$$$$",	//525
    "qt_check_pointer",	//526
    "qt_check_pointer$$",	//527
    "qt_error_string",	//528
    "qt_error_string$",	//529
    "qt_message_output",	//530
    "qt_message_output$$",	//531
    "qt_noop",	//532
    "qt_qFindChild_helper",	//533
    "qt_qFindChild_helper#$#",	//534
    "qt_qFindChildren_helper",	//535
    "qt_qFindChildren_helper#$##?",	//536
    "qvariant_cast_helper",	//537
    "qvariant_cast_helper#$$",	//538
    "qvsnprintf",	//539
    "qvsnprintf$$$?",	//540
    "removeAttribute",	//541
    "removeAttribute$",	//542
    "removeAttributeNS",	//543
    "removeAttributeNS$$",	//544
    "removeAttributeNode",	//545
    "removeAttributeNode#",	//546
    "removeChild",	//547
    "removeChild#",	//548
    "removeNamedItem",	//549
    "removeNamedItem$",	//550
    "removeNamedItemNS",	//551
    "removeNamedItemNS$$",	//552
    "replaceChild",	//553
    "replaceChild##",	//554
    "replaceData",	//555
    "replaceData$$$",	//556
    "reset",	//557
    "resolveEntity",	//558
    "resolveEntity$$#",	//559
    "save",	//560
    "save#$",	//561
    "save#$$",	//562
    "setAttribute",	//563
    "setAttribute$$",	//564
    "setAttributeNS",	//565
    "setAttributeNS$$$",	//566
    "setAttributeNode",	//567
    "setAttributeNode#",	//568
    "setAttributeNodeNS",	//569
    "setAttributeNodeNS#",	//570
    "setAutoFormatting",	//571
    "setAutoFormatting$",	//572
    "setAutoFormattingIndent",	//573
    "setAutoFormattingIndent$",	//574
    "setCodec",	//575
    "setCodec#",	//576
    "setCodec$",	//577
    "setContent",	//578
    "setContent#",	//579
    "setContent##",	//580
    "setContent##$",	//581
    "setContent##$$",	//582
    "setContent##$$$",	//583
    "setContent#$",	//584
    "setContent#$$",	//585
    "setContent#$$$",	//586
    "setContent#$$$$",	//587
    "setContent$",	//588
    "setContent$$",	//589
    "setContent$$$",	//590
    "setContent$$$$",	//591
    "setContent$$$$$",	//592
    "setContentHandler",	//593
    "setContentHandler#",	//594
    "setDTDHandler",	//595
    "setDTDHandler#",	//596
    "setData",	//597
    "setData#",	//598
    "setData$",	//599
    "setDeclHandler",	//600
    "setDeclHandler#",	//601
    "setDevice",	//602
    "setDevice#",	//603
    "setDocumentLocator",	//604
    "setDocumentLocator#",	//605
    "setEntityResolver",	//606
    "setEntityResolver#",	//607
    "setErrorHandler",	//608
    "setErrorHandler#",	//609
    "setFeature",	//610
    "setFeature$$",	//611
    "setImpl",	//612
    "setImpl#",	//613
    "setInvalidDataPolicy",	//614
    "setInvalidDataPolicy$",	//615
    "setLexicalHandler",	//616
    "setLexicalHandler#",	//617
    "setNamedItem",	//618
    "setNamedItem#",	//619
    "setNamedItemNS",	//620
    "setNamedItemNS#",	//621
    "setNodeValue",	//622
    "setNodeValue$",	//623
    "setPrefix",	//624
    "setPrefix$",	//625
    "setPrefix$$",	//626
    "setProperty",	//627
    "setProperty$$",	//628
    "setTagName",	//629
    "setTagName$",	//630
    "setValue",	//631
    "setValue$",	//632
    "size",	//633
    "skippedEntity",	//634
    "skippedEntity$",	//635
    "specified",	//636
    "splitName",	//637
    "splitName$$$",	//638
    "splitText",	//639
    "splitText$",	//640
    "startCDATA",	//641
    "startDTD",	//642
    "startDTD$$$",	//643
    "startDocument",	//644
    "startElement",	//645
    "startElement$$$#",	//646
    "startEntity",	//647
    "startEntity$",	//648
    "startPrefixMapping",	//649
    "startPrefixMapping$$",	//650
    "substringData",	//651
    "substringData$$",	//652
    "systemId",	//653
    "tagName",	//654
    "target",	//655
    "text",	//656
    "toAttr",	//657
    "toByteArray",	//658
    "toByteArray$",	//659
    "toCDATASection",	//660
    "toCharacterData",	//661
    "toComment",	//662
    "toDocument",	//663
    "toDocumentFragment",	//664
    "toDocumentType",	//665
    "toElement",	//666
    "toEntity",	//667
    "toEntityReference",	//668
    "toNotation",	//669
    "toProcessingInstruction",	//670
    "toString",	//671
    "toString$",	//672
    "toText",	//673
    "type",	//674
    "type$",	//675
    "type$$",	//676
    "unparsedEntityDecl",	//677
    "unparsedEntityDecl$$$$",	//678
    "uri",	//679
    "uri$",	//680
    "value",	//681
    "value#",	//682
    "value$",	//683
    "value$$",	//684
    "warning",	//685
    "warning#",	//686
    "writeAttribute",	//687
    "writeAttribute#",	//688
    "writeAttribute$$",	//689
    "writeAttribute$$$",	//690
    "writeAttributes",	//691
    "writeAttributes#",	//692
    "writeCDATA",	//693
    "writeCDATA$",	//694
    "writeCharacters",	//695
    "writeCharacters$",	//696
    "writeComment",	//697
    "writeComment$",	//698
    "writeCurrentToken",	//699
    "writeCurrentToken#",	//700
    "writeDTD",	//701
    "writeDTD$",	//702
    "writeDefaultNamespace",	//703
    "writeDefaultNamespace$",	//704
    "writeEmptyElement",	//705
    "writeEmptyElement$",	//706
    "writeEmptyElement$$",	//707
    "writeEndDocument",	//708
    "writeEndElement",	//709
    "writeEntityReference",	//710
    "writeEntityReference$",	//711
    "writeNamespace",	//712
    "writeNamespace$",	//713
    "writeNamespace$$",	//714
    "writeProcessingInstruction",	//715
    "writeProcessingInstruction$",	//716
    "writeProcessingInstruction$$",	//717
    "writeStartDocument",	//718
    "writeStartDocument$",	//719
    "writeStartDocument$$",	//720
    "writeStartElement",	//721
    "writeStartElement$",	//722
    "writeStartElement$$",	//723
    "writeTextElement",	//724
    "writeTextElement$$",	//725
    "writeTextElement$$$",	//726
    "~QDomAttr",	//727
    "~QDomCDATASection",	//728
    "~QDomCharacterData",	//729
    "~QDomComment",	//730
    "~QDomDocument",	//731
    "~QDomDocumentFragment",	//732
    "~QDomDocumentType",	//733
    "~QDomElement",	//734
    "~QDomEntity",	//735
    "~QDomEntityReference",	//736
    "~QDomImplementation",	//737
    "~QDomNamedNodeMap",	//738
    "~QDomNode",	//739
    "~QDomNodeList",	//740
    "~QDomNotation",	//741
    "~QDomProcessingInstruction",	//742
    "~QDomText",	//743
    "~QXmlAttributes",	//744
    "~QXmlContentHandler",	//745
    "~QXmlDTDHandler",	//746
    "~QXmlDeclHandler",	//747
    "~QXmlDefaultHandler",	//748
    "~QXmlEntityResolver",	//749
    "~QXmlErrorHandler",	//750
    "~QXmlInputSource",	//751
    "~QXmlLexicalHandler",	//752
    "~QXmlLocator",	//753
    "~QXmlNamespaceSupport",	//754
    "~QXmlParseException",	//755
    "~QXmlReader",	//756
    "~QXmlSimpleReader",	//757
    "~QXmlStreamWriter",	//758
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {10, 40, 0, 0, Smoke::mf_ctor, 19, 1},	//1 QDomAttr::QDomAttr()
    {10, 40, 1, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 19, 2},	//2 QDomAttr::QDomAttr(const QDomAttr&)
    {10, 332, 1, 1, 0, 18, 3},	//3 QDomAttr::operator=(const QDomAttr&)
    {10, 282, 0, 0, Smoke::mf_const, 122, 4},	//4 QDomAttr::name() const
    {10, 636, 0, 0, Smoke::mf_const, 253, 5},	//5 QDomAttr::specified() const
    {10, 357, 0, 0, Smoke::mf_const, 38, 6},	//6 QDomAttr::ownerElement() const
    {10, 681, 0, 0, Smoke::mf_const, 122, 7},	//7 QDomAttr::value() const
    {10, 631, 3, 1, 0, 0, 8},	//8 QDomAttr::setValue(const QString&)
    {10, 293, 0, 0, Smoke::mf_const, 58, 9},	//9 QDomAttr::nodeType() const
    {10, 727, 0, 0, Smoke::mf_dtor, 0, 10 },	//10 QDomAttr::~QDomAttr()
    {11, 42, 0, 0, Smoke::mf_ctor, 22, 1},	//11 QDomCDATASection::QDomCDATASection()
    {11, 42, 5, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 22, 2},	//12 QDomCDATASection::QDomCDATASection(const QDomCDATASection&)
    {11, 332, 5, 1, 0, 21, 3},	//13 QDomCDATASection::operator=(const QDomCDATASection&)
    {11, 293, 0, 0, Smoke::mf_const, 58, 4},	//14 QDomCDATASection::nodeType() const
    {11, 728, 0, 0, Smoke::mf_dtor, 0, 5 },	//15 QDomCDATASection::~QDomCDATASection()
    {12, 44, 0, 0, Smoke::mf_ctor, 25, 1},	//16 QDomCharacterData::QDomCharacterData()
    {12, 44, 7, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 25, 2},	//17 QDomCharacterData::QDomCharacterData(const QDomCharacterData&)
    {12, 332, 7, 1, 0, 24, 3},	//18 QDomCharacterData::operator=(const QDomCharacterData&)
    {12, 651, 9, 2, 0, 122, 4},	//19 QDomCharacterData::substringData(unsigned long, unsigned long)
    {12, 124, 3, 1, 0, 0, 5},	//20 QDomCharacterData::appendData(const QString&)
    {12, 248, 12, 2, 0, 0, 6},	//21 QDomCharacterData::insertData(unsigned long, const QString&)
    {12, 182, 9, 2, 0, 0, 7},	//22 QDomCharacterData::deleteData(unsigned long, unsigned long)
    {12, 555, 15, 3, 0, 0, 8},	//23 QDomCharacterData::replaceData(unsigned long, unsigned long, const QString&)
    {12, 276, 0, 0, Smoke::mf_const, 345, 9},	//24 QDomCharacterData::length() const
    {12, 180, 0, 0, Smoke::mf_const, 122, 10},	//25 QDomCharacterData::data() const
    {12, 597, 3, 1, 0, 0, 11},	//26 QDomCharacterData::setData(const QString&)
    {12, 293, 0, 0, Smoke::mf_const, 58, 12},	//27 QDomCharacterData::nodeType() const
    {12, 729, 0, 0, Smoke::mf_dtor, 0, 13 },	//28 QDomCharacterData::~QDomCharacterData()
    {13, 46, 0, 0, Smoke::mf_ctor, 28, 1},	//29 QDomComment::QDomComment()
    {13, 46, 19, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 28, 2},	//30 QDomComment::QDomComment(const QDomComment&)
    {13, 332, 19, 1, 0, 27, 3},	//31 QDomComment::operator=(const QDomComment&)
    {13, 293, 0, 0, Smoke::mf_const, 58, 4},	//32 QDomComment::nodeType() const
    {13, 730, 0, 0, Smoke::mf_dtor, 0, 5 },	//33 QDomComment::~QDomComment()
    {14, 48, 0, 0, Smoke::mf_ctor, 31, 1},	//34 QDomDocument::QDomDocument()
    {14, 48, 3, 1, Smoke::mf_ctor, 31, 2},	//35 QDomDocument::QDomDocument(const QString&)
    {14, 48, 21, 1, Smoke::mf_ctor, 31, 3},	//36 QDomDocument::QDomDocument(const QDomDocumentType&)
    {14, 48, 23, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 31, 4},	//37 QDomDocument::QDomDocument(const QDomDocument&)
    {14, 332, 23, 1, 0, 30, 5},	//38 QDomDocument::operator=(const QDomDocument&)
    {14, 170, 3, 1, 0, 38, 6},	//39 QDomDocument::createElement(const QString&)
    {14, 167, 0, 0, 0, 32, 7},	//40 QDomDocument::createDocumentFragment()
    {14, 178, 3, 1, 0, 69, 8},	//41 QDomDocument::createTextNode(const QString&)
    {14, 163, 3, 1, 0, 26, 9},	//42 QDomDocument::createComment(const QString&)
    {14, 161, 3, 1, 0, 20, 10},	//43 QDomDocument::createCDATASection(const QString&)
    {14, 176, 25, 2, 0, 66, 11},	//44 QDomDocument::createProcessingInstruction(const QString&, const QString&)
    {14, 157, 3, 1, 0, 17, 12},	//45 QDomDocument::createAttribute(const QString&)
    {14, 174, 3, 1, 0, 44, 13},	//46 QDomDocument::createEntityReference(const QString&)
    {14, 189, 3, 1, Smoke::mf_const, 59, 14},	//47 QDomDocument::elementsByTagName(const QString&) const
    {14, 238, 28, 2, 0, 54, 15},	//48 QDomDocument::importNode(const QDomNode&, bool)
    {14, 172, 25, 2, 0, 38, 16},	//49 QDomDocument::createElementNS(const QString&, const QString&)
    {14, 159, 25, 2, 0, 17, 17},	//50 QDomDocument::createAttributeNS(const QString&, const QString&)
    {14, 191, 25, 2, 0, 59, 18},	//51 QDomDocument::elementsByTagNameNS(const QString&, const QString&)
    {14, 187, 3, 1, 0, 38, 19},	//52 QDomDocument::elementById(const QString&)
    {14, 185, 0, 0, Smoke::mf_const, 35, 20},	//53 QDomDocument::doctype() const
    {14, 237, 0, 0, Smoke::mf_const, 47, 21},	//54 QDomDocument::implementation() const
    {14, 186, 0, 0, Smoke::mf_const, 38, 22},	//55 QDomDocument::documentElement() const
    {14, 293, 0, 0, Smoke::mf_const, 58, 23},	//56 QDomDocument::nodeType() const
    {14, 578, 31, 5, 0, 253, 24},	//57 QDomDocument::setContent(const QByteArray&, bool, QString*, int*, int*)
    {14, 578, 37, 5, 0, 253, 25},	//58 QDomDocument::setContent(const QString&, bool, QString*, int*, int*)
    {14, 578, 43, 5, 0, 253, 26},	//59 QDomDocument::setContent(QIODevice*, bool, QString*, int*, int*)
    {14, 578, 49, 5, 0, 253, 27},	//60 QDomDocument::setContent(QXmlInputSource*, bool, QString*, int*, int*)
    {14, 578, 55, 4, 0, 253, 28},	//61 QDomDocument::setContent(const QByteArray&, QString*, int*, int*)
    {14, 578, 60, 4, 0, 253, 29},	//62 QDomDocument::setContent(const QString&, QString*, int*, int*)
    {14, 578, 65, 4, 0, 253, 30},	//63 QDomDocument::setContent(QIODevice*, QString*, int*, int*)
    {14, 578, 70, 5, 0, 253, 31},	//64 QDomDocument::setContent(QXmlInputSource*, QXmlReader*, QString*, int*, int*)
    {14, 671, 76, 1, Smoke::mf_const, 122, 32},	//65 QDomDocument::toString(int) const
    {14, 658, 76, 1, Smoke::mf_const, 5, 33},	//66 QDomDocument::toByteArray(int) const
    {14, 578, 78, 2, 0, 253, 34},	//67 QDomDocument::setContent(const QByteArray&, bool)
    {14, 578, 81, 3, 0, 253, 35},	//68 QDomDocument::setContent(const QByteArray&, bool, QString*)
    {14, 578, 85, 4, 0, 253, 36},	//69 QDomDocument::setContent(const QByteArray&, bool, QString*, int*)
    {14, 578, 90, 2, 0, 253, 37},	//70 QDomDocument::setContent(const QString&, bool)
    {14, 578, 93, 3, 0, 253, 38},	//71 QDomDocument::setContent(const QString&, bool, QString*)
    {14, 578, 97, 4, 0, 253, 39},	//72 QDomDocument::setContent(const QString&, bool, QString*, int*)
    {14, 578, 102, 2, 0, 253, 40},	//73 QDomDocument::setContent(QIODevice*, bool)
    {14, 578, 105, 3, 0, 253, 41},	//74 QDomDocument::setContent(QIODevice*, bool, QString*)
    {14, 578, 109, 4, 0, 253, 42},	//75 QDomDocument::setContent(QIODevice*, bool, QString*, int*)
    {14, 578, 114, 2, 0, 253, 43},	//76 QDomDocument::setContent(QXmlInputSource*, bool)
    {14, 578, 117, 3, 0, 253, 44},	//77 QDomDocument::setContent(QXmlInputSource*, bool, QString*)
    {14, 578, 121, 4, 0, 253, 45},	//78 QDomDocument::setContent(QXmlInputSource*, bool, QString*, int*)
    {14, 578, 126, 1, 0, 253, 46},	//79 QDomDocument::setContent(const QByteArray&)
    {14, 578, 128, 2, 0, 253, 47},	//80 QDomDocument::setContent(const QByteArray&, QString*)
    {14, 578, 131, 3, 0, 253, 48},	//81 QDomDocument::setContent(const QByteArray&, QString*, int*)
    {14, 578, 3, 1, 0, 253, 49},	//82 QDomDocument::setContent(const QString&)
    {14, 578, 135, 2, 0, 253, 50},	//83 QDomDocument::setContent(const QString&, QString*)
    {14, 578, 138, 3, 0, 253, 51},	//84 QDomDocument::setContent(const QString&, QString*, int*)
    {14, 578, 142, 1, 0, 253, 52},	//85 QDomDocument::setContent(QIODevice*)
    {14, 578, 144, 2, 0, 253, 53},	//86 QDomDocument::setContent(QIODevice*, QString*)
    {14, 578, 147, 3, 0, 253, 54},	//87 QDomDocument::setContent(QIODevice*, QString*, int*)
    {14, 578, 151, 2, 0, 253, 55},	//88 QDomDocument::setContent(QXmlInputSource*, QXmlReader*)
    {14, 578, 154, 3, 0, 253, 56},	//89 QDomDocument::setContent(QXmlInputSource*, QXmlReader*, QString*)
    {14, 578, 158, 4, 0, 253, 57},	//90 QDomDocument::setContent(QXmlInputSource*, QXmlReader*, QString*, int*)
    {14, 671, 0, 0, Smoke::mf_const, 122, 58},	//91 QDomDocument::toString() const
    {14, 658, 0, 0, Smoke::mf_const, 5, 59},	//92 QDomDocument::toByteArray() const
    {14, 731, 0, 0, Smoke::mf_dtor, 0, 60 },	//93 QDomDocument::~QDomDocument()
    {15, 51, 0, 0, Smoke::mf_ctor, 34, 1},	//94 QDomDocumentFragment::QDomDocumentFragment()
    {15, 51, 163, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 34, 2},	//95 QDomDocumentFragment::QDomDocumentFragment(const QDomDocumentFragment&)
    {15, 332, 163, 1, 0, 33, 3},	//96 QDomDocumentFragment::operator=(const QDomDocumentFragment&)
    {15, 293, 0, 0, Smoke::mf_const, 58, 4},	//97 QDomDocumentFragment::nodeType() const
    {15, 732, 0, 0, Smoke::mf_dtor, 0, 5 },	//98 QDomDocumentFragment::~QDomDocumentFragment()
    {16, 53, 0, 0, Smoke::mf_ctor, 37, 1},	//99 QDomDocumentType::QDomDocumentType()
    {16, 53, 21, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 37, 2},	//100 QDomDocumentType::QDomDocumentType(const QDomDocumentType&)
    {16, 332, 21, 1, 0, 36, 3},	//101 QDomDocumentType::operator=(const QDomDocumentType&)
    {16, 282, 0, 0, Smoke::mf_const, 122, 4},	//102 QDomDocumentType::name() const
    {16, 202, 0, 0, Smoke::mf_const, 51, 5},	//103 QDomDocumentType::entities() const
    {16, 299, 0, 0, Smoke::mf_const, 51, 6},	//104 QDomDocumentType::notations() const
    {16, 378, 0, 0, Smoke::mf_const, 122, 7},	//105 QDomDocumentType::publicId() const
    {16, 653, 0, 0, Smoke::mf_const, 122, 8},	//106 QDomDocumentType::systemId() const
    {16, 252, 0, 0, Smoke::mf_const, 122, 9},	//107 QDomDocumentType::internalSubset() const
    {16, 293, 0, 0, Smoke::mf_const, 58, 10},	//108 QDomDocumentType::nodeType() const
    {16, 733, 0, 0, Smoke::mf_dtor, 0, 11 },	//109 QDomDocumentType::~QDomDocumentType()
    {17, 55, 0, 0, Smoke::mf_ctor, 40, 1},	//110 QDomElement::QDomElement()
    {17, 55, 165, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 40, 2},	//111 QDomElement::QDomElement(const QDomElement&)
    {17, 332, 165, 1, 0, 39, 3},	//112 QDomElement::operator=(const QDomElement&)
    {17, 128, 25, 2, Smoke::mf_const, 122, 4},	//113 QDomElement::attribute(const QString&, const QString&) const
    {17, 563, 25, 2, 0, 0, 5},	//114 QDomElement::setAttribute(const QString&, const QString&)
    {17, 563, 167, 2, 0, 0, 6},	//115 QDomElement::setAttribute(const QString&, long long)
    {17, 563, 170, 2, 0, 0, 7},	//116 QDomElement::setAttribute(const QString&, unsigned long long)
    {17, 563, 173, 2, 0, 0, 8},	//117 QDomElement::setAttribute(const QString&, int)
    {17, 563, 176, 2, 0, 0, 9},	//118 QDomElement::setAttribute(const QString&, unsigned int)
    {17, 563, 179, 2, 0, 0, 10},	//119 QDomElement::setAttribute(const QString&, float)
    {17, 563, 182, 2, 0, 0, 11},	//120 QDomElement::setAttribute(const QString&, double)
    {17, 541, 3, 1, 0, 0, 12},	//121 QDomElement::removeAttribute(const QString&)
    {17, 136, 3, 1, 0, 17, 13},	//122 QDomElement::attributeNode(const QString&)
    {17, 567, 1, 1, 0, 17, 14},	//123 QDomElement::setAttributeNode(const QDomAttr&)
    {17, 545, 1, 1, 0, 17, 15},	//124 QDomElement::removeAttributeNode(const QDomAttr&)
    {17, 189, 3, 1, Smoke::mf_const, 59, 16},	//125 QDomElement::elementsByTagName(const QString&) const
    {17, 222, 3, 1, Smoke::mf_const, 253, 17},	//126 QDomElement::hasAttribute(const QString&) const
    {17, 133, 185, 3, Smoke::mf_const, 122, 18},	//127 QDomElement::attributeNS(const QString, const QString&, const QString&) const
    {17, 565, 185, 3, 0, 0, 19},	//128 QDomElement::setAttributeNS(const QString, const QString&, const QString&)
    {17, 565, 189, 3, 0, 0, 20},	//129 QDomElement::setAttributeNS(const QString, const QString&, int)
    {17, 565, 193, 3, 0, 0, 21},	//130 QDomElement::setAttributeNS(const QString, const QString&, unsigned int)
    {17, 565, 197, 3, 0, 0, 22},	//131 QDomElement::setAttributeNS(const QString, const QString&, long long)
    {17, 565, 201, 3, 0, 0, 23},	//132 QDomElement::setAttributeNS(const QString, const QString&, unsigned long long)
    {17, 565, 205, 3, 0, 0, 24},	//133 QDomElement::setAttributeNS(const QString, const QString&, double)
    {17, 543, 25, 2, 0, 0, 25},	//134 QDomElement::removeAttributeNS(const QString&, const QString&)
    {17, 138, 25, 2, 0, 17, 26},	//135 QDomElement::attributeNodeNS(const QString&, const QString&)
    {17, 569, 1, 1, 0, 17, 27},	//136 QDomElement::setAttributeNodeNS(const QDomAttr&)
    {17, 191, 25, 2, Smoke::mf_const, 59, 28},	//137 QDomElement::elementsByTagNameNS(const QString&, const QString&) const
    {17, 224, 25, 2, Smoke::mf_const, 253, 29},	//138 QDomElement::hasAttributeNS(const QString&, const QString&) const
    {17, 654, 0, 0, Smoke::mf_const, 122, 30},	//139 QDomElement::tagName() const
    {17, 629, 3, 1, 0, 0, 31},	//140 QDomElement::setTagName(const QString&)
    {17, 140, 0, 0, Smoke::mf_const, 51, 32},	//141 QDomElement::attributes() const
    {17, 293, 0, 0, Smoke::mf_const, 58, 33},	//142 QDomElement::nodeType() const
    {17, 656, 0, 0, Smoke::mf_const, 122, 34},	//143 QDomElement::text() const
    {17, 128, 3, 1, Smoke::mf_const, 122, 35},	//144 QDomElement::attribute(const QString&) const
    {17, 133, 209, 2, Smoke::mf_const, 122, 36},	//145 QDomElement::attributeNS(const QString, const QString&) const
    {17, 734, 0, 0, Smoke::mf_dtor, 0, 37 },	//146 QDomElement::~QDomElement()
    {18, 57, 0, 0, Smoke::mf_ctor, 43, 1},	//147 QDomEntity::QDomEntity()
    {18, 57, 212, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 43, 2},	//148 QDomEntity::QDomEntity(const QDomEntity&)
    {18, 332, 212, 1, 0, 42, 3},	//149 QDomEntity::operator=(const QDomEntity&)
    {18, 378, 0, 0, Smoke::mf_const, 122, 4},	//150 QDomEntity::publicId() const
    {18, 653, 0, 0, Smoke::mf_const, 122, 5},	//151 QDomEntity::systemId() const
    {18, 298, 0, 0, Smoke::mf_const, 122, 6},	//152 QDomEntity::notationName() const
    {18, 293, 0, 0, Smoke::mf_const, 58, 7},	//153 QDomEntity::nodeType() const
    {18, 735, 0, 0, Smoke::mf_dtor, 0, 8 },	//154 QDomEntity::~QDomEntity()
    {19, 59, 0, 0, Smoke::mf_ctor, 46, 1},	//155 QDomEntityReference::QDomEntityReference()
    {19, 59, 214, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 46, 2},	//156 QDomEntityReference::QDomEntityReference(const QDomEntityReference&)
    {19, 332, 214, 1, 0, 45, 3},	//157 QDomEntityReference::operator=(const QDomEntityReference&)
    {19, 293, 0, 0, Smoke::mf_const, 58, 4},	//158 QDomEntityReference::nodeType() const
    {19, 736, 0, 0, Smoke::mf_dtor, 0, 5 },	//159 QDomEntityReference::~QDomEntityReference()
    {20, 61, 0, 0, Smoke::mf_ctor, 49, 1},	//160 QDomImplementation::QDomImplementation()
    {20, 61, 216, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 49, 2},	//161 QDomImplementation::QDomImplementation(const QDomImplementation&)
    {20, 332, 216, 1, 0, 48, 3},	//162 QDomImplementation::operator=(const QDomImplementation&)
    {20, 334, 216, 1, Smoke::mf_const, 253, 4},	//163 QDomImplementation::operator==(const QDomImplementation&) const
    {20, 300, 216, 1, Smoke::mf_const, 253, 5},	//164 QDomImplementation::operator!=(const QDomImplementation&) const
    {20, 229, 25, 2, Smoke::mf_const, 253, 6},	//165 QDomImplementation::hasFeature(const QString&, const QString&) const
    {20, 168, 218, 3, 0, 35, 7},	//166 QDomImplementation::createDocumentType(const QString&, const QString&, const QString&)
    {20, 165, 222, 3, 0, 29, 8},	//167 QDomImplementation::createDocument(const QString&, const QString&, const QDomDocumentType&)
    {20, 253, 0, 0, Smoke::mf_static, 50, 9},	//168 QDomImplementation::invalidDataPolicy()
    {20, 614, 226, 1, Smoke::mf_static, 0, 10},	//169 QDomImplementation::setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy)
    {20, 266, 0, 0, 0, 253, 11},	//170 QDomImplementation::isNull()
    {20, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 12},	//171 QDomImplementation::AcceptInvalidChars (enum)
    {20, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 13},	//172 QDomImplementation::DropInvalidChars (enum)
    {20, 118, 0, 0, Smoke::mf_static|Smoke::mf_enum, 50, 14},	//173 QDomImplementation::ReturnNullNode (enum)
    {20, 737, 0, 0, Smoke::mf_dtor, 0, 15 },	//174 QDomImplementation::~QDomImplementation()
    {21, 63, 0, 0, Smoke::mf_ctor, 53, 1},	//175 QDomNamedNodeMap::QDomNamedNodeMap()
    {21, 63, 228, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 53, 2},	//176 QDomNamedNodeMap::QDomNamedNodeMap(const QDomNamedNodeMap&)
    {21, 332, 228, 1, 0, 52, 3},	//177 QDomNamedNodeMap::operator=(const QDomNamedNodeMap&)
    {21, 334, 228, 1, Smoke::mf_const, 253, 4},	//178 QDomNamedNodeMap::operator==(const QDomNamedNodeMap&) const
    {21, 300, 228, 1, Smoke::mf_const, 253, 5},	//179 QDomNamedNodeMap::operator!=(const QDomNamedNodeMap&) const
    {21, 283, 3, 1, Smoke::mf_const, 54, 6},	//180 QDomNamedNodeMap::namedItem(const QString&) const
    {21, 618, 230, 1, 0, 54, 7},	//181 QDomNamedNodeMap::setNamedItem(const QDomNode&)
    {21, 549, 3, 1, 0, 54, 8},	//182 QDomNamedNodeMap::removeNamedItem(const QString&)
    {21, 271, 76, 1, Smoke::mf_const, 54, 9},	//183 QDomNamedNodeMap::item(int) const
    {21, 285, 25, 2, Smoke::mf_const, 54, 10},	//184 QDomNamedNodeMap::namedItemNS(const QString&, const QString&) const
    {21, 620, 230, 1, 0, 54, 11},	//185 QDomNamedNodeMap::setNamedItemNS(const QDomNode&)
    {21, 551, 25, 2, 0, 54, 12},	//186 QDomNamedNodeMap::removeNamedItemNS(const QString&, const QString&)
    {21, 276, 0, 0, Smoke::mf_const, 345, 13},	//187 QDomNamedNodeMap::length() const
    {21, 156, 0, 0, Smoke::mf_const, 336, 14},	//188 QDomNamedNodeMap::count() const
    {21, 633, 0, 0, Smoke::mf_const, 336, 15},	//189 QDomNamedNodeMap::size() const
    {21, 262, 0, 0, Smoke::mf_const, 253, 16},	//190 QDomNamedNodeMap::isEmpty() const
    {21, 153, 3, 1, Smoke::mf_const, 253, 17},	//191 QDomNamedNodeMap::contains(const QString&) const
    {21, 738, 0, 0, Smoke::mf_dtor, 0, 18 },	//192 QDomNamedNodeMap::~QDomNamedNodeMap()
    {22, 65, 0, 0, Smoke::mf_ctor, 56, 1},	//193 QDomNode::QDomNode()
    {22, 65, 230, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 56, 2},	//194 QDomNode::QDomNode(const QDomNode&)
    {22, 332, 230, 1, 0, 55, 3},	//195 QDomNode::operator=(const QDomNode&)
    {22, 334, 230, 1, Smoke::mf_const, 253, 4},	//196 QDomNode::operator==(const QDomNode&) const
    {22, 300, 230, 1, Smoke::mf_const, 253, 5},	//197 QDomNode::operator!=(const QDomNode&) const
    {22, 246, 232, 2, 0, 54, 6},	//198 QDomNode::insertBefore(const QDomNode&, const QDomNode&)
    {22, 244, 232, 2, 0, 54, 7},	//199 QDomNode::insertAfter(const QDomNode&, const QDomNode&)
    {22, 553, 232, 2, 0, 54, 8},	//200 QDomNode::replaceChild(const QDomNode&, const QDomNode&)
    {22, 547, 230, 1, 0, 54, 9},	//201 QDomNode::removeChild(const QDomNode&)
    {22, 122, 230, 1, 0, 54, 10},	//202 QDomNode::appendChild(const QDomNode&)
    {22, 227, 0, 0, Smoke::mf_const, 253, 11},	//203 QDomNode::hasChildNodes() const
    {22, 147, 235, 1, Smoke::mf_const, 54, 12},	//204 QDomNode::cloneNode(bool) const
    {22, 295, 0, 0, 0, 0, 13},	//205 QDomNode::normalize()
    {22, 268, 25, 2, Smoke::mf_const, 253, 14},	//206 QDomNode::isSupported(const QString&, const QString&) const
    {22, 292, 0, 0, Smoke::mf_const, 122, 15},	//207 QDomNode::nodeName() const
    {22, 293, 0, 0, Smoke::mf_const, 58, 16},	//208 QDomNode::nodeType() const
    {22, 358, 0, 0, Smoke::mf_const, 54, 17},	//209 QDomNode::parentNode() const
    {22, 145, 0, 0, Smoke::mf_const, 59, 18},	//210 QDomNode::childNodes() const
    {22, 216, 0, 0, Smoke::mf_const, 54, 19},	//211 QDomNode::firstChild() const
    {22, 273, 0, 0, Smoke::mf_const, 54, 20},	//212 QDomNode::lastChild() const
    {22, 368, 0, 0, Smoke::mf_const, 54, 21},	//213 QDomNode::previousSibling() const
    {22, 289, 0, 0, Smoke::mf_const, 54, 22},	//214 QDomNode::nextSibling() const
    {22, 140, 0, 0, Smoke::mf_const, 51, 23},	//215 QDomNode::attributes() const
    {22, 356, 0, 0, Smoke::mf_const, 29, 24},	//216 QDomNode::ownerDocument() const
    {22, 287, 0, 0, Smoke::mf_const, 122, 25},	//217 QDomNode::namespaceURI() const
    {22, 279, 0, 0, Smoke::mf_const, 122, 26},	//218 QDomNode::localName() const
    {22, 226, 0, 0, Smoke::mf_const, 253, 27},	//219 QDomNode::hasAttributes() const
    {22, 294, 0, 0, Smoke::mf_const, 122, 28},	//220 QDomNode::nodeValue() const
    {22, 622, 3, 1, 0, 0, 29},	//221 QDomNode::setNodeValue(const QString&)
    {22, 364, 0, 0, Smoke::mf_const, 122, 30},	//222 QDomNode::prefix() const
    {22, 624, 3, 1, 0, 0, 31},	//223 QDomNode::setPrefix(const QString&)
    {22, 254, 0, 0, Smoke::mf_const, 253, 32},	//224 QDomNode::isAttr() const
    {22, 255, 0, 0, Smoke::mf_const, 253, 33},	//225 QDomNode::isCDATASection() const
    {22, 259, 0, 0, Smoke::mf_const, 253, 34},	//226 QDomNode::isDocumentFragment() const
    {22, 258, 0, 0, Smoke::mf_const, 253, 35},	//227 QDomNode::isDocument() const
    {22, 260, 0, 0, Smoke::mf_const, 253, 36},	//228 QDomNode::isDocumentType() const
    {22, 261, 0, 0, Smoke::mf_const, 253, 37},	//229 QDomNode::isElement() const
    {22, 264, 0, 0, Smoke::mf_const, 253, 38},	//230 QDomNode::isEntityReference() const
    {22, 270, 0, 0, Smoke::mf_const, 253, 39},	//231 QDomNode::isText() const
    {22, 263, 0, 0, Smoke::mf_const, 253, 40},	//232 QDomNode::isEntity() const
    {22, 265, 0, 0, Smoke::mf_const, 253, 41},	//233 QDomNode::isNotation() const
    {22, 267, 0, 0, Smoke::mf_const, 253, 42},	//234 QDomNode::isProcessingInstruction() const
    {22, 256, 0, 0, Smoke::mf_const, 253, 43},	//235 QDomNode::isCharacterData() const
    {22, 257, 0, 0, Smoke::mf_const, 253, 44},	//236 QDomNode::isComment() const
    {22, 283, 3, 1, Smoke::mf_const, 54, 45},	//237 QDomNode::namedItem(const QString&) const
    {22, 266, 0, 0, Smoke::mf_const, 253, 46},	//238 QDomNode::isNull() const
    {22, 146, 0, 0, 0, 0, 47},	//239 QDomNode::clear()
    {22, 657, 0, 0, Smoke::mf_const, 17, 48},	//240 QDomNode::toAttr() const
    {22, 660, 0, 0, Smoke::mf_const, 20, 49},	//241 QDomNode::toCDATASection() const
    {22, 664, 0, 0, Smoke::mf_const, 32, 50},	//242 QDomNode::toDocumentFragment() const
    {22, 663, 0, 0, Smoke::mf_const, 29, 51},	//243 QDomNode::toDocument() const
    {22, 665, 0, 0, Smoke::mf_const, 35, 52},	//244 QDomNode::toDocumentType() const
    {22, 666, 0, 0, Smoke::mf_const, 38, 53},	//245 QDomNode::toElement() const
    {22, 668, 0, 0, Smoke::mf_const, 44, 54},	//246 QDomNode::toEntityReference() const
    {22, 673, 0, 0, Smoke::mf_const, 69, 55},	//247 QDomNode::toText() const
    {22, 667, 0, 0, Smoke::mf_const, 41, 56},	//248 QDomNode::toEntity() const
    {22, 669, 0, 0, Smoke::mf_const, 63, 57},	//249 QDomNode::toNotation() const
    {22, 670, 0, 0, Smoke::mf_const, 66, 58},	//250 QDomNode::toProcessingInstruction() const
    {22, 661, 0, 0, Smoke::mf_const, 23, 59},	//251 QDomNode::toCharacterData() const
    {22, 662, 0, 0, Smoke::mf_const, 26, 60},	//252 QDomNode::toComment() const
    {22, 560, 237, 2, Smoke::mf_const, 0, 61},	//253 QDomNode::save(QTextStream&, int) const
    {22, 560, 240, 3, Smoke::mf_const, 0, 62},	//254 QDomNode::save(QTextStream&, int, QDomNode::EncodingPolicy) const
    {22, 217, 3, 1, Smoke::mf_const, 38, 63},	//255 QDomNode::firstChildElement(const QString&) const
    {22, 274, 3, 1, Smoke::mf_const, 38, 64},	//256 QDomNode::lastChildElement(const QString&) const
    {22, 369, 3, 1, Smoke::mf_const, 38, 65},	//257 QDomNode::previousSiblingElement(const QString&) const
    {22, 290, 3, 1, Smoke::mf_const, 38, 66},	//258 QDomNode::nextSiblingElement(const QString&) const
    {22, 278, 0, 0, Smoke::mf_const, 336, 67},	//259 QDomNode::lineNumber() const
    {22, 150, 0, 0, Smoke::mf_const, 336, 68},	//260 QDomNode::columnNumber() const
    {22, 147, 0, 0, Smoke::mf_const, 54, 69},	//261 QDomNode::cloneNode() const
    {22, 217, 0, 0, Smoke::mf_const, 38, 70},	//262 QDomNode::firstChildElement() const
    {22, 274, 0, 0, Smoke::mf_const, 38, 71},	//263 QDomNode::lastChildElement() const
    {22, 369, 0, 0, Smoke::mf_const, 38, 72},	//264 QDomNode::previousSiblingElement() const
    {22, 290, 0, 0, Smoke::mf_const, 38, 73},	//265 QDomNode::nextSiblingElement() const
    {22, 236, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 62, 74},	//266 QDomNode::impl() const
    {22, 612, 244, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 75},	//267 QDomNode::setImpl(QDomNodePrivate*)
    {22, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 76},	//268 QDomNode::ElementNode (enum)
    {22, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 77},	//269 QDomNode::AttributeNode (enum)
    {22, 119, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 78},	//270 QDomNode::TextNode (enum)
    {22, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 79},	//271 QDomNode::CDATASectionNode (enum)
    {22, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 80},	//272 QDomNode::EntityReferenceNode (enum)
    {22, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 81},	//273 QDomNode::EntityNode (enum)
    {22, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 82},	//274 QDomNode::ProcessingInstructionNode (enum)
    {22, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 83},	//275 QDomNode::CommentNode (enum)
    {22, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 84},	//276 QDomNode::DocumentNode (enum)
    {22, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 85},	//277 QDomNode::DocumentTypeNode (enum)
    {22, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 86},	//278 QDomNode::DocumentFragmentNode (enum)
    {22, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 87},	//279 QDomNode::NotationNode (enum)
    {22, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 88},	//280 QDomNode::BaseNode (enum)
    {22, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 89},	//281 QDomNode::CharacterDataNode (enum)
    {22, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 57, 90},	//282 QDomNode::EncodingFromDocument (enum)
    {22, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 57, 91},	//283 QDomNode::EncodingFromTextStream (enum)
    {22, 739, 0, 0, Smoke::mf_dtor, 0, 92 },	//284 QDomNode::~QDomNode()
    {23, 67, 0, 0, Smoke::mf_ctor, 61, 1},	//285 QDomNodeList::QDomNodeList()
    {23, 67, 246, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 61, 2},	//286 QDomNodeList::QDomNodeList(const QDomNodeList&)
    {23, 332, 246, 1, 0, 60, 3},	//287 QDomNodeList::operator=(const QDomNodeList&)
    {23, 334, 246, 1, Smoke::mf_const, 253, 4},	//288 QDomNodeList::operator==(const QDomNodeList&) const
    {23, 300, 246, 1, Smoke::mf_const, 253, 5},	//289 QDomNodeList::operator!=(const QDomNodeList&) const
    {23, 271, 76, 1, Smoke::mf_const, 54, 6},	//290 QDomNodeList::item(int) const
    {23, 126, 76, 1, Smoke::mf_const, 54, 7},	//291 QDomNodeList::at(int) const
    {23, 276, 0, 0, Smoke::mf_const, 345, 8},	//292 QDomNodeList::length() const
    {23, 156, 0, 0, Smoke::mf_const, 336, 9},	//293 QDomNodeList::count() const
    {23, 633, 0, 0, Smoke::mf_const, 336, 10},	//294 QDomNodeList::size() const
    {23, 262, 0, 0, Smoke::mf_const, 253, 11},	//295 QDomNodeList::isEmpty() const
    {23, 740, 0, 0, Smoke::mf_dtor, 0, 12 },	//296 QDomNodeList::~QDomNodeList()
    {25, 69, 0, 0, Smoke::mf_ctor, 65, 1},	//297 QDomNotation::QDomNotation()
    {25, 69, 248, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 65, 2},	//298 QDomNotation::QDomNotation(const QDomNotation&)
    {25, 332, 248, 1, 0, 64, 3},	//299 QDomNotation::operator=(const QDomNotation&)
    {25, 378, 0, 0, Smoke::mf_const, 122, 4},	//300 QDomNotation::publicId() const
    {25, 653, 0, 0, Smoke::mf_const, 122, 5},	//301 QDomNotation::systemId() const
    {25, 293, 0, 0, Smoke::mf_const, 58, 6},	//302 QDomNotation::nodeType() const
    {25, 741, 0, 0, Smoke::mf_dtor, 0, 7 },	//303 QDomNotation::~QDomNotation()
    {26, 71, 0, 0, Smoke::mf_ctor, 68, 1},	//304 QDomProcessingInstruction::QDomProcessingInstruction()
    {26, 71, 250, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 68, 2},	//305 QDomProcessingInstruction::QDomProcessingInstruction(const QDomProcessingInstruction&)
    {26, 332, 250, 1, 0, 67, 3},	//306 QDomProcessingInstruction::operator=(const QDomProcessingInstruction&)
    {26, 655, 0, 0, Smoke::mf_const, 122, 4},	//307 QDomProcessingInstruction::target() const
    {26, 180, 0, 0, Smoke::mf_const, 122, 5},	//308 QDomProcessingInstruction::data() const
    {26, 597, 3, 1, 0, 0, 6},	//309 QDomProcessingInstruction::setData(const QString&)
    {26, 293, 0, 0, Smoke::mf_const, 58, 7},	//310 QDomProcessingInstruction::nodeType() const
    {26, 742, 0, 0, Smoke::mf_dtor, 0, 8 },	//311 QDomProcessingInstruction::~QDomProcessingInstruction()
    {27, 73, 0, 0, Smoke::mf_ctor, 71, 1},	//312 QDomText::QDomText()
    {27, 73, 252, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 71, 2},	//313 QDomText::QDomText(const QDomText&)
    {27, 332, 252, 1, 0, 70, 3},	//314 QDomText::operator=(const QDomText&)
    {27, 639, 76, 1, 0, 69, 4},	//315 QDomText::splitText(int)
    {27, 293, 0, 0, Smoke::mf_const, 58, 5},	//316 QDomText::nodeType() const
    {27, 743, 0, 0, Smoke::mf_dtor, 0, 6 },	//317 QDomText::~QDomText()
    {29, 464, 254, 1, Smoke::mf_static, 336, 1},	//318 QGlobalSpace::qRound(double)
    {29, 353, 256, 2, Smoke::mf_static, 80, 2},	//319 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {29, 380, 254, 1, Smoke::mf_static, 334, 3},	//320 QGlobalSpace::qAcos(double)
    {29, 347, 259, 2, Smoke::mf_static, 10, 4},	//321 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {29, 353, 262, 2, Smoke::mf_static, 78, 5},	//322 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {29, 347, 265, 2, Smoke::mf_static, 10, 6},	//323 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {29, 384, 0, 0, Smoke::mf_static, 122, 7},	//324 QGlobalSpace::qAppName()
    {29, 353, 268, 2, Smoke::mf_static, 106, 8},	//325 QGlobalSpace::operator|(Qt::WindowType, int)
    {29, 513, 271, 3, Smoke::mf_static, 256, 9},	//326 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {29, 425, 275, 1, Smoke::mf_static, 345, 10},	//327 QGlobalSpace::qHash(unsigned int)
    {29, 425, 277, 1, Smoke::mf_static, 345, 11},	//328 QGlobalSpace::qHash(char)
    {29, 307, 279, 2, Smoke::mf_static, 302, 12},	//329 QGlobalSpace::operator*(const QSizeF&, double)
    {29, 324, 282, 2, Smoke::mf_static, 13, 13},	//330 QGlobalSpace::operator<<(QDebug, const QLine&)
    {29, 491, 285, 1, Smoke::mf_static, 5, 14},	//331 QGlobalSpace::qgetenv(const char*)
    {29, 320, 287, 2, Smoke::mf_static, 253, 15},	//332 QGlobalSpace::operator<(const QByteArray&, const char*)
    {29, 347, 290, 2, Smoke::mf_static, 10, 16},	//333 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {29, 353, 293, 2, Smoke::mf_static, 94, 17},	//334 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {29, 334, 296, 2, Smoke::mf_static, 253, 18},	//335 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {29, 324, 299, 2, Smoke::mf_static, 13, 19},	//336 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {29, 334, 302, 2, Smoke::mf_static, 253, 20},	//337 QGlobalSpace::operator==(const QSize&, const QSize&)
    {29, 411, 254, 1, Smoke::mf_static, 334, 21},	//338 QGlobalSpace::qFastSin(double)
    {29, 310, 305, 2, Smoke::mf_static, 304, 22},	//339 QGlobalSpace::operator+(QChar, const QString&)
    {29, 511, 308, 3, Smoke::mf_static, 336, 23},	//340 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {29, 328, 312, 2, Smoke::mf_static, 253, 24},	//341 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {29, 539, 315, 4, Smoke::mf_static, 336, 25},	//342 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {29, 300, 320, 2, Smoke::mf_static, 253, 26},	//343 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {29, 300, 323, 2, Smoke::mf_static, 253, 27},	//344 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {29, 310, 326, 2, Smoke::mf_static, 304, 28},	//345 QGlobalSpace::operator+(const QString&, QChar)
    {29, 310, 302, 2, Smoke::mf_static, 300, 29},	//346 QGlobalSpace::operator+(const QSize&, const QSize&)
    {29, 517, 329, 2, Smoke::mf_static, 345, 30},	//347 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {29, 334, 312, 2, Smoke::mf_static, 253, 31},	//348 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {29, 347, 332, 2, Smoke::mf_static, 10, 32},	//349 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {29, 324, 335, 2, Smoke::mf_static, 13, 33},	//350 QGlobalSpace::operator<<(QDebug, const QDate&)
    {29, 300, 338, 2, Smoke::mf_static, 253, 34},	//351 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {29, 353, 341, 2, Smoke::mf_static, 100, 35},	//352 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {29, 324, 344, 2, Smoke::mf_static, 13, 36},	//353 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {29, 300, 347, 2, Smoke::mf_static, 253, 37},	//354 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {29, 425, 350, 1, Smoke::mf_static, 345, 38},	//355 QGlobalSpace::qHash(unsigned char)
    {29, 535, 352, 5, Smoke::mf_static, 0, 39},	//356 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {29, 334, 358, 2, Smoke::mf_static, 253, 40},	//357 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {29, 528, 76, 1, Smoke::mf_static, 122, 41},	//358 QGlobalSpace::qt_error_string(int)
    {29, 528, 0, 0, Smoke::mf_static, 122, 42},	//359 QGlobalSpace::qt_error_string()
    {29, 347, 361, 2, Smoke::mf_static, 10, 43},	//360 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {29, 439, 364, 1, Smoke::mf_static, 253, 44},	//361 QGlobalSpace::qIsNull(float)
    {29, 353, 366, 2, Smoke::mf_static, 106, 45},	//362 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {29, 455, 0, 0, Smoke::mf_static, 334, 46},	//363 QGlobalSpace::qQNaN()
    {29, 300, 369, 2, Smoke::mf_static, 253, 47},	//364 QGlobalSpace::operator!=(QChar, QChar)
    {29, 471, 372, 1, Smoke::mf_static, 135, 48},	//365 QGlobalSpace::qSetPadChar(QChar)
    {29, 347, 374, 2, Smoke::mf_static, 10, 49},	//366 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {29, 315, 320, 2, Smoke::mf_static, 294, 50},	//367 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {29, 324, 377, 2, Smoke::mf_static, 13, 51},	//368 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {29, 353, 380, 2, Smoke::mf_static, 82, 52},	//369 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {29, 519, 383, 2, Smoke::mf_static, 122, 53},	//370 QGlobalSpace::qtTrId(const char*, int)
    {29, 519, 285, 1, Smoke::mf_static, 122, 54},	//371 QGlobalSpace::qtTrId(const char*)
    {29, 389, 386, 2, Smoke::mf_static, 334, 55},	//372 QGlobalSpace::qAtan2(double, double)
    {29, 324, 389, 2, Smoke::mf_static, 10, 56},	//373 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {29, 425, 392, 1, Smoke::mf_static, 345, 57},	//374 QGlobalSpace::qHash(short)
    {29, 324, 394, 2, Smoke::mf_static, 10, 58},	//375 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {29, 353, 397, 2, Smoke::mf_static, 99, 59},	//376 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {29, 433, 254, 1, Smoke::mf_static, 253, 60},	//377 QGlobalSpace::qIsFinite(double)
    {29, 353, 400, 2, Smoke::mf_static, 94, 61},	//378 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {29, 498, 287, 2, Smoke::mf_static, 336, 62},	//379 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {29, 505, 285, 1, Smoke::mf_static, 256, 63},	//380 QGlobalSpace::qstrdup(const char*)
    {29, 425, 403, 1, Smoke::mf_static, 345, 64},	//381 QGlobalSpace::qHash(long)
    {29, 353, 405, 2, Smoke::mf_static, 93, 65},	//382 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {29, 498, 408, 2, Smoke::mf_static, 336, 66},	//383 QGlobalSpace::qstrcmp(const char*, const char*)
    {29, 324, 411, 2, Smoke::mf_static, 10, 67},	//384 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {29, 300, 414, 2, Smoke::mf_static, 253, 68},	//385 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {29, 310, 417, 2, Smoke::mf_static, 258, 69},	//386 QGlobalSpace::operator+(const char*, const QByteArray&)
    {29, 425, 420, 1, Smoke::mf_static, 345, 70},	//387 QGlobalSpace::qHash(const QBitArray&)
    {29, 353, 422, 2, Smoke::mf_static, 78, 71},	//388 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {29, 503, 425, 2, Smoke::mf_static, 256, 72},	//389 QGlobalSpace::qstrcpy(char*, const char*)
    {29, 353, 428, 2, Smoke::mf_static, 2, 73},	//390 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {29, 300, 431, 2, Smoke::mf_static, 253, 74},	//391 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {29, 320, 417, 2, Smoke::mf_static, 253, 75},	//392 QGlobalSpace::operator<(const char*, const QByteArray&)
    {29, 387, 254, 1, Smoke::mf_static, 334, 76},	//393 QGlobalSpace::qAtan(double)
    {29, 498, 417, 2, Smoke::mf_static, 336, 77},	//394 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {29, 343, 369, 2, Smoke::mf_static, 253, 78},	//395 QGlobalSpace::operator>=(QChar, QChar)
    {29, 353, 434, 2, Smoke::mf_static, 95, 79},	//396 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {29, 328, 369, 2, Smoke::mf_static, 253, 80},	//397 QGlobalSpace::operator<=(QChar, QChar)
    {29, 307, 437, 2, Smoke::mf_static, 294, 81},	//398 QGlobalSpace::operator*(const QPointF&, double)
    {29, 324, 440, 2, Smoke::mf_static, 13, 82},	//399 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {29, 334, 443, 2, Smoke::mf_static, 253, 83},	//400 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {29, 353, 446, 2, Smoke::mf_static, 75, 84},	//401 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {29, 526, 383, 2, Smoke::mf_static, 0, 85},	//402 QGlobalSpace::qt_check_pointer(const char*, int)
    {29, 334, 414, 2, Smoke::mf_static, 253, 86},	//403 QGlobalSpace::operator==(QString::Null, QString::Null)
    {29, 300, 449, 2, Smoke::mf_static, 253, 87},	//404 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {29, 347, 452, 2, Smoke::mf_static, 10, 88},	//405 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {29, 328, 455, 2, Smoke::mf_static, 253, 89},	//406 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {29, 484, 458, 2, Smoke::mf_static, 5, 90},	//407 QGlobalSpace::qUncompress(const unsigned char*, int)
    {29, 396, 461, 2, Smoke::mf_static, 5, 91},	//408 QGlobalSpace::qCompress(const QByteArray&, int)
    {29, 396, 126, 1, Smoke::mf_static, 5, 92},	//409 QGlobalSpace::qCompress(const QByteArray&)
    {29, 324, 464, 2, Smoke::mf_static, 10, 93},	//410 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {29, 347, 467, 2, Smoke::mf_static, 132, 94},	//411 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {29, 353, 470, 2, Smoke::mf_static, 106, 95},	//412 QGlobalSpace::operator|(Qt::DropAction, int)
    {29, 458, 473, 4, Smoke::mf_static, 352, 96},	//413 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {29, 353, 478, 2, Smoke::mf_static, 106, 97},	//414 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {29, 478, 254, 1, Smoke::mf_static, 334, 98},	//415 QGlobalSpace::qSqrt(double)
    {29, 324, 481, 2, Smoke::mf_static, 10, 99},	//416 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {29, 324, 467, 2, Smoke::mf_static, 132, 100},	//417 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {29, 324, 484, 2, Smoke::mf_static, 13, 101},	//418 QGlobalSpace::operator<<(QDebug, const QRect&)
    {29, 339, 312, 2, Smoke::mf_static, 253, 102},	//419 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {29, 343, 455, 2, Smoke::mf_static, 253, 103},	//420 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {29, 431, 364, 1, Smoke::mf_static, 336, 104},	//421 QGlobalSpace::qIntCast(float)
    {29, 353, 487, 2, Smoke::mf_static, 85, 105},	//422 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {29, 334, 320, 2, Smoke::mf_static, 253, 106},	//423 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {29, 339, 417, 2, Smoke::mf_static, 253, 107},	//424 QGlobalSpace::operator>(const char*, const QByteArray&)
    {29, 407, 254, 1, Smoke::mf_static, 334, 108},	//425 QGlobalSpace::qFabs(double)
    {29, 425, 490, 1, Smoke::mf_static, 345, 109},	//426 QGlobalSpace::qHash(unsigned short)
    {29, 334, 417, 2, Smoke::mf_static, 253, 110},	//427 QGlobalSpace::operator==(const char*, const QByteArray&)
    {29, 353, 492, 2, Smoke::mf_static, 99, 111},	//428 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {29, 353, 495, 2, Smoke::mf_static, 84, 112},	//429 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {29, 324, 498, 2, Smoke::mf_static, 13, 113},	//430 QGlobalSpace::operator<<(QDebug, const QDir&)
    {29, 353, 501, 2, Smoke::mf_static, 97, 114},	//431 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {29, 300, 312, 2, Smoke::mf_static, 253, 115},	//432 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {29, 456, 504, 2, Smoke::mf_static, 352, 116},	//433 QGlobalSpace::qRealloc(void*, size_t)
    {29, 353, 507, 2, Smoke::mf_static, 90, 117},	//434 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {29, 353, 510, 2, Smoke::mf_static, 106, 118},	//435 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {29, 334, 513, 2, Smoke::mf_static, 253, 119},	//436 QGlobalSpace::operator==(const QString&, QString::Null)
    {29, 353, 516, 2, Smoke::mf_static, 91, 120},	//437 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {29, 488, 0, 0, Smoke::mf_static, 13, 121},	//438 QGlobalSpace::qWarning()
    {29, 353, 519, 2, Smoke::mf_static, 106, 122},	//439 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {29, 421, 386, 2, Smoke::mf_static, 253, 123},	//440 QGlobalSpace::qFuzzyCompare(double, double)
    {29, 353, 522, 2, Smoke::mf_static, 81, 124},	//441 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {29, 353, 525, 2, Smoke::mf_static, 83, 125},	//442 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {29, 347, 528, 2, Smoke::mf_static, 10, 126},	//443 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {29, 324, 531, 2, Smoke::mf_static, 10, 127},	//444 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {29, 300, 534, 2, Smoke::mf_static, 253, 128},	//445 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {29, 307, 537, 2, Smoke::mf_static, 300, 129},	//446 QGlobalSpace::operator*(double, const QSize&)
    {29, 353, 540, 2, Smoke::mf_static, 89, 130},	//447 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {29, 404, 0, 0, Smoke::mf_static, 13, 131},	//448 QGlobalSpace::qDebug()
    {29, 425, 543, 1, Smoke::mf_static, 345, 132},	//449 QGlobalSpace::qHash(long long)
    {29, 353, 545, 2, Smoke::mf_static, 96, 133},	//450 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {29, 307, 548, 2, Smoke::mf_static, 292, 134},	//451 QGlobalSpace::operator*(const QPoint&, float)
    {29, 315, 551, 1, Smoke::mf_static, 294, 135},	//452 QGlobalSpace::operator-(const QPointF&)
    {29, 353, 553, 2, Smoke::mf_static, 106, 136},	//453 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {29, 435, 364, 1, Smoke::mf_static, 253, 137},	//454 QGlobalSpace::qIsInf(float)
    {29, 353, 556, 2, Smoke::mf_static, 106, 138},	//455 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {29, 328, 417, 2, Smoke::mf_static, 253, 139},	//456 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {29, 324, 559, 2, Smoke::mf_static, 13, 140},	//457 QGlobalSpace::operator<<(QDebug, const QSize&)
    {29, 300, 455, 2, Smoke::mf_static, 253, 141},	//458 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {29, 339, 369, 2, Smoke::mf_static, 253, 142},	//459 QGlobalSpace::operator>(QChar, QChar)
    {29, 318, 279, 2, Smoke::mf_static, 302, 143},	//460 QGlobalSpace::operator/(const QSizeF&, double)
    {29, 353, 562, 2, Smoke::mf_static, 106, 144},	//461 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {29, 324, 565, 2, Smoke::mf_static, 13, 145},	//462 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {29, 498, 455, 2, Smoke::mf_static, 336, 146},	//463 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {29, 305, 428, 2, Smoke::mf_static, 2, 147},	//464 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {29, 315, 568, 1, Smoke::mf_static, 292, 148},	//465 QGlobalSpace::operator-(const QPoint&)
    {29, 324, 570, 2, Smoke::mf_static, 13, 149},	//466 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {29, 343, 287, 2, Smoke::mf_static, 253, 150},	//467 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {29, 324, 573, 2, Smoke::mf_static, 10, 151},	//468 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {29, 353, 576, 2, Smoke::mf_static, 85, 152},	//469 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {29, 320, 312, 2, Smoke::mf_static, 253, 153},	//470 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {29, 300, 579, 2, Smoke::mf_static, 253, 154},	//471 QGlobalSpace::operator!=(QBool, QBool)
    {29, 300, 582, 2, Smoke::mf_static, 253, 155},	//472 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {29, 425, 585, 1, Smoke::mf_static, 345, 156},	//473 QGlobalSpace::qHash(unsigned long long)
    {29, 413, 285, 1, Smoke::mf_static, 330, 157},	//474 QGlobalSpace::qFlagLocation(const char*)
    {29, 318, 437, 2, Smoke::mf_static, 294, 158},	//475 QGlobalSpace::operator/(const QPointF&, double)
    {29, 431, 254, 1, Smoke::mf_static, 336, 159},	//476 QGlobalSpace::qIntCast(double)
    {29, 353, 587, 2, Smoke::mf_static, 106, 160},	//477 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {29, 484, 126, 1, Smoke::mf_static, 5, 161},	//478 QGlobalSpace::qUncompress(const QByteArray&)
    {29, 324, 590, 2, Smoke::mf_static, 13, 162},	//479 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {29, 300, 296, 2, Smoke::mf_static, 253, 163},	//480 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {29, 334, 593, 2, Smoke::mf_static, 253, 164},	//481 QGlobalSpace::operator==(QString::Null, const QString&)
    {29, 328, 287, 2, Smoke::mf_static, 253, 165},	//482 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {29, 409, 254, 1, Smoke::mf_static, 334, 166},	//483 QGlobalSpace::qFastCos(double)
    {29, 462, 596, 1, Smoke::mf_static, 0, 167},	//484 QGlobalSpace::qRemovePostRoutine(void(*)())
    {29, 353, 598, 2, Smoke::mf_static, 83, 168},	//485 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {29, 353, 601, 2, Smoke::mf_static, 91, 169},	//486 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {29, 347, 604, 2, Smoke::mf_static, 10, 170},	//487 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {29, 421, 607, 2, Smoke::mf_static, 253, 171},	//488 QGlobalSpace::qFuzzyCompare(float, float)
    {29, 324, 610, 2, Smoke::mf_static, 10, 172},	//489 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {29, 394, 329, 2, Smoke::mf_static, 348, 173},	//490 QGlobalSpace::qChecksum(const char*, unsigned int)
    {29, 347, 613, 2, Smoke::mf_static, 10, 174},	//491 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {29, 307, 616, 2, Smoke::mf_static, 300, 175},	//492 QGlobalSpace::operator*(const QSize&, double)
    {29, 429, 619, 1, Smoke::mf_static, 351, 176},	//493 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {29, 315, 431, 2, Smoke::mf_static, 292, 177},	//494 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {29, 324, 621, 2, Smoke::mf_static, 132, 178},	//495 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {29, 353, 624, 2, Smoke::mf_static, 88, 179},	//496 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {29, 347, 627, 2, Smoke::mf_static, 10, 180},	//497 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {29, 353, 630, 2, Smoke::mf_static, 76, 181},	//498 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {29, 403, 0, 0, Smoke::mf_static, 13, 182},	//499 QGlobalSpace::qCritical()
    {29, 318, 633, 2, Smoke::mf_static, 292, 183},	//500 QGlobalSpace::operator/(const QPoint&, double)
    {29, 453, 386, 2, Smoke::mf_static, 334, 184},	//501 QGlobalSpace::qPow(double, double)
    {29, 324, 636, 2, Smoke::mf_static, 10, 185},	//502 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {29, 324, 639, 2, Smoke::mf_static, 10, 186},	//503 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {29, 300, 593, 2, Smoke::mf_static, 253, 187},	//504 QGlobalSpace::operator!=(QString::Null, const QString&)
    {29, 425, 76, 1, Smoke::mf_static, 345, 188},	//505 QGlobalSpace::qHash(int)
    {29, 353, 642, 2, Smoke::mf_static, 92, 189},	//506 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {29, 532, 0, 0, Smoke::mf_static, 0, 190},	//507 QGlobalSpace::qt_noop()
    {29, 334, 323, 2, Smoke::mf_static, 253, 191},	//508 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {29, 353, 645, 2, Smoke::mf_static, 106, 192},	//509 QGlobalSpace::operator|(Qt::WindowState, int)
    {29, 300, 358, 2, Smoke::mf_static, 253, 193},	//510 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {29, 347, 648, 2, Smoke::mf_static, 10, 194},	//511 QGlobalSpace::operator>>(QDataStream&, QString&)
    {29, 533, 651, 3, Smoke::mf_static, 113, 195},	//512 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {29, 324, 655, 2, Smoke::mf_static, 10, 196},	//513 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {29, 334, 579, 2, Smoke::mf_static, 253, 197},	//514 QGlobalSpace::operator==(QBool, QBool)
    {29, 347, 658, 2, Smoke::mf_static, 10, 198},	//515 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {29, 405, 254, 1, Smoke::mf_static, 334, 199},	//516 QGlobalSpace::qExp(double)
    {29, 347, 661, 2, Smoke::mf_static, 10, 200},	//517 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {29, 353, 664, 2, Smoke::mf_static, 95, 201},	//518 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {29, 334, 667, 2, Smoke::mf_static, 253, 202},	//519 QGlobalSpace::operator==(bool, QBool)
    {29, 353, 670, 2, Smoke::mf_static, 86, 203},	//520 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {29, 347, 673, 2, Smoke::mf_static, 10, 204},	//521 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {29, 423, 254, 1, Smoke::mf_static, 253, 205},	//522 QGlobalSpace::qFuzzyIsNull(double)
    {29, 537, 676, 3, Smoke::mf_static, 253, 206},	//523 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {29, 334, 680, 2, Smoke::mf_static, 253, 207},	//524 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {29, 489, 683, 3, Smoke::mf_static, 0, 208},	//525 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {29, 425, 372, 1, Smoke::mf_static, 345, 209},	//526 QGlobalSpace::qHash(QChar)
    {29, 353, 687, 2, Smoke::mf_static, 106, 210},	//527 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {29, 324, 690, 2, Smoke::mf_static, 10, 211},	//528 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {29, 300, 680, 2, Smoke::mf_static, 253, 212},	//529 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {29, 300, 667, 2, Smoke::mf_static, 253, 213},	//530 QGlobalSpace::operator!=(bool, QBool)
    {29, 530, 693, 2, Smoke::mf_static, 0, 214},	//531 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {29, 353, 696, 2, Smoke::mf_static, 79, 215},	//532 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {29, 496, 275, 1, Smoke::mf_static, 0, 216},	//533 QGlobalSpace::qsrand(unsigned int)
    {29, 334, 699, 2, Smoke::mf_static, 253, 217},	//534 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {29, 353, 702, 2, Smoke::mf_static, 87, 218},	//535 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {29, 324, 705, 2, Smoke::mf_static, 13, 219},	//536 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {29, 347, 708, 2, Smoke::mf_static, 10, 220},	//537 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {29, 353, 711, 2, Smoke::mf_static, 106, 221},	//538 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {29, 300, 513, 2, Smoke::mf_static, 253, 222},	//539 QGlobalSpace::operator!=(const QString&, QString::Null)
    {29, 507, 408, 2, Smoke::mf_static, 336, 223},	//540 QGlobalSpace::qstricmp(const char*, const char*)
    {29, 353, 714, 2, Smoke::mf_static, 103, 224},	//541 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {29, 324, 717, 2, Smoke::mf_static, 13, 225},	//542 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {29, 449, 720, 3, Smoke::mf_static, 352, 226},	//543 QGlobalSpace::qMemSet(void*, int, size_t)
    {29, 300, 302, 2, Smoke::mf_static, 253, 227},	//544 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {29, 392, 254, 1, Smoke::mf_static, 336, 228},	//545 QGlobalSpace::qCeil(double)
    {29, 425, 724, 1, Smoke::mf_static, 345, 229},	//546 QGlobalSpace::qHash(signed char)
    {29, 353, 726, 2, Smoke::mf_static, 103, 230},	//547 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {29, 334, 347, 2, Smoke::mf_static, 253, 231},	//548 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {29, 353, 729, 2, Smoke::mf_static, 102, 232},	//549 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {29, 334, 582, 2, Smoke::mf_static, 253, 233},	//550 QGlobalSpace::operator==(const char*, const QStringRef&)
    {29, 347, 732, 2, Smoke::mf_static, 10, 234},	//551 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {29, 324, 735, 2, Smoke::mf_static, 13, 235},	//552 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {29, 353, 738, 2, Smoke::mf_static, 106, 236},	//553 QGlobalSpace::operator|(QFile::Permission, int)
    {29, 310, 431, 2, Smoke::mf_static, 292, 237},	//554 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {29, 310, 287, 2, Smoke::mf_static, 258, 238},	//555 QGlobalSpace::operator+(const QByteArray&, const char*)
    {29, 382, 596, 1, Smoke::mf_static, 0, 239},	//556 QGlobalSpace::qAddPostRoutine(void(*)())
    {29, 460, 741, 1, Smoke::mf_static, 0, 240},	//557 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {29, 307, 743, 2, Smoke::mf_static, 294, 241},	//558 QGlobalSpace::operator*(double, const QPointF&)
    {29, 307, 746, 2, Smoke::mf_static, 292, 242},	//559 QGlobalSpace::operator*(int, const QPoint&)
    {29, 475, 0, 0, Smoke::mf_static, 253, 243},	//560 QGlobalSpace::qSharedBuild()
    {29, 324, 749, 2, Smoke::mf_static, 10, 244},	//561 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {29, 347, 752, 2, Smoke::mf_static, 10, 245},	//562 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {29, 324, 755, 2, Smoke::mf_static, 10, 246},	//563 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {29, 428, 0, 0, Smoke::mf_static, 334, 247},	//564 QGlobalSpace::qInf()
    {29, 515, 308, 3, Smoke::mf_static, 336, 248},	//565 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {29, 425, 758, 1, Smoke::mf_static, 345, 249},	//566 QGlobalSpace::qHash(const QStringRef&)
    {29, 347, 760, 2, Smoke::mf_static, 10, 250},	//567 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {29, 353, 763, 2, Smoke::mf_static, 106, 251},	//568 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {29, 339, 455, 2, Smoke::mf_static, 253, 252},	//569 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {29, 324, 766, 2, Smoke::mf_static, 10, 253},	//570 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {29, 324, 769, 2, Smoke::mf_static, 132, 254},	//571 QGlobalSpace::operator<<(QTextStream&, const QDomNode&)
    {29, 334, 369, 2, Smoke::mf_static, 253, 255},	//572 QGlobalSpace::operator==(QChar, QChar)
    {29, 401, 254, 1, Smoke::mf_static, 334, 256},	//573 QGlobalSpace::qCos(double)
    {29, 445, 772, 2, Smoke::mf_static, 352, 257},	//574 QGlobalSpace::qMallocAligned(size_t, size_t)
    {29, 324, 775, 2, Smoke::mf_static, 10, 258},	//575 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {29, 524, 778, 4, Smoke::mf_static, 0, 259},	//576 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {29, 353, 783, 2, Smoke::mf_static, 87, 260},	//577 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {29, 353, 786, 2, Smoke::mf_static, 79, 261},	//578 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {29, 310, 789, 2, Smoke::mf_static, 258, 262},	//579 QGlobalSpace::operator+(const QByteArray&, char)
    {29, 353, 792, 2, Smoke::mf_static, 82, 263},	//580 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {29, 487, 0, 0, Smoke::mf_static, 330, 264},	//581 QGlobalSpace::qVersion()
    {29, 353, 795, 2, Smoke::mf_static, 88, 265},	//582 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {29, 310, 320, 2, Smoke::mf_static, 294, 266},	//583 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {29, 324, 798, 2, Smoke::mf_static, 10, 267},	//584 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {29, 353, 801, 2, Smoke::mf_static, 81, 268},	//585 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {29, 324, 804, 2, Smoke::mf_static, 10, 269},	//586 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {29, 353, 807, 2, Smoke::mf_static, 106, 270},	//587 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {29, 334, 534, 2, Smoke::mf_static, 253, 271},	//588 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {29, 480, 810, 2, Smoke::mf_static, 253, 272},	//589 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {29, 353, 813, 2, Smoke::mf_static, 77, 273},	//590 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {29, 324, 816, 2, Smoke::mf_static, 10, 274},	//591 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {29, 310, 819, 2, Smoke::mf_static, 258, 275},	//592 QGlobalSpace::operator+(char, const QByteArray&)
    {29, 353, 822, 2, Smoke::mf_static, 106, 276},	//593 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {29, 320, 455, 2, Smoke::mf_static, 253, 277},	//594 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {29, 396, 825, 3, Smoke::mf_static, 5, 278},	//595 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {29, 396, 458, 2, Smoke::mf_static, 5, 279},	//596 QGlobalSpace::qCompress(const unsigned char*, int)
    {29, 415, 254, 1, Smoke::mf_static, 336, 280},	//597 QGlobalSpace::qFloor(double)
    {29, 353, 829, 2, Smoke::mf_static, 98, 281},	//598 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {29, 425, 3, 1, Smoke::mf_static, 345, 282},	//599 QGlobalSpace::qHash(const QString&)
    {29, 310, 25, 2, Smoke::mf_static, 304, 283},	//600 QGlobalSpace::operator+(const QString&, const QString&)
    {29, 300, 832, 2, Smoke::mf_static, 253, 284},	//601 QGlobalSpace::operator!=(QBool, bool)
    {29, 334, 455, 2, Smoke::mf_static, 253, 285},	//602 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {29, 324, 835, 2, Smoke::mf_static, 10, 286},	//603 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {29, 437, 364, 1, Smoke::mf_static, 253, 287},	//604 QGlobalSpace::qIsNaN(float)
    {29, 324, 838, 2, Smoke::mf_static, 10, 288},	//605 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {29, 353, 841, 2, Smoke::mf_static, 106, 289},	//606 QGlobalSpace::operator|(QDir::SortFlag, int)
    {29, 447, 844, 3, Smoke::mf_static, 352, 290},	//607 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {29, 417, 848, 1, Smoke::mf_static, 0, 291},	//608 QGlobalSpace::qFree(void*)
    {29, 334, 810, 2, Smoke::mf_static, 253, 292},	//609 QGlobalSpace::operator==(const QStringRef&, const char*)
    {29, 437, 254, 1, Smoke::mf_static, 253, 293},	//610 QGlobalSpace::qIsNaN(double)
    {29, 353, 850, 2, Smoke::mf_static, 100, 294},	//611 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {29, 307, 633, 2, Smoke::mf_static, 292, 295},	//612 QGlobalSpace::operator*(const QPoint&, double)
    {29, 324, 853, 2, Smoke::mf_static, 13, 296},	//613 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {29, 473, 76, 1, Smoke::mf_static, 135, 297},	//614 QGlobalSpace::qSetRealNumberPrecision(int)
    {29, 495, 0, 0, Smoke::mf_static, 336, 298},	//615 QGlobalSpace::qrand()
    {29, 347, 856, 2, Smoke::mf_static, 10, 299},	//616 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {29, 425, 859, 1, Smoke::mf_static, 345, 300},	//617 QGlobalSpace::qHash(const QUrl&)
    {29, 353, 861, 2, Smoke::mf_static, 101, 301},	//618 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {29, 310, 455, 2, Smoke::mf_static, 258, 302},	//619 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {29, 307, 864, 2, Smoke::mf_static, 292, 303},	//620 QGlobalSpace::operator*(float, const QPoint&)
    {29, 307, 867, 2, Smoke::mf_static, 292, 304},	//621 QGlobalSpace::operator*(double, const QPoint&)
    {29, 300, 810, 2, Smoke::mf_static, 253, 305},	//622 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {29, 476, 254, 1, Smoke::mf_static, 334, 306},	//623 QGlobalSpace::qSin(double)
    {29, 324, 870, 2, Smoke::mf_static, 13, 307},	//624 QGlobalSpace::operator<<(QDebug, const QObject*)
    {29, 334, 431, 2, Smoke::mf_static, 253, 308},	//625 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {29, 353, 873, 2, Smoke::mf_static, 80, 309},	//626 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {29, 522, 876, 3, Smoke::mf_static, 0, 310},	//627 QGlobalSpace::qt_assert(const char*, const char*, int)
    {29, 324, 880, 2, Smoke::mf_static, 13, 311},	//628 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {29, 509, 285, 1, Smoke::mf_static, 345, 312},	//629 QGlobalSpace::qstrlen(const char*)
    {29, 353, 883, 2, Smoke::mf_static, 86, 313},	//630 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {29, 353, 886, 2, Smoke::mf_static, 77, 314},	//631 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {29, 435, 254, 1, Smoke::mf_static, 253, 315},	//632 QGlobalSpace::qIsInf(double)
    {29, 315, 302, 2, Smoke::mf_static, 300, 316},	//633 QGlobalSpace::operator-(const QSize&, const QSize&)
    {29, 318, 616, 2, Smoke::mf_static, 300, 317},	//634 QGlobalSpace::operator/(const QSize&, double)
    {29, 343, 417, 2, Smoke::mf_static, 253, 318},	//635 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {29, 353, 889, 2, Smoke::mf_static, 106, 319},	//636 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {29, 353, 892, 2, Smoke::mf_static, 106, 320},	//637 QGlobalSpace::operator|(QDir::Filter, int)
    {29, 300, 417, 2, Smoke::mf_static, 253, 321},	//638 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {29, 482, 254, 1, Smoke::mf_static, 334, 322},	//639 QGlobalSpace::qTan(double)
    {29, 466, 254, 1, Smoke::mf_static, 339, 323},	//640 QGlobalSpace::qRound64(double)
    {29, 425, 895, 1, Smoke::mf_static, 345, 324},	//641 QGlobalSpace::qHash(unsigned long)
    {29, 353, 897, 2, Smoke::mf_static, 75, 325},	//642 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {29, 468, 0, 0, Smoke::mf_static, 334, 326},	//643 QGlobalSpace::qSNaN()
    {29, 320, 369, 2, Smoke::mf_static, 253, 327},	//644 QGlobalSpace::operator<(QChar, QChar)
    {29, 353, 900, 2, Smoke::mf_static, 97, 328},	//645 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {29, 353, 903, 2, Smoke::mf_static, 90, 329},	//646 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {29, 315, 534, 2, Smoke::mf_static, 302, 330},	//647 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {29, 443, 906, 1, Smoke::mf_static, 352, 331},	//648 QGlobalSpace::qMalloc(size_t)
    {29, 439, 254, 1, Smoke::mf_static, 253, 332},	//649 QGlobalSpace::qIsNull(double)
    {29, 493, 417, 2, Smoke::mf_static, 253, 333},	//650 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {29, 353, 908, 2, Smoke::mf_static, 106, 334},	//651 QGlobalSpace::operator|(Qt::Orientation, int)
    {29, 353, 911, 2, Smoke::mf_static, 106, 335},	//652 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {29, 347, 914, 2, Smoke::mf_static, 10, 336},	//653 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {29, 347, 917, 2, Smoke::mf_static, 10, 337},	//654 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {29, 423, 364, 1, Smoke::mf_static, 253, 338},	//655 QGlobalSpace::qFuzzyIsNull(float)
    {29, 324, 920, 2, Smoke::mf_static, 10, 339},	//656 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {29, 324, 923, 2, Smoke::mf_static, 13, 340},	//657 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {29, 425, 926, 1, Smoke::mf_static, 345, 341},	//658 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {29, 324, 928, 2, Smoke::mf_static, 13, 342},	//659 QGlobalSpace::operator<<(QDebug, const QTime&)
    {29, 353, 931, 2, Smoke::mf_static, 106, 343},	//660 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {29, 353, 934, 2, Smoke::mf_static, 101, 344},	//661 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {29, 339, 287, 2, Smoke::mf_static, 253, 345},	//662 QGlobalSpace::operator>(const QByteArray&, const char*)
    {29, 300, 699, 2, Smoke::mf_static, 253, 346},	//663 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {29, 353, 937, 2, Smoke::mf_static, 92, 347},	//664 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {29, 469, 76, 1, Smoke::mf_static, 135, 348},	//665 QGlobalSpace::qSetFieldWidth(int)
    {29, 353, 940, 2, Smoke::mf_static, 102, 349},	//666 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {29, 353, 943, 2, Smoke::mf_static, 89, 350},	//667 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {29, 353, 946, 2, Smoke::mf_static, 106, 351},	//668 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {29, 307, 949, 2, Smoke::mf_static, 302, 352},	//669 QGlobalSpace::operator*(double, const QSizeF&)
    {29, 343, 312, 2, Smoke::mf_static, 253, 353},	//670 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {29, 324, 952, 2, Smoke::mf_static, 13, 354},	//671 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {29, 425, 126, 1, Smoke::mf_static, 345, 355},	//672 QGlobalSpace::qHash(const QByteArray&)
    {29, 334, 338, 2, Smoke::mf_static, 253, 356},	//673 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {29, 425, 955, 1, Smoke::mf_static, 345, 357},	//674 QGlobalSpace::qHash(const QModelIndex&)
    {29, 307, 957, 2, Smoke::mf_static, 292, 358},	//675 QGlobalSpace::operator*(const QPoint&, int)
    {29, 334, 449, 2, Smoke::mf_static, 253, 359},	//676 QGlobalSpace::operator==(const QRect&, const QRect&)
    {29, 353, 960, 2, Smoke::mf_static, 106, 360},	//677 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {29, 353, 963, 2, Smoke::mf_static, 96, 361},	//678 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {29, 353, 966, 2, Smoke::mf_static, 93, 362},	//679 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {29, 419, 848, 1, Smoke::mf_static, 0, 363},	//680 QGlobalSpace::qFreeAligned(void*)
    {29, 353, 969, 2, Smoke::mf_static, 98, 364},	//681 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {29, 324, 972, 2, Smoke::mf_static, 13, 365},	//682 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {29, 334, 287, 2, Smoke::mf_static, 253, 366},	//683 QGlobalSpace::operator==(const QByteArray&, const char*)
    {29, 353, 975, 2, Smoke::mf_static, 106, 367},	//684 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {29, 353, 978, 2, Smoke::mf_static, 106, 368},	//685 QGlobalSpace::operator|(Qt::MouseButton, int)
    {29, 441, 254, 1, Smoke::mf_static, 334, 369},	//686 QGlobalSpace::qLn(double)
    {29, 334, 832, 2, Smoke::mf_static, 253, 370},	//687 QGlobalSpace::operator==(QBool, bool)
    {29, 300, 287, 2, Smoke::mf_static, 253, 371},	//688 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {29, 351, 428, 2, Smoke::mf_static, 2, 372},	//689 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {29, 385, 254, 1, Smoke::mf_static, 334, 373},	//690 QGlobalSpace::qAsin(double)
    {29, 347, 981, 2, Smoke::mf_static, 10, 374},	//691 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {29, 391, 0, 0, Smoke::mf_static, 0, 375},	//692 QGlobalSpace::qBadAlloc()
    {29, 353, 984, 2, Smoke::mf_static, 106, 376},	//693 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {29, 353, 987, 2, Smoke::mf_static, 106, 377},	//694 QGlobalSpace::operator|(QString::SectionFlag, int)
    {29, 324, 990, 2, Smoke::mf_static, 10, 378},	//695 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {29, 433, 364, 1, Smoke::mf_static, 253, 379},	//696 QGlobalSpace::qIsFinite(float)
    {29, 310, 534, 2, Smoke::mf_static, 302, 380},	//697 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {29, 353, 993, 2, Smoke::mf_static, 76, 381},	//698 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {29, 353, 996, 2, Smoke::mf_static, 84, 382},	//699 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {29, 108, 0, 0, Smoke::mf_static|Smoke::mf_enum, 338, 383},	//700 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {29, 111, 0, 0, Smoke::mf_static|Smoke::mf_enum, 338, 384},	//701 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {29, 112, 0, 0, Smoke::mf_static|Smoke::mf_enum, 338, 385},	//702 QGlobalSpace::Q_STATIC_TYPE (enum)
    {29, 110, 0, 0, Smoke::mf_static|Smoke::mf_enum, 338, 386},	//703 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {29, 109, 0, 0, Smoke::mf_static|Smoke::mf_enum, 338, 387},	//704 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {29, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 238, 388},	//705 QGlobalSpace::LicensedGui (enum)
    {29, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 251, 389},	//706 QGlobalSpace::LicensedXml (enum)
    {29, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 244, 390},	//707 QGlobalSpace::LicensedQt3SupportLight (enum)
    {29, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 246, 391},	//708 QGlobalSpace::LicensedScript (enum)
    {29, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 243, 392},	//709 QGlobalSpace::LicensedOpenVG (enum)
    {29, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 236, 393},	//710 QGlobalSpace::LicensedDBus (enum)
    {29, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 250, 394},	//711 QGlobalSpace::LicensedTest (enum)
    {29, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 234, 395},	//712 QGlobalSpace::LicensedActiveQt (enum)
    {29, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 247, 396},	//713 QGlobalSpace::LicensedScriptTools (enum)
    {29, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 249, 397},	//714 QGlobalSpace::LicensedSvg (enum)
    {29, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 237, 398},	//715 QGlobalSpace::LicensedDeclarative (enum)
    {29, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 248, 399},	//716 QGlobalSpace::LicensedSql (enum)
    {29, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 242, 400},	//717 QGlobalSpace::LicensedOpenGL (enum)
    {29, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 235, 401},	//718 QGlobalSpace::LicensedCore (enum)
    {29, 114, 0, 0, Smoke::mf_static|Smoke::mf_enum, 233, 402},	//719 QGlobalSpace::QtDebugMsg (enum)
    {29, 117, 0, 0, Smoke::mf_static|Smoke::mf_enum, 233, 403},	//720 QGlobalSpace::QtWarningMsg (enum)
    {29, 113, 0, 0, Smoke::mf_static|Smoke::mf_enum, 233, 404},	//721 QGlobalSpace::QtCriticalMsg (enum)
    {29, 115, 0, 0, Smoke::mf_static|Smoke::mf_enum, 233, 405},	//722 QGlobalSpace::QtFatalMsg (enum)
    {29, 116, 0, 0, Smoke::mf_static|Smoke::mf_enum, 233, 406},	//723 QGlobalSpace::QtSystemMsg (enum)
    {29, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 407},	//724 QGlobalSpace::LicensedHelp (enum)
    {29, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 240, 408},	//725 QGlobalSpace::LicensedMultimedia (enum)
    {29, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 245, 409},	//726 QGlobalSpace::LicensedQt3Support (enum)
    {29, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 252, 410},	//727 QGlobalSpace::LicensedXmlPatterns (enum)
    {29, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 241, 411},	//728 QGlobalSpace::LicensedNetwork (enum)
    {59, 75, 0, 0, Smoke::mf_ctor, 143, 1},	//729 QXmlAttributes::QXmlAttributes()
    {59, 240, 3, 1, Smoke::mf_const, 336, 2},	//730 QXmlAttributes::index(const QString&) const
    {59, 240, 999, 1, Smoke::mf_const, 336, 3},	//731 QXmlAttributes::index(const QLatin1String&) const
    {59, 240, 25, 2, Smoke::mf_const, 336, 4},	//732 QXmlAttributes::index(const QString&, const QString&) const
    {59, 276, 0, 0, Smoke::mf_const, 336, 5},	//733 QXmlAttributes::length() const
    {59, 156, 0, 0, Smoke::mf_const, 336, 6},	//734 QXmlAttributes::count() const
    {59, 279, 76, 1, Smoke::mf_const, 122, 7},	//735 QXmlAttributes::localName(int) const
    {59, 451, 76, 1, Smoke::mf_const, 122, 8},	//736 QXmlAttributes::qName(int) const
    {59, 679, 76, 1, Smoke::mf_const, 122, 9},	//737 QXmlAttributes::uri(int) const
    {59, 674, 76, 1, Smoke::mf_const, 122, 10},	//738 QXmlAttributes::type(int) const
    {59, 674, 3, 1, Smoke::mf_const, 122, 11},	//739 QXmlAttributes::type(const QString&) const
    {59, 674, 25, 2, Smoke::mf_const, 122, 12},	//740 QXmlAttributes::type(const QString&, const QString&) const
    {59, 681, 76, 1, Smoke::mf_const, 122, 13},	//741 QXmlAttributes::value(int) const
    {59, 681, 3, 1, Smoke::mf_const, 122, 14},	//742 QXmlAttributes::value(const QString&) const
    {59, 681, 999, 1, Smoke::mf_const, 122, 15},	//743 QXmlAttributes::value(const QLatin1String&) const
    {59, 681, 25, 2, Smoke::mf_const, 122, 16},	//744 QXmlAttributes::value(const QString&, const QString&) const
    {59, 146, 0, 0, 0, 0, 17},	//745 QXmlAttributes::clear()
    {59, 120, 1001, 4, 0, 0, 18},	//746 QXmlAttributes::append(const QString&, const QString&, const QString&, const QString&)
    {59, 75, 1006, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 143, 19},	//747 QXmlAttributes::QXmlAttributes(const QXmlAttributes&)
    {59, 744, 0, 0, Smoke::mf_dtor, 0, 20 },	//748 QXmlAttributes::~QXmlAttributes()
    {60, 604, 1008, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 1},	//749 QXmlContentHandler::setDocumentLocator(QXmlLocator*) [pure virtual]
    {60, 644, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 2},	//750 QXmlContentHandler::startDocument() [pure virtual]
    {60, 195, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 3},	//751 QXmlContentHandler::endDocument() [pure virtual]
    {60, 649, 25, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 4},	//752 QXmlContentHandler::startPrefixMapping(const QString&, const QString&) [pure virtual]
    {60, 200, 3, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 5},	//753 QXmlContentHandler::endPrefixMapping(const QString&) [pure virtual]
    {60, 645, 1010, 4, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 6},	//754 QXmlContentHandler::startElement(const QString&, const QString&, const QString&, const QXmlAttributes&) [pure virtual]
    {60, 196, 218, 3, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 7},	//755 QXmlContentHandler::endElement(const QString&, const QString&, const QString&) [pure virtual]
    {60, 143, 3, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 8},	//756 QXmlContentHandler::characters(const QString&) [pure virtual]
    {60, 234, 3, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 9},	//757 QXmlContentHandler::ignorableWhitespace(const QString&) [pure virtual]
    {60, 373, 25, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 10},	//758 QXmlContentHandler::processingInstruction(const QString&, const QString&) [pure virtual]
    {60, 634, 3, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 11},	//759 QXmlContentHandler::skippedEntity(const QString&) [pure virtual]
    {60, 207, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 122, 12},	//760 QXmlContentHandler::errorString() const [pure virtual]
    {60, 77, 0, 0, Smoke::mf_ctor, 144, 13},	//761 QXmlContentHandler::QXmlContentHandler()
    {60, 77, 1015, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 144, 14},	//762 QXmlContentHandler::QXmlContentHandler(const QXmlContentHandler&)
    {60, 745, 0, 0, Smoke::mf_dtor, 0, 15 },	//763 QXmlContentHandler::~QXmlContentHandler()
    {61, 296, 218, 3, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 1},	//764 QXmlDTDHandler::notationDecl(const QString&, const QString&, const QString&) [pure virtual]
    {61, 677, 1001, 4, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 2},	//765 QXmlDTDHandler::unparsedEntityDecl(const QString&, const QString&, const QString&, const QString&) [pure virtual]
    {61, 207, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 122, 3},	//766 QXmlDTDHandler::errorString() const [pure virtual]
    {61, 79, 0, 0, Smoke::mf_ctor, 145, 4},	//767 QXmlDTDHandler::QXmlDTDHandler()
    {61, 79, 1017, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 145, 5},	//768 QXmlDTDHandler::QXmlDTDHandler(const QXmlDTDHandler&)
    {61, 746, 0, 0, Smoke::mf_dtor, 0, 6 },	//769 QXmlDTDHandler::~QXmlDTDHandler()
    {62, 131, 1019, 5, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 1},	//770 QXmlDeclHandler::attributeDecl(const QString&, const QString&, const QString&, const QString&, const QString&) [pure virtual]
    {62, 250, 25, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 2},	//771 QXmlDeclHandler::internalEntityDecl(const QString&, const QString&) [pure virtual]
    {62, 208, 218, 3, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 3},	//772 QXmlDeclHandler::externalEntityDecl(const QString&, const QString&, const QString&) [pure virtual]
    {62, 207, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 122, 4},	//773 QXmlDeclHandler::errorString() const [pure virtual]
    {62, 81, 0, 0, Smoke::mf_ctor, 146, 5},	//774 QXmlDeclHandler::QXmlDeclHandler()
    {62, 81, 1025, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 146, 6},	//775 QXmlDeclHandler::QXmlDeclHandler(const QXmlDeclHandler&)
    {62, 747, 0, 0, Smoke::mf_dtor, 0, 7 },	//776 QXmlDeclHandler::~QXmlDeclHandler()
    {63, 83, 0, 0, Smoke::mf_ctor, 147, 1},	//777 QXmlDefaultHandler::QXmlDefaultHandler()
    {63, 604, 1008, 1, Smoke::mf_virtual, 0, 2},	//778 QXmlDefaultHandler::setDocumentLocator(QXmlLocator*)
    {63, 644, 0, 0, Smoke::mf_virtual, 253, 3},	//779 QXmlDefaultHandler::startDocument()
    {63, 195, 0, 0, Smoke::mf_virtual, 253, 4},	//780 QXmlDefaultHandler::endDocument()
    {63, 649, 25, 2, Smoke::mf_virtual, 253, 5},	//781 QXmlDefaultHandler::startPrefixMapping(const QString&, const QString&)
    {63, 200, 3, 1, Smoke::mf_virtual, 253, 6},	//782 QXmlDefaultHandler::endPrefixMapping(const QString&)
    {63, 645, 1010, 4, Smoke::mf_virtual, 253, 7},	//783 QXmlDefaultHandler::startElement(const QString&, const QString&, const QString&, const QXmlAttributes&)
    {63, 196, 218, 3, Smoke::mf_virtual, 253, 8},	//784 QXmlDefaultHandler::endElement(const QString&, const QString&, const QString&)
    {63, 143, 3, 1, Smoke::mf_virtual, 253, 9},	//785 QXmlDefaultHandler::characters(const QString&)
    {63, 234, 3, 1, Smoke::mf_virtual, 253, 10},	//786 QXmlDefaultHandler::ignorableWhitespace(const QString&)
    {63, 373, 25, 2, Smoke::mf_virtual, 253, 11},	//787 QXmlDefaultHandler::processingInstruction(const QString&, const QString&)
    {63, 634, 3, 1, Smoke::mf_virtual, 253, 12},	//788 QXmlDefaultHandler::skippedEntity(const QString&)
    {63, 685, 1027, 1, Smoke::mf_virtual, 253, 13},	//789 QXmlDefaultHandler::warning(const QXmlParseException&)
    {63, 204, 1027, 1, Smoke::mf_virtual, 253, 14},	//790 QXmlDefaultHandler::error(const QXmlParseException&)
    {63, 210, 1027, 1, Smoke::mf_virtual, 253, 15},	//791 QXmlDefaultHandler::fatalError(const QXmlParseException&)
    {63, 296, 218, 3, Smoke::mf_virtual, 253, 16},	//792 QXmlDefaultHandler::notationDecl(const QString&, const QString&, const QString&)
    {63, 677, 1001, 4, Smoke::mf_virtual, 253, 17},	//793 QXmlDefaultHandler::unparsedEntityDecl(const QString&, const QString&, const QString&, const QString&)
    {63, 558, 1029, 3, Smoke::mf_virtual, 253, 18},	//794 QXmlDefaultHandler::resolveEntity(const QString&, const QString&, QXmlInputSource*&)
    {63, 642, 218, 3, Smoke::mf_virtual, 253, 19},	//795 QXmlDefaultHandler::startDTD(const QString&, const QString&, const QString&)
    {63, 194, 0, 0, Smoke::mf_virtual, 253, 20},	//796 QXmlDefaultHandler::endDTD()
    {63, 647, 3, 1, Smoke::mf_virtual, 253, 21},	//797 QXmlDefaultHandler::startEntity(const QString&)
    {63, 198, 3, 1, Smoke::mf_virtual, 253, 22},	//798 QXmlDefaultHandler::endEntity(const QString&)
    {63, 641, 0, 0, Smoke::mf_virtual, 253, 23},	//799 QXmlDefaultHandler::startCDATA()
    {63, 193, 0, 0, Smoke::mf_virtual, 253, 24},	//800 QXmlDefaultHandler::endCDATA()
    {63, 151, 3, 1, Smoke::mf_virtual, 253, 25},	//801 QXmlDefaultHandler::comment(const QString&)
    {63, 131, 1019, 5, Smoke::mf_virtual, 253, 26},	//802 QXmlDefaultHandler::attributeDecl(const QString&, const QString&, const QString&, const QString&, const QString&)
    {63, 250, 25, 2, Smoke::mf_virtual, 253, 27},	//803 QXmlDefaultHandler::internalEntityDecl(const QString&, const QString&)
    {63, 208, 218, 3, Smoke::mf_virtual, 253, 28},	//804 QXmlDefaultHandler::externalEntityDecl(const QString&, const QString&, const QString&)
    {63, 207, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 122, 29},	//805 QXmlDefaultHandler::errorString() const
    {63, 748, 0, 0, Smoke::mf_dtor, 0, 30 },	//806 QXmlDefaultHandler::~QXmlDefaultHandler()
    {64, 558, 1029, 3, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 1},	//807 QXmlEntityResolver::resolveEntity(const QString&, const QString&, QXmlInputSource*&) [pure virtual]
    {64, 207, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 122, 2},	//808 QXmlEntityResolver::errorString() const [pure virtual]
    {64, 84, 0, 0, Smoke::mf_ctor, 148, 3},	//809 QXmlEntityResolver::QXmlEntityResolver()
    {64, 84, 1033, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 148, 4},	//810 QXmlEntityResolver::QXmlEntityResolver(const QXmlEntityResolver&)
    {64, 749, 0, 0, Smoke::mf_dtor, 0, 5 },	//811 QXmlEntityResolver::~QXmlEntityResolver()
    {65, 685, 1027, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 1},	//812 QXmlErrorHandler::warning(const QXmlParseException&) [pure virtual]
    {65, 204, 1027, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 2},	//813 QXmlErrorHandler::error(const QXmlParseException&) [pure virtual]
    {65, 210, 1027, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 3},	//814 QXmlErrorHandler::fatalError(const QXmlParseException&) [pure virtual]
    {65, 207, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 122, 4},	//815 QXmlErrorHandler::errorString() const [pure virtual]
    {65, 86, 0, 0, Smoke::mf_ctor, 149, 5},	//816 QXmlErrorHandler::QXmlErrorHandler()
    {65, 86, 1035, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 149, 6},	//817 QXmlErrorHandler::QXmlErrorHandler(const QXmlErrorHandler&)
    {65, 750, 0, 0, Smoke::mf_dtor, 0, 7 },	//818 QXmlErrorHandler::~QXmlErrorHandler()
    {66, 88, 0, 0, Smoke::mf_ctor, 150, 1},	//819 QXmlInputSource::QXmlInputSource()
    {66, 88, 142, 1, Smoke::mf_ctor, 150, 2},	//820 QXmlInputSource::QXmlInputSource(QIODevice*)
    {66, 597, 3, 1, Smoke::mf_virtual, 0, 3},	//821 QXmlInputSource::setData(const QString&)
    {66, 597, 126, 1, Smoke::mf_virtual, 0, 4},	//822 QXmlInputSource::setData(const QByteArray&)
    {66, 215, 0, 0, Smoke::mf_virtual, 0, 5},	//823 QXmlInputSource::fetchData()
    {66, 180, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 122, 6},	//824 QXmlInputSource::data() const
    {66, 288, 0, 0, Smoke::mf_virtual, 8, 7},	//825 QXmlInputSource::next()
    {66, 557, 0, 0, Smoke::mf_virtual, 0, 8},	//826 QXmlInputSource::reset()
    {66, 219, 78, 2, Smoke::mf_protected|Smoke::mf_virtual, 122, 9},	//827 QXmlInputSource::fromRawData(const QByteArray&, bool)
    {66, 88, 1037, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 150, 10},	//828 QXmlInputSource::QXmlInputSource(const QXmlInputSource&)
    {66, 219, 126, 1, Smoke::mf_protected, 122, 11},	//829 QXmlInputSource::fromRawData(const QByteArray&)
    {66, 15, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 332, 12},	//830 QXmlInputSource::EndOfData() const
    {66, 16, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 332, 13},	//831 QXmlInputSource::EndOfDocument() const
    {66, 751, 0, 0, Smoke::mf_dtor, 0, 14 },	//832 QXmlInputSource::~QXmlInputSource()
    {67, 642, 218, 3, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 1},	//833 QXmlLexicalHandler::startDTD(const QString&, const QString&, const QString&) [pure virtual]
    {67, 194, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 2},	//834 QXmlLexicalHandler::endDTD() [pure virtual]
    {67, 647, 3, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 3},	//835 QXmlLexicalHandler::startEntity(const QString&) [pure virtual]
    {67, 198, 3, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 4},	//836 QXmlLexicalHandler::endEntity(const QString&) [pure virtual]
    {67, 641, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 5},	//837 QXmlLexicalHandler::startCDATA() [pure virtual]
    {67, 193, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 6},	//838 QXmlLexicalHandler::endCDATA() [pure virtual]
    {67, 151, 3, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 7},	//839 QXmlLexicalHandler::comment(const QString&) [pure virtual]
    {67, 207, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 122, 8},	//840 QXmlLexicalHandler::errorString() const [pure virtual]
    {67, 90, 0, 0, Smoke::mf_ctor, 152, 9},	//841 QXmlLexicalHandler::QXmlLexicalHandler()
    {67, 90, 1039, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 152, 10},	//842 QXmlLexicalHandler::QXmlLexicalHandler(const QXmlLexicalHandler&)
    {67, 752, 0, 0, Smoke::mf_dtor, 0, 11 },	//843 QXmlLexicalHandler::~QXmlLexicalHandler()
    {68, 92, 0, 0, Smoke::mf_ctor, 153, 1},	//844 QXmlLocator::QXmlLocator()
    {68, 150, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 336, 2},	//845 QXmlLocator::columnNumber() const [pure virtual]
    {68, 278, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 336, 3},	//846 QXmlLocator::lineNumber() const [pure virtual]
    {68, 92, 1041, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 153, 4},	//847 QXmlLocator::QXmlLocator(const QXmlLocator&)
    {68, 753, 0, 0, Smoke::mf_dtor, 0, 5 },	//848 QXmlLocator::~QXmlLocator()
    {69, 94, 0, 0, Smoke::mf_ctor, 154, 1},	//849 QXmlNamespaceSupport::QXmlNamespaceSupport()
    {69, 624, 25, 2, 0, 0, 2},	//850 QXmlNamespaceSupport::setPrefix(const QString&, const QString&)
    {69, 364, 3, 1, Smoke::mf_const, 122, 3},	//851 QXmlNamespaceSupport::prefix(const QString&) const
    {69, 679, 3, 1, Smoke::mf_const, 122, 4},	//852 QXmlNamespaceSupport::uri(const QString&) const
    {69, 637, 1043, 3, Smoke::mf_const, 0, 5},	//853 QXmlNamespaceSupport::splitName(const QString&, QString&, QString&) const
    {69, 371, 1047, 4, Smoke::mf_const, 0, 6},	//854 QXmlNamespaceSupport::processName(const QString&, bool, QString&, QString&) const
    {69, 366, 0, 0, Smoke::mf_const, 127, 7},	//855 QXmlNamespaceSupport::prefixes() const
    {69, 366, 3, 1, Smoke::mf_const, 127, 8},	//856 QXmlNamespaceSupport::prefixes(const QString&) const
    {69, 379, 0, 0, 0, 0, 9},	//857 QXmlNamespaceSupport::pushContext()
    {69, 363, 0, 0, 0, 0, 10},	//858 QXmlNamespaceSupport::popContext()
    {69, 557, 0, 0, 0, 0, 11},	//859 QXmlNamespaceSupport::reset()
    {69, 754, 0, 0, Smoke::mf_dtor, 0, 12 },	//860 QXmlNamespaceSupport::~QXmlNamespaceSupport()
    {70, 95, 1052, 5, Smoke::mf_ctor, 155, 1},	//861 QXmlParseException::QXmlParseException(const QString&, int, int, const QString&, const QString&)
    {70, 95, 1027, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 155, 2},	//862 QXmlParseException::QXmlParseException(const QXmlParseException&)
    {70, 150, 0, 0, Smoke::mf_const, 336, 3},	//863 QXmlParseException::columnNumber() const
    {70, 278, 0, 0, Smoke::mf_const, 336, 4},	//864 QXmlParseException::lineNumber() const
    {70, 378, 0, 0, Smoke::mf_const, 122, 5},	//865 QXmlParseException::publicId() const
    {70, 653, 0, 0, Smoke::mf_const, 122, 6},	//866 QXmlParseException::systemId() const
    {70, 281, 0, 0, Smoke::mf_const, 122, 7},	//867 QXmlParseException::message() const
    {70, 95, 0, 0, Smoke::mf_ctor, 155, 8},	//868 QXmlParseException::QXmlParseException()
    {70, 95, 3, 1, Smoke::mf_ctor, 155, 9},	//869 QXmlParseException::QXmlParseException(const QString&)
    {70, 95, 173, 2, Smoke::mf_ctor, 155, 10},	//870 QXmlParseException::QXmlParseException(const QString&, int)
    {70, 95, 1058, 3, Smoke::mf_ctor, 155, 11},	//871 QXmlParseException::QXmlParseException(const QString&, int, int)
    {70, 95, 1062, 4, Smoke::mf_ctor, 155, 12},	//872 QXmlParseException::QXmlParseException(const QString&, int, int, const QString&)
    {70, 755, 0, 0, Smoke::mf_dtor, 0, 13 },	//873 QXmlParseException::~QXmlParseException()
    {71, 212, 1067, 2, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 1},	//874 QXmlReader::feature(const QString&, bool*) const [pure virtual]
    {71, 610, 90, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 2},	//875 QXmlReader::setFeature(const QString&, bool) [pure virtual]
    {71, 229, 3, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 3},	//876 QXmlReader::hasFeature(const QString&) const [pure virtual]
    {71, 375, 1067, 2, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 352, 4},	//877 QXmlReader::property(const QString&, bool*) const [pure virtual]
    {71, 627, 1070, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 5},	//878 QXmlReader::setProperty(const QString&, void*) [pure virtual]
    {71, 232, 3, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 6},	//879 QXmlReader::hasProperty(const QString&) const [pure virtual]
    {71, 606, 1073, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 7},	//880 QXmlReader::setEntityResolver(QXmlEntityResolver*) [pure virtual]
    {71, 203, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 148, 8},	//881 QXmlReader::entityResolver() const [pure virtual]
    {71, 595, 1075, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 9},	//882 QXmlReader::setDTDHandler(QXmlDTDHandler*) [pure virtual]
    {71, 7, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 145, 10},	//883 QXmlReader::DTDHandler() const [pure virtual]
    {71, 593, 1077, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 11},	//884 QXmlReader::setContentHandler(QXmlContentHandler*) [pure virtual]
    {71, 155, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 144, 12},	//885 QXmlReader::contentHandler() const [pure virtual]
    {71, 608, 1079, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 13},	//886 QXmlReader::setErrorHandler(QXmlErrorHandler*) [pure virtual]
    {71, 206, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 149, 14},	//887 QXmlReader::errorHandler() const [pure virtual]
    {71, 616, 1081, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 15},	//888 QXmlReader::setLexicalHandler(QXmlLexicalHandler*) [pure virtual]
    {71, 277, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 152, 16},	//889 QXmlReader::lexicalHandler() const [pure virtual]
    {71, 600, 1083, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 17},	//890 QXmlReader::setDeclHandler(QXmlDeclHandler*) [pure virtual]
    {71, 181, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 146, 18},	//891 QXmlReader::declHandler() const [pure virtual]
    {71, 359, 1037, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 19},	//892 QXmlReader::parse(const QXmlInputSource&) [pure virtual]
    {71, 359, 1085, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 253, 20},	//893 QXmlReader::parse(const QXmlInputSource*) [pure virtual]
    {71, 102, 0, 0, Smoke::mf_ctor, 156, 21},	//894 QXmlReader::QXmlReader()
    {71, 102, 1087, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 156, 22},	//895 QXmlReader::QXmlReader(const QXmlReader&)
    {71, 212, 3, 1, Smoke::mf_const, 253, 23},	//896 QXmlReader::feature(const QString&) const
    {71, 375, 3, 1, Smoke::mf_const, 352, 24},	//897 QXmlReader::property(const QString&) const
    {71, 756, 0, 0, Smoke::mf_dtor, 0, 25 },	//898 QXmlReader::~QXmlReader()
    {72, 104, 0, 0, Smoke::mf_ctor, 157, 1},	//899 QXmlSimpleReader::QXmlSimpleReader()
    {72, 212, 1067, 2, Smoke::mf_const|Smoke::mf_virtual, 253, 2},	//900 QXmlSimpleReader::feature(const QString&, bool*) const
    {72, 610, 90, 2, Smoke::mf_virtual, 0, 3},	//901 QXmlSimpleReader::setFeature(const QString&, bool)
    {72, 229, 3, 1, Smoke::mf_const|Smoke::mf_virtual, 253, 4},	//902 QXmlSimpleReader::hasFeature(const QString&) const
    {72, 375, 1067, 2, Smoke::mf_const|Smoke::mf_virtual, 352, 5},	//903 QXmlSimpleReader::property(const QString&, bool*) const
    {72, 627, 1070, 2, Smoke::mf_virtual, 0, 6},	//904 QXmlSimpleReader::setProperty(const QString&, void*)
    {72, 232, 3, 1, Smoke::mf_const|Smoke::mf_virtual, 253, 7},	//905 QXmlSimpleReader::hasProperty(const QString&) const
    {72, 606, 1073, 1, Smoke::mf_virtual, 0, 8},	//906 QXmlSimpleReader::setEntityResolver(QXmlEntityResolver*)
    {72, 203, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 148, 9},	//907 QXmlSimpleReader::entityResolver() const
    {72, 595, 1075, 1, Smoke::mf_virtual, 0, 10},	//908 QXmlSimpleReader::setDTDHandler(QXmlDTDHandler*)
    {72, 7, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 145, 11},	//909 QXmlSimpleReader::DTDHandler() const
    {72, 593, 1077, 1, Smoke::mf_virtual, 0, 12},	//910 QXmlSimpleReader::setContentHandler(QXmlContentHandler*)
    {72, 155, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 144, 13},	//911 QXmlSimpleReader::contentHandler() const
    {72, 608, 1079, 1, Smoke::mf_virtual, 0, 14},	//912 QXmlSimpleReader::setErrorHandler(QXmlErrorHandler*)
    {72, 206, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 149, 15},	//913 QXmlSimpleReader::errorHandler() const
    {72, 616, 1081, 1, Smoke::mf_virtual, 0, 16},	//914 QXmlSimpleReader::setLexicalHandler(QXmlLexicalHandler*)
    {72, 277, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 152, 17},	//915 QXmlSimpleReader::lexicalHandler() const
    {72, 600, 1083, 1, Smoke::mf_virtual, 0, 18},	//916 QXmlSimpleReader::setDeclHandler(QXmlDeclHandler*)
    {72, 181, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 146, 19},	//917 QXmlSimpleReader::declHandler() const
    {72, 359, 1037, 1, Smoke::mf_virtual, 253, 20},	//918 QXmlSimpleReader::parse(const QXmlInputSource&)
    {72, 359, 1085, 1, Smoke::mf_virtual, 253, 21},	//919 QXmlSimpleReader::parse(const QXmlInputSource*)
    {72, 359, 1089, 2, Smoke::mf_virtual, 253, 22},	//920 QXmlSimpleReader::parse(const QXmlInputSource*, bool)
    {72, 362, 0, 0, Smoke::mf_virtual, 253, 23},	//921 QXmlSimpleReader::parseContinue()
    {72, 212, 3, 1, Smoke::mf_const, 253, 24},	//922 QXmlSimpleReader::feature(const QString&) const
    {72, 375, 3, 1, Smoke::mf_const, 352, 25},	//923 QXmlSimpleReader::property(const QString&) const
    {72, 757, 0, 0, Smoke::mf_dtor, 0, 26 },	//924 QXmlSimpleReader::~QXmlSimpleReader()
    {76, 105, 0, 0, Smoke::mf_ctor, 158, 1},	//925 QXmlStreamWriter::QXmlStreamWriter()
    {76, 105, 142, 1, Smoke::mf_ctor, 158, 2},	//926 QXmlStreamWriter::QXmlStreamWriter(QIODevice*)
    {76, 105, 1092, 1, Smoke::mf_ctor, 158, 3},	//927 QXmlStreamWriter::QXmlStreamWriter(QByteArray*)
    {76, 105, 1094, 1, Smoke::mf_ctor, 158, 4},	//928 QXmlStreamWriter::QXmlStreamWriter(QString*)
    {76, 602, 142, 1, 0, 0, 5},	//929 QXmlStreamWriter::setDevice(QIODevice*)
    {76, 184, 0, 0, Smoke::mf_const, 104, 6},	//930 QXmlStreamWriter::device() const
    {76, 575, 1096, 1, 0, 0, 7},	//931 QXmlStreamWriter::setCodec(QTextCodec*)
    {76, 575, 285, 1, 0, 0, 8},	//932 QXmlStreamWriter::setCodec(const char*)
    {76, 149, 0, 0, Smoke::mf_const, 130, 9},	//933 QXmlStreamWriter::codec() const
    {76, 571, 235, 1, 0, 0, 10},	//934 QXmlStreamWriter::setAutoFormatting(bool)
    {76, 141, 0, 0, Smoke::mf_const, 253, 11},	//935 QXmlStreamWriter::autoFormatting() const
    {76, 573, 76, 1, 0, 0, 12},	//936 QXmlStreamWriter::setAutoFormattingIndent(int)
    {76, 142, 0, 0, Smoke::mf_const, 336, 13},	//937 QXmlStreamWriter::autoFormattingIndent() const
    {76, 687, 25, 2, 0, 0, 14},	//938 QXmlStreamWriter::writeAttribute(const QString&, const QString&)
    {76, 687, 218, 3, 0, 0, 15},	//939 QXmlStreamWriter::writeAttribute(const QString&, const QString&, const QString&)
    {76, 687, 1098, 1, 0, 0, 16},	//940 QXmlStreamWriter::writeAttribute(const QXmlStreamAttribute&)
    {76, 691, 1100, 1, 0, 0, 17},	//941 QXmlStreamWriter::writeAttributes(const QXmlStreamAttributes&)
    {76, 693, 3, 1, 0, 0, 18},	//942 QXmlStreamWriter::writeCDATA(const QString&)
    {76, 695, 3, 1, 0, 0, 19},	//943 QXmlStreamWriter::writeCharacters(const QString&)
    {76, 697, 3, 1, 0, 0, 20},	//944 QXmlStreamWriter::writeComment(const QString&)
    {76, 701, 3, 1, 0, 0, 21},	//945 QXmlStreamWriter::writeDTD(const QString&)
    {76, 705, 3, 1, 0, 0, 22},	//946 QXmlStreamWriter::writeEmptyElement(const QString&)
    {76, 705, 25, 2, 0, 0, 23},	//947 QXmlStreamWriter::writeEmptyElement(const QString&, const QString&)
    {76, 724, 25, 2, 0, 0, 24},	//948 QXmlStreamWriter::writeTextElement(const QString&, const QString&)
    {76, 724, 218, 3, 0, 0, 25},	//949 QXmlStreamWriter::writeTextElement(const QString&, const QString&, const QString&)
    {76, 708, 0, 0, 0, 0, 26},	//950 QXmlStreamWriter::writeEndDocument()
    {76, 709, 0, 0, 0, 0, 27},	//951 QXmlStreamWriter::writeEndElement()
    {76, 710, 3, 1, 0, 0, 28},	//952 QXmlStreamWriter::writeEntityReference(const QString&)
    {76, 712, 25, 2, 0, 0, 29},	//953 QXmlStreamWriter::writeNamespace(const QString&, const QString&)
    {76, 703, 3, 1, 0, 0, 30},	//954 QXmlStreamWriter::writeDefaultNamespace(const QString&)
    {76, 715, 25, 2, 0, 0, 31},	//955 QXmlStreamWriter::writeProcessingInstruction(const QString&, const QString&)
    {76, 718, 0, 0, 0, 0, 32},	//956 QXmlStreamWriter::writeStartDocument()
    {76, 718, 3, 1, 0, 0, 33},	//957 QXmlStreamWriter::writeStartDocument(const QString&)
    {76, 718, 90, 2, 0, 0, 34},	//958 QXmlStreamWriter::writeStartDocument(const QString&, bool)
    {76, 721, 3, 1, 0, 0, 35},	//959 QXmlStreamWriter::writeStartElement(const QString&)
    {76, 721, 25, 2, 0, 0, 36},	//960 QXmlStreamWriter::writeStartElement(const QString&, const QString&)
    {76, 699, 1102, 1, 0, 0, 37},	//961 QXmlStreamWriter::writeCurrentToken(const QXmlStreamReader&)
    {76, 228, 0, 0, Smoke::mf_const, 253, 38},	//962 QXmlStreamWriter::hasError() const
    {76, 712, 3, 1, 0, 0, 39},	//963 QXmlStreamWriter::writeNamespace(const QString&)
    {76, 715, 3, 1, 0, 0, 40},	//964 QXmlStreamWriter::writeProcessingInstruction(const QString&)
    {76, 758, 0, 0, Smoke::mf_dtor, 0, 41 },	//965 QXmlStreamWriter::~QXmlStreamWriter()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    918,  // QXmlSimpleReader::parse(const QXmlInputSource&)
    919,  // QXmlSimpleReader::parse(const QXmlInputSource*)
    0,
    820,  // QXmlInputSource::QXmlInputSource(QIODevice*)
    828,  // QXmlInputSource::QXmlInputSource(const QXmlInputSource&)
    0,
    738,  // QXmlAttributes::type(int) const
    739,  // QXmlAttributes::type(const QString&) const
    0,
    741,  // QXmlAttributes::value(int) const
    742,  // QXmlAttributes::value(const QString&) const
    0,
    114,  // QDomElement::setAttribute(const QString&, const QString&)
    115,  // QDomElement::setAttribute(const QString&, long long)
    116,  // QDomElement::setAttribute(const QString&, unsigned long long)
    117,  // QDomElement::setAttribute(const QString&, int)
    118,  // QDomElement::setAttribute(const QString&, unsigned int)
    119,  // QDomElement::setAttribute(const QString&, float)
    120,  // QDomElement::setAttribute(const QString&, double)
    0,
    128,  // QDomElement::setAttributeNS(const QString, const QString&, const QString&)
    129,  // QDomElement::setAttributeNS(const QString, const QString&, int)
    130,  // QDomElement::setAttributeNS(const QString, const QString&, unsigned int)
    131,  // QDomElement::setAttributeNS(const QString, const QString&, long long)
    132,  // QDomElement::setAttributeNS(const QString, const QString&, unsigned long long)
    133,  // QDomElement::setAttributeNS(const QString, const QString&, double)
    0,
    343,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    351,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    354,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    364,  // QGlobalSpace::operator!=(QChar, QChar)
    385,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    391,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    404,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    432,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    445,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    458,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    471,  // QGlobalSpace::operator!=(QBool, QBool)
    480,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    510,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    544,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    663,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    0,
    504,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    529,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    601,  // QGlobalSpace::operator!=(QBool, bool)
    622,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    688,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    0,
    344,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    472,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    530,  // QGlobalSpace::operator!=(bool, QBool)
    539,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    638,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    0,
    329,  // QGlobalSpace::operator*(const QSizeF&, double)
    398,  // QGlobalSpace::operator*(const QPointF&, double)
    451,  // QGlobalSpace::operator*(const QPoint&, float)
    492,  // QGlobalSpace::operator*(const QSize&, double)
    612,  // QGlobalSpace::operator*(const QPoint&, double)
    675,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    446,  // QGlobalSpace::operator*(double, const QSize&)
    558,  // QGlobalSpace::operator*(double, const QPointF&)
    559,  // QGlobalSpace::operator*(int, const QPoint&)
    620,  // QGlobalSpace::operator*(float, const QPoint&)
    621,  // QGlobalSpace::operator*(double, const QPoint&)
    669,  // QGlobalSpace::operator*(double, const QSizeF&)
    0,
    346,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    554,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    583,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    619,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    697,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    0,
    339,  // QGlobalSpace::operator+(QChar, const QString&)
    555,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    579,  // QGlobalSpace::operator+(const QByteArray&, char)
    0,
    345,  // QGlobalSpace::operator+(const QString&, QChar)
    386,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    592,  // QGlobalSpace::operator+(char, const QByteArray&)
    0,
    452,  // QGlobalSpace::operator-(const QPointF&)
    465,  // QGlobalSpace::operator-(const QPoint&)
    0,
    367,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    494,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    633,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    647,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    0,
    460,  // QGlobalSpace::operator/(const QSizeF&, double)
    475,  // QGlobalSpace::operator/(const QPointF&, double)
    500,  // QGlobalSpace::operator/(const QPoint&, double)
    634,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    470,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    594,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    644,  // QGlobalSpace::operator<(QChar, QChar)
    0,
    330,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    350,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    353,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    368,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    375,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    384,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    399,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    416,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    417,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    418,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    430,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    444,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    457,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    462,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    466,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    468,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    479,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    489,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    495,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    502,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    503,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    513,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    528,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    542,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    552,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    561,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    563,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    570,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    571,  // QGlobalSpace::operator<<(QTextStream&, const QDomNode&)
    575,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    584,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    586,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    591,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    605,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    613,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    624,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    628,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    656,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    657,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    659,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    671,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    695,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    0,
    336,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    373,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    410,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    536,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    682,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    0,
    341,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    397,  // QGlobalSpace::operator<=(QChar, QChar)
    406,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    0,
    335,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    337,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    348,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    357,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    400,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    403,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    423,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    514,  // QGlobalSpace::operator==(QBool, QBool)
    534,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    548,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    572,  // QGlobalSpace::operator==(QChar, QChar)
    588,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    602,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    625,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    673,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    676,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    0,
    481,  // QGlobalSpace::operator==(QString::Null, const QString&)
    524,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    609,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    683,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    687,  // QGlobalSpace::operator==(QBool, bool)
    0,
    427,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    436,  // QGlobalSpace::operator==(const QString&, QString::Null)
    508,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    519,  // QGlobalSpace::operator==(bool, QBool)
    550,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    0,
    419,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    459,  // QGlobalSpace::operator>(QChar, QChar)
    569,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    395,  // QGlobalSpace::operator>=(QChar, QChar)
    420,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    670,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    0,
    321,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    323,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    333,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    349,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    360,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    366,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    405,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    411,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    443,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    487,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    491,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    497,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    515,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    517,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    521,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    537,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    562,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    567,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    616,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    653,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    691,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    0,
    511,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    654,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    0,
    319,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    322,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    325,  // QGlobalSpace::operator|(Qt::WindowType, int)
    334,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    352,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    362,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    369,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    376,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    378,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    382,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    388,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    396,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    401,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    412,  // QGlobalSpace::operator|(Qt::DropAction, int)
    414,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    422,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    428,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    429,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    431,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    434,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    435,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    437,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    439,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    441,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    442,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    447,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    450,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    453,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    455,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    461,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    469,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    477,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    485,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    486,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    496,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    498,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    506,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    509,  // QGlobalSpace::operator|(Qt::WindowState, int)
    518,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    520,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    527,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    532,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    535,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    538,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    541,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    547,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    549,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    553,  // QGlobalSpace::operator|(QFile::Permission, int)
    568,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    577,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    578,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    580,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    582,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    585,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    587,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    590,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    593,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    598,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    606,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    611,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    618,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    626,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    630,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    631,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    636,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    637,  // QGlobalSpace::operator|(QDir::Filter, int)
    642,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    645,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    646,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    651,  // QGlobalSpace::operator|(Qt::Orientation, int)
    652,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    660,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    661,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    664,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    666,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    667,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    668,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    677,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    678,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    679,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    681,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    684,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    685,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    693,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    694,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    698,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    699,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    0,
    440,  // QGlobalSpace::qFuzzyCompare(double, double)
    488,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    522,  // QGlobalSpace::qFuzzyIsNull(double)
    655,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    387,  // QGlobalSpace::qHash(const QBitArray&)
    526,  // QGlobalSpace::qHash(QChar)
    566,  // QGlobalSpace::qHash(const QStringRef&)
    617,  // QGlobalSpace::qHash(const QUrl&)
    658,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    672,  // QGlobalSpace::qHash(const QByteArray&)
    674,  // QGlobalSpace::qHash(const QModelIndex&)
    0,
    327,  // QGlobalSpace::qHash(unsigned int)
    328,  // QGlobalSpace::qHash(char)
    355,  // QGlobalSpace::qHash(unsigned char)
    374,  // QGlobalSpace::qHash(short)
    381,  // QGlobalSpace::qHash(long)
    426,  // QGlobalSpace::qHash(unsigned short)
    449,  // QGlobalSpace::qHash(long long)
    473,  // QGlobalSpace::qHash(unsigned long long)
    505,  // QGlobalSpace::qHash(int)
    546,  // QGlobalSpace::qHash(signed char)
    599,  // QGlobalSpace::qHash(const QString&)
    641,  // QGlobalSpace::qHash(unsigned long)
    0,
    421,  // QGlobalSpace::qIntCast(float)
    476,  // QGlobalSpace::qIntCast(double)
    0,
    377,  // QGlobalSpace::qIsFinite(double)
    696,  // QGlobalSpace::qIsFinite(float)
    0,
    454,  // QGlobalSpace::qIsInf(float)
    632,  // QGlobalSpace::qIsInf(double)
    0,
    604,  // QGlobalSpace::qIsNaN(float)
    610,  // QGlobalSpace::qIsNaN(double)
    0,
    361,  // QGlobalSpace::qIsNull(float)
    649,  // QGlobalSpace::qIsNull(double)
    0,
    892,  // QXmlReader::parse(const QXmlInputSource&)
    893,  // QXmlReader::parse(const QXmlInputSource*)
    0,
    36,  // QDomDocument::QDomDocument(const QDomDocumentType&)
    37,  // QDomDocument::QDomDocument(const QDomDocument&)
    0,
    79,  // QDomDocument::setContent(const QByteArray&)
    85,  // QDomDocument::setContent(QIODevice*)
    0,
    67,  // QDomDocument::setContent(const QByteArray&, bool)
    73,  // QDomDocument::setContent(QIODevice*, bool)
    76,  // QDomDocument::setContent(QXmlInputSource*, bool)
    80,  // QDomDocument::setContent(const QByteArray&, QString*)
    86,  // QDomDocument::setContent(QIODevice*, QString*)
    0,
    68,  // QDomDocument::setContent(const QByteArray&, bool, QString*)
    74,  // QDomDocument::setContent(QIODevice*, bool, QString*)
    77,  // QDomDocument::setContent(QXmlInputSource*, bool, QString*)
    81,  // QDomDocument::setContent(const QByteArray&, QString*, int*)
    87,  // QDomDocument::setContent(QIODevice*, QString*, int*)
    0,
    61,  // QDomDocument::setContent(const QByteArray&, QString*, int*, int*)
    63,  // QDomDocument::setContent(QIODevice*, QString*, int*, int*)
    69,  // QDomDocument::setContent(const QByteArray&, bool, QString*, int*)
    75,  // QDomDocument::setContent(QIODevice*, bool, QString*, int*)
    78,  // QDomDocument::setContent(QXmlInputSource*, bool, QString*, int*)
    0,
    57,  // QDomDocument::setContent(const QByteArray&, bool, QString*, int*, int*)
    59,  // QDomDocument::setContent(QIODevice*, bool, QString*, int*, int*)
    60,  // QDomDocument::setContent(QXmlInputSource*, bool, QString*, int*, int*)
    0,
    70,  // QDomDocument::setContent(const QString&, bool)
    83,  // QDomDocument::setContent(const QString&, QString*)
    0,
    71,  // QDomDocument::setContent(const QString&, bool, QString*)
    84,  // QDomDocument::setContent(const QString&, QString*, int*)
    0,
    62,  // QDomDocument::setContent(const QString&, QString*, int*, int*)
    72,  // QDomDocument::setContent(const QString&, bool, QString*, int*)
    0,
    926,  // QXmlStreamWriter::QXmlStreamWriter(QIODevice*)
    927,  // QXmlStreamWriter::QXmlStreamWriter(QByteArray*)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {10, 40, 1},	// QDomAttr::QDomAttr
    {10, 41, 2},	// QDomAttr::QDomAttr#
    {10, 282, 4},	// QDomAttr::name
    {10, 293, 9},	// QDomAttr::nodeType
    {10, 333, 3},	// QDomAttr::operator=#
    {10, 357, 6},	// QDomAttr::ownerElement
    {10, 632, 8},	// QDomAttr::setValue$
    {10, 636, 5},	// QDomAttr::specified
    {10, 681, 7},	// QDomAttr::value
    {10, 727, 10},	// QDomAttr::~QDomAttr
    {11, 42, 11},	// QDomCDATASection::QDomCDATASection
    {11, 43, 12},	// QDomCDATASection::QDomCDATASection#
    {11, 293, 14},	// QDomCDATASection::nodeType
    {11, 333, 13},	// QDomCDATASection::operator=#
    {11, 728, 15},	// QDomCDATASection::~QDomCDATASection
    {12, 44, 16},	// QDomCharacterData::QDomCharacterData
    {12, 45, 17},	// QDomCharacterData::QDomCharacterData#
    {12, 125, 20},	// QDomCharacterData::appendData$
    {12, 180, 25},	// QDomCharacterData::data
    {12, 183, 22},	// QDomCharacterData::deleteData$$
    {12, 249, 21},	// QDomCharacterData::insertData$$
    {12, 276, 24},	// QDomCharacterData::length
    {12, 293, 27},	// QDomCharacterData::nodeType
    {12, 333, 18},	// QDomCharacterData::operator=#
    {12, 556, 23},	// QDomCharacterData::replaceData$$$
    {12, 599, 26},	// QDomCharacterData::setData$
    {12, 652, 19},	// QDomCharacterData::substringData$$
    {12, 729, 28},	// QDomCharacterData::~QDomCharacterData
    {13, 46, 29},	// QDomComment::QDomComment
    {13, 47, 30},	// QDomComment::QDomComment#
    {13, 293, 32},	// QDomComment::nodeType
    {13, 333, 31},	// QDomComment::operator=#
    {13, 730, 33},	// QDomComment::~QDomComment
    {14, 48, 34},	// QDomDocument::QDomDocument
    {14, 49, -349},	// QDomDocument::QDomDocument#
    {14, 50, 35},	// QDomDocument::QDomDocument$
    {14, 158, 45},	// QDomDocument::createAttribute$
    {14, 160, 50},	// QDomDocument::createAttributeNS$$
    {14, 162, 43},	// QDomDocument::createCDATASection$
    {14, 164, 42},	// QDomDocument::createComment$
    {14, 167, 40},	// QDomDocument::createDocumentFragment
    {14, 171, 39},	// QDomDocument::createElement$
    {14, 173, 49},	// QDomDocument::createElementNS$$
    {14, 175, 46},	// QDomDocument::createEntityReference$
    {14, 177, 44},	// QDomDocument::createProcessingInstruction$$
    {14, 179, 41},	// QDomDocument::createTextNode$
    {14, 185, 53},	// QDomDocument::doctype
    {14, 186, 55},	// QDomDocument::documentElement
    {14, 188, 52},	// QDomDocument::elementById$
    {14, 190, 47},	// QDomDocument::elementsByTagName$
    {14, 192, 51},	// QDomDocument::elementsByTagNameNS$$
    {14, 237, 54},	// QDomDocument::implementation
    {14, 239, 48},	// QDomDocument::importNode#$
    {14, 293, 56},	// QDomDocument::nodeType
    {14, 333, 38},	// QDomDocument::operator=#
    {14, 579, -352},	// QDomDocument::setContent#
    {14, 580, 88},	// QDomDocument::setContent##
    {14, 581, 89},	// QDomDocument::setContent##$
    {14, 582, 90},	// QDomDocument::setContent##$$
    {14, 583, 64},	// QDomDocument::setContent##$$$
    {14, 584, -355},	// QDomDocument::setContent#$
    {14, 585, -361},	// QDomDocument::setContent#$$
    {14, 586, -367},	// QDomDocument::setContent#$$$
    {14, 587, -373},	// QDomDocument::setContent#$$$$
    {14, 588, 82},	// QDomDocument::setContent$
    {14, 589, -377},	// QDomDocument::setContent$$
    {14, 590, -380},	// QDomDocument::setContent$$$
    {14, 591, -383},	// QDomDocument::setContent$$$$
    {14, 592, 58},	// QDomDocument::setContent$$$$$
    {14, 658, 92},	// QDomDocument::toByteArray
    {14, 659, 66},	// QDomDocument::toByteArray$
    {14, 671, 91},	// QDomDocument::toString
    {14, 672, 65},	// QDomDocument::toString$
    {14, 731, 93},	// QDomDocument::~QDomDocument
    {15, 51, 94},	// QDomDocumentFragment::QDomDocumentFragment
    {15, 52, 95},	// QDomDocumentFragment::QDomDocumentFragment#
    {15, 293, 97},	// QDomDocumentFragment::nodeType
    {15, 333, 96},	// QDomDocumentFragment::operator=#
    {15, 732, 98},	// QDomDocumentFragment::~QDomDocumentFragment
    {16, 53, 99},	// QDomDocumentType::QDomDocumentType
    {16, 54, 100},	// QDomDocumentType::QDomDocumentType#
    {16, 202, 103},	// QDomDocumentType::entities
    {16, 252, 107},	// QDomDocumentType::internalSubset
    {16, 282, 102},	// QDomDocumentType::name
    {16, 293, 108},	// QDomDocumentType::nodeType
    {16, 299, 104},	// QDomDocumentType::notations
    {16, 333, 101},	// QDomDocumentType::operator=#
    {16, 378, 105},	// QDomDocumentType::publicId
    {16, 653, 106},	// QDomDocumentType::systemId
    {16, 733, 109},	// QDomDocumentType::~QDomDocumentType
    {17, 55, 110},	// QDomElement::QDomElement
    {17, 56, 111},	// QDomElement::QDomElement#
    {17, 129, 144},	// QDomElement::attribute$
    {17, 130, 113},	// QDomElement::attribute$$
    {17, 134, 145},	// QDomElement::attributeNS$$
    {17, 135, 127},	// QDomElement::attributeNS$$$
    {17, 137, 122},	// QDomElement::attributeNode$
    {17, 139, 135},	// QDomElement::attributeNodeNS$$
    {17, 140, 141},	// QDomElement::attributes
    {17, 190, 125},	// QDomElement::elementsByTagName$
    {17, 192, 137},	// QDomElement::elementsByTagNameNS$$
    {17, 223, 126},	// QDomElement::hasAttribute$
    {17, 225, 138},	// QDomElement::hasAttributeNS$$
    {17, 293, 142},	// QDomElement::nodeType
    {17, 333, 112},	// QDomElement::operator=#
    {17, 542, 121},	// QDomElement::removeAttribute$
    {17, 544, 134},	// QDomElement::removeAttributeNS$$
    {17, 546, 124},	// QDomElement::removeAttributeNode#
    {17, 564, -13},	// QDomElement::setAttribute$$
    {17, 566, -21},	// QDomElement::setAttributeNS$$$
    {17, 568, 123},	// QDomElement::setAttributeNode#
    {17, 570, 136},	// QDomElement::setAttributeNodeNS#
    {17, 630, 140},	// QDomElement::setTagName$
    {17, 654, 139},	// QDomElement::tagName
    {17, 656, 143},	// QDomElement::text
    {17, 734, 146},	// QDomElement::~QDomElement
    {18, 57, 147},	// QDomEntity::QDomEntity
    {18, 58, 148},	// QDomEntity::QDomEntity#
    {18, 293, 153},	// QDomEntity::nodeType
    {18, 298, 152},	// QDomEntity::notationName
    {18, 333, 149},	// QDomEntity::operator=#
    {18, 378, 150},	// QDomEntity::publicId
    {18, 653, 151},	// QDomEntity::systemId
    {18, 735, 154},	// QDomEntity::~QDomEntity
    {19, 59, 155},	// QDomEntityReference::QDomEntityReference
    {19, 60, 156},	// QDomEntityReference::QDomEntityReference#
    {19, 293, 158},	// QDomEntityReference::nodeType
    {19, 333, 157},	// QDomEntityReference::operator=#
    {19, 736, 159},	// QDomEntityReference::~QDomEntityReference
    {20, 1, 171},	// QDomImplementation::AcceptInvalidChars
    {20, 11, 172},	// QDomImplementation::DropInvalidChars
    {20, 61, 160},	// QDomImplementation::QDomImplementation
    {20, 62, 161},	// QDomImplementation::QDomImplementation#
    {20, 118, 173},	// QDomImplementation::ReturnNullNode
    {20, 166, 167},	// QDomImplementation::createDocument$$#
    {20, 169, 166},	// QDomImplementation::createDocumentType$$$
    {20, 231, 165},	// QDomImplementation::hasFeature$$
    {20, 253, 168},	// QDomImplementation::invalidDataPolicy
    {20, 266, 170},	// QDomImplementation::isNull
    {20, 301, 164},	// QDomImplementation::operator!=#
    {20, 333, 162},	// QDomImplementation::operator=#
    {20, 335, 163},	// QDomImplementation::operator==#
    {20, 615, 169},	// QDomImplementation::setInvalidDataPolicy$
    {20, 737, 174},	// QDomImplementation::~QDomImplementation
    {21, 63, 175},	// QDomNamedNodeMap::QDomNamedNodeMap
    {21, 64, 176},	// QDomNamedNodeMap::QDomNamedNodeMap#
    {21, 154, 191},	// QDomNamedNodeMap::contains$
    {21, 156, 188},	// QDomNamedNodeMap::count
    {21, 262, 190},	// QDomNamedNodeMap::isEmpty
    {21, 272, 183},	// QDomNamedNodeMap::item$
    {21, 276, 187},	// QDomNamedNodeMap::length
    {21, 284, 180},	// QDomNamedNodeMap::namedItem$
    {21, 286, 184},	// QDomNamedNodeMap::namedItemNS$$
    {21, 301, 179},	// QDomNamedNodeMap::operator!=#
    {21, 333, 177},	// QDomNamedNodeMap::operator=#
    {21, 335, 178},	// QDomNamedNodeMap::operator==#
    {21, 550, 182},	// QDomNamedNodeMap::removeNamedItem$
    {21, 552, 186},	// QDomNamedNodeMap::removeNamedItemNS$$
    {21, 619, 181},	// QDomNamedNodeMap::setNamedItem#
    {21, 621, 185},	// QDomNamedNodeMap::setNamedItemNS#
    {21, 633, 189},	// QDomNamedNodeMap::size
    {21, 738, 192},	// QDomNamedNodeMap::~QDomNamedNodeMap
    {22, 2, 269},	// QDomNode::AttributeNode
    {22, 3, 280},	// QDomNode::BaseNode
    {22, 4, 271},	// QDomNode::CDATASectionNode
    {22, 5, 281},	// QDomNode::CharacterDataNode
    {22, 6, 275},	// QDomNode::CommentNode
    {22, 8, 278},	// QDomNode::DocumentFragmentNode
    {22, 9, 276},	// QDomNode::DocumentNode
    {22, 10, 277},	// QDomNode::DocumentTypeNode
    {22, 12, 268},	// QDomNode::ElementNode
    {22, 13, 282},	// QDomNode::EncodingFromDocument
    {22, 14, 283},	// QDomNode::EncodingFromTextStream
    {22, 17, 273},	// QDomNode::EntityNode
    {22, 18, 272},	// QDomNode::EntityReferenceNode
    {22, 38, 279},	// QDomNode::NotationNode
    {22, 39, 274},	// QDomNode::ProcessingInstructionNode
    {22, 65, 193},	// QDomNode::QDomNode
    {22, 66, 194},	// QDomNode::QDomNode#
    {22, 119, 270},	// QDomNode::TextNode
    {22, 123, 202},	// QDomNode::appendChild#
    {22, 140, 215},	// QDomNode::attributes
    {22, 145, 210},	// QDomNode::childNodes
    {22, 146, 239},	// QDomNode::clear
    {22, 147, 261},	// QDomNode::cloneNode
    {22, 148, 204},	// QDomNode::cloneNode$
    {22, 150, 260},	// QDomNode::columnNumber
    {22, 216, 211},	// QDomNode::firstChild
    {22, 217, 262},	// QDomNode::firstChildElement
    {22, 218, 255},	// QDomNode::firstChildElement$
    {22, 226, 219},	// QDomNode::hasAttributes
    {22, 227, 203},	// QDomNode::hasChildNodes
    {22, 236, 266},	// QDomNode::impl
    {22, 245, 199},	// QDomNode::insertAfter##
    {22, 247, 198},	// QDomNode::insertBefore##
    {22, 254, 224},	// QDomNode::isAttr
    {22, 255, 225},	// QDomNode::isCDATASection
    {22, 256, 235},	// QDomNode::isCharacterData
    {22, 257, 236},	// QDomNode::isComment
    {22, 258, 227},	// QDomNode::isDocument
    {22, 259, 226},	// QDomNode::isDocumentFragment
    {22, 260, 228},	// QDomNode::isDocumentType
    {22, 261, 229},	// QDomNode::isElement
    {22, 263, 232},	// QDomNode::isEntity
    {22, 264, 230},	// QDomNode::isEntityReference
    {22, 265, 233},	// QDomNode::isNotation
    {22, 266, 238},	// QDomNode::isNull
    {22, 267, 234},	// QDomNode::isProcessingInstruction
    {22, 269, 206},	// QDomNode::isSupported$$
    {22, 270, 231},	// QDomNode::isText
    {22, 273, 212},	// QDomNode::lastChild
    {22, 274, 263},	// QDomNode::lastChildElement
    {22, 275, 256},	// QDomNode::lastChildElement$
    {22, 278, 259},	// QDomNode::lineNumber
    {22, 279, 218},	// QDomNode::localName
    {22, 284, 237},	// QDomNode::namedItem$
    {22, 287, 217},	// QDomNode::namespaceURI
    {22, 289, 214},	// QDomNode::nextSibling
    {22, 290, 265},	// QDomNode::nextSiblingElement
    {22, 291, 258},	// QDomNode::nextSiblingElement$
    {22, 292, 207},	// QDomNode::nodeName
    {22, 293, 208},	// QDomNode::nodeType
    {22, 294, 220},	// QDomNode::nodeValue
    {22, 295, 205},	// QDomNode::normalize
    {22, 301, 197},	// QDomNode::operator!=#
    {22, 333, 195},	// QDomNode::operator=#
    {22, 335, 196},	// QDomNode::operator==#
    {22, 356, 216},	// QDomNode::ownerDocument
    {22, 358, 209},	// QDomNode::parentNode
    {22, 364, 222},	// QDomNode::prefix
    {22, 368, 213},	// QDomNode::previousSibling
    {22, 369, 264},	// QDomNode::previousSiblingElement
    {22, 370, 257},	// QDomNode::previousSiblingElement$
    {22, 548, 201},	// QDomNode::removeChild#
    {22, 554, 200},	// QDomNode::replaceChild##
    {22, 561, 253},	// QDomNode::save#$
    {22, 562, 254},	// QDomNode::save#$$
    {22, 613, 267},	// QDomNode::setImpl#
    {22, 623, 221},	// QDomNode::setNodeValue$
    {22, 625, 223},	// QDomNode::setPrefix$
    {22, 657, 240},	// QDomNode::toAttr
    {22, 660, 241},	// QDomNode::toCDATASection
    {22, 661, 251},	// QDomNode::toCharacterData
    {22, 662, 252},	// QDomNode::toComment
    {22, 663, 243},	// QDomNode::toDocument
    {22, 664, 242},	// QDomNode::toDocumentFragment
    {22, 665, 244},	// QDomNode::toDocumentType
    {22, 666, 245},	// QDomNode::toElement
    {22, 667, 248},	// QDomNode::toEntity
    {22, 668, 246},	// QDomNode::toEntityReference
    {22, 669, 249},	// QDomNode::toNotation
    {22, 670, 250},	// QDomNode::toProcessingInstruction
    {22, 673, 247},	// QDomNode::toText
    {22, 739, 284},	// QDomNode::~QDomNode
    {23, 67, 285},	// QDomNodeList::QDomNodeList
    {23, 68, 286},	// QDomNodeList::QDomNodeList#
    {23, 127, 291},	// QDomNodeList::at$
    {23, 156, 293},	// QDomNodeList::count
    {23, 262, 295},	// QDomNodeList::isEmpty
    {23, 272, 290},	// QDomNodeList::item$
    {23, 276, 292},	// QDomNodeList::length
    {23, 301, 289},	// QDomNodeList::operator!=#
    {23, 333, 287},	// QDomNodeList::operator=#
    {23, 335, 288},	// QDomNodeList::operator==#
    {23, 633, 294},	// QDomNodeList::size
    {23, 740, 296},	// QDomNodeList::~QDomNodeList
    {25, 69, 297},	// QDomNotation::QDomNotation
    {25, 70, 298},	// QDomNotation::QDomNotation#
    {25, 293, 302},	// QDomNotation::nodeType
    {25, 333, 299},	// QDomNotation::operator=#
    {25, 378, 300},	// QDomNotation::publicId
    {25, 653, 301},	// QDomNotation::systemId
    {25, 741, 303},	// QDomNotation::~QDomNotation
    {26, 71, 304},	// QDomProcessingInstruction::QDomProcessingInstruction
    {26, 72, 305},	// QDomProcessingInstruction::QDomProcessingInstruction#
    {26, 180, 308},	// QDomProcessingInstruction::data
    {26, 293, 310},	// QDomProcessingInstruction::nodeType
    {26, 333, 306},	// QDomProcessingInstruction::operator=#
    {26, 599, 309},	// QDomProcessingInstruction::setData$
    {26, 655, 307},	// QDomProcessingInstruction::target
    {26, 742, 311},	// QDomProcessingInstruction::~QDomProcessingInstruction
    {27, 73, 312},	// QDomText::QDomText
    {27, 74, 313},	// QDomText::QDomText#
    {27, 293, 316},	// QDomText::nodeType
    {27, 333, 314},	// QDomText::operator=#
    {27, 640, 315},	// QDomText::splitText$
    {27, 743, 317},	// QDomText::~QDomText
    {29, 19, 712},	// QGlobalSpace::LicensedActiveQt
    {29, 20, 718},	// QGlobalSpace::LicensedCore
    {29, 21, 710},	// QGlobalSpace::LicensedDBus
    {29, 22, 715},	// QGlobalSpace::LicensedDeclarative
    {29, 23, 705},	// QGlobalSpace::LicensedGui
    {29, 24, 724},	// QGlobalSpace::LicensedHelp
    {29, 25, 725},	// QGlobalSpace::LicensedMultimedia
    {29, 26, 728},	// QGlobalSpace::LicensedNetwork
    {29, 27, 717},	// QGlobalSpace::LicensedOpenGL
    {29, 28, 709},	// QGlobalSpace::LicensedOpenVG
    {29, 29, 726},	// QGlobalSpace::LicensedQt3Support
    {29, 30, 707},	// QGlobalSpace::LicensedQt3SupportLight
    {29, 31, 708},	// QGlobalSpace::LicensedScript
    {29, 32, 713},	// QGlobalSpace::LicensedScriptTools
    {29, 33, 716},	// QGlobalSpace::LicensedSql
    {29, 34, 714},	// QGlobalSpace::LicensedSvg
    {29, 35, 711},	// QGlobalSpace::LicensedTest
    {29, 36, 706},	// QGlobalSpace::LicensedXml
    {29, 37, 727},	// QGlobalSpace::LicensedXmlPatterns
    {29, 108, 700},	// QGlobalSpace::Q_COMPLEX_TYPE
    {29, 109, 704},	// QGlobalSpace::Q_DUMMY_TYPE
    {29, 110, 703},	// QGlobalSpace::Q_MOVABLE_TYPE
    {29, 111, 701},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {29, 112, 702},	// QGlobalSpace::Q_STATIC_TYPE
    {29, 113, 721},	// QGlobalSpace::QtCriticalMsg
    {29, 114, 719},	// QGlobalSpace::QtDebugMsg
    {29, 115, 722},	// QGlobalSpace::QtFatalMsg
    {29, 116, 723},	// QGlobalSpace::QtSystemMsg
    {29, 117, 720},	// QGlobalSpace::QtWarningMsg
    {29, 302, -28},	// QGlobalSpace::operator!=##
    {29, 303, -44},	// QGlobalSpace::operator!=#$
    {29, 304, -50},	// QGlobalSpace::operator!=$#
    {29, 306, 464},	// QGlobalSpace::operator&##
    {29, 308, -56},	// QGlobalSpace::operator*#$
    {29, 309, -63},	// QGlobalSpace::operator*$#
    {29, 311, -70},	// QGlobalSpace::operator+##
    {29, 312, -76},	// QGlobalSpace::operator+#$
    {29, 313, -80},	// QGlobalSpace::operator+$#
    {29, 314, 600},	// QGlobalSpace::operator+$$
    {29, 316, -84},	// QGlobalSpace::operator-#
    {29, 317, -87},	// QGlobalSpace::operator-##
    {29, 319, -92},	// QGlobalSpace::operator/#$
    {29, 321, -97},	// QGlobalSpace::operator<##
    {29, 322, 332},	// QGlobalSpace::operator<#$
    {29, 323, 392},	// QGlobalSpace::operator<$#
    {29, 325, -101},	// QGlobalSpace::operator<<##
    {29, 326, -144},	// QGlobalSpace::operator<<#$
    {29, 327, 603},	// QGlobalSpace::operator<<#?
    {29, 329, -150},	// QGlobalSpace::operator<=##
    {29, 330, 482},	// QGlobalSpace::operator<=#$
    {29, 331, 456},	// QGlobalSpace::operator<=$#
    {29, 336, -154},	// QGlobalSpace::operator==##
    {29, 337, -171},	// QGlobalSpace::operator==#$
    {29, 338, -177},	// QGlobalSpace::operator==$#
    {29, 340, -183},	// QGlobalSpace::operator>##
    {29, 341, 662},	// QGlobalSpace::operator>#$
    {29, 342, 424},	// QGlobalSpace::operator>$#
    {29, 344, -187},	// QGlobalSpace::operator>=##
    {29, 345, 467},	// QGlobalSpace::operator>=#$
    {29, 346, 635},	// QGlobalSpace::operator>=$#
    {29, 348, -191},	// QGlobalSpace::operator>>##
    {29, 349, -213},	// QGlobalSpace::operator>>#$
    {29, 350, 551},	// QGlobalSpace::operator>>#?
    {29, 352, 689},	// QGlobalSpace::operator^##
    {29, 354, 390},	// QGlobalSpace::operator|##
    {29, 355, -216},	// QGlobalSpace::operator|$$
    {29, 381, 320},	// QGlobalSpace::qAcos$
    {29, 383, 556},	// QGlobalSpace::qAddPostRoutine$
    {29, 384, 324},	// QGlobalSpace::qAppName
    {29, 386, 690},	// QGlobalSpace::qAsin$
    {29, 388, 393},	// QGlobalSpace::qAtan$
    {29, 390, 372},	// QGlobalSpace::qAtan2$$
    {29, 391, 692},	// QGlobalSpace::qBadAlloc
    {29, 393, 545},	// QGlobalSpace::qCeil$
    {29, 395, 490},	// QGlobalSpace::qChecksum$$
    {29, 397, 409},	// QGlobalSpace::qCompress#
    {29, 398, 408},	// QGlobalSpace::qCompress#$
    {29, 399, 596},	// QGlobalSpace::qCompress$$
    {29, 400, 595},	// QGlobalSpace::qCompress$$$
    {29, 402, 573},	// QGlobalSpace::qCos$
    {29, 403, 499},	// QGlobalSpace::qCritical
    {29, 404, 448},	// QGlobalSpace::qDebug
    {29, 406, 516},	// QGlobalSpace::qExp$
    {29, 408, 425},	// QGlobalSpace::qFabs$
    {29, 410, 483},	// QGlobalSpace::qFastCos$
    {29, 412, 338},	// QGlobalSpace::qFastSin$
    {29, 414, 474},	// QGlobalSpace::qFlagLocation$
    {29, 416, 597},	// QGlobalSpace::qFloor$
    {29, 418, 608},	// QGlobalSpace::qFree$
    {29, 420, 680},	// QGlobalSpace::qFreeAligned$
    {29, 422, -304},	// QGlobalSpace::qFuzzyCompare$$
    {29, 424, -307},	// QGlobalSpace::qFuzzyIsNull$
    {29, 426, -310},	// QGlobalSpace::qHash#
    {29, 427, -318},	// QGlobalSpace::qHash$
    {29, 428, 564},	// QGlobalSpace::qInf
    {29, 430, 493},	// QGlobalSpace::qInstallMsgHandler$
    {29, 432, -331},	// QGlobalSpace::qIntCast$
    {29, 434, -334},	// QGlobalSpace::qIsFinite$
    {29, 436, -337},	// QGlobalSpace::qIsInf$
    {29, 438, -340},	// QGlobalSpace::qIsNaN$
    {29, 440, -343},	// QGlobalSpace::qIsNull$
    {29, 442, 686},	// QGlobalSpace::qLn$
    {29, 444, 648},	// QGlobalSpace::qMalloc$
    {29, 446, 574},	// QGlobalSpace::qMallocAligned$$
    {29, 448, 607},	// QGlobalSpace::qMemCopy$$$
    {29, 450, 543},	// QGlobalSpace::qMemSet$$$
    {29, 454, 501},	// QGlobalSpace::qPow$$
    {29, 455, 363},	// QGlobalSpace::qQNaN
    {29, 457, 433},	// QGlobalSpace::qRealloc$$
    {29, 459, 413},	// QGlobalSpace::qReallocAligned$$$$
    {29, 461, 557},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {29, 463, 484},	// QGlobalSpace::qRemovePostRoutine$
    {29, 465, 318},	// QGlobalSpace::qRound$
    {29, 467, 640},	// QGlobalSpace::qRound64$
    {29, 468, 643},	// QGlobalSpace::qSNaN
    {29, 470, 665},	// QGlobalSpace::qSetFieldWidth$
    {29, 472, 365},	// QGlobalSpace::qSetPadChar#
    {29, 474, 614},	// QGlobalSpace::qSetRealNumberPrecision$
    {29, 475, 560},	// QGlobalSpace::qSharedBuild
    {29, 477, 623},	// QGlobalSpace::qSin$
    {29, 479, 415},	// QGlobalSpace::qSqrt$
    {29, 481, 589},	// QGlobalSpace::qStringComparisonHelper#$
    {29, 483, 639},	// QGlobalSpace::qTan$
    {29, 485, 478},	// QGlobalSpace::qUncompress#
    {29, 486, 407},	// QGlobalSpace::qUncompress$$
    {29, 487, 581},	// QGlobalSpace::qVersion
    {29, 488, 438},	// QGlobalSpace::qWarning
    {29, 490, 525},	// QGlobalSpace::qbswap_helper$$$
    {29, 492, 331},	// QGlobalSpace::qgetenv$
    {29, 494, 650},	// QGlobalSpace::qputenv$#
    {29, 495, 615},	// QGlobalSpace::qrand
    {29, 497, 533},	// QGlobalSpace::qsrand$
    {29, 499, 463},	// QGlobalSpace::qstrcmp##
    {29, 500, 379},	// QGlobalSpace::qstrcmp#$
    {29, 501, 394},	// QGlobalSpace::qstrcmp$#
    {29, 502, 383},	// QGlobalSpace::qstrcmp$$
    {29, 504, 389},	// QGlobalSpace::qstrcpy$$
    {29, 506, 380},	// QGlobalSpace::qstrdup$
    {29, 508, 540},	// QGlobalSpace::qstricmp$$
    {29, 510, 629},	// QGlobalSpace::qstrlen$
    {29, 512, 340},	// QGlobalSpace::qstrncmp$$$
    {29, 514, 326},	// QGlobalSpace::qstrncpy$$$
    {29, 516, 565},	// QGlobalSpace::qstrnicmp$$$
    {29, 518, 347},	// QGlobalSpace::qstrnlen$$
    {29, 520, 371},	// QGlobalSpace::qtTrId$
    {29, 521, 370},	// QGlobalSpace::qtTrId$$
    {29, 523, 627},	// QGlobalSpace::qt_assert$$$
    {29, 525, 576},	// QGlobalSpace::qt_assert_x$$$$
    {29, 527, 402},	// QGlobalSpace::qt_check_pointer$$
    {29, 528, 359},	// QGlobalSpace::qt_error_string
    {29, 529, 358},	// QGlobalSpace::qt_error_string$
    {29, 531, 531},	// QGlobalSpace::qt_message_output$$
    {29, 532, 507},	// QGlobalSpace::qt_noop
    {29, 534, 512},	// QGlobalSpace::qt_qFindChild_helper#$#
    {29, 536, 356},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {29, 538, 523},	// QGlobalSpace::qvariant_cast_helper#$$
    {29, 540, 342},	// QGlobalSpace::qvsnprintf$$$?
    {59, 75, 729},	// QXmlAttributes::QXmlAttributes
    {59, 76, 747},	// QXmlAttributes::QXmlAttributes#
    {59, 121, 746},	// QXmlAttributes::append$$$$
    {59, 146, 745},	// QXmlAttributes::clear
    {59, 156, 734},	// QXmlAttributes::count
    {59, 241, 731},	// QXmlAttributes::index#
    {59, 242, 730},	// QXmlAttributes::index$
    {59, 243, 732},	// QXmlAttributes::index$$
    {59, 276, 733},	// QXmlAttributes::length
    {59, 280, 735},	// QXmlAttributes::localName$
    {59, 452, 736},	// QXmlAttributes::qName$
    {59, 675, -7},	// QXmlAttributes::type$
    {59, 676, 740},	// QXmlAttributes::type$$
    {59, 680, 737},	// QXmlAttributes::uri$
    {59, 682, 743},	// QXmlAttributes::value#
    {59, 683, -10},	// QXmlAttributes::value$
    {59, 684, 744},	// QXmlAttributes::value$$
    {59, 744, 748},	// QXmlAttributes::~QXmlAttributes
    {60, 77, 761},	// QXmlContentHandler::QXmlContentHandler
    {60, 78, 762},	// QXmlContentHandler::QXmlContentHandler#
    {60, 144, 756},	// QXmlContentHandler::characters$
    {60, 195, 751},	// QXmlContentHandler::endDocument
    {60, 197, 755},	// QXmlContentHandler::endElement$$$
    {60, 201, 753},	// QXmlContentHandler::endPrefixMapping$
    {60, 207, 760},	// QXmlContentHandler::errorString
    {60, 235, 757},	// QXmlContentHandler::ignorableWhitespace$
    {60, 374, 758},	// QXmlContentHandler::processingInstruction$$
    {60, 605, 749},	// QXmlContentHandler::setDocumentLocator#
    {60, 635, 759},	// QXmlContentHandler::skippedEntity$
    {60, 644, 750},	// QXmlContentHandler::startDocument
    {60, 646, 754},	// QXmlContentHandler::startElement$$$#
    {60, 650, 752},	// QXmlContentHandler::startPrefixMapping$$
    {60, 745, 763},	// QXmlContentHandler::~QXmlContentHandler
    {61, 79, 767},	// QXmlDTDHandler::QXmlDTDHandler
    {61, 80, 768},	// QXmlDTDHandler::QXmlDTDHandler#
    {61, 207, 766},	// QXmlDTDHandler::errorString
    {61, 297, 764},	// QXmlDTDHandler::notationDecl$$$
    {61, 678, 765},	// QXmlDTDHandler::unparsedEntityDecl$$$$
    {61, 746, 769},	// QXmlDTDHandler::~QXmlDTDHandler
    {62, 81, 774},	// QXmlDeclHandler::QXmlDeclHandler
    {62, 82, 775},	// QXmlDeclHandler::QXmlDeclHandler#
    {62, 132, 770},	// QXmlDeclHandler::attributeDecl$$$$$
    {62, 207, 773},	// QXmlDeclHandler::errorString
    {62, 209, 772},	// QXmlDeclHandler::externalEntityDecl$$$
    {62, 251, 771},	// QXmlDeclHandler::internalEntityDecl$$
    {62, 747, 776},	// QXmlDeclHandler::~QXmlDeclHandler
    {63, 83, 777},	// QXmlDefaultHandler::QXmlDefaultHandler
    {63, 132, 802},	// QXmlDefaultHandler::attributeDecl$$$$$
    {63, 144, 785},	// QXmlDefaultHandler::characters$
    {63, 152, 801},	// QXmlDefaultHandler::comment$
    {63, 193, 800},	// QXmlDefaultHandler::endCDATA
    {63, 194, 796},	// QXmlDefaultHandler::endDTD
    {63, 195, 780},	// QXmlDefaultHandler::endDocument
    {63, 197, 784},	// QXmlDefaultHandler::endElement$$$
    {63, 199, 798},	// QXmlDefaultHandler::endEntity$
    {63, 201, 782},	// QXmlDefaultHandler::endPrefixMapping$
    {63, 205, 790},	// QXmlDefaultHandler::error#
    {63, 207, 805},	// QXmlDefaultHandler::errorString
    {63, 209, 804},	// QXmlDefaultHandler::externalEntityDecl$$$
    {63, 211, 791},	// QXmlDefaultHandler::fatalError#
    {63, 235, 786},	// QXmlDefaultHandler::ignorableWhitespace$
    {63, 251, 803},	// QXmlDefaultHandler::internalEntityDecl$$
    {63, 297, 792},	// QXmlDefaultHandler::notationDecl$$$
    {63, 374, 787},	// QXmlDefaultHandler::processingInstruction$$
    {63, 559, 794},	// QXmlDefaultHandler::resolveEntity$$#
    {63, 605, 778},	// QXmlDefaultHandler::setDocumentLocator#
    {63, 635, 788},	// QXmlDefaultHandler::skippedEntity$
    {63, 641, 799},	// QXmlDefaultHandler::startCDATA
    {63, 643, 795},	// QXmlDefaultHandler::startDTD$$$
    {63, 644, 779},	// QXmlDefaultHandler::startDocument
    {63, 646, 783},	// QXmlDefaultHandler::startElement$$$#
    {63, 648, 797},	// QXmlDefaultHandler::startEntity$
    {63, 650, 781},	// QXmlDefaultHandler::startPrefixMapping$$
    {63, 678, 793},	// QXmlDefaultHandler::unparsedEntityDecl$$$$
    {63, 686, 789},	// QXmlDefaultHandler::warning#
    {63, 748, 806},	// QXmlDefaultHandler::~QXmlDefaultHandler
    {64, 84, 809},	// QXmlEntityResolver::QXmlEntityResolver
    {64, 85, 810},	// QXmlEntityResolver::QXmlEntityResolver#
    {64, 207, 808},	// QXmlEntityResolver::errorString
    {64, 559, 807},	// QXmlEntityResolver::resolveEntity$$#
    {64, 749, 811},	// QXmlEntityResolver::~QXmlEntityResolver
    {65, 86, 816},	// QXmlErrorHandler::QXmlErrorHandler
    {65, 87, 817},	// QXmlErrorHandler::QXmlErrorHandler#
    {65, 205, 813},	// QXmlErrorHandler::error#
    {65, 207, 815},	// QXmlErrorHandler::errorString
    {65, 211, 814},	// QXmlErrorHandler::fatalError#
    {65, 686, 812},	// QXmlErrorHandler::warning#
    {65, 750, 818},	// QXmlErrorHandler::~QXmlErrorHandler
    {66, 15, 830},	// QXmlInputSource::EndOfData
    {66, 16, 831},	// QXmlInputSource::EndOfDocument
    {66, 88, 819},	// QXmlInputSource::QXmlInputSource
    {66, 89, -4},	// QXmlInputSource::QXmlInputSource#
    {66, 180, 824},	// QXmlInputSource::data
    {66, 215, 823},	// QXmlInputSource::fetchData
    {66, 220, 829},	// QXmlInputSource::fromRawData#
    {66, 221, 827},	// QXmlInputSource::fromRawData#$
    {66, 288, 825},	// QXmlInputSource::next
    {66, 557, 826},	// QXmlInputSource::reset
    {66, 598, 822},	// QXmlInputSource::setData#
    {66, 599, 821},	// QXmlInputSource::setData$
    {66, 751, 832},	// QXmlInputSource::~QXmlInputSource
    {67, 90, 841},	// QXmlLexicalHandler::QXmlLexicalHandler
    {67, 91, 842},	// QXmlLexicalHandler::QXmlLexicalHandler#
    {67, 152, 839},	// QXmlLexicalHandler::comment$
    {67, 193, 838},	// QXmlLexicalHandler::endCDATA
    {67, 194, 834},	// QXmlLexicalHandler::endDTD
    {67, 199, 836},	// QXmlLexicalHandler::endEntity$
    {67, 207, 840},	// QXmlLexicalHandler::errorString
    {67, 641, 837},	// QXmlLexicalHandler::startCDATA
    {67, 643, 833},	// QXmlLexicalHandler::startDTD$$$
    {67, 648, 835},	// QXmlLexicalHandler::startEntity$
    {67, 752, 843},	// QXmlLexicalHandler::~QXmlLexicalHandler
    {68, 92, 844},	// QXmlLocator::QXmlLocator
    {68, 93, 847},	// QXmlLocator::QXmlLocator#
    {68, 150, 845},	// QXmlLocator::columnNumber
    {68, 278, 846},	// QXmlLocator::lineNumber
    {68, 753, 848},	// QXmlLocator::~QXmlLocator
    {69, 94, 849},	// QXmlNamespaceSupport::QXmlNamespaceSupport
    {69, 363, 858},	// QXmlNamespaceSupport::popContext
    {69, 365, 851},	// QXmlNamespaceSupport::prefix$
    {69, 366, 855},	// QXmlNamespaceSupport::prefixes
    {69, 367, 856},	// QXmlNamespaceSupport::prefixes$
    {69, 372, 854},	// QXmlNamespaceSupport::processName$$$$
    {69, 379, 857},	// QXmlNamespaceSupport::pushContext
    {69, 557, 859},	// QXmlNamespaceSupport::reset
    {69, 626, 850},	// QXmlNamespaceSupport::setPrefix$$
    {69, 638, 853},	// QXmlNamespaceSupport::splitName$$$
    {69, 680, 852},	// QXmlNamespaceSupport::uri$
    {69, 754, 860},	// QXmlNamespaceSupport::~QXmlNamespaceSupport
    {70, 95, 868},	// QXmlParseException::QXmlParseException
    {70, 96, 862},	// QXmlParseException::QXmlParseException#
    {70, 97, 869},	// QXmlParseException::QXmlParseException$
    {70, 98, 870},	// QXmlParseException::QXmlParseException$$
    {70, 99, 871},	// QXmlParseException::QXmlParseException$$$
    {70, 100, 872},	// QXmlParseException::QXmlParseException$$$$
    {70, 101, 861},	// QXmlParseException::QXmlParseException$$$$$
    {70, 150, 863},	// QXmlParseException::columnNumber
    {70, 278, 864},	// QXmlParseException::lineNumber
    {70, 281, 867},	// QXmlParseException::message
    {70, 378, 865},	// QXmlParseException::publicId
    {70, 653, 866},	// QXmlParseException::systemId
    {70, 755, 873},	// QXmlParseException::~QXmlParseException
    {71, 7, 883},	// QXmlReader::DTDHandler
    {71, 102, 894},	// QXmlReader::QXmlReader
    {71, 103, 895},	// QXmlReader::QXmlReader#
    {71, 155, 885},	// QXmlReader::contentHandler
    {71, 181, 891},	// QXmlReader::declHandler
    {71, 203, 881},	// QXmlReader::entityResolver
    {71, 206, 887},	// QXmlReader::errorHandler
    {71, 213, 896},	// QXmlReader::feature$
    {71, 214, 874},	// QXmlReader::feature$$
    {71, 230, 876},	// QXmlReader::hasFeature$
    {71, 233, 879},	// QXmlReader::hasProperty$
    {71, 277, 889},	// QXmlReader::lexicalHandler
    {71, 360, -346},	// QXmlReader::parse#
    {71, 376, 897},	// QXmlReader::property$
    {71, 377, 877},	// QXmlReader::property$$
    {71, 594, 884},	// QXmlReader::setContentHandler#
    {71, 596, 882},	// QXmlReader::setDTDHandler#
    {71, 601, 890},	// QXmlReader::setDeclHandler#
    {71, 607, 880},	// QXmlReader::setEntityResolver#
    {71, 609, 886},	// QXmlReader::setErrorHandler#
    {71, 611, 875},	// QXmlReader::setFeature$$
    {71, 617, 888},	// QXmlReader::setLexicalHandler#
    {71, 628, 878},	// QXmlReader::setProperty$$
    {71, 756, 898},	// QXmlReader::~QXmlReader
    {72, 7, 909},	// QXmlSimpleReader::DTDHandler
    {72, 104, 899},	// QXmlSimpleReader::QXmlSimpleReader
    {72, 155, 911},	// QXmlSimpleReader::contentHandler
    {72, 181, 917},	// QXmlSimpleReader::declHandler
    {72, 203, 907},	// QXmlSimpleReader::entityResolver
    {72, 206, 913},	// QXmlSimpleReader::errorHandler
    {72, 213, 922},	// QXmlSimpleReader::feature$
    {72, 214, 900},	// QXmlSimpleReader::feature$$
    {72, 230, 902},	// QXmlSimpleReader::hasFeature$
    {72, 233, 905},	// QXmlSimpleReader::hasProperty$
    {72, 277, 915},	// QXmlSimpleReader::lexicalHandler
    {72, 360, -1},	// QXmlSimpleReader::parse#
    {72, 361, 920},	// QXmlSimpleReader::parse#$
    {72, 362, 921},	// QXmlSimpleReader::parseContinue
    {72, 376, 923},	// QXmlSimpleReader::property$
    {72, 377, 903},	// QXmlSimpleReader::property$$
    {72, 594, 910},	// QXmlSimpleReader::setContentHandler#
    {72, 596, 908},	// QXmlSimpleReader::setDTDHandler#
    {72, 601, 916},	// QXmlSimpleReader::setDeclHandler#
    {72, 607, 906},	// QXmlSimpleReader::setEntityResolver#
    {72, 609, 912},	// QXmlSimpleReader::setErrorHandler#
    {72, 611, 901},	// QXmlSimpleReader::setFeature$$
    {72, 617, 914},	// QXmlSimpleReader::setLexicalHandler#
    {72, 628, 904},	// QXmlSimpleReader::setProperty$$
    {72, 757, 924},	// QXmlSimpleReader::~QXmlSimpleReader
    {76, 105, 925},	// QXmlStreamWriter::QXmlStreamWriter
    {76, 106, -386},	// QXmlStreamWriter::QXmlStreamWriter#
    {76, 107, 928},	// QXmlStreamWriter::QXmlStreamWriter$
    {76, 141, 935},	// QXmlStreamWriter::autoFormatting
    {76, 142, 937},	// QXmlStreamWriter::autoFormattingIndent
    {76, 149, 933},	// QXmlStreamWriter::codec
    {76, 184, 930},	// QXmlStreamWriter::device
    {76, 228, 962},	// QXmlStreamWriter::hasError
    {76, 572, 934},	// QXmlStreamWriter::setAutoFormatting$
    {76, 574, 936},	// QXmlStreamWriter::setAutoFormattingIndent$
    {76, 576, 931},	// QXmlStreamWriter::setCodec#
    {76, 577, 932},	// QXmlStreamWriter::setCodec$
    {76, 603, 929},	// QXmlStreamWriter::setDevice#
    {76, 688, 940},	// QXmlStreamWriter::writeAttribute#
    {76, 689, 938},	// QXmlStreamWriter::writeAttribute$$
    {76, 690, 939},	// QXmlStreamWriter::writeAttribute$$$
    {76, 692, 941},	// QXmlStreamWriter::writeAttributes#
    {76, 694, 942},	// QXmlStreamWriter::writeCDATA$
    {76, 696, 943},	// QXmlStreamWriter::writeCharacters$
    {76, 698, 944},	// QXmlStreamWriter::writeComment$
    {76, 700, 961},	// QXmlStreamWriter::writeCurrentToken#
    {76, 702, 945},	// QXmlStreamWriter::writeDTD$
    {76, 704, 954},	// QXmlStreamWriter::writeDefaultNamespace$
    {76, 706, 946},	// QXmlStreamWriter::writeEmptyElement$
    {76, 707, 947},	// QXmlStreamWriter::writeEmptyElement$$
    {76, 708, 950},	// QXmlStreamWriter::writeEndDocument
    {76, 709, 951},	// QXmlStreamWriter::writeEndElement
    {76, 711, 952},	// QXmlStreamWriter::writeEntityReference$
    {76, 713, 963},	// QXmlStreamWriter::writeNamespace$
    {76, 714, 953},	// QXmlStreamWriter::writeNamespace$$
    {76, 716, 964},	// QXmlStreamWriter::writeProcessingInstruction$
    {76, 717, 955},	// QXmlStreamWriter::writeProcessingInstruction$$
    {76, 718, 956},	// QXmlStreamWriter::writeStartDocument
    {76, 719, 957},	// QXmlStreamWriter::writeStartDocument$
    {76, 720, 958},	// QXmlStreamWriter::writeStartDocument$$
    {76, 722, 959},	// QXmlStreamWriter::writeStartElement$
    {76, 723, 960},	// QXmlStreamWriter::writeStartElement$$
    {76, 725, 948},	// QXmlStreamWriter::writeTextElement$$
    {76, 726, 949},	// QXmlStreamWriter::writeTextElement$$$
    {76, 758, 965},	// QXmlStreamWriter::~QXmlStreamWriter
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();

static bool initialized = false;
Smoke *qtxml_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtxml_Smoke() {
    init_qtcore_Smoke();
    if (initialized) return;
    qtxml_Smoke = new Smoke(
        "qtxml",
        __smokeqtxml::classes, 76,
        __smokeqtxml::methods, 966,
        __smokeqtxml::methodMaps, 676,
        __smokeqtxml::methodNames, 758,
        __smokeqtxml::types, 353,
        __smokeqtxml::inheritanceList,
        __smokeqtxml::argumentList,
        __smokeqtxml::ambiguousMethodList,
        __smokeqtxml::cast );
    initialized = true;
}

void delete_qtxml_Smoke() { delete qtxml_Smoke; }

}
