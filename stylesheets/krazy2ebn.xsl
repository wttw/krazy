<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE xsl:stylesheet [<!ENTITY nbsp "&#160;">]>
<xsl:stylesheet version="2.0" 
  xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
  xmlns="http://www.w3.org/1999/xhtml">
  
  <xsl:output doctype-public="-//W3C//DTD XHTML 1.0 Transitional//EN"
              doctype-system="DTD/xhtml1-transitional.dtd"
              encoding="UTF-8" 
              indent="yes"
              method="xhtml" 
              omit-xml-declaration="yes"
              version="1.0" />
  
  
  
  <xsl:template match="file-types" mode="krazy2ebn" >
  </xsl:template>
  
  <xsl:template match="global" mode="krazy2ebn" >
    <test></test>
  </xsl:template>
  
  <xsl:template match="/krazy" mode="krazy2ebn">
    <html xml:lang="en" lang="en">
      <head>
        <title>krazy2 Analysis</title>
        <link rel="stylesheet" type="text/css" title="Normal" href="/style.css" />
      </head>
      <body>
        <div id="title">
          <div class="logo">&nbsp;</div>
          <div class="header">
            <h1><a href="/">English Breakfast Network</a></h1>
            <p><a href="/">Almost, but not quite, entirely unlike tea.</a></p>
          </div>
        </div>
        <xsl:apply-templates select="global" mode="krazy2ebn" />
        <xsl:apply-templates select="file-types" mode="krazy2ebn" />
      </body>
     </html>
  </xsl:template>
  
</xsl:stylesheet>