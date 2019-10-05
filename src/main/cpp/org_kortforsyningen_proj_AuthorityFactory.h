/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_kortforsyningen_proj_AuthorityFactory */

#ifndef _Included_org_kortforsyningen_proj_AuthorityFactory
#define _Included_org_kortforsyningen_proj_AuthorityFactory
#ifdef __cplusplus
extern "C" {
#endif
#undef org_kortforsyningen_proj_AuthorityFactory_ANY
#define org_kortforsyningen_proj_AuthorityFactory_ANY 0L
#undef org_kortforsyningen_proj_AuthorityFactory_PRIME_MERIDIAN
#define org_kortforsyningen_proj_AuthorityFactory_PRIME_MERIDIAN 1L
#undef org_kortforsyningen_proj_AuthorityFactory_ELLIPSOID
#define org_kortforsyningen_proj_AuthorityFactory_ELLIPSOID 2L
#undef org_kortforsyningen_proj_AuthorityFactory_DATUM
#define org_kortforsyningen_proj_AuthorityFactory_DATUM 3L
#undef org_kortforsyningen_proj_AuthorityFactory_GEODETIC_REFERENCE_FRAME
#define org_kortforsyningen_proj_AuthorityFactory_GEODETIC_REFERENCE_FRAME 4L
#undef org_kortforsyningen_proj_AuthorityFactory_VERTICAL_REFERENCE_FRAME
#define org_kortforsyningen_proj_AuthorityFactory_VERTICAL_REFERENCE_FRAME 5L
#undef org_kortforsyningen_proj_AuthorityFactory_UNIT_OF_MEASURE
#define org_kortforsyningen_proj_AuthorityFactory_UNIT_OF_MEASURE 6L
#undef org_kortforsyningen_proj_AuthorityFactory_COORDINATE_SYSTEM
#define org_kortforsyningen_proj_AuthorityFactory_COORDINATE_SYSTEM 7L
#undef org_kortforsyningen_proj_AuthorityFactory_COORDINATE_REFERENCE_SYSTEM
#define org_kortforsyningen_proj_AuthorityFactory_COORDINATE_REFERENCE_SYSTEM 8L
#undef org_kortforsyningen_proj_AuthorityFactory_GEODETIC_CRS
#define org_kortforsyningen_proj_AuthorityFactory_GEODETIC_CRS 9L
#undef org_kortforsyningen_proj_AuthorityFactory_GEOGRAPHIC_CRS
#define org_kortforsyningen_proj_AuthorityFactory_GEOGRAPHIC_CRS 10L
#undef org_kortforsyningen_proj_AuthorityFactory_VERTICAL_CRS
#define org_kortforsyningen_proj_AuthorityFactory_VERTICAL_CRS 11L
#undef org_kortforsyningen_proj_AuthorityFactory_PROJECTED_CRS
#define org_kortforsyningen_proj_AuthorityFactory_PROJECTED_CRS 12L
#undef org_kortforsyningen_proj_AuthorityFactory_COMPOUND_CRS
#define org_kortforsyningen_proj_AuthorityFactory_COMPOUND_CRS 13L
#undef org_kortforsyningen_proj_AuthorityFactory_CONVERSION
#define org_kortforsyningen_proj_AuthorityFactory_CONVERSION 14L
#undef org_kortforsyningen_proj_AuthorityFactory_COORDINATE_OPERATION
#define org_kortforsyningen_proj_AuthorityFactory_COORDINATE_OPERATION 15L
/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    newInstance
 * Signature: (JLjava/lang/String;Lorg/kortforsyningen/proj/AuthorityFactory;)J
 */
JNIEXPORT jlong JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_newInstance
  (JNIEnv *, jclass, jlong, jstring, jobject);

/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    getDescriptionText
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_getDescriptionText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    createGeodeticObject
 * Signature: (ILjava/lang/String;)Lorg/kortforsyningen/proj/IdentifiableObject;
 */
JNIEXPORT jobject JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_createGeodeticObject
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_release
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
