//
// Generated file, do not edit! Created by nedtool 5.6 from CustomMsg.msg.
//

#ifndef __CUSTOMMSG_M_H
#define __CUSTOMMSG_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>CustomMsg.msg:20</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet CustomMsg
 * {
 *     int M_Header;
 *     string M_Payload;
 *     char M_Trailer;
 *     int M_FrameType;
 *     int M_Ack; //1 for ack, 0 for nack
 * 
 * }
 * </pre>
 */
class CustomMsg : public ::omnetpp::cPacket
{
  protected:
    int M_Header;
    ::omnetpp::opp_string M_Payload;
    char M_Trailer;
    int M_FrameType;
    int M_Ack;

  private:
    void copy(const CustomMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CustomMsg&);

  public:
    CustomMsg(const char *name=nullptr, short kind=0);
    CustomMsg(const CustomMsg& other);
    virtual ~CustomMsg();
    CustomMsg& operator=(const CustomMsg& other);
    virtual CustomMsg *dup() const override {return new CustomMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getM_Header() const;
    virtual void setM_Header(int M_Header);
    virtual const char * getM_Payload() const;
    virtual void setM_Payload(const char * M_Payload);
    virtual char getM_Trailer() const;
    virtual void setM_Trailer(char M_Trailer);
    virtual int getM_FrameType() const;
    virtual void setM_FrameType(int M_FrameType);
    virtual int getM_Ack() const;
    virtual void setM_Ack(int M_Ack);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CustomMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CustomMsg& obj) {obj.parsimUnpack(b);}


#endif // ifndef __CUSTOMMSG_M_H

