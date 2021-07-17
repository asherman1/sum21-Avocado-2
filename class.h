class Website {
   Path localPath
   Collection<URL> siteURLs
   Collection<HTMLDocument> allPages
}

class HTMLDocument {
   Path localPath
   Collection<StyleSheet> styles
   Collection<JavaScript> scripts
   Collection<Anchor> links
   Collection<Image> images

    long getOverallDataSize()
}

class Anchor {
   URI path
   Classification linkType
   TargetType destinationType
}

enum Classification {
   INTERNAL
   INTRAPAGE
   EXTERNAL
}

enum TargetType {
   HTMLDOCUMENT
   ARCHIVE
   VIDEO
   AUDIO
} 

class DocumentParser {

}

class WebsiteWalker {

}

class ExcelWriter {

}

class JSONWriter {

}

class TextWriter {

}


Website *-- HTMLDocument
DocumentParser -->”populates” HTMLDocument
WebsiteWalker --> Website