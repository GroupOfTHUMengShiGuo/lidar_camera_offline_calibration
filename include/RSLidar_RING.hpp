/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __RSLidar_RING_hpp__
#define __RSLidar_RING_hpp__



class RSLidar_RING
{
    public:
        int32_t    nNumOfPoints;

        float      gfX[2200];

        float      gfY[2200];

        float      gfZ[2200];

        int8_t     gnI[2200];

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "RSLidar_RING"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int RSLidar_RING::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int RSLidar_RING::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int RSLidar_RING::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t RSLidar_RING::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* RSLidar_RING::getTypeName()
{
    return "RSLidar_RING";
}

int RSLidar_RING::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->nNumOfPoints, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->gfX[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->gfY[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->gfZ[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->gnI[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int RSLidar_RING::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->nNumOfPoints, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->gfX[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->gfY[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->gfZ[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->gnI[0], 2200);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int RSLidar_RING::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 2200);
    enc_size += __float_encoded_array_size(NULL, 2200);
    enc_size += __float_encoded_array_size(NULL, 2200);
    enc_size += __int8_t_encoded_array_size(NULL, 2200);
    return enc_size;
}

uint64_t RSLidar_RING::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0xa1028a3f7a92d34fLL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif