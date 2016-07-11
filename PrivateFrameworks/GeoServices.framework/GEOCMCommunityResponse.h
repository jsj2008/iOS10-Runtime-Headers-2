/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCMCommunityResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int requestType : 1; 
        unsigned int statusCode : 1; 
    }  _has;
    int  _requestType;
    int  _statusCode;
    GEOCMTicketFollowupResponse * _ticketFollowupResponse;
    GEOCMTicketStatusResponse * _ticketStatusResponse;
    GEOCMTicketSubmissionResponse * _ticketSubmissionResponse;
}

@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic, readonly) bool hasTicketFollowupResponse;
@property (nonatomic, readonly) bool hasTicketStatusResponse;
@property (nonatomic, readonly) bool hasTicketSubmissionResponse;
@property (nonatomic) int requestType;
@property (nonatomic) int statusCode;
@property (nonatomic, retain) GEOCMTicketFollowupResponse *ticketFollowupResponse;
@property (nonatomic, retain) GEOCMTicketStatusResponse *ticketStatusResponse;
@property (nonatomic, retain) GEOCMTicketSubmissionResponse *ticketSubmissionResponse;

- (int)StringAsRequestType:(id)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestType;
- (bool)hasStatusCode;
- (bool)hasTicketFollowupResponse;
- (bool)hasTicketStatusResponse;
- (bool)hasTicketSubmissionResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTicketFollowupResponse:(id)arg1;
- (void)setTicketStatusResponse:(id)arg1;
- (void)setTicketSubmissionResponse:(id)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (id)ticketFollowupResponse;
- (id)ticketStatusResponse;
- (id)ticketSubmissionResponse;
- (void)writeTo:(id)arg1;

@end
