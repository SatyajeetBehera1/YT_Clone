import React from "react";
import { Stack, Box } from "@mui/material";

import { ChannelCard, Loader, VideoCard } from "./";

const Videos = ({ videos, direction }) => {
  if(!videos?.length) return <Loader />;
  
  return (
    <Stack direction={direction || "row"} flexWrap="wrap" justifyContent="start" alignItems="start" gap={2}>
      {videos.map((item, idx) => (
        <Box key={idx}>
          {item.id.videoId && <VideoCard video={item} /> }
          {item.id.channelId && <ChannelCard channelDetail={item} />}
        </Box>
      ))}
    </Stack>
  );
}
/*
  return (
    <Stack direction={direction || "row"} flexwrap="wrap" justifycontent="start" alignitems="start" gap={2}>
      {videos.map((items, idx) =>(
        <Box key={idx}>
          {item.id.videoId && <VideoCard video={items}/>}
          {item.id.channelId && <ChannelCard channelDetail={items}/>}
        </Box>
      ))}
    </Stack>
  )
*/
export default Videos;