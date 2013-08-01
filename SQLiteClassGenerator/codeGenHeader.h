//
//  codeGenHeader.h
//  codegenTst
//
//  Created by Eldhose on 31/10/12.
//  Copyright (c) 2012 Islet Systems. All rights reserved.
//

#ifndef codegenTst_codeGenHeader_h
#define codegenTst_codeGenHeader_h

#define kTABLENAME                  @"{TABLENAME}"
#define kOBJECTLISTLOCAL            @"{OBJECTLISTLOCAL}"
#define kOBJECTLISTGLOBAL           @"{OBJECTLISTGLOBAL}"
#define kNSTYPE                     @"{NSTYPE}"
#define kOBJECTNAME                 @"{OBJECTNAME}"
#define kSYNTHESIZELIST             @"{SYNTHESIZELIST}"
#define kCREATEQUERY                @"{CREATEQUERY}"
#define kFIELDLISTSEPERATEDWITHCOMA @"{FIELDLISTSEPERATEDWITHCOMA}"
#define kLOADOBJECTWITHFIELDS       @"{LOADOBJECTWITHFIELDS}"
#define kFUNCTIONFORDATATYPE        @"{FUNCTIONFORDATATYPE}"
#define kFORMATSPECIFIERLIST        @"{FORMATSPECIFIERLIST}"
#define kINSERTOBJLIST              @"{INSERTOBJLIST}"
#define kUPDATEASSIGNSTR            @"{UPDATEASSIGNSTR}"
#define kINSERTOBJLISTUPDATE        @"{INSERTOBJLISTUPDATE}"
#define kPRIMARYKEYCODTIONFORINSERT @"{PRIMARYKEYCODTIONFORINSERT}"
#define kINSERTOBJLISTUPDATEWITHOUTPRIMAY @"{INSERTOBJLISTUPDATEWITHOUTPRIMAY}"


#define kOBJECTLISTLOCALITEM @"\t{NSTYPE}  _{OBJECTNAME};\n"
#define kOBJECTLISTGLOBALITEM @"@property (nonatomic,strong) {NSTYPE}  {OBJECTNAME};\n"
#define kSYNTHESIZELISTITEM @"@synthesize {OBJECTNAME}=_{OBJECTNAME};\n"
#define kLOADOBJECTWITHFIELDSITEMS @"\tretObj.{OBJECTNAME} = [FMset {FUNCTIONFORDATATYPE}:@\"{OBJECTNAME}\"];\n"

#endif
