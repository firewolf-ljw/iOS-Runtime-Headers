/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSArray, NSString, NSData;

@interface DAContactSearchResultElement : NSObject <NSCoding> {
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_workPhone;
    NSString *_mobilePhone;
    NSString *_company;
    NSString *_title;
    NSString *_homePhone;
    NSString *_alias;
    NSString *_office;
    NSString *_serverSource;
    NSString *_recordName;
    NSString *_faxPhone;
    NSString *_department;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    NSString *_country;
    NSData *_jpegPhoto;
    NSString *_imAddress;
    NSString *_uri;
    NSString *_buildingName;
    NSString *_appleFloor;
    NSString *_pagerNumber;
    NSString *_postalAddress;
    NSString *_homePostalAddress;
    NSString *_principalPath;
    NSString *_preferredUserAddress;
    NSArray *_cuAddresses;
}

@property(copy) NSArray * cuAddresses;
@property(copy) NSString * preferredUserAddress;
@property(copy) NSString * principalPath;
@property(copy) NSString * homePostalAddress;
@property(copy) NSString * postalAddress;
@property(copy) NSString * pagerNumber;
@property(copy) NSString * appleFloor;
@property(copy) NSString * buildingName;
@property(copy) NSString * uri;
@property(copy) NSString * imAddress;
@property(copy) NSData * jpegPhoto;
@property(copy) NSString * country;
@property(copy) NSString * zip;
@property(copy) NSString * state;
@property(copy) NSString * city;
@property(copy) NSString * street;
@property(copy) NSString * department;
@property(copy) NSString * faxPhone;
@property(copy) NSString * recordName;
@property(copy) NSString * serverSource;
@property(copy) NSString * office;
@property(copy) NSString * homePhone;
@property(copy) NSString * alias;
@property(copy) NSString * title;
@property(copy) NSString * company;
@property(copy) NSString * mobilePhone;
@property(copy) NSString * workPhone;
@property(copy) NSString * emailAddress;
@property(copy) NSString * lastName;
@property(copy) NSString * firstName;
@property(copy) NSString * displayName;


- (id)firstName;
- (void)setAlias:(id)arg1;
- (id)lastName;
- (id)alias;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)displayName;
- (void)setState:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (id)state;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setTitle:(id)arg1;
- (void)setCountry:(id)arg1;
- (BOOL)isEqualToDAContactSearchResultElement:(id)arg1;
- (id)preferredUserAddress;
- (void)setHomePostalAddress:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setAppleFloor:(id)arg1;
- (void)setBuildingName:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setImAddress:(id)arg1;
- (void)setJpegPhoto:(id)arg1;
- (void)setZip:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setStreet:(id)arg1;
- (void)setFaxPhone:(id)arg1;
- (id)recordName;
- (void)setRecordName:(id)arg1;
- (void)setServerSource:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)uri;
- (id)principalPath;
- (void)setPrincipalPath:(id)arg1;
- (void)setPreferredUserAddress:(id)arg1;
- (void)setCuAddresses:(id)arg1;
- (id)cuAddresses;
- (id)emailAddress;
- (id)workPhone;
- (id)mobilePhone;
- (id)homePhone;
- (id)faxPhone;
- (id)pagerNumber;
- (id)company;
- (id)city;
- (id)zip;
- (id)country;
- (id)street;
- (id)postalAddress;
- (id)homePostalAddress;
- (id)jpegPhoto;
- (id)imAddress;
- (id)buildingName;
- (id)appleFloor;
- (id)serverSource;
- (id)department;
- (void)setPagerNumber:(id)arg1;
- (void)setDepartment:(id)arg1;
- (void)setWorkPhone:(id)arg1;
- (id)office;
- (void)setEmailAddress:(id)arg1;
- (void)setMobilePhone:(id)arg1;
- (void)setHomePhone:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setOffice:(id)arg1;
- (void*)newAddressBookRecord;

@end
